#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    double salary_fixed, vendas, total;

    cin >> name >> salary_fixed >> vendas;

    total = (vendas * 0.15) + salary_fixed;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;
    
    return 0;
}

