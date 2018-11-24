/* 	Practical_17 : 	reverse the order of the elements in the stack using additional Queue

		year : 2018 ( 3rd semester )
*/


#include<stdio.h>


#define MAX 20


void show(int stack[],int size,int top)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nValue at %d is %d",top,stack[top]);
		top=top-1;
	}
}



void reverse(int stack[],int qu[],int *t,int *r,int *f)
{
	*f=0;
	while(*t>-1)
	{
		*r=*r+1;
		qu[*r]=stack[*t];
		*t=*t-1;
	};
	

	while(*f<=*r)
	{
		*t=*t+1;
		stack[*t]=qu[*f];
		*f=*f+1;
	};
}



int  main()
{
	int size;
	int item,t,i,stack[MAX],quee[MAX];
	int top=-1,front=-1,rear=-1;
	printf("Enter size of stack :");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		top=top+1;
		printf("Enter value of for position %d  :",top);
		scanf("%d",&item);
		stack[top]=item;
	}
	show(stack,size,top);
	reverse(stack,quee,&top,&rear,&front);
	printf("\nAfter reverse..............");
	printf("\n");
	show(stack,size,top);
	printf("\n");
	return 0;

}
