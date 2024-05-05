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

void solve()
{
    int n;
    cin>>n;
    string base="..............................";
    cout<<base<<endl<<base<<endl;
    //cout<<base<<endl<<base<<endl;
    n%=30;
    string s="T--------H";
    if(n<=10)
    {
        int i=1;
        while(i<=n+10)
        {
            cout<<'.';
            i++;
        }
        i+=10;
        cout<<s;
        while(i<=30)
        {
            cout<<'.';
            i++;
        }
    }
    else if(n<=19)
    {
        int j=n-10;
        int i=1;
        while(i<j)
        {
            cout<<'-';
            i++;
        }
        cout<<'H';
        i++;
        j+=20;
        while(i<=j)
        {
            cout<<'.';
            i++;
        }
        cout<<'T';
        i++;
        while(i<=30)
        {
            cout<<'-';
            i++;
        }
    }
    else if(n<=29)
    {
        int i=1, j=n-20;
        while(i<=j)
        {
            cout<<'.';
            i++;
        }
        cout<<s;
        i+=10;
        while(i<=30)
        {
            cout<<'.';
            i++;
        }
    }
    cout<<endl;

    cout<<base<<endl<<base<<endl;
    //cout<<base<<endl<<base<<endl;
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

