#include"header.h"

int main()
{
SLL *headptr=0;
char op,c;


while(1)
{
printf("\n\na/A :add new record\nd/D :delete a record\ns/S :show the list\nm/M :modify a record\nv/V :save\nt/T :sort the list\nl/L :delete all the records\nr/R :reverse the list\ne/E :exit\n"); 
printf("\nEnter your Choice=");
scanf(" %c",&op);

switch(op)
{
case 'A':
case 'a':stud_add(&headptr);break;
case 'D':
case 'd':stud_del(&headptr);break;
case 'S':
case 's':stud_show(headptr);break;
case 'M':
case 'm':stud_mod(&headptr);break;
case 'V':
case 'v':stud_save(headptr);break;
case 'T':
case 't':stud_sort(headptr);break;
case 'L':
case 'l':stud_del_all(&headptr);break;
case 'R':
case 'r':stud_reverse(&headptr);break;
case 'E':
case 'e':
{
char op;
printf("\n\nS/s :save and exit\nE/e :exit without saving\n");
printf("choice the option=");
scanf(" %c",&op);

switch(op)
{
case 'S':
case 's':stud_save(headptr);exit(0);
case 'E':
case 'e':exit(0);
}
}
default:
printf("\nunknow choice\n");
break;
} 
}
}
