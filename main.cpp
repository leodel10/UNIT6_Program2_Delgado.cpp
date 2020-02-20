#include <iostream>
#include "accounts.h"
using namespace std;

void printArray(int[], int);
void sortArrayAsc(int[], int);
int main() 
{
cout << "\nStart: " << cpuTime() << endl;
//Bubble sort ASC method per task 2 of unit 6 assingment 
sortArrayAsc(accountBalances, maxAccounts);
printArray(accountBalances, maxAccounts);
//call the sort function 

cout << "\nEnd: " << cpuTime() << endl;
  return 0;
}



void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted values in array" << endl;
  for(int i = 0; i < size; i++)
    {
      cout << arrayVals[i] << ",";

    }
}

void sortArrayAsc(int arrayVals[], int size)
{
  int temp = 0;
  //Bubble sort ASC a la Dr. Rajan Alex
  for(int left = 0; left < size; left++)
  {
    for(int right=left+1; right < size; right++)
    {
      if (arrayVals[left] < arrayVals[right])
      {
      temp = arrayVals[left];
      arrayVals[left] = arrayVals[right];
      arrayVals[right] = temp;
      }
    }
  }

}