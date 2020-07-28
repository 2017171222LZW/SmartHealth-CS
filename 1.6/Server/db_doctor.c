#include <stdio.h>
#include <sqlite3.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include "doctor.h"

static pthread_mutex_t doctor_thread_lock = PTHREAD_MUTEX_INITIALIZER;

int verify_doctor_login(const char *username,const char *password)
{
	int ret;
	int ok = 1;
	char sql[1024];
	char **result;
	int row = 0;
	int column = 0;
	char *errmsg = NULL;
	sqlite3 *db_handler;

	pthread_mutex_lock(&doctor_thread_lock);

	ret = sqlite3_open("doctor.db",&db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error:%s\n",sqlite3_errmsg(db_handler));
		pthread_mutex_unlock(&doctor_thread_lock);
		return -1;
	}

	sprintf(sql,"select * from doctor_info where username='%s' and passowrd='%s'",username,password);	
	
	ret = sqlite3_get_table(db_handler,sql,&result,&row,&column,&errmsg);
	if(ret != SQLITE_OK){
		printf("Fail to sqlite3_get_table,error:%s\n",errmsg);
		pthread_mutex_unlock(&doctor_thread_lock);
		return -1;
	}
	
	if(row == 1){
		ok = 0;
	}

	sqlite3_free_table(result);

	sqlite3_close(db_handler);
	
	pthread_mutex_unlock(&doctor_thread_lock);

	return ok;
}

int verify_doctor_filed(const char *filed_name,const char *filed_value)
{
	int ret;
	int exist = 0;
	char sql[1024];
	char **result = NULL;
	int row = 0;
	int column = 0;
	char *errmsg = NULL;
	sqlite3 *db_handler;

	if(filed_name == NULL || filed_value == NULL){
		return -1;
	}

	pthread_mutex_lock(&doctor_thread_lock);

	ret = sqlite3_open("doctor.db",&db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error:%s\n",sqlite3_errmsg(db_handler));
		pthread_mutex_unlock(&doctor_thread_lock);
		return -1;
	}
	
	sprintf(sql,"select * from doctor_info where %s='%s'",filed_name,filed_value);	
	
	ret = sqlite3_get_table(db_handler,sql,&result,&row,&column,&errmsg);
	if(ret != SQLITE_OK){
		printf("Fail to sqlite3_get_table,error:%s\n",errmsg);
		pthread_mutex_unlock(&doctor_thread_lock);
		sqlite3_close(db_handler); 
		return -1;
	}
	
	if(row == 1){
		exist = 1;
	}
	
	if(result){
		sqlite3_free_table(result);
	}

	sqlite3_close(db_handler); 
	pthread_mutex_unlock(&doctor_thread_lock);

	return exist;
}


int check_doctor_register(doctor_register_t *doctor_register)
{
	if(doctor_register->username 			== NULL ||
	   doctor_register->password 			== NULL ||
	   doctor_register->telphone 			== NULL ||
	   doctor_register->name     			== NULL ||
	   doctor_register->id       			== NULL ||
	   doctor_register->work_time           == NULL ||
	   doctor_register->education           == NULL ||
	   doctor_register->major               == NULL ||
	   doctor_register->brief_introduce     == NULL
	){
		return -1;
	}

	return 0;
}


