#include <stdio.h>
#include<iostream>
#include<vector>
#include <fstream>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
int bubbleSort(int arr[], int n)
{
    int count = 0;
   int i, j;
   for (i = 0; i < n-1; i++)
   {
    for (j = 0; j < n-i-1; j++) 
    {
      if (arr.at(j) > arr.at(j+1))
            {
              iter_swap(arr.begin() + j, arr.begin() + j+1);
              count++;
            }  
    }
            
   }      
       
    return count;
}


/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

// Driver program to test above functions
int main()
{
    ofstream fout("outofplace.out");
    ifstream fin("outofplace.in");
    int in;
    cin>>in;
    int num = 0;
    vector <int> arr;
    for (int i = 0; i < in; i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    for (int i = 0; i < arr.size()-1; i++)
    {
        if(arr.at(i)==arr.at(i+1))
        {
            arr.erase(arr.begin() + i);
        }
    }
    int final[arr.size()];
    copy(arr.begin(), arr.end(), final);
    int steps = 0;
    steps = bubbleSort(final, in);
    fout<<steps;
    return 0;
}