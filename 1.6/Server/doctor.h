#ifndef _DOCTOR_HEAD_H
#define _DOCTOR_HEAD_H

typedef struct{
	char *username;
	char *password;
	char *telphone;
	char *name;
	char *id;
	char *work_time;
	char *major;
	char *education;
	char *brief_introduce;
}doctor_register_t;

typedef struct{
	int  nrow;
	int  ncolumn;
	char **result;
}doctor_information_table_t;

#endif
