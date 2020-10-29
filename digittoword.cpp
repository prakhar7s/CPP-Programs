#include <iostream>
using namespace std;
int main(){
    const string words[] = {"zero","one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
    int n;
    cin>>n;
    cout<<( n > 9 ? words[10] : words[n] );
    return 0;
}
