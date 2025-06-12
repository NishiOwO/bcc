#include "bcc.h"

#include <stddef.h>

const char* bcc_arch[] = {
#ifdef ARCH_S360
	"s360", "System/360",
#endif
#ifdef ARCH_PDP11
	"pdp11", "PDP-11",
#endif
NULL
};

BBOOL bcc_hasarch(const char* name){
	int i;
	for(i = 0; bcc_arch[i] != NULL; i += 2){
		if(bcc_strequ(bcc_arch[i], name)) return BTRUE;
	}
	return BFALSE;
}
