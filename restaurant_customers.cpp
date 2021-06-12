#include"bits/stdc++.h"
#define fastio ios_base::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ict int t; cin >> t
#define lct ll t; cin >> t;
#define in(a) int a; cin >> a
#define ln(a) ll a; cin >> a
#define FOR(i,n) for (ll i = 0; i < n; ++i) 
#define ROF(i,n) for (ll i=n-1; i>=0 ; --i)
#define FORU(i,k,n) for (ll i = k; i <= n; ++i) 
#define ROFU(i,k,n) for (ll i = k; i >= n; --i)
#define pi 3.1415926535897932385
#define MOD 1000000007
#define db double
#define ff first
#define ss second 
#define mp make_pair 
#define pa pair <ll,ll>
#define vec vector<ll>
#define vecpa vector<pa>
#define vec2D vector <ll<ll>>
#define que queue<ll>
#define deq deque<ll> 
#define stk stack<ll>
#define iterate vector<ll>::iterator
#define pub push_back
#define pob pop_back
#define pof pop_front
#define puf push_front
#define emp emplace_back
#define all(a) a.begin(),a.end()
#define arr(a,n) for(ll i=0;i<n;i++){ cin>>a[i]; }
#define dbgArr(a,n) cout<<"Array "<<#a<<endl; for(ll i=0 ; i<n ; i++) cout<<a[i]<<" "; cout<<endl;
#define maxE(a,n) *max_element(a.begin(),a.begin()+n)
#define minE(a,n) *min_element(a.begin(),a.begin()+n)
#define umap unordered_map
#define pq priority_queue
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
ll fpow(ll x, ll y, ll p = MOD) {
    x = x%p; ll sum = 1; while(y) {
        if(y&1)sum = sum*x; sum %= p; y = y>>1; x = x*x; x %= p;
    }return sum;
}
ll fact[2000007] = {0};
void facto() {
    fact[0] = 1; fact[1] = 1; for(int i = 2; i < 2000007; i++)fact[i] = (fact[i-1]*i)%MOD;
}
ll ncr(ll n, ll r) {
    if(r>n)return 0;
    ll res = 1; res = fact[n]; res = (res*(fpow(fact[r], MOD-2)))%MOD; res = (res*(fpow(fact[n-r], MOD-2)))%MOD; return res;
}
ll npr(ll n, ll r) {
    if(r>n)return 0;
    ll res = 1; res = fact[n]; res = (res*(fpow(fact[n-r], MOD-2)))%MOD; return res;
}
ll modmul(ll x, ll y) {
    return (x*y)%MOD;
}
ll modadd(ll x, ll y) {
    return (x+y)%MOD;
}
ll modsub(ll x, ll y) {
    return (x-y+MOD)%MOD;
}
const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};

using namespace std;

void solve(){
    
    ll n;
    cin >> n;
    vector <ll> a(n), b(n);

    FOR(i,n){
        cin >> a[i];
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll i=0, j =0;

    ll cnt = 0;
    ll max = INT64_MIN;
    
    while(i < n){
        if(a[i] > b[j]){
            break;
        }
        i++;
        cnt++;
    }

    max = cnt;

    while(i<n && j<n){
        if(a[i] > b[j]){
            j++;
            cnt--;
        }

        else{
            i++;
            cnt++;
            max  = (max>cnt) ? max : cnt;
        }
    }

    cout << max;

}

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
