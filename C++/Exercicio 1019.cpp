#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, horas, min, seg, aux;
	cin >> n;
	seg = aux = min = horas = 0;
	while (aux < n) {
		seg++;
		if (seg >= 60) {
			seg = 0;
			min++;
		} else if (min >= 60) {
			min = 0;
			horas++;
		}
		aux++;
	}
	cout << horas << ":" << min << ":" << seg << endl;
	return 0;
}
