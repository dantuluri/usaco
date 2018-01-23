/*
ID: surya_d1
PROG: beads
LANG: C++
 */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	 ofstream fout("beads.out");
  ifstream fin("beads.in");
  int n;
	fin >> n;
	
	char *beads = new char[n+1];
	fin >> beads;
	
	char tempo;
	int max = 0;
	for(int i = 0; i < n; i++) {
		bool toggle = false;
		int c = 1;
		tempo = beads[i];
		while(c < n) {
			if(tempo == 'w') {
				tempo = beads[(i+c)%n];
			} else {
				if(beads[(i+c)%n] != 'w' && beads[(i+c)%n] != tempo) {
					if(toggle) break;
					toggle = true;
					tempo = beads[(i+c)%n];
				}
			}
			c++;
		}
		max = c > max ? c : max;
	}
	fout << max << endl;
	
	return 0;
}