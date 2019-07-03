#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tempo, vel_med;
	double dist;

	cin >> tempo >> vel_med;
	dist = vel_med * tempo;
	
	cout << fixed << setprecision(3) << (dist/12) << endl;
	return 0;
}
