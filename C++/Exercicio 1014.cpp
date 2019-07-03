#include <bits/stdc++.h>
using namespace std;
int main()
{
	int dist;
	float comb, media;

	cin >> dist >> comb;
	media = dist / comb;

	cout << fixed << setprecision(3) << media << " km/l" << endl;
	
	return 0;
}

