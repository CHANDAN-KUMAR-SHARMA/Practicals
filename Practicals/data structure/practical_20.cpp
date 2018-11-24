/*  	Practical 20 : implement Upper Triangular Matrix using one-dimensional array

	year : 2018 ( 3rd semester )
*/


#include<iostream> 
  
using namespace std; 
  

void upper(int matrix[3][3], int row, int col) 
{ 
    int i, j; 
      
    for (i = 0; i < row; i++) 
    { 
        for (j = 0; j < col; j++) 
        { 
            if (i > j) 
            { 
                cout << "0" << " "; 
            } 
            else
            cout << matrix[i][j] << " "; 
        } 
        cout << endl; 
    } 
} 
 


int main() 
{ 
    int matrix[3][3] = {{1, 2, 3},  
                        {4, 5, 6},  
                        {7, 8, 9}}; 
    int row = 3, col = 3; 
      
    cout << "Upper triangular matrix: \n"; 
    upper(matrix, row, col); 
          
    return 0; 
} 
