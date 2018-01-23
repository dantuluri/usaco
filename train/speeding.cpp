#include<iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
ifstream fin("paint.in");
ofstream fout("paint.out");
	vector<int> road;
	vector<int> cow;
	road.push_back(100);
	cow.push_back(100);
	int N = 0;
	int M = 0;
	int length = 0;
	int speed = 0;
	cin>>N;
	cin>>M;
	for(int i = 0;i<N;i++)
	{
		cin>>length;
		cin>>speed;
		for(int i = 0;i<length;i++)
		{
			road.push_back(speed);
		}
	}

	for(int i = 0;i<N;i++)
	{
		cin>>length;
		cin>>speed;
		for(int i = 0;i<length;i++)
		{
			cow.push_back(speed);
		}
	}
	int big = 0;
	for (int i = 0; i < 100; i++)
	{
		if((cow.at(i)-road.at(i))>big)
			big = cow.at(i)-road.at(i);
		
	}

cout<<"\n\n\n"<<"big: "<<big;
}