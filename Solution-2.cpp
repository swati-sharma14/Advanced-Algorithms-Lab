#include <bits/stdc++.h>
using namespace std;


long long count(long long intial, vector<vector<long long>> yes, long long final){
    if(intial==final){
        return 0;
    }
    long long middle = (intial + final)/2;
    long long left = count(intial,yes,middle);
    long long right = count(middle+1,yes,final);
    
    long long inter_intersections = 0;
    for(long long i=intial; i<=middle; i++){
        long long count = 0;
        for(long long k = middle+1; k<=final; k++){
            if((yes[k][0]!=yes[i][0]) && (yes[k][1] < yes[i][1])){
                count ++;
            }
        }
        inter_intersections += count;
    }
    return left + right + inter_intersections;
}

int main()
{
    long long a;
    cin >> a;
    vector<vector<long long>> ports(a);
    
    for(long long i=0; i<a; i++){
        long long f,e;
        cin >> f >> e;
        ports[i] = {f,e};
    }
    sort(ports.begin(), ports.end());
    cout << count(0,ports,a-1);
}
