#include "bcc.h"

#include <stdio.h>

int main(int argc, char** argv){
	printf("Bootstrap C compiler\n");
	printf("Version %s %s\n", BCC_VERSION, bcc_date());
	printf("Copyright (c) 2025 Nishi\n");
	printf("Sourcew code is available under the 3-clause BSD license.\n");
}
