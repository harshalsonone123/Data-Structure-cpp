#include <bits/stdc++.h>
using namespace std;

class BrowserHistory
{
public:
    BrowserHistory(string homepage)
    {
        history[++indx] = homepage;
        size = indx + 1;
    }

    void visit(string url)
    {
        history[++indx] = url;
        size = indx + 1;
    }

    string back(int steps)
    {
        indx = max(0, indx - steps);
        return history[indx];
    }

    string forward(int steps)
    {
        indx = min(size - 1, indx + steps);
        return history[indx];
    }

private:
    string history[5005];
    int indx = -1, size = 0;
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */