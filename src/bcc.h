#ifndef __BCC_H__
#define __BCC_H__

#include "config.h"

typedef unsigned char BBOOL;
#define BTRUE ((BBOOL)1)
#define BFALSE ((BBOOL)0)

/* arch.c */
extern const char* bcc_arch[];

/* main.c */

/* util.c */
const char* bcc_date(void);
BBOOL bcc_strequ(const char* a, const char* b);
int bcc_strstart(const char* a, const char* b);

/* arch.c */
BBOOL bcc_hasarch(const char* name);

#endif
