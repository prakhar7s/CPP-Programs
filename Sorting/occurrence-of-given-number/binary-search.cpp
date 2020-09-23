//Count number of occurrences (or frequency) in a sorted array
//T(n) = O(log n + count)

#include<iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int x){
	if(r<l)
		return -1;

	int mid = l + ( r - l) / 2;

	if(a[mid]==x){
		return mid;
	}
	else if(a[mid] > x){
		return binarySearch(a, l, mid-1, x);
	}
	else{
		return binarySearch(a, mid+1, r, x);
	}
}

int countOccurrences(int a[], int n, int x){
	int index;

	index = binarySearch(a, 0, n-1, x);

	//x not in array
	if(index==-1){
		return -1;
	}

	int count=1;

	//left of index
	int left = index - 1;
	while(left>=0 && a[left]==x){
		count++;
		left--;
	}

	//right of index
	int right = index + 1;
	while(right<n && a[right]==x){
		count++;
		right++;
	}

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