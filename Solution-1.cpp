#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    vector<long long> from(a);
    vector<long long> to(a);
    
    for(long long i=0; i<a; i++){
        long long f,e;
        cin >> f >> e;
        from[i] = f;
        to[i] = e;
    }
    long long count = 0;
    for(long long i=0; i<a-1; i++){
        for(long long j=i+1; j<a; j++){
            if((from[i]!=from[j]) && (to[i]!=to[j])){
                long long k = to[j] - from[j];
                long long l = to[i] - from[i];
                long long c = from[j] - from[i];
                long long d = to[j] - to[i];
                if((c*d<0)){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
