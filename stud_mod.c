#include"header.h"

void stud_mod_roll(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("no record found\n");
                return;
        }

        int n,f=0,new;
        SLL *mod=*ptr;
        printf("enter a rollno to modify=");
        scanf("%d",&n);

        while(mod)
        {
                if(mod->rollno==n)
                {
                        printf("enter a new roll num=");
                        scanf("%d",&new);
                        mod->rollno=new;
                        f=1;
                }
                mod=mod->next;
        }
        if(f==0)
                printf("no record found\n");
        else
                printf("rollno modify successfully!\n");
}



void stud_mod_name(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("no record found\n");
                return;
        }

        int f=0,roll;
        char s[30],new[30];
        SLL *mod=*ptr;
        printf("enter a name to modify=");
        scanf(" %[^\n]",s);

        while(mod)
        {
                 if((strcmp(mod->name,s)==0))
                         f++;
                 mod=mod->next;
        }

        if(2<=f)
        {
                mod=*ptr;
                printf("\n\nrollno\tname\tpercentage\n");
                while(mod)
                {
                        if((strcmp(mod->name,s)==0))
                        {
                                printf("%d\t%s\t%f\n",mod->rollno,mod->name,mod->per);
                        }
                        mod=mod->next;
                }

                printf("\nsame name multiple existence\n");
                printf("enter a roll no to modify name=");
                scanf("%d",&roll);


                mod=*ptr;
                while(mod)
                {
                        if(mod->rollno==roll)
                        {
                                printf("enter a new name =");
                                scanf(" %[^\n]",new);
                                strcpy(mod->name,new);
                        }
                        mod=mod->next;

                }

        }



        if(f==1)
        {
                mod=*ptr;
                while(mod)
                {
                        if((strcmp(mod->name,s)==0))
                        {
                                printf("enter a new name=");
                                scanf(" %[^\n]",new);
                                strcpy(mod->name,new);
                        }
                        mod=mod->next;
                }
        }
        if(f==0)
                printf("no record found\n");
        else
                printf("name modify successfully!\n");
}




void stud_mod_per(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("no record found\n");
                return;
        }

        int f=0,roll;
        float per1,new;
        SLL *mod=*ptr;
        printf("enter a percentage to modify=");
        scanf("%f",&per1);

        while(mod)
        {
                 if(mod->per==per1)
                         f++;
                 mod=mod->next;
        }

        if(2<=f)
        {
                mod=*ptr;
                printf("\n\nrollno\tname\tpercentage\n");
                while(mod)
                {
                        if(mod->per==per1)
                                printf("%d\t%s\t%f\n",mod->rollno,mod->name,mod->per);

                        mod=mod->next;
                }

                printf("\nsame percentage multiple existence\n");
                printf("enter a roll no to modify percentage=");
                scanf("%d",&roll);

                 mod=*ptr;
                while(mod)
                {
                        if(mod->rollno==roll)
                        {
                                printf("enter a new percentage=");
                                scanf("%f",&new);
                                mod->per=new;
                        }
                        mod=mod->next;

                }

        }



        if(f==1)
        {
                mod=*ptr;
                while(mod)
                {
                        if(mod->per==per1)
                        {
                                printf("enter a new percentage=");
                                scanf("%f",&new);
                                mod->per=new;
                        }
                        mod=mod->next;
                }
        }
        if(f==0)
                printf("no record found\n");
        else
                printf("percentage modify successfully!\n");
}





void stud_mod(SLL **ptr)
{
        char op;
        printf("\nR/r: to search a rollno\nN/n: to search a name\nP/p: percentage based\n");
        printf("\nEnter which record to search for modification=");
        scanf(" %c",&op);

        switch(op)
        {
                case 'R':
                case 'r':stud_mod_roll(ptr);break;
                case 'N':
                case 'n':stud_mod_name(ptr);break;
                case 'P':
                case 'p':stud_mod_per(ptr);break;
                default:
                         printf("\nunknown choice!\n");break;
        }

}
