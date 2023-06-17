#include <iostream> 
#include <math.h>
using namespace std ; 
float giaithua ( float u ) {
	float giaithua = 1 ;
	if ( u == 0  ) {
		return 1 ;
	} 
	else if ( u == 1 ) {
		return 1 ;
	}
	for ( int i = 1 ; i <= u ; i ++ ) {
		giaithua *= i ;
	}
	return giaithua ;
}
int main () { 
	float s = 0 ;
	int x , n ; 
	do {
		cout << " hay nhap vao so nguyen x = " ;
		cin >> x ;
		if ( x < 0) {
			cout << " hay nhap lai so nguyen sao cho x > 0  " << endl ;
		}
	} while ( x <= 0 ) ;
	do {
		cout << " hay nhap vao so nguyen n = " ;
		cin >> n ;
		if ( n <= 0) {
			cout << " hay nhap lai so nguyen sao cho n > 0  " << endl ;
		}
	} while ( n < 0 ) ;
	for ( float i = 0 ; i <= 2*n ; i +=2 ) {
		s += (pow ( x, i )) / (giaithua(i)) ;
	}
	cout << " tong la s = " << s << endl ; 
	return 0 ;
}
