#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
char maxlen, curlen;
int m;
string s;
int n =1;
ifstream Fin;
Fin.open("input.txt");
getline(Fin, s);
maxlen = s[0];
curlen = s[0];
m = 0;
for(int i =1; i < s.size(); i++){
    if( s[i] == s[i-1]){
        n++;
    }
    else
    {
        if(n >m)
        {
            m = n;
            maxlen = s[i-1];
        }
        n=1;
    }
    curlen = s[0]
}
if((n>m)){
    m = n;
    maxlen = curlen;
}
cout << maxlen << "" << m;
}
