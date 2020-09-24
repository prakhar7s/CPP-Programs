#include <stack>
#include <iostream>

using namespace std;

string isMatched(string input){

	stack<char> stack;

	for(auto ch : input){
		switch(ch){

			case '{':
			case '[':
			case '(':	
					stack.push(ch);
					break;

			case '}': if(stack.empty() || stack.top()!='{')
							return "NO";
					  stack.pop();
					  break;

			case ']': if(stack.empty() || stack.top()!='[')
							return "NO";
					  stack.pop();
					  break;

			case ')': if(stack.empty() || stack.top()!='(')
							return "NO";
					  stack.pop();
					  break;
		}
	}

	return stack.empty() ? "YES" : "NO";

}

int main(){

	string input;

	cin>>input;

	cout<<isMatched(input);

	return 0;
}
