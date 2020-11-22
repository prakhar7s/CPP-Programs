#include<iostream>
#include<vector>

using namespace std;

int main() {

	//initailization of vector (size, default_value)
	vector<int> arr(4, 0); //[0, 0, 0, 0]

	//to know the size of vector
	cout<<arr.size()<<endl; //4

	//traversal of vector
	for(int i = 0; i< arr.size(); i++) { //0 0 0 0 
		cout<<arr[i]<<" ";
	}
 
	//add data in vector
	arr.push_back(100); //[0, 0, 0, 0, 100]

	//delete data from vector
	arr.pop_back(); //[0, 0, 0, 0]

	cout<<endl;
	for(int i = 0; i< arr.size(); i++) {
		cout<<arr[i]<<" ";
	}

	return 0;
}