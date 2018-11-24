/* 	practical_15 : Program to convert the Sparse Matrix into non-zero form and vice-versa

	author : Chandan Kumar Sharma
	year   : 2018 (3rd semester )

*/


/*A sparse matrix is a matrix which has number of zeroes greater than (m*n)/2,
where m and n are the dimensions of the matrix.*/


/*Non zero matrix : A matrix which contain atleast one non zero element 
	

 Zero matrix is also a sparse matrix*/



 
 
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int m,n,i,j,c=0;
  cout << "Enter dimensions of matrix:";
  cin >> m >> n;
  int a[m][n];
  cout << "Enter matrix elements:";
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
     cin >> a[i][j];
  }



  cout<<"\n\nEntered matrix is :\n";
  for(i=0;i<m;i++)
  {
                for(j=0;j<n;j++)
                {
                               cout<< "  " << a[i][j];
                }
                cout<< endl;
         }







  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]==0)
       c++; //Counting number of zeroes
    }
  }
  if(c>((m*n)/2)) //Checking for sparse matrix
  {
	cout << "Sparse matrix";
	cout <<"\n\n\t\tconverting it into non zero matrix\n";

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
				a[i][j] =( (rand()%3)+1);
		}
         }

	
	cout<<"\n\nconverted matrix is :\n";
	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                               cout<< "  " << a[i][j];
                }
		cout<< endl;
         }

  }
  else
	{
		cout << "Not a sparse matrix";

		cout <<"\n\n\t\tconverting it into sparse matrix\n";

        	for(i=0;i<m;i++)
       	 	{
         	       for(j=0;j<n;j++)
         	       {
         	               if(a[i][j]!=0)
         	                       a[i][j] =0;
         		       }
        	 }


        	cout<<"\n\nconverted matrix is :\n";
       		 for(i=0;i<m;i++)
      		  {
      		          for(j=0;j<n;j++)
      		          {
                               cout<< "  " << a[i][j];
        		        }
      		          cout<< endl;
        		 }

	}
	
}		
