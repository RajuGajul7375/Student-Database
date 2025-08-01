#include"header.h"
int count_node(SLL *ptr)
{
        int c=0;
        while(ptr)
        {
                c++;
                ptr=ptr->next;
        }
        return c;
}

void stud_reverse(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("no record found\n");
                return;
        }
        int i,c=count_node(*ptr);
        if(c>1)
        {
                SLL **arr;
                SLL *temp=*ptr;
                arr=malloc(sizeof(SLL*)*c);

                for(i=0;i<c;i++)
                {
                        arr[i]=temp;
                        temp=temp->next;
                }

                for(i=1;i<c;i++)
                        arr[i]->next=arr[i-1];
                arr[0]->next=0;
                *ptr=arr[c-1];
                printf("reverse succefully done\n");
        }

}
