//...START BY DOING WHAT IS NECESSARY, THEN WHAT IS POSSIBLE AND SUDDENLY YOU ARE DOING THE IMPOSSIBLE... 
#include <bits/stdc++.h>
using namespace std;typedef long long ll;
#define FAST_FURIER ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define sorta(v)        sort(v.begin(), v.end())
#define sortd(v)        sort(v.begin(), v.end(), comp)
#define rep(i,a,N)      for(ll i=a;i<N;i++)
#define rrep(i,a,N)     for(ll i=a;i>N;i--)
#define print(v)        for(ll ite=0;ite<v.size();ite++){cout<<v[ite]<<' ';}cout<<endl;
#define M 1000000007
 
bool comp(ll x,ll y){
    return x > y;
}
 
/*...............code starts here................*/
// C is first won in M
 
void solve(){
    ll m,n,k;
    cin >> n;
    int arr[n+1][4];
    for(int i = 1; i < n+1; i++) cin >> arr[i][1] >> arr[i][2] >> arr[i][3];
    int dp[n+1][4];
    dp[1][1] = arr[1][1];
    dp[1][2] = arr[1][2];
    dp[1][3] = arr[1][3];
    for(int i = 2; i <= n; i++){
        dp[i][1] = arr[i][1] + max(dp[i-1][2], dp[i-1][3]);
        dp[i][2] = arr[i][2] + max(dp[i-1][1], dp[i-1][3]);
        dp[i][3] = arr[i][3] + max(dp[i-1][1], dp[i-1][2]);
    }
    cout << max(dp[n][1], max(dp[n][2], dp[n][3]));
}
int main() {
    FAST_FURIER;
    int tt=1;
    // cin >> tt;
    while(tt--){
        solve();
    }
}
 