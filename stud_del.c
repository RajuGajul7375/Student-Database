#include"header.h"

void based_on_rollno(SLL **ptr)
{

        int num;
        SLL *del=*ptr;
        SLL *prev;
        printf("\nenter a rollno to delete node=\n");
        scanf("%d",&num);
        while(del)
        {
                if(del->rollno==num)
                {
                        if(*ptr==del)
                                *ptr=del->next;
                        else
                                prev->next=del->next;
                        free(del);
                        printf("deleted a node\n");
                        return;
                }
                else
                        prev=del;
                del=del->next;
        }
        printf("rollno not found\n");

}



void based_on_name(SLL **ptr)
{
        SLL *del=*ptr;
        SLL *prev;
	int c=0;
        char s[30];
        printf("\nenter a name to delete node=\n");
        scanf("%s",s);
	
	while(del)
	{
		if(strcmp(del->name,s)==0)
			c++;
		del=del->next;
	}
	if(c==0)
	{
		printf("name is not found\n");
		return;
	}

	if(c==1)
	{
		del=*ptr;
		while(del)
		{
			if(strcmp(del->name,s)==0)
			{
				if(del==*ptr)
					*ptr=del->next;

				else
					prev->next=del->next;

				free(del);
				printf("deleted a node\n");
				return;
			}
			else
				prev=del;
			del=del->next;
		}
	}
	
	else
	{
		del=*ptr;
		printf("rollno\tname\tpercentage\n");
		while(del)
		{
			if(strcmp(del->name,s)==0)
			{
				printf("%d\t%s\t%f\n",del->rollno,del->name,del->per);
			}
			del=del->next;
		}
		based_on_rollno(ptr);
	}

}


void stud_del(SLL **ptr)
{
	char op;
	printf("\n\nR/r :enter rollno to del\nN/n :enter name to del\nm/M :return back to the manu\nEnter your Choice=");
	scanf(" %c",&op);

	switch(op)
	{
		case 'R':
		case 'r': based_on_rollno(ptr);break;
		case 'N':
		case 'n': based_on_name(ptr);break;
		case 'M':
		case 'm':return;
		default:printf("unknow choich\n");break;
	}

}

