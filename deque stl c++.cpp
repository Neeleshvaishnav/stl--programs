#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> d;
	d.push_front(1);
	d.push_back(2);
	d.push_back(5);
	for(int i:d){
		cout<<i<<" ";
	}
//	d.pop_back();
	cout<<endl;
	cout<<" frist index of deque-->"<<d.at(1)<<endl;
	cout<<"forny-->"<<d.front()<<endl;
	cout<<"back-->"<<d.back()<<endl;
	cout<<"deque empty or not"<<d.empty()<<endl;
	cout<<"before erase-->"<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	cout<<"after erase-->"<<d.size()<<endl;
	return 0;
	
	}