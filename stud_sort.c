#include"header.h"

void sort_by_per(SLL *ptr)
{
        if(ptr==0)
        {
                printf("no record found\n");
                return;
        }

        int i,j,c=count_node(ptr);
        SLL *p1,*p2,temp;
        p1=ptr;
        for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if((p1->per)>(p2->per))
                        {
                                temp.per=p1->per;
                                strcpy(temp.name,p1->name);
                                temp.rollno=p1->rollno;

                                p1->per=p2->per;
                                strcpy(p1->name,p2->name);
                                p1->rollno=p2->rollno;

                                p2->per=temp.per;
                                strcpy(p2->name,temp.name);
                                p2->rollno=temp.rollno;

                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
         printf("Data is sort successfully!\n");

}



void sort_by_name(SLL *ptr)
{
        if(ptr==0)
        {
                printf("no record found\n");
                return;
        }

        int i,j,c=count_node(ptr);
        SLL *p1,*p2,temp;
        p1=ptr;
        for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if((strcmp(p1->name,p2->name))>0)
                        {
                                temp.per=p1->per;
                                strcpy(temp.name,p1->name);
                                temp.rollno=p1->rollno;

                                p1->per=p2->per;
                                strcpy(p1->name,p2->name);
                                p1->rollno=p2->rollno;

                                p2->per=temp.per;
                                strcpy(p2->name,temp.name);
                                p2->rollno=temp.rollno;

                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
        printf("Data is sort successfully!\n");

}



void stud_sort(SLL *ptr)
{
	char op;
	printf("\n\nN/n :sort with name\nP/p :sort with percentage\n");
	printf("choose the option=\n");
	scanf(" %c",&op);

	switch(op)
	{
		case 'N':
		case 'n':sort_by_name(ptr);break;
		case 'P':
		case 'p':sort_by_per(ptr);break;
		default:
			 printf("\nunknown choose\n");
	}
}
