#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int num;
	ofstream fout("outofplace.out");
	ifstream fin("outofplace.in");
	vector <int> arr;
	for (int i = 0; i < N; i++)
	{
		fin>>num;
		arr.push_back(num);
	}

	vector <int> diff;
	diff.push_back(arr.at(0));
	for (int i = 1; i < arr.size(); i++)
	{
		if(arr.at(i-1)!=arr.at(i))
			diff.push_back(arr.at(i));
	}
	int bessie;
	int indexOfBessie;
	for (int i = 1; i < diff.size(); i++)
	{
		if(diff.at(i)<diff.at(i-1))
		{
			bessie = diff.at(i);
			indexOfBessie = i;
		}
	}
	int place = 0;
	int count = 0;

	while(count<arr.size()&&arr.at(count)<bessie)
	{
		place = count;
		count++;
	}
	place++;

	fout<<indexOfBessie-place;
}

































