#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int d=0,lc=0,uc=0,s=0;
    for(int i=0;i<n;i++){
        if(isupper(password[i]))
        uc++;
       else if(isdigit(password[i]))
        d++;
        else if(islower(password[i]))
        lc++;
        else
        s++;
    }
    if(uc>0)uc=1;
    if(lc>0)lc=1;
    if(d>0)d=1;
    if(s>0)s=1;
    int total=4-(lc+uc+d+s);
    if(n+total<6)
    return 6-n;
    else
    return total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
