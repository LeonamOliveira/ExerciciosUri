#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A,B,MEDIA;
    
	cin >> A >> B;
    
    MEDIA = ((A * 3.5) + (B * 7.5))/11;
	
	cout << fixed;
    cout << setprecision(5) << "MEDIA = " << MEDIA << endl;
    
	return 0;
}
