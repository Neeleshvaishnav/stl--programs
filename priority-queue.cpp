#include<iostream>
#include<queue>
using namespace std;
int main(){
	//max heap
	priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>> mini;
	
	//operation on max heap priority
	maxi.push(2);
	maxi.push(3);
	maxi.push(1);
	maxi.push(0);
	cout<<"size of queue is-->"<<maxi.size()<<endl;
	int n=maxi.size();
	for(int i=0;i<n;i++){
		cout<<maxi.top()<<" ";
		maxi.pop();
	}	
	cout<<endl;
	
	//priority queue mini heap
	mini.push(5);
	mini.push(4);
	mini.push(2);
	mini.push(3);
	mini.push(1);
		cout<<"size of queue is-->"<<mini.size()<<endl;
	int m=mini.size();
	for(int i=0;i<m;i++){
		cout<<mini.top()<<" ";
		mini.pop();
	}cout<<endl;
return 0;
}