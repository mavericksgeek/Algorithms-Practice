/* 
Selection sort in cpp
*/

#include<iostream>

using namespace std;


void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printarray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
  
int main()
{
  int arr[5] = {5,4,3,2,1};
  int size = 5;
  cout <<"Enter the array size\n";
  cin >> size;
  int arr[size];
  cout <<"Enter the array element\n";
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  for(int i = 0; i < size; i++)
  {
    int min_index = i;
    for(int j = i + 1; j < size; j++)
    {
      if(arr[j] < arr[min_index])
        min_index = j;
    }
    swap(&arr[j], &arr[min_index]);
  }
  
  printarray(arr, size);
  
  return 0;
}
