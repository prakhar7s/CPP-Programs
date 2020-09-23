//Count number of occurrences (or frequency) in a sorted array
//T(n) = O(n)

#include<iostream>

using namespace std;

int linearSearch(int a[], int n, int x){
	int count=0;
	for(int i=0; i<n; i++){
		if(a[i]==x){
			count++;
		}
	}
	return count;
}

int countOccurrences(int a[], int n, int x){

	int count;

	count = linearSearch(a, n, x);

	return count;
}

int main(){
	
	int n,x,ans;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	cin>>x;

	ans = countOccurrences(a, n, x);

	cout<<"Occurrences: "<<ans;

	return 0;
}
