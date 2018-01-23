#include<iostream>
#include <fstream>
#include<algorithm>
#include<vector>
using namespace std;




int maxTime(int index, int arr[][2])
{
  vector<int> v;
  int sheet[1000] = {0};

  //construct the 1d array
  for (int i = 0; i < 100; i++)
  {
   if(i!=index)
   {
    //for every person
    for (int j = 0; j < 1000; j++)
    {
      if(j>=arr[i][0]&&j<arr[i][1])
        sheet[j]++;
    }
   }

  }
// cout<<"pre \n\n\n";
// for (int i = 0; i < 1000; i++)
// {
//   cout<<sheet[i]<<" ";
// }
// cout<<"done"<<"\n\n";


  int max = 0;
  int count = 0;
  int start = 0;
  int end = 0;
  while(count<1000)
  {
    if(sheet[count]>0)
    {
      //start counting until 0
      start = count;
      // cout<<"STARTING: "<<start<<"\n";
      while(sheet[count]>0)
      {
        count++;
      }
      end = count;
      // cout<<"ENDING: "<<end<<"\n\n";
      v.push_back(end-start);
    }
    count++;
  }
  int final = 0;
  for (int i = 0; i < v.size(); i++)
  {
      final = final+v.at(i);
  }
  return final;



}


int main()
{
  ifstream fin ("lifeguards.in");
  ofstream fout ("lifeguards.out");
  int N = 0;
  int tempInput1 = 0;
  int tempInput2 = 0;
  int temp = 0;
  int totalTime = 0;
  //from 0 to 99 people
  //1 to 100 people
  int time [100][2];
  fin>>N;
  int i = 0;
  int j = 0;
  for (i = 0; i < 100; i++)
    for (j = 0; j < 2; j++)
      time[i][j] = 0;
  for (int i = 0; i < N; i++)
  {
    fin>>tempInput1>>tempInput2;
    time[i][0] = tempInput1;
    time[i][1] = tempInput2;
  }
  //remove each person one by one
  for (int i = 0; i < N; i++)
  {
    temp = maxTime(i,time);
        cout<<temp<<" ";
    if(temp>totalTime)
    {
      totalTime = temp;
    }
  }
  fout<<totalTime;

}