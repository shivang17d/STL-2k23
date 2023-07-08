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
