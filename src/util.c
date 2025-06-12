#include "bcc.h"

#include <string.h>

const char* _bcc_date = __DATE__ " " __TIME__;

const char* bcc_date(void){
	return _bcc_date;
}

BBOOL bcc_strequ(const char* a, const char* b){
	return strcmp(a, b) == 0 ? BTRUE : BFALSE;
}

BBOOL bcc_strstart(const char* a, const char* b){
	int i;
	if(strlen(a) < strlen(b)) return BFALSE;
	for(i = 0; b[i] != 0; i++){
		if(a[i] != b[i]) return BFALSE;
	}
	return BTRUE;
}
