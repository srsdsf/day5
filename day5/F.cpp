#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n; i++)
        {
            cin>>m;
            v.push_back(m);
        }
        int x;
        string s;
        for(int i=0; i<n;i++)
        {    
            cin>>x;
            cin>>s;
            for(auto c: s)
            {
                if(c=='U')
                {
                   if(v[i]==0) v[i]=9;
                   else v[i]--;
                }
                else
                {
                    if(v[i]==9) v[i]=0;
                    else v[i]++;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
}