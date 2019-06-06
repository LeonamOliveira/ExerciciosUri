#include <bits/stdc++.h>

using namespace std;

int main()
{
    int NUMBER;
    float VALUE, HOURS, SALARY;
    
    cin >> NUMBER >> HOURS >> VALUE;

    SALARY = HOURS * VALUE;
    
    cout << "NUMBER = " << NUMBER << endl;
    cout << fixed;
    cout << setprecision(2) << "SALARY = U$ " << SALARY << endl;
    
    return 0;
}

