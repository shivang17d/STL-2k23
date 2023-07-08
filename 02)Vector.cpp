#include<bits/stdc++.h>
using namespace std;
void  printv(vector<int>&v){
    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printv(v);
    v.pop_back();
    printv(v);
    
    return 0;
}






#include<bits/stdc++.h>
using namespace std;
void  printv(vector<int>&v){
    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v(5);
    cout<<v.size()<<endl;
    printv(v);
    
    v.push_back(2);
    cout<<v.size()<<endl;
    printv(v);
    
    
    vector<int>v1(10,3);
    cout<<v1.size()<<endl;
    printv(v1);
    
    return 0;
}







#include<bits/stdc++.h>
using namespace std;
void  printv(vector<int>&v){
    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int>v1(10,3);
    cout<<v1.size()<<endl;
    printv(v1);
    
    vector<int>v2 = v1;  //copy
    v2.push_back(3);
    cout<<v1.size()<<endl;
    printv(v1);
    cout<<v2.size()<<endl;
    printv(v2);
    
    
    vector<int>&v3 = v1;  //reference
    v3.push_back(5);
    cout<<v1.size()<<endl;
    printv(v1);
    cout<<v3.size()<<endl;
    printv(v3);
    
    return 0;
}









#include<bits/stdc++.h>
using namespace std;
void  printv(vector<string>&v){
    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<string>v;
    int n ; 
    cin>>n;
     for(int i = 0 ; i < n ; ++i){
        string s;
        cin>>s;
        v.push_back(s);
    }
    printv(v);
    return 0;
}








#include<bits/stdc++.h>
using namespace std;
void  printv(vector<pair<int,int>>&v){
    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    vector<pair<int,int>>v={{1,2},{2,3},{3,1}};
    printv(v);
    
    cout<<endl;
    
    vector<pair<int,int>>v1;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++) {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    printv(v1);
  
    
    return 0;
}








#include<bits/stdc++.h>
using namespace std;
void  printv(vector<int>&v){
    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    int N;
    cin>>N;
    vector<int>v[N];
    for(int i = 0 ; i < N ; i++) {
        int n;
        cin>>n;
        for(int j = 0 ; j < n ; j++) {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i = 0 ; i < N ; i++) {
        printv(v[i]);
    }
  
    return 0;
}
















