#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    // p = make_pair(2,"abc");
    p = {1,"xyz"};
    
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int,string>&p1=p;
    
    p1.first =3;
    
    cout<<p1.first<<" "<<p1.second<<endl;
    
    return 0;
}







#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p[3];
    p[0] = {1,3};
    p[1] = {4,2};
    p[2] = {8,7};
    
    for(auto &val : p){
        cout<<val.first++<<" "<<val.second++<<endl;
    }
    cout<<endl;
    
    for(auto &val : p){
        cout<<val.first<<" "<<val.second<<endl;
    }
    
    cout<<endl;
    
    swap(p[0],p[2]);
    
    for(int i = 0 ; i < 3 ; i++) {
         cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    
    return 0;
}
