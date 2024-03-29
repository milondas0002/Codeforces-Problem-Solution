#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string f="AM";
        int h=stoi(s.substr(0, 2));
        if(h>=12) f="PM";
        if(h==0) h=12;
        if(h>12) h-=12;
        int m=stoi(s.substr(3, 2));
        if(h<10) cout << "0";
        cout << h << ":";
        if(m<10) cout << "0";
        cout << m << " " << f <<"\n";
    }
    return 0;
}