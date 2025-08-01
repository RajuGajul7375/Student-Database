#include"header.h"

void stud_del_all(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("no records found\n");
                return;
        }
        int c=0;
        SLL *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                printf("node num deleted=%d\n",++c);
                sleep(1);
                free(del);
                del=*ptr;
        }
        printf("ALl nodes deleted\n");

}
