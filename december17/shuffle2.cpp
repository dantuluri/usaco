#include<iostream>
#include <fstream>
using namespace std;
int main()
{
  int n;

  cin>>n;
  int init[n];
  int inp[n];
  int arr[n];
  for (int i = 0; i < n; i++) {
    init[i] = 0;
    inp[i] = 0;
    arr[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    cin>>init[i];
  }
  for (int i = 0; i < n; i++) {
    cin>>inp[i];
  }
  for (int i = 0; i < n; i++) {
    arr[init[i]-1] = inp[i];
  }
  for (int i = 0; i < n; i++) {
    cout<<arr[i]<<"\n";
  }
}
