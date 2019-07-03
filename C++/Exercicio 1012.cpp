#include<bits/stdc++.h>
using namespace std;
int main()
{
	double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo, pi = 3.14159;

	cin >> A >> B >> C;

	triangulo = (A*C) / 2;
	circulo = (C*C)*pi;
	trapezio = ((A + B)*C) / 2;
	quadrado = (B*B);
	retangulo = (A*B);

	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << triangulo << endl;
	cout << "CIRCULO: " << circulo << endl;
	cout << "TRAPEZIO: " << trapezio << endl;
	cout << "QUADRADO: " << quadrado << endl;
	cout << "RETANGULO: " << retangulo << endl;

	return 0;
}
