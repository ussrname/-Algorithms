#include <iostream> 
using namespace std; 
  
int search(int arr[], int size, int val) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        if (arr[i] == val) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = {12, 54, 89, 51, 14, 17, 5}; 
    int val = 17; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int index = search(arr, n, x); 
   (index == -1)? cout<<"Element not found!" 
                 : cout<<"Element found at index " <<index; 
   return 0; 
} 
