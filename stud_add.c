#include"header.h"


void stud_add(SLL **ptr)
{
SLL *new;
static int i=0;
new=malloc(sizeof(SLL));
new->rollno=++i;
printf("enter name and marks\n");
scanf("%s%f",new->name,&new->per);
new->next=*ptr;
*ptr=new;
}
