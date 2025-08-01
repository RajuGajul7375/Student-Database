#include"header.h"

void stud_save(SLL *ptr)
{
FILE *fp;
fp=fopen("student.dat","w+");
fprintf(fp,"rollno\tname\tpercentage\n");
while(ptr)
{
fprintf(fp,"%d\t%s\t%f\n",ptr->rollno,ptr->name,ptr->per);
ptr=ptr->next;
}
fclose(fp);
printf("Data save successfully\n");
}
