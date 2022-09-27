#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
int con=0;
for(int i=0;i<s.length();i+=3){
    if(s[i]!='S')
    con++;
    if(s[i+1]!='O')
    con++;
    if(s[i+2]!='S')
    con++;
}
return con;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
