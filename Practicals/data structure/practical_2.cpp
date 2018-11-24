/* 	Practical_2
 *	make lists of diffferent data types 
 *	use templates
 *	give user to option to select  between
 * 	insertion sort  , bubble sort and selection sort 
 */


#include <iostream>
#include <cstdlib>



	
using namespace std;





template <class Type> void swap(Type  *list , int source , int destination );
template <class Type> void display_list (Type * list,int size);
int select_list_menu();
int algorithm_menu();
template <class Type> void insertion_sort (Type * list,int size);
template <class Type> void bubble_sort (Type * list,int size);
template <class Type> void selection_sort (Type * list,int size);





int main()
{
	int search_option;
	int algorithm_option;
		
	int int_list[] = {3,9,2,1,4};
	char char_list[] = {'n','k','c','a','e','z','h'};
	int int_list_size = 5;
	int char_list_size = 7;

	cout<<"\n\t\t\tINTERGER LIST \n";
        display_list(int_list , int_list_size);
        cout<<"\n\t\t\tCHARACTER LIST\n";
        display_list(char_list, char_list_size);

	search_option =  select_list_menu();

	switch(search_option)
	{
		case 1 : algorithm_option = algorithm_menu();
			switch(algorithm_option)
			{
				case 1 :insertion_sort(int_list , int_list_size);
					break;
				case 2 : bubble_sort(int_list , int_list_size);
					break;
				case 3 : selection_sort(int_list , int_list_size);
					break;
				default:
					cout<<"\n\n\t\tINVALID INPUT : PROGRAM EXITING\n";
					exit(-1);
			
			}	
			break;


		case 2 : algorithm_option = algorithm_menu();
			switch(algorithm_option)
			{
				case 1 :insertion_sort(char_list , char_list_size);
					break;
				case 2 :bubble_sort(char_list , char_list_size);
					break;
				case 3 :selection_sort(char_list , char_list_size); 
					break;
				default:
					cout<<"\n\n\t\tINVALID INPUT : PROGRAM EXITING\n";
					exit(-1);
			
			}
			break;
		default: cout<<"\n\t\t\t INVALID INPUT : EXITING\n";
		exit(-1);
	}



	
	cout<<"\n\t\t\tPROGRAM FINISHED";

	cout<<endl;


	
	return 0;
}






template<class Type >  void display_list(Type * list, int size)
{
        for(int i=0 ; i<size ; i++)
                cout<<"  "<<list[i];

        cout<< endl;

}






int select_list_menu()
{
        int option;
	cout<< "\n\t\t\t Select list to perform sorting\n";
	cout<<"\n1. integer list\n2. character list\n\nEnter option :\t";
	cin>> option;
	cout<< endl;
	return option;


}




int algorithm_menu()
{
	int option;
	cout<<"\n\tSelect algorithm  for SORTING \n";
        cout<<"\n1. insertion sort \n2. bubble sort\n3. selection sort\n\nEnter option :\t";
        cin>>option;	

	return option;
}






template <class Type> void insertion_sort (Type * list,int size)
{

	Type key;
	int j;
	
	for(int i=0 ; i < size ; i++)
	{
		j = i-1;
		key = list[i];

		while(j >= 0 && list[j] > key)
		{
		
			list[j+1] = list[j];
			j--;
		
		};
		list[j+1] = key;

	}


	
	cout<< "\n\n\t\tList is sorted by insertion sort algorithm\n";
	cout<<endl;
	display_list(list,size);
}






template <class Type> void bubble_sort (Type * list,int size)
{
	int j;

	for(int i = 0 ; i < size-1 ; i++)
	{
	
		for(j = 0 ; j < size-i-1 ; j++)
		{
			if(list[j+1] < list[j])
				swap(list , j+1 ,j);	
						
		}
	
	}
	
	cout<< "\n\n\t\tList is sorted by bubble sort algorithm\n";
	cout<<endl;
	display_list(list,size);

}






template <class Type> void selection_sort (Type * list,int size)
{
	int j;
	int min;
	for(int i = 0 ; i < size-1 ; i++)
	{
		min = i;

		for(j  = i+1 ; j < size ; j++)
		{
			if( list[j] < list[i])
			{
				min = j;
			}
		}
		
		if(min != i)
			swap(list , min , i);
	}

	cout<< "\n\n\t\tList is sorted by selection sort algorithm\n";
	cout<<endl;
	display_list(list,size);

}


template <class Type> void swap(Type  *list , int source , int destination )
{

	Type temp;
	temp = list[destination ];
	list[destination] = list[source];
	list[source] = temp;

}



/*  Question  : WAP using templates to sort a list of elements. Give user the option to perform sorting using Insertion sort, Bubble sort or Selection sort.

	author : Chandan Kumar Sharma 
	year   : 2018 ( 3rd semester ) 
*/

