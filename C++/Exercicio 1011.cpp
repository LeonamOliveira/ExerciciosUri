#include<bits/stdc++.h>
using namespace std;
int main()
{
    double volume, raio, pi = 3.14159;
    
    cin >> raio;
    volume = (4/3.0) * pi * pow(raio,3);
    
    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
    
    return 0;
}
