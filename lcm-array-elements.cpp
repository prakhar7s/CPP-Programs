#include <iostream>

using namespace std;

int gcd(int, int);

int lcm(int[], int);

int main(){

	int n;
	cin>>n;
	
	int a[n];
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int LCM = lcm(a, n);

	cout<<LCM;

	return 0;
}

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}


int lcm(int a[], int n){

	int x=a[0];

	for(int i=1; i<n; i++){
		x = (a[i] * x)/gcd(a[i], x);
	}

	return x;

}