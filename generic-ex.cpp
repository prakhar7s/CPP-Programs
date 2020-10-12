#include <iostream>
#include <vector>

using namespace std;

template<typename T>

void print(vector<T> arr) {
	for(T x: arr) {
		cout<<x<<" ";
	}
	cout<<endl;
}


int main() {
	vector<int> iarr{1,5,7,8,9};	
	vector<char> carr{'A','E','I','O','U'};
	vector<string> sarr{"sam","john","will"};
	print(iarr);
	print(carr);
	print(sarr);
	return 0;
}