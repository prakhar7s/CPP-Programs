#include <iostream>
#include <vector>

int max(int x, int y) {
	return x >= y ? x : y;
}
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	//implementation of Kadane algorithm
	int cs=0, ms=a[0];//current sum, max sum
	for(int i=0; i<n; i++) {
		cs+=a[i];
		ms=max(cs, ms);
		if(cs<0) {
			cs=0;
		}
	}

	cout<<"Ans: "<<ms;	
	return 0;
}