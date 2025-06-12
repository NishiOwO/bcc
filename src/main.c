#include "bcc.h"

#include <stdio.h>

int main(int argc, char** argv){
	int i;
	for(i = 1; i < argc; i++){
		if(argv[i][0] == '-'){
			int n;
			if((n = bcc_strstart(argv[i], "-march=")) != -1){
			}else if(bcc_strequ(argv[i], "-V") || bcc_strequ(argv[i], "--version")){
				int j;
				printf("Bootstrap C compiler %s\n", BCC_VERSION);
				printf("Architecture support:\n");
				for(j = 0; bcc_arch[j] != NULL; j++){
					printf("  %s\n", bcc_arch[j]);
				}
				return 0;
			}
		}else{
		}
	}
}
