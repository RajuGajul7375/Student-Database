#include"header.h"

void stud_show(SLL *ptr)
{
if(ptr==0)
{
printf("no records found\n");
return;
}
printf("\n\nrollno\tname\tpercentage\n");
while(ptr)
{
printf("%d\t%s\t%f\n",ptr->rollno,ptr->name,ptr->per);
ptr=ptr->next;
}
}
