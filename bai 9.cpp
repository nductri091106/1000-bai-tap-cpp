#include <iostream> 
using namespace std ;
int main () {
	int  s = 1 ;
	cout << " hay nhap vao so n = " << endl ; 
	int n ; 
	cin >> n ;
	for ( int  i = 1 ; i <= n ; i ++ ) {
		s *= i ; 
	}
	cout << " tich la " << s << endl ;
	return 0 ;
}
