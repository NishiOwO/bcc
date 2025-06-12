#include "bcc.h"

#include <stdio.h>

int main(int argc, char** argv){
	int i;
	for(i = 1; i < argc; i++){
		if(argv[i][0] == '-'){
			int n;
			if((n = bcc_strstart(argv[i], "-march=")) != -1){
			}
		}else{
		}
	}
}
