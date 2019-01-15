/*
Quicksort in CPP
Using the 
1.) last element for the sort criteria Lomuto's scheme
2.) Hoare scheme
links used: geeksforgeeks
*/

#include<iostream>

using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int LomutoPartition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

int HoarePartition(int arr[], int low, int high)
{
    int pivot = arr[(low + high) / 2];
    int i = low - 1;
    int j = high + 1;
    while(1)
    {
        do{
            i++;
        }while(arr[i] < pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i >= j)
         break;
        swap(&arr[i], &arr[j]);
    }
    return j;  
}

void printarray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void quicksortL(int arr[],int low, int high)
{
    if(low < high)
    {
        int pi = LomutoPartition(arr, low, high);      
        quicksortL(arr, low, pi - 1);
        quicksortL(arr, pi+1, high);
    }
}

void quicksortH(int arr[],int low, int high)
{
    if(low < high)
    {
        int pi = HoarePartition(arr, low, high);      
        quicksortH(arr, low, pi);
        quicksortH(arr, pi+1, high);
    }
}

int main()
{
    //int arr[5] = {5,4,3,2,1};   Test case to check if the code is running
    //int size = 5; 
    cout << "Enter the size of the array\n";
    cin >> size;
    int arr[size];
    cout <<"Enter the elements\n";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int choice;
    cout << "Select the type of Quick Sort \n1.) Lomuto scheme (last element as the pivot)\n2.)";
    cout << "Hoare Scheme (Median of high and low as pivot\n";
    cin >> choice;
    if (choice == 1) 
        quicksortL(arr, 0, size - 1);
    else
        quicksortH(arr, 0, size - 1);
        printarray(arr, size);
}
