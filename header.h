#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct student
{
int rollno;
char name[30];
float per;
struct student *next;
}SLL;

void stud_add(SLL**);
void stud_show(SLL *);
void stud_del(SLL **);
void stud_show(SLL *);
void stud_mod(SLL **);
void stud_save(SLL *);
void stud_sort(SLL *);
void stud_del_all(SLL **);
void stud_reverse(SLL **);
int count_node(SLL *);
