#include "bcc.h"

#include <stddef.h>

const char* bcc_arch[] = {
#ifdef ARCH_S360
	"System/360 (s360)",
#endif
#ifdef ARCH_PDP11
	"PDP-11 (pdp11)",
#endif
NULL
};
