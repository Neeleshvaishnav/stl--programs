#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<string> s;
	s.push("mahak");
	s.push("neelesh");
	s.push("vaishnav");
	
	cout<<"top element -->"<<s.top()<<endl;
	s.pop();
	cout<<"top element after poping-->"<<s.top()<<endl;
	cout<<"size of stack is-->"<<s.size()<<endl;
	cout<<"stack is empty or not-->"<<s.empty()<<endl;
	return 0;
}