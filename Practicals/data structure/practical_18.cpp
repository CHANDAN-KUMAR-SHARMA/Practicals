/* 	Practical_18 : Implement Diagonal Matrix using one-dimensional array

	author : Chandan Kumar Sharma
 	year   : 2018( 3rd semester )

*/


#include <iostream>


using namespace std;

int dimension;
int diagonal_matrix[50];
void get_element();
void display_matrix();

int main()
{
	cout<<"Enter the dimension of matrix  : \t"; cin >> dimension;
	cout<<endl;
	get_element();
	cout<<"\n\t\tdiagonal matrix   \n\n";
	display_matrix();


	return 0;
}

void get_element()
{
	cout<<"\n\n\tEnter the elements for diagonal\n";
	for(int i=0 ; i<dimension ; i++)
	{
		cout<<"\nEnter "<<i+1 <<"element  :\t";
		cin >>diagonal_matrix[i];
		cout<<endl;		
	}

}


void display_matrix()
{
	for(int i=0 ; i<dimension ; i++)
        {
		for(int j=0 ; j<dimension ; j++)
	        {	
			if(j==i)
				cout<<"  "<<diagonal_matrix[i];
			else
				cout<<"  "<<"0";
	        }
		cout<<endl;
	}

}
