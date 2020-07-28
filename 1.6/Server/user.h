#ifndef _USER_HEAD_H
#define _USER_HEAD_H

typedef struct{
	char *username;
	char *password;
	char *telphone;
	char *name;
	char *id;
}user_register_t;

typedef struct{
	char *username;
	char *blood_gluse;
	char *blood_oxygen;
	char *blood_presure;
	char *heart_rate;
	char *temperature;
	char *date;
}user_feature_data_t;

#endif
