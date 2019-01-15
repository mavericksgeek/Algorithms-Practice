// Example program
/* 
Merge sort in cpp
*/

#include<iostream>

using namespace std;


void merge(int arr[], int l, int m, int r)
{
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;
 
  int L[n1], R[n2];
  for(int i = 0; i < n1; i++)
  {
    L[i] = arr[l + i];
  }
  for(int j = 0; j < n2; j++)
  {
    R[j] = arr[m + 1 + j];
  }
  i = j = 0;
  k = l;
  while(i < n1 && j < n2)
  {
    if(L[i] <= R[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  
  while(i < n1)
  {
    arr[k] = L[i];
    i++;
    k++;
  }
  while(j < n2)
  {
    arr[k] = R[j];
    j++;
    k++;
  }
}
  
void printarray(int arr[],int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "\n";
  }
}

void mergesort(int arr[],int l,int r)
{
  if(l < r)
  {
    int m = l + (r - l )/2; // avoids overflow and out of bounds error
    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);
    
    merge(arr, l, m, r);    
  }
}


int main()
{
  int arr[6] = {14, 32, 22, 55, 50, 4};
  int size = 6;
  /*cout << "Please enter the size of the array\n";
  cin >> size;
  cout << "Enter the array elements\n";
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }*/
  mergesort(arr, 0, size - 1);
  printarray(arr, size);
  
  return 0;
}
