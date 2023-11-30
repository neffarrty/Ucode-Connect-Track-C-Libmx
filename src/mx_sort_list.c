#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    bool is_sorted = false;
    
    while(!is_sorted){
        is_sorted = true;
        
        for(t_list* i = lst; i->next != NULL; i = i->next)
            if(cmp(i->data, i->next->data)){
                is_sorted = false;
                void *t = i->data;
                i->data = i->next->data;
                i->next->data = t;
            }
    }
    
    return lst;
}


