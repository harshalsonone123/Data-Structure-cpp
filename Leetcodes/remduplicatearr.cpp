#include <iostream>
using namespace std;

vector<int> v;
{
    v.push_back(x);
    v.pop_back(y);

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

map<int, int> m;
{
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
        m.insert()
    }

    for (auto x : m)
    {
        cout << x.first << " " << x.second;
    }
}

int main(int argc, char const *argv[])
{

    return 0;
}
