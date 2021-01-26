#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.

int main()
{

    string s;
    getline(cin, s);
    int n=s.length(),i,j,c=0;
    int row=round(sqrt(n)),column;
    if(row>=sqrt(n))
    column=row;
    else
    column=row+1;

    for(i=0;i<column;i++)
    {
        for(j=i;j<n;j+=column)
        {
            printf("%c",s[j]);
        }
        printf(" ");
    }



   return 0;
}
