#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<string> q;
	
	q.push("neelesh");
	q.push("mahak");
	q.push("vaishanv");
	cout<<"before pop size of queue-->"<<q.size()<<endl;
	
	cout<<"front element of queue-->"<<q.front()<<endl;
	q.pop();
	cout<<"first element of queue-->"<<q.front()<<endl;
	cout<<"size of queue after pop-->"<<q.size()<<endl;
	return 0;
}