int add_new_register_doctor(doctor_register_t *doctor_register)
{
	int ret = 0;
	int len = 0;	
	char *errmsg;
	char *sql = NULL;
	sqlite3 *db_handler;
	char *default_sql = "insert into doctor_info values('','','','','','','','','')";

	ret = check_doctor_register(doctor_register);
	if(ret){
		printf("Invalid doctor_register!\n");
		return -1;
	}

	len += strlen(doctor_register->username);
	len += strlen(doctor_register->password);
	len += strlen(doctor_register->telphone);
	len += strlen(doctor_register->name);
	len += strlen(doctor_register->id);
	len += strlen(doctor_register->work_time);
	len += strlen(doctor_register->education);
	len += strlen(doctor_register->major);
	len += strlen(doctor_register->brief_introduce);
	len += strlen(default_sql);

	sql = malloc(len + 10);
	if(sql == NULL){
		printf("Fail to malloc!\n");
		return -1;
	}

	sprintf(sql,"insert into doctor_info values('%s','%s','%s','%s','%s','%s','%s','%s','%s')",
			doctor_register->username,\
			doctor_register->password,\
			doctor_register->telphone,\
			doctor_register->name,\
			doctor_register->id,\
			doctor_register->work_time,\
			doctor_register->education,\
			doctor_register->major,\
			doctor_register->brief_introduce);	

	pthread_mutex_lock(&doctor_thread_lock);
	
	ret = sqlite3_open("doctor.db",&db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error:%s\n",sqlite3_errmsg(db_handler));
		ret = -1;
		goto err_1;
	}

	ret = sqlite3_exec(db_handler,sql,NULL,NULL,&errmsg);
	if(ret != SQLITE_OK){
		printf("sqlite3 exec %s error:%s\n",sql,errmsg);
		ret = -1;
		goto err_2;
	}

err_2:
	sqlite3_close(db_handler); 

err_1:
	pthread_mutex_unlock(&doctor_thread_lock);
	free(sql);

	return ret;
}

int verify_doctor_register(doctor_register_t *doctor_register)
{
	int err   = 0;
	int exist = 0;

	exist = verify_doctor_filed("username",doctor_register->username);
	if(exist){
		err = exist == -1 ? -1 : 1;
		return err;
	}

	exist = verify_doctor_filed("telphone",doctor_register->telphone);
	if(exist){
		err = exist == -1 ? -1 : 2;
		return err;
	}

	err = add_new_register_doctor(doctor_register);
	return err;
}


int verify_telphone_doctorid(const char *telphone,const char *doctorid,char **password)
{
	int ret;
	int ok = 1;
	char sql[1024];
	char **result;
	int row = 0;
	int column = 0;
	char *errmsg = NULL;
	sqlite3 *db_handler;

	pthread_mutex_lock(&doctor_thread_lock);

	ret = sqlite3_open("doctor.db",&db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error:%s\n",sqlite3_errmsg(db_handler));
		pthread_mutex_unlock(&doctor_thread_lock);
		return -1;
	}

	//select passowrd from doctor_info where telphone='123409' and id='212312';	
	sprintf(sql,"select passowrd from doctor_info where telphone='%s' and id='%s'",telphone,doctorid);	
	
	printf("sql : %s\n",sql);
	ret = sqlite3_get_table(db_handler,sql,&result,&row,&column,&errmsg);
	if(ret != SQLITE_OK){
		printf("Fail to sqlite3_get_table,error:%s\n",errmsg);
		pthread_mutex_unlock(&doctor_thread_lock);
		return -1;
	}
	
	if(row == 1){
		//result -> |passowrd|12345
		*password = malloc(strlen(result[1]) + 1);
		if(*password == NULL){
			perror("Fail to malloc");
			ok = -1;
		}else{
			strcpy(*password,result[1]);
			ok = 0;
		}
	}

	sqlite3_free_table(result);

	sqlite3_close(db_handler);
	
	pthread_mutex_unlock(&doctor_thread_lock);

	return ok;
}


doctor_information_table_t get_all_doctor_information(void)
{
	int ret;
	char sql[1024];
	char **result;
	int row = 0;
	int column = 0;
	char *errmsg = NULL;
	sqlite3 *db_handler;
	doctor_information_table_t doctor_table = {0};

	pthread_mutex_lock(&doctor_thread_lock);

	ret = sqlite3_open("doctor.db",&db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error:%s\n",sqlite3_errmsg(db_handler));
		goto err;
	}

	sprintf(sql,"select name,id,work_time,education,major from doctor_info");	
	
	ret = sqlite3_get_table(db_handler,sql,&result,&row,&column,&errmsg);
	if(ret != SQLITE_OK){
		printf("Fail to sqlite3_get_table,error:%s\n",errmsg);
		goto err;
	}
	
err:
	sqlite3_close(db_handler);
	pthread_mutex_unlock(&doctor_thread_lock);
	
	doctor_table.nrow    = row;
	doctor_table.ncolumn = column;
	doctor_table.result  = result;
	
	return doctor_table;
}

