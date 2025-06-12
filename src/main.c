#include "bcc.h"

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	int i;
	for(i = 1; i < argc; i++){
		if(argv[i][0] == '-'){
			int n;
			if((n = bcc_strstart(argv[i], "-march=")) != -1){
				if(bcc_hasarch(argv[i] + n)){
				}else{
					fprintf(stderr, "%s: %s: architecture support not present\n", argv[0], argv[i] + n);
					return 1;
				}
			}else if(bcc_strequ(argv[i], "-V") || bcc_strequ(argv[i], "--version")){
				int j;
				char tab[32];

				printf("Bootstrap C compiler %s\n", BCC_VERSION);
				printf("Architecture support:\n");
				for(j = 0; bcc_arch[j] != NULL; j += 2){
					int k;
					memset(tab, 0, sizeof(tab));
					for(k = 0; k < 10 - strlen(bcc_arch[j]); k++) tab[k] = ' ';
					printf("  %s%s%s\n", bcc_arch[j], tab, bcc_arch[j + 1]);
				}
				return 0;
			}
		}else{
		}
	}
}
