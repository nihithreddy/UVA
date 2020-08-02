#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repk(i,a,b,k) for(int i=(a);i<(b);i+=k)
#define forn(i,n) for(int i=(0);i<(n);i++)
#define all(c) (c).begin(),(c).end()
#define clear(c) (c).clear()
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pii> vpii;
const int MXN = 600;
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        string x,y;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif // ONLINE_JUDGE
        while(cin>>x){
            cin>>y;
            reverse(x.begin(),x.end());
            reverse(y.begin(),y.end());
            int a[MXN];
            memset(a,0,sizeof(a));
            int n = x.size(),m=y.size();
            forn(i,n){
                forn(j,m){
                    a[i+j]+=(x[i]-'0')*(y[j]-'0');
                }
            }
            forn(i,MXN-1){
                a[i+1]+=a[i]/10;
                a[i]%=10;
            }
            int i = MXN-1;
            while(i>0&&a[i]==0) i--;
            for(;i>=0;i--) cout<<a[i];
            cout<<"\n";
        }

	return 0;
}
