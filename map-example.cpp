// phone book using map
#include <map>
#include <iostream>

using namespace std;

int main(){

	map<string, long> phone_book;
	int n;
	cin>>n;
	string name;
	long phone_no;
	for(int i=0; i<n; i++){
		cin>>name>>phone_no;
		phone_book[name] = phone_no; 
	}
	cout<<"Your phone book:-\n";
	for(map<string, long>::iterator it = phone_book.begin(); it!=phone_book.end(); ++it) {
		cout<<it->first<<"="<<it->second<<endl;
	}
}