//...START BY DOING WHAT IS NECESSARY, THEN WHAT IS POSSIBLE AND SUDDENLY YOU ARE DOING THE IMPOSSIBLE... 
#include <bits/stdc++.h>
using namespace std;typedef long long ll;
#define FAST_FURIER ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ppb pop_back
#define mk make_pair
#define sorta(v)        sort(v.begin(), v.end())
#define sortd(v)        sort(v.begin(), v.end(), comp)
#define rep(i,a,N)      for(ll i=a;i<N;i++)
#define rrep(i,a,N)     for(ll i=a;i>N;i--)
#define print(v)        for(ll ite=0;ite<v.size();ite++){cout<<v[ite]<<' ';}cout<<endl;
#define mem(v,a) 		 memset(v, a, sizeof(v))
#define M 1000000007
bool comp(ll x,ll y)
{
    return x > y;
}
 
/*...............code starts here................*/
// C is first won in M
int dp[100006][2]; 
ll m,n,k;
vector<int> arr;
int calc(int val, int choice){
    int &res = dp[val][choice];
    if(res != -1)
    return 1 - res;
    res = 0;
    rep(i,0,n){
        if(arr[i] <= val)
        res = res or calc(val-arr[i], 1-choice);
    }
    return 1-res;
}
void solve(){
    cin >> n >> k;
    arr.resize(n);
    rep(i,0,n) cin >> arr[i];
    int a=0;
    mem(dp, -1);
    rep(i,0,n){
        if(arr[i]<=k){
            a += calc(k-arr[i],1);
        }
    }
    if(a==0)cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}
int main() {
    FAST_FURIER;
    int tt=1;
    // cin >> tt;
    while(tt--){
        solve();
    
    }
}
 
 
 
 
 
// g++ -std=c++17