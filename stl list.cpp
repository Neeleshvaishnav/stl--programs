#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	list<int> n(5,99);
		for(int i:n){
		cout<<i<<" ";
	}cout<<endl;
	l.push_back(2);
	l.push_front(4);
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
    l.push_back(7);
	cout<<"front"<<l.front()<<endl;
	cout<<"back"<<l.back()<<endl;
	l.erase(l.begin());
	cout<<"after erase-->"<<l.size()<<endl;
	return 0;
}