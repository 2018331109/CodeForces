#include<bits/stdc++.h>
using namespace std;
int n, q;
const int N=1e6+9;
struct Node
{
    int val;
    int level;
};

struct Node tree[4*N];
int a[N];

void build(int node, int s, int e)
{
//    if(s>e)
//    {
//        return;
//    }
    if(s==e)
    {
        tree[node].val=a[s];
        tree[node].level=1;
        return;
    }

    int m=(s+e)/2;

    build(2*node, s, m);
    build(2*node+1, m+1, e);
    tree[node].level=tree[2*node].level+1;

    if(tree[node].level & 1)
    {
        tree[node].val=tree[2*node].val ^ tree[2*node+1].val;
    }
    else
    {
        tree[node].val=tree[2*node].val | tree[2*node+1].val;
    }

}

void update(int node, int s, int e, int ind, int val)
{
//    if(s>e)
//    {
//        return;
//    }
    if(s==e)
    {
        a[ind]=val;
        tree[node].val=val;
        return;
    }
    int m=(s+e)/2;
    if(ind<=m)
    {
        update(2*node, s, m, ind, val);
    }
    else
    {
        update(2*node+1, m+1, e, ind, val);
    }

    if(tree[node].level & 1)
    {
        tree[node].val=tree[2*node].val ^ tree[2*node+1].val;
    }
    else
    {
        tree[node].val=tree[2*node].val | tree[2*node+1].val;
    }
}

signed main()
{
    cin>>n>>q;
    n=(1<<n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    build(1, 0, n-1);
    for(int i=0; i<q; i++)
    {
        int ind, val;
        cin>>ind>>val;
        ind-=1;
        update(1, 0, n-1, ind, val);

        cout<<tree[1].val<<endl;

        //cout<<res<<endl;
    }
}
