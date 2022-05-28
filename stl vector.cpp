#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	cout<<"capacity-->"<<v.capacity()<<endl;
	v.push_back(33);
	cout<<"capacity-->"<<v.capacity()<<endl;
	v.push_back(44);
	cout<<"capacity-->"<<v.capacity()<<endl;
	v.push_back(77);
	cout<<"capacity->"<<v.capacity()<<endl;
	cout<<"index no 3-->"<<v.at(2)<<endl;
	cout<<"first element-->"<<v.front()<<endl;
	cout<<"last element-->"<<v.back()<<endl;
	cout<<"Before backing"<<endl;
	for(int i : v){
		cout<<i<<" ";
	}
	cout<<endl;
	v.pop_back();
	v.pop_back();
	cout<<"after pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"before clear the vector size is-->"<<v.size()<<endl;
	v.clear();
	cout<<"after clear size of vector-->"<<v.size()<<endl;
	
		return 0;
	}