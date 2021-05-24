#include <iostream>
#include <string>

using namespace std;

int main()
{
int a,b,g, count, chislo, max, sum;
count = 0;
max = 0;
cin >> a >> b;
for(int i = a; i <= b; i++){
    sum = 0;
    g = i;
    while(g!=0){
        sum += g%2;
        g/=2;
    }
    if (sum == 5 && i%2 == 0 && i%10 !=0)
    count ++;
    chislo = i;
    max = 1;


}
if(max >0)
    cout << count<< " " << chislo;
else
    cout << count << " " << max;
}
