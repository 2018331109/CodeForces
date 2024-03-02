
//Round 930 Div-2, CodeForces, Problem: 'C', Interactive Problem Solution Code

void solve()
{   
    int n, mxp = 0; cin >> n;
    for (int i = 1; i < n; i++)
    {
        cout << '?' << " " << mxp << " " << mxp << " " << i << " " << i << endl;
        char ch; cin >> ch;
        if (ch == '<')
        {
            mxp = i;
        }    
    }
    int j = 0; vector<int> v; v.clear();
    for (int i = 0; i < n; i++)
    {
        cout << '?' << " " << mxp << " " << i << " " << mxp << " " << j << endl;
        char ch; cin >> ch;
        if (ch == '>')
        {
            j = i; v.clear(); v.pb(i);
        }
        else if (ch == '=')
        {
            v.pb(i);
        }
    }
    if (v.size() == 1)
    {
        cout << '!' << " " << mxp << " " << j << endl;
    }
    else
    {
        int mnp = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            cout << '?' << " " << mnp << " " << mnp << " " << v[i] << " " << v[i] << endl;
            char ch; cin >> ch;
            if (ch == '>')
            {
                mnp = v[i];
            }
        }
        cout << '!' << " " << mxp << " " << mnp << endl;
    }
}
