#ifndef __BCC_H__
#define __BCC_H__

typedef unsigned char BBOOL;
#define BTRUE ((BBOOL)1)
#define BFALSE ((BBOOL)0)

/* main.c */

/* util.c */
const char* bcc_date(void);
BBOOL bcc_strequ(const char* a, const char* b);
BBOOL bcc_strstart(const char* a, const char* b);

#endif
