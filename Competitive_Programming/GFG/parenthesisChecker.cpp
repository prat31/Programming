#include<bits/stdc++.h>

using namespace std;

bool isParenthesisCheck(string str){
	stack<char> stack;
	char temp;
	for(int i=0; i<str.size(); i++){
		if(str[i]=='{'||str[i]=='['||str[i]=='('){
			stack.push(str[i]);
		}
		if(stack.empty())	return false;
		switch(str[i]){
			case ')':
				temp=stack.top();
				stack.pop();
				if(temp=='['||temp=='{')	return false;
				break;
			case '}':
				temp=stack.top();
				stack.pop();
				if(temp=='('||temp=='[')	return false;
				break;
			case ']':
				temp=stack.top();
				stack.pop();
				if(temp=='('||temp=='{')	return false;
				break;
		}
	}
	if(stack.empty())	return true;
	else 				return false;
}

int main(){
	int testCases;
	cin>>testCases;
	while(testCases--){
		string s;
		cin>>s;
		if(isParenthesisCheck(s))
			cout<<"balanced"<<endl;
		else 	
			cout<<"not balanced"<<endl;
	}
}