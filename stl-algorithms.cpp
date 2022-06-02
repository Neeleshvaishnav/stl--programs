#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"find 6 in vector-->"<<binary_search(v.begin(),v.end(),6)<<endl;
    
    cout<<"lower bound-->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper_bound-->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    
    int a=5;
    int b=7;
    
    cout<<"max-->"<<max(a,b);    
    cout<<"min-->"<<min(a,b);
    
    swap(a,b);
    cout<<"a-->"<<a<<" "<<"b-->"<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"reverse stringis-->"<<abcd<<endl;
    
    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i : v){
    	cout<<i<<" "<<endl;
	}
    
    return 0;
}
