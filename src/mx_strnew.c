#include "libmx.h"

char *mx_strnew(const int size) {
	if(size < 0) {
		return 0;
	}
	char *res = (char*)malloc(size + 1);
	
	if(res == NULL) {
		return string;
	}
	
	for(int i = 0; i < size + 1; i++) {
		res[i] = '\0';
	}
	
	return res;
}


