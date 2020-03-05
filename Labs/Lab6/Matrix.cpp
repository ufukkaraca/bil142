#include "Matrix.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
Matrix<T>::Matrix()
{
   rows = MAXROWS;
   cols = MAXCOLS;
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] = '\0';
      }
   }
}   

template <typename T>
void Matrix<T>::printMatrix()
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 cout << doubleArray[i][j] << "   ";
      }
      cout << endl;
   }
}

template <typename T>
void Matrix<T>::setMatrix(T otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] = otherArray[i][j];
      }
   }
}

template <typename T>
void Matrix<T>::addMatrix(T otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] += otherArray[i][j];
      }
   }
}

template <typename T>
void Matrix<T>::addMatrix(T otherMatrix)
{
   addMatrix(otherMatrix.doubleArray);
}



//----------------------------------------------------------------------------------------------------------------------------
//----------------------------------------MAIN--------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------


//Transform this function to a template function 
template <typename T>
void demoTemplate(Matrix<T> M, T array1[][MAXCOLS], T array2[][MAXCOLS])
{
    M.setMatrix(array1);
    cout << "\nMatrix set to first array" << endl;
    M.printMatrix();

    M.addMatrix(array2);
    cout << "\nMatrix incremented by second array" << endl;
    M.printMatrix();
}

int main()
{
    string str1[MAXROWS][MAXCOLS] = 
       { 
	  {"Congra", "y", "ar"},
	  {"alm", "don", "La"}
       };
    string str2[MAXROWS][MAXCOLS] = 
       { 
	  {"tulations", "ou", "e"},
	  {"ost", "e    the", "b!"}
       };
    int num1[MAXROWS][MAXCOLS] = 
       {
	  {1,2,3},
	  {4,5,6}
       };
    int num2[MAXROWS][MAXCOLS] = 
       {
	  {6,5,4},
	  {3,2,1}
       };

    Matrix<string> stringMatrix;//create a Matrix with string type
    Matrix<int> intMatrix;//create a Matrix with int type

    cout << "\nDemonstrating with string matrix:" << endl;

    demoTemplate(stringMatrix, str1, str2); //after making necessary changes this line should work

    cout << "\nDemonstrating with int matrix:" << endl;

    demoTemplate(intMatrix, num1, num2);


    cout << "\n" << endl;
    return 0;                
}

