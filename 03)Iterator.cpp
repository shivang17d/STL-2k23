#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={2,3,1,4,5};
    vector<int> :: iterator it;
    for(it = v.begin() ; it != v.end() ; ++it) {
        cout<<*it<<" ";
    }
    
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    for(it = v.begin() ; it != v.end() ; ++it) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    for(it = v.begin() ; it != v.end() ; ++it) {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}





#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={2,3,1,4,5};
    for(auto &val : v){
        cout<<val<<" ";
    }
    return 0;
}







#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    for(pair<int,int> &val : v){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<endl;
    
     for(auto &val : v){
        cout<<val.first<<" "<<val.second<<endl;
    }
    
    return 0;
}









#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};

    for(auto it = v.begin() ; it != v.end() ; ++it) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    for(auto it = v.begin() ; it != v.end() ; ++it) {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}