doctor_information_table_t get_doctor_id_information(const char* id){
	int ret;
	char sql[1024];
	char **result;
	int row = 0;
	int column = 0;
	char *errmsg = NULL;
	sqlite3 *db_handler;
	doctor_information_table_t doctor_table = {0};

	pthread_mutex_lock(&doctor_thread_lock);

	ret = sqlite3_open("doctor.db", &db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error : %s\n", sqlite3_errmsg(db_handler));
		goto err;
	}

	sprintf(sql, "select name,work_time,education,major,brief_introduce from doctor_info where id = '%s'",id);

	ret = sqlite3_get_table(db_handler,sql,&result,&row,&column,&errmsg);

	if(ret != SQLITE_OK){
		printf("get table error: %s\n", errmsg);
		goto err;
	}

err:
	sqlite3_close(db_handler);
	pthread_mutex_unlock(&doctor_thread_lock);

	doctor_table.nrow 	 = row;
	doctor_table.ncolumn = column;
	doctor_table.result  = result;

	return doctor_table;

}

int verify_user_doctor_appointment(const char *username,const char *doctorid,const char *date,int *n)
{
	int ret;
	int exist = 0;
	char sql[4096];
	char **result = NULL;
	int row = 0;
	int column = 0;
	char *errmsg = NULL;
	sqlite3 *db_handler;

	pthread_mutex_lock(&doctor_thread_lock);

	ret = sqlite3_open("doctor.db",&db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error:%s\n",sqlite3_errmsg(db_handler));
		pthread_mutex_unlock(&doctor_thread_lock);
		return -1;
	}
	
	sprintf(sql,"select * from doctor_appointment where Username='%s' and Doctorid='%s' and Date='%s'"\
			,username,doctorid,date);	
	
	ret = sqlite3_get_table(db_handler,sql,&result,&row,&column,&errmsg);
	if(ret != SQLITE_OK){
		printf("Fail to sqlite3_get_table,error:%s\n",errmsg);
		pthread_mutex_unlock(&doctor_thread_lock);
		sqlite3_close(db_handler); 
		return -1;
	}
	
	if(row == 1){
		exist = 1;
	}
	
	if(result){
		sqlite3_free_table(result);
	}
	
	sprintf(sql,"select * from doctor_appointment where Doctorid='%s' and Date='%s'"\
			,doctorid,date);	

	ret = sqlite3_get_table(db_handler,sql,&result,&row,&column,&errmsg);
	if(ret != SQLITE_OK){
		printf("Fail to sqlite3_get_table,error:%s\n",errmsg);
		pthread_mutex_unlock(&doctor_thread_lock);
		sqlite3_close(db_handler); 
		return -1;
	}

	*n = row;

	if(result){
		sqlite3_free_table(result);
	}

	sqlite3_close(db_handler); 
	pthread_mutex_unlock(&doctor_thread_lock);

	return exist;
}

int add_user_doctor_appointment(const char *username,const char *doctorid,const char *date,int *n)
{
	int ret = 0;
	int len = 0;	
	char *errmsg;
	char *sql = NULL;
	sqlite3 *db_handler;
	char *default_sql = "insert into doctor_appointment values('','','')";
	
 	ret = verify_user_doctor_appointment(username,doctorid,date,n);
	if(ret){
		return ret;
	}

	if(*n >= 5){
		return 2; 
	}

	len += strlen(username);
	len += strlen(doctorid);
	len += strlen(date);
	len += strlen(default_sql);

	sql = malloc(len + 10);
	if(sql == NULL){
		printf("Fail to malloc!\n");
		return -1;
	}

	sprintf(sql,"insert into doctor_appointment values('%s','%s','%s')",username,doctorid,date);

	pthread_mutex_lock(&doctor_thread_lock);
	
	ret = sqlite3_open("doctor.db",&db_handler);
	if(ret != SQLITE_OK){
		printf("sqlite3 open doctor.db error:%s\n",sqlite3_errmsg(db_handler));
		ret = -1;
		goto err_1;
	}

	ret = sqlite3_exec(db_handler,sql,NULL,NULL,&errmsg);
	if(ret != SQLITE_OK){
		printf("sqlite3 exec %s error:%s\n",sql,errmsg);
		ret = -1;
		goto err_2;
	}

err_2:
	sqlite3_close(db_handler); 

err_1:
	pthread_mutex_unlock(&doctor_thread_lock);
	free(sql);

	return ret;
}

