#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &v)
{
    int i=0,j=v.size()-1;
    int ans=1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int i=0,j=n-1;
        int A,B;
        int flag=false;
        while(i < j)
        {
            if(a[i]!=a[j])
            {
                flag=true;
                A=a[i];
                B=a[j];
                break;
            }
            i++;
            j--;
        }
        if(flag==false) {
            cout<<"YES"<<endl;
        }
        else
        {
            vector<int> v1,v2;
            for(int i=0; i<n; i++)
            {
                if(a[i]==A) continue;
                v1.push_back(a[i]);
            }
            for(int i=0; i<n; i++)
            {
                if(a[i]==B) continue;
                v2.push_back(a[i]);
            }
            int res1=solve(v1);
            int res2=solve(v2);
            if(res1== true  || res2==true) {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}