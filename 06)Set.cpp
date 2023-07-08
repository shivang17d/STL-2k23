#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> s;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++) {
        string str;
        cin>> str;
        s.insert(str);
    }
    cout<<"Output"<<endl;
    for(auto &val : s) {
        cout<<val<<endl;
    }

    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++) {
        string str;
        cin>> str;
        s.insert(str);
    }
    cout<<"Output"<<endl;
    for(auto &val : s) {
        cout<<val<<endl;
    }

    return 0;
}





#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<string> s;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++) {
        string str;
        cin>> str;
        s.insert(str);
    }
    cout<<"Output"<<endl;
    for(auto &val : s) {
        cout<<val<<endl;
    }

    return 0;
}









#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> s;
    s.insert("abc");
    s.insert("xyz");
    s.insert("def");
    s.insert("abc");
    s.insert("abc");
    s.insert("abc");
    
    auto it = s.find("abc");
    if(it != s.end()){
        s.erase(it);
    }
    
    cout<<"Output"<<endl;
    for(auto &val : s) {
        cout<<val<<endl;
    }
    
    s.erase("def");
   
    cout<<"Output"<<endl;
    for(auto &val : s) {
        cout<<val<<endl;
    }

    return 0;
}
