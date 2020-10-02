#include <iostream>

using namespace std;
int main(){
	int dec,remainder,x=1,bin=0;
	cin>>dec;
	while(dec!=0){
		remainder=dec%2;
		bin+=remainder*x;
		dec/=2;
		x*=10;
	}
	cout<<bin;
	return 0;
}