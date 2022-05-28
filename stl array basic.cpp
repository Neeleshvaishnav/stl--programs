#include<array>
#include<iostream>
using namespace std;
int main(){
	array<int,5> a={6,5,4,3,2};
	int size=a.size();
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	cout<<"Element at index 3-->"<<a.at(3);
	cout<<"Empty or not-->"<<a.empty()<<endl;
	cout<<"first element of arrr-->"<<a.front()<<endl;
	cout<<"last element of array-->"<<a.back()<<endl;
	return 0;
}
