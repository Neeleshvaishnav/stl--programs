#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,string> m;
	m[1]="Neelesh";
	m[2]="vaishnav";
	m[12]="coder";
	
	m.insert({4,"engineer"});
	cout<<"before erase-->"<<endl;
	for(auto i : m){
		cout<<i.first<<" "<<i.second<<" "<<endl;
	}cout<<endl;
	cout<<"count 12-->"<<m.count(12)<<endl;
	cout<<"count 13-->"<<m.count(13)<<endl;
	m.erase(12);
	cout<<"after erase-->"<<endl;
	for(auto i : m){
		cout<<i.first<<" "<<i.second<<" "<<endl;
	}cout<<endl;
	auto it=m.find(1);
	for(auto i=it;i!=m.end();i++){
		cout<<(*i).first<<endl;
	}
	return 0;
}