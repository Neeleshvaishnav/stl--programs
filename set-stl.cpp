#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> s;
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(1);
	s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(2);
    
    for(auto i : s){
    	cout<<i<<endl;
	}cout<<endl;
	set<int>::iterator it=s.begin();
	it++;
//	it++;
	s.erase(it);
	for(auto i : s){
		cout<<i<<endl;
	}
	cout<<"5 is presnt or no -->"<<s.count(5)<<endl;
	
    set<int>::iterator itr=s.find(5);
    set<int>::iterator p=s.end();
  
    for(auto it=itr;it!=p;it++){
    	cout<<*it<<endl;
	}
	return 0;
}