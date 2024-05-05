#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=1000066;

bool compare(const pair<string, string>& a, const pair<string, string>& b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}

void solve()
{
    int n;
    cin>>n;
    map<string, vector<pair<string, string>>>mp;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        mp[s.substr(6, 4)].pb({s.substr(3, 2), s.substr(0, 2)});
    }

    for(auto it:mp)
    {
        vector<pair<string, string>>v=it.ss;
        sort(v.begin(), v.end());
        for(auto iit:v)
        {
            cout<<iit.ss<<'/'<<iit.ff<<'/'<<it.ff<<endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        cout<<"Case #"<<tc<<':'<<endl;
        solve();
    }

    return 0;
}

