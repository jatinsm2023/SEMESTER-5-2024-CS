#include <bits/stdc++.h>
using namespace std;

#define int long long
int evalsum(string s);
int evalterm(string s);
int valid_string(string s);
int balancepara(string s);
const int MAX = 1e5 + 5;
signed main()
{
    string input;
    string line = "";

    char arr[MAX];
    fgets(arr, MAX, stdin);
    string final = "";

    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] != ' ')
        {
            final += arr[i];
        }
        if (arr[i] == '\n')
        {
            break;
        }
    }

    if (!valid_string(final))
    {
        cout << "Invalid Expression Hai" << endl;
        return 0;
    }

    stack<char> st;
    for (int i = 0; i < final.size(); i++)
    {
        if (final[i] == ')')
        {
            string temp = "";
            while (st.top() != '(')
            {
                temp += st.top();
                st.pop();
            }
            st.pop();
            reverse(temp.begin(), temp.end());

            if (!valid_string(temp))
            {
                cout << "Invalid Expression Hai" << endl;
                return 0;
            }
            int ans = evalsum(temp);
            string ans_str = to_string(ans);
            for (int j = 0; j < ans_str.size(); j++)
            {
                st.push(ans_str[j]);
            }
        }
        else
        {
            st.push(final[i]);
        }
    }
    while (!st.empty())
    {
        line += st.top();
        st.pop();
    }
    reverse(line.begin(), line.end());
    if (!valid_string(line))
    {
        cout << "Invalid Expression Hai" << endl;
    }
    else
        cout << evalsum(line) << endl;
    return 0;
}

int evalsum(string s)
{
    int sum = 0;
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            sum += evalterm(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    sum += evalterm(temp);
    return sum;
}

int evalterm(string s)
{
    int prod = 1;
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            prod *= stoll(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    prod *= stoi(temp);
    return prod;
}

int valid_string(string s)
{
    if(!balancepara(s)){
        return 0;
    }
    int n = s.size();
    if (s[0] == '+' || s[0] == '*' || s[n - 1] == '+' || s[n - 1] == '*' || s[0] == ')' || s[n - 1] == '(')
    {
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '+' && s[i + 1] == '+')
        {
            return 0;
        }
        if (s[i] == '*' && s[i + 1] == '*')
        {
            return 0;
        }
        if (s[i] == '+' && s[i + 1] == '*')
        {
            return 0;
        }
        if (s[i] == '*' && s[i + 1] == '+')
        {
            return 0;
        }
        if (s[i] == '(' && s[i + 1] == ')')
        {
            return 0;
        }
    }

    return 1;
}

int balancepara(string s){
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            cnt++;
        }
        else if(s[i] == ')'){
            cnt--;
        }
        if(cnt < 0){
            return 0;
        }
    }
    if(cnt == 0){
        return 1;
    }
    return 0;
}