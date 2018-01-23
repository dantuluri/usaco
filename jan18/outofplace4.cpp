#include <stdio.h>
#include<iostream>
#include<vector>
#include <fstream>
#include <algorithm>
using namespace std;

int bubbleSort(vector <int> arr)
{
    int count = 0;
   int i, j;
   for (i = 0; i < arr.size()-1; i++)      
       for (j = 0; j < arr.size()-i-1; j++) 
           if (arr.at(j) > arr.at(j+1))
           {
              count++;
              iter_swap(arr.begin() + j, arr.begin() + j+1);
           }
    return count;
}

// Driver program to test above functions
int main()
{
    ofstream fout("outofplace.out");
    ifstream fin("outofplace.in");
    int in;
    fin>>in;
    int num = 0;
    int a[in];
    for (int i = 0; i < in; i++)
    {
        fin>>num;
        a[i] = num;
    }
    vector<int> myvector (a,a+in);
    vector<int>::iterator it;
    it = unique (myvector.begin(), myvector.end());   
    myvector.resize(distance(myvector.begin(),it) ); // 10 20 30 20 10


    int steps;
    steps = bubbleSort(myvector);
    fout<<steps;
}