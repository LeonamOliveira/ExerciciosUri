#include <bits/stdc++.h>

using namespace std;

int main()
{
	int codPeca_1, numPeca_1,  codPeca_2, numPeca_2 ;
	double valueUni_1, valueUni_2, total;

	cin >> codPeca_1 >> numPeca_1 >> valueUni_1;

	cin >> codPeca_2 >> numPeca_2 >> valueUni_2;

	total = (numPeca_1 * valueUni_1) + (numPeca_2 * valueUni_2);

	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
	
	return 0;
}
