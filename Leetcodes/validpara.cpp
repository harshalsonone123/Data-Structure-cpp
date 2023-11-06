#include <iostream>
#include <stack>
using namespace std;

bool isbalancedexp(string exp)
{
    stack<char> stk;
    char x;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            stk.push(exp[i]);
            continue;
        }
        if (stk.empty())
            return false;
        switch (exp[i])
        {
        case ')':
            x = stk.top();
            stk.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':
            stk.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':
            stk.pop();
            if (x == '{' || x == '(')
                return false;
            break;
        }
    }
    return (stk.empty());
}

int main(int argc, char const *argv[])
{
    string expression = "()[)](){}]";
    if (isbalancedexp(expression))
        cout << "This is Balanced one" << endl;
    else
        cout << "This is not balnace one" << endl;

    return 0;
}
