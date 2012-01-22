#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stack
{
	int stk[10];
	int tos;
}s;

int push(int n)
{
	if(s.tos>=9)
	{
		return 0;
	}
	else
	{
		s.tos++;
		s.stk[s.tos]=n;
	}
	return 1;
}

int pop()
{
	if(s.tos==-1)
	{
		return -1;
	}
	else
	{
		return(s.stk[s.tos--]);
	}
}

int isEmpty()
{
	if(s.tos==-1)
	{
		return 1;
	}
	return 0;
}

void main()
{
	int k=0,c=0,n,p,flag;
	int i,j,temp,stemp,min;
	char str[30],r=0;
	clrscr();
	while(k!=3)
	{
		printf("Press key:\n 1 To push \n 2 To enter sequence \n 3 to Exit.\n");
		scanf("%d",&k);
		printf("%d\n",k);
		if(k==1)
		{
			n=0;
			p=0;
			flag=1;

			while(n!=-1 && flag)
			{
				printf("Enter number to push. \n \t -1 To Exit\n");
				scanf("%d",&n);
				if(isEmpty())
				{
					flag=push(n);
					p=n;
				}
				else
				{
					if(n==(p+1))
					{
						p=n;
						flag=push(n);
					}
					else
					{
						printf("\nu can't push %d as per rules\n",n);
						break;
					}
				}
				if(flag && n!=-1)
				{
					printf("%d pushed successfull\n",n);
				}
			}
			if(!(flag))
			{
				printf("Error in insering Elements..\n");
			}
		}

		else if(k==2)
		{
			i=0;
			temp=0;
			j=0;
			stemp=0;
			scanf("%c",&r);
		    printf("Enter Sequence\t");
 			gets(str);
			min=str[0]-'0';

			while(stemp < (strlen(str)))
			{
				if(min >= str[stemp]-'0')
				{
					min=str[stemp]-'0';
				}
				stemp++;
			}
			while(i < (strlen(str)))
			{
				if(i==0)
				{
					for(j=min;j<=str[0]-'0';j++)
					{
						push(j);
					}
					temp=pop();
					printf("%d",temp);
					temp=pop();
					i++;
				}
				else
				{
					if(temp==str[i]-'0')
					{
						printf("%d",temp);
						temp=pop();
						i++;
					}
					else if(temp < str[i]-'0')
					{
						push(temp);
						while(j <= str[i]-'0')
						{
							push(j);
							j++;
						}
						temp=pop();
						printf("%d",temp);
						temp=pop();
						i++;
					}
					else
					{
						break;
					}
				}
			}
			if(temp==-1)
			{
				printf("pattern is valid..\n");
			}
			else
			{
				printf("\npattern entered is invalid");
			}
		}
		else if(k==3)
		{
			printf("Exiting..");
		}
		else
			printf("Enter valid choice.");
		}

	getch();
}



