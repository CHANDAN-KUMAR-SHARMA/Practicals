/*	Practical_1 
 * 	make list 
 *	use template function 
 *	based on user reference select searching algorith
 *	between binary and linear
 */


#include <iostream>
#include <cstdlib>

using namespace std;


//global list

int int_list[] = {2,4,6,9,8};
char char_list[] = {'a','b','c','d','e','g','h'};
int int_list_size = 5;
int char_list_size = 7;



//function definition


template <class Type> void linear_search(Type *list,Type item,int size);
template <class Type> void binary_search(Type *list,Type item,int size);
void display(int i);
void not_found();
char continue_option();
int middle(int start , int end);
template <class Type> void display_list (Type * list,int size);
int search_menu();
void integer_search();
void character_search();
int linear_or_binary();


//driver

int main()
{
	int search_option;
	
	char option='n';
	cout<<"\n\t\t\tINTERGER LIST \n";
	display_list(int_list , int_list_size);
	cout<<"\n\t\t\tCHARACTER LIST\n";
	display_list(char_list, char_list_size);


	do
	{
	
		
		search_option =  search_menu();
	
		switch(search_option)
		{
			case 1 : integer_search();
				break;

			case 2 : character_search();
				break;
			default: cout<<"\n\t\t\t INVALID INPUT : EXITING\n";
				exit(-1);
				
		
		}

		option = continue_option();
	
	}while(option == 'y');
	
	cout<<"\n\t\t\tPROGRAM FINISHED";

	cout<<endl;


	return 0;
}






char continue_option()
{
	char option;
	cout<<"\nWant to continue y or n : \t";
	cin>>option;
	return option;

}

template <class Type> void linear_search(Type *list , Type item ,int size )
{
	bool found_flag = false;

	for(int i=0 ; i<size ; i++)
	{
		if(list[i] == item)
		{
			display(i);
			found_flag = true;
		}
	}

	if(!found_flag)
		not_found();



}


template <class Type> void binary_search(Type *list,Type item,int size)
{
	bool found_flag = false;
	int start = 0  , end = size-1;
	int mid = middle(start , end) ;
	while(mid != start)
	{
		
		if(list[mid] == item)
		{	
			display(mid);
			found_flag = true;
			break;
		}	
		else
			if( item > list[mid] )
				start =  mid;
			else
				end = mid;


		
		mid = middle(start , end);
	
	}

	if(!found_flag)
		not_found();

}



void display(int i)
{
	cout<<"\n\n\t\t\tElement found at "<< i+1<<"  index"<<endl;
}


void not_found()
{
	cout<< "\n\n\t\t\tElement not found"<<endl;
}

int middle(int start , int end)
{
	return ((start+end)/2);

}


template<class Type >  void display_list(Type * list, int size)
{
	for(int i=0 ; i<size ; i++)
		cout<<"  "<<list[i];
		
	cout<< endl;
	
}


int search_menu()
{
	int option;
	cout<< "\n\t\t\t Select list to search\n";
	cout<<"\n1. integer list\n2. character list\n\nEnter option :\t";
	cin>> option;
	cout<< endl;
	return option;


}


void integer_search()
{
	int option;
	int element_to_be_search;
	cout<<"\nEnter integer element to be search : \t";
	cin>>element_to_be_search;
	cout<<endl;
	option = linear_or_binary();
	switch(option)
	{
		case 1 : cout<<"\n\n\t\t\tlinear search in execution \n";
			 linear_search(int_list,element_to_be_search,int_list_size);
			break;
		case 2 : cout<<"\n\n\t\t\tlinear search in execution \n";
			 binary_search(int_list,element_to_be_search,int_list_size);
			break;
		default: cout<<"\n\t\tINVALID INPUT : EXITING \n";
		exit(-1);


	}

}



void character_search()
{
	int option;
	char element_to_be_search;
	cout<<"\nEnter character element to be search : \t";
	cin>>element_to_be_search;
	cout<<endl;
	option = linear_or_binary();
	switch(option)
	{
		case 1 : linear_search(char_list,element_to_be_search,char_list_size);
			break;
		case 2 : binary_search(char_list,element_to_be_search,char_list_size);
			break;
		default: cout<<"\n\t\tINVALID INPUT : EXITING \n";
			exit(-1);
	}

}


int linear_or_binary()
{
	int option;
	cout<<"\n\t\tSelect algorithm to be search \n";
	cout<<"\n1. linear search\n2. binary search\n\nEnter option :\t";
	cin>>option;
	cout<<endl;
	return option;

}


/* 	Practical_1 Question : Write a program to search an element from a list.
 *		Give user the option to perform Linear or Binary search. Use Template functions.
 *	
 *
 *	author : Chandan kumar Sharma 
 *	year   : 2018 ( 3rd semester )
 */


