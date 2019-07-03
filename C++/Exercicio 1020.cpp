#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num, dia, mes, ano, aux;
	cin >> num;

	dia = mes = ano = aux = 0;
	
	while (aux < num) {
		dia++;
		aux++;
		if (dia >= 30) {
			dia = 0;
			mes++;
		}
		else if (mes >= 12 && dia >= 5) {
			dia = mes = 0;
			ano++;
		}
	}

	cout << ano << " ano(s)" << endl;
	cout << mes << " mes(es)" << endl;
	cout << dia << " dia(s)" << endl;
	return 0;
}
