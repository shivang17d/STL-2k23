#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    
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
