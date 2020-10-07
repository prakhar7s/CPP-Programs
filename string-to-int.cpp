#include <iostream>
#include<string>

using namespace std;

int main() {
	//string to inetger
	string S;
	cin>>S;

	try {
		int i = stoi(S);
		cout<<"Coverted to int: "<<i<<endl;
	} catch(exception e) {//if string is alphanumeric
		cout<<"Cannot be coverted to int due to "<<e.what()<<endl;
	}

	return 0;
}