#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    if(s1 == NULL) {
        return NULL;
	}
 	char *dup = mx_strnew(n);
		
 	return mx_strncpy(dup, s1, n);
}


