#include <bits/stdc++.h>
using namespace std;

long long intersections(vector<vector<long long>> left, vector<vector<long long>> right){
    long long i=0,j=0,count=0;
    while(i<left.size() && j<right.size()){
        if(left[i][0] > right[j][0] && (left[i][1]!=right[j][1])){
            count += (left.size() - i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}

long long count(long long intial, vector<vector<long long>> yes, long long final){
    if(intial == final){
        return 0;
    }
    if(final - intial == 1){
        if(yes[intial - 1][0]!=yes[final - 1][0] && (yes[final - 1][1] < yes[intial - 1][1])){
            return 1;
        }
        return 0;
    }
    long long middle = (intial + final)/2;
    long long left = count(intial,yes,middle);
    long long right = count(middle+1,yes,final);

    vector<vector<long long>> lnums(middle - intial + 1,{0,0});
    vector<vector<long long>> rnums(final - middle,{0,0});
    
    for(int i=intial; i<=middle; i++){
        vector<long long> a = {yes[i-1][1],yes[i-1][0]};
        lnums[i-intial] = a;
    }
    sort(lnums.begin(), lnums.end());
    
    int s = 0;
    for(int i=middle+1; i<=final; i++){
        vector<long long> a = {yes[i-1][1],yes[i-1][0]};
        rnums[s] = a;
        s++;
    }
    sort(rnums.begin(), rnums.end());
    
    long long inter = intersections(lnums,rnums);
    return left + right + inter;
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
    cout << count(1,ports,a);
}
