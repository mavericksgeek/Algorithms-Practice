/*
CPP code for insertion sort
*/

#include<iostream>

using namespace std;

int main()
{
  int size;
  // int arr[4] = {3, 4, 2, 1}; test case
  cout<< "Enter the size\n";
  cin >> size;
  int arr[size];
 //  int *arr = new int[size];    //we can also define the array dynamically using the pointer of the array 
                                  //but we need to remove the  memory allocation using     
  cout<<"Enter the numbers\n";
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int j = 0, key = 0;
  for(int i = 1; i < size; i++)
  {
    key = arr[i];
    j = i - 1;
    while(j >= 0 && key < arr[j])
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  for(int i = 0; i < size; i++)
  {
      cout << "\n" << arr[i] << " ";
  }
  //delete [] arr;      //deallocation 
  return 0;
}
