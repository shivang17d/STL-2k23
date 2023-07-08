#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "yhds";
    m.insert({7,"dju"});
    m[5] = "bhgf";
    
    cout<<m.size()<<"\n\n\n";
    
    map<int,string> :: iterator it;
    for(it = m.begin() ; it != m.end() ; ++it){
        cout<<(*it).first << " "<<(*it).second<<endl;
    }
    
    cout<<endl; 
    
    for(auto &val : m){
        cout<<val.first << " "<<val.second<<endl;
    }
    
    
    cout<<"\n\n\n";
    
    auto itr = m.find(3);
    if(itr == m.end()) {
        cout<<"Not found"<<endl;
    }
    else{
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    
    
    cout<<"Erase\n\n\n";
        
    m.erase(3);
      
  
    for(auto &val : m){
        cout<<val.first << " "<<val.second<<endl;
    }
    
     cout<<"Erase\n\n\n";
    
    auto itp = m.find(7);
    if(itp != m.end()){
        m.erase(itp);
    }
    
    for(auto &val : m){
        cout<<val.first << " "<<val.second<<endl;
    }
    
    m.clear();
    cout<<m.size();
  
  
    
    return 0;
}









#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    
    int n ;
    cin>>n;
    for(int i = 0 ; i < n ; ++i) {
        string s;
        cin>>s;
        m[s]++;
    }
    
    for(auto val : m){
        cout<<val.first<<" "<<val.second<<endl;
    }
   
    return 0;
}
