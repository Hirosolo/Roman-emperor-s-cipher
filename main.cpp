#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("i.inp","r",stdin);
    freopen("o.out","w",stdout);
    string a;
    getline(cin,a);
    for(int j=0;j<26;j++)
    {
        for(int i=0;i<a.length();i++)
            if(a[i] != ' ')
                cout<<char( ((a[i] -65 +j) % 26) + 65 );
            else cout<<" ";
        cout<<endl;
    }
    return 0;
}
