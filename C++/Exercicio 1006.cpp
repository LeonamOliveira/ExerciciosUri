#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A,B, C,MEDIA;
    
	cin >> A >> B >> C;
    
	MEDIA = ( (A * 2) + (B * 3) + (C * 5) )/10;
    
	cout << fixed;
    cout << setprecision(1) << "MEDIA = " << MEDIA << endl;
    
	return 0;
}

