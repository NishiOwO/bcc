#include "bcc.h"

#include <stddef.h>

const char* bcc_arch[] = {
#ifdef ARCH_H316
	"Honeywell 316 (h316)",
#endif
#ifdef ARCH_PDP11
	"PDP-11 (pdp11)",
#endif
NULL
};
