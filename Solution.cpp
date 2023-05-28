#include <bits/stdc++.h>
using namespace std;
 
bool check(string a, string b){
    if(a==b){
        return true;
    }
    if(a.length()%2==0){
        string c = a.substr(0,(a.length()/2));
        string d = b.substr(0,a.length()/2);
        
        string e = a.substr(a.length()/2, a.length()/2);
        string f = b.substr(a.length()/2, b.length()/2);
        
        return ((check(c,d) && check(e,f)) || (check(c,f) && check(e,d)));
    }
    else{
        return false;
    }
}
int main()
{
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        int b;
        cin >> b;
        string c,d;
        cin >> c >> d;
        if(check(c,d)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
