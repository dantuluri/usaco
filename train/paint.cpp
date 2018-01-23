#include<iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
ifstream fin("paint.in");
ofstream fout("paint.out");
	vector<int> a;
	vector<int> b;
	int n = 0;
	fin>>n;
	a.push_back(n);
	fin>>n;
	a.push_back(n);
	fin>>n;
	b.push_back(n);
	fin>>n;
	b.push_back(n);
	int lowest = min(a[0],b[0]);
	int biggest = max(a[1],b[1]);
	int sum = biggest-lowest;
	if(max(a[0],a[1])<min(b[0],b[1])||(max(b[0],b[1])<min(a[0],a[1])))
		sum = (a[1]-a[0])+(b[1]-b[0]);
	fout<<sum;
}