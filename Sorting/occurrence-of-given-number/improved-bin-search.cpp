//Count number of occurrences (or frequency) in a sorted array
//T(n) = O(log n)

#include<iostream>
using namespace std;

int first(int a[], int l, int r, int n, int x){

	if(r>=l){
		int mid = l + (r - l) / 2;

		if((a[mid]==x) && (x>a[mid-1] || mid==0)){
			return mid;
		}	
		else if(x > a[mid]){
			return first(a, (mid+1), r, n, x);
		}
		else{
			return first(a, l, (mid-1), n, x);
		}
	}
	return -1;
}

int last(int a[], int l, int r, int n, int x){

	if(r>=l){
		int mid = l + (r - l) / 2;

		if((a[mid]==x) && (x<a[mid+1] || mid==n-1)){
			return mid;
		}
		else if(a[mid] > x){
			return last(a, l, (mid-1), n, x);
		}
		else{
			return last(a, (mid+1), r, n, x);
		}
	}
	return -1;
}

int countOccurrences(int a[], int n, int x){
	int firstOccurrence, lastOccurence;

	//first occurrence of x
	firstOccurrence = first(a, 0, n-1, n, x);

	if(firstOccurrence==-1){
		return -1;
	}//Count number of occurrences (or frequency) in a sorted array
//T(n) = O(log n + count)


	//last occurence of x
	lastOccurence = last(a, firstOccurrence, n-1, n, x);

	return lastOccurence - firstOccurrence + 1;
}


int main(){

	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);


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