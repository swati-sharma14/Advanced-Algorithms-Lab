#include <bits/stdc++.h>
using namespace std;

int mam = 998244353;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> colors(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> colors[i][0] >> colors[i][1];
    }
    vector<vector<int>> dp(n+1,{0,0});
    dp[0][0] = 1;
    dp[0][1] = 1;
    for(int i=1; i<n; i++){
        if(colors[i][0]!=colors[i-1][0]){
            if(colors[i][0]!=colors[i-1][1]){
                dp[i][0] = (dp[i-1][0] + dp[i-1][1])%mam;
            }
            else{
                dp[i][0] = (dp[i-1][0])%mam;
            }
        }
        else{
            if(colors[i][0]!=colors[i-1][1]){
                dp[i][0] = (dp[i-1][1])%mam;
            }
            else{
                dp[i][0] = 0;
            }
        }
        if(colors[i][1]!=colors[i-1][0]){
            if(colors[i][1]!=colors[i-1][1]){
                dp[i][1] = (dp[i-1][0] + dp[i-1][1])%mam;
            }
            else{
                dp[i][1] = (dp[i-1][0])%mam;
            }
        }
        else{
            if(colors[i][1]!=colors[i-1][1]){
                dp[i][1] = (dp[i-1][1])%mam;
            }
            else{
                dp[i][1] = 0;
            }
        }
        if(dp[i][0]==0 && dp[i][1]==0){
            cout << "0" << endl;
            return 0;
        }
    }
    cout << (dp[n-1][0] + dp[n-1][1])%mam << endl;
    return 0;
}
