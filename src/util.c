#include "bcc.h"

const char* _bcc_date = __DATE__ " " __TIME__;

const char* bcc_date(void){
	return _bcc_date;
}
