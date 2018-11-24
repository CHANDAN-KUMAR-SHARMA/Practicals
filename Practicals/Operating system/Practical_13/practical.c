/*   Practical 13
     Implementation of first , best and worst fit allocation 	
	to fixed size main memory
*/ 

#include<stdio.h>
#include<stdlib.h>

struct memory{

	int size;
	int is_empty;
}m_size[100];
	/* sorry for hard coding
	 * intiallizatin of the memory propertry
	 */
	//intiallization of size
m_size[0].size = 20;
m_size[1].size = 30;
m_size[2].size = 40;
m_size[3].size = 45;
m_size[4].size = 15;





int option;
int num_p;		//number of process
int num_m=5; 
int p_size[100];	

void first_fit();
void best_fit();
void worst_fit();



int main()
{
	
	//intiallization of is_empty 0 stand for false (i.e. full ) 1 for true
	for(int i=0 ; i<num_m ; i++)
	 	is_empty=1;
			
	printf("\t\t\tThis is allocation program\n"); 
	printf("what is the number of process to be allocated : \t ");
	scanf("%d",num_p);
	
	//please work for food
	for(int i=0 ; i<num_p ; i++)
	{
		printf("\nP%d size : \t",(i+1 ));
		scanf("%d",&p_size[i]);
	
	}
	printf("\n");


	//superfacial make 

	do{
		printf("\t\t\t===== Menu =====\n1.  first-fit\n2.  best-fit\n3.  worst-fit\n4.  Exit"); 
		printf("\nEnter option :\t ");
		scanf("%d",option);
		switch(option)
		{
			case 1 : first_fit();
				break;
			case 2 : best_fit();
				break;
			case 3 : worst_fit();
				break;
			
		}

	}while(option!=4);
	return 0;

}

//mechanism for allocation 

void first_fit()
{ 
	int count_allocation=0;
	int flag_for_allocation=1;
	printf("\nMemory\t\t\t\t\tallocation\n\n");
	for(int i=0 ; i < num_p ;i++)
	{
		
		
		printf("P%d is allocated to \t\t\t  ");
		for(int j=0 ; j< num_m ; j++)
		{
			if( (m_size[j]<p_size[i]) && (m_size[j].is_empty ) )
			{
				printf("M%d (memory size is %d )\n ",j,m_size[j]);
				m_size[j].is_empty=0;
				flag_for_allocation=0;
				break;
			}
		}
	
		if(flag_for_allocation)
			printf("\t\t\t --- \n ");
	}

}

void best_fit()
{

}

void worst_fit()
{

}


