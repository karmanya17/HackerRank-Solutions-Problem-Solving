#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int i=0,c=0;
    char ch;
    for(i=0;i<s.length();i++)
    {
        ch=s[i];
        if(isupper(ch))
        c++;
    }

return c+1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
