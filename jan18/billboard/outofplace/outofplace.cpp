#include<iostream>
#include<vector>
#include<algorithm>
#include <fstream>
#include <stdio.h>
using namespace std; 



int bubbleSort(vector <int> v)
{
   int i, j, count;
   count = 0;
   for (i = 0; i < v.size()-1; i++) 
   {
     for (j = 0; j < v.size()-i-1; j++) 
     {
      if (v.at(j) > v.at(j+1))
           {
              iter_swap(v.begin() + j, v.begin() + j+1);
              count++;
           }
     }
           
   }
      return count;
}     


 int main()
{
  ofstream fout("outofplace.out");
  ifstream fin("outofplace.in");
  int N = 0;
  fin>>N;
    int arr[N];
    int input = 0;
    for (int i = 0; i < N; i++)
    {
      fin>>input;
      arr[i] = input;
    }
    //vector<int> v;
    // for (int i = 0; i < N-1; i++)
    // {
    //   if(arr[i]!=arr[i-1])
    //     v.push_back(arr[i]);
    // }
    // cout<<"start"<<"\n";
    // for (int i = 0; i < v.size(); i++)
    // {
    //   cout<<v.at(i)<<" ";
    // }

    vector<int> abc (arr,arr+N);
    vector<int>::iterator it;
    it = unique (abc.begin(), abc.end());   
    abc.resize(distance(abc.begin(),it)); 
    fout<< bubbleSort(abc);
}