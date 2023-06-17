# include <iostream>
# include <math.h>
using namespace std ;
float giaithua( float n ) {
	float giaithua = 1 ;
	if ( n == 0 ) {
		return 1 ; 
	}  
	else if ( n == 1 ) {
		return 1 ; 
	} 
	for ( int i = 1 ; i <= n ; i++ ) {
		giaithua *= i ;
	} 
	return giaithua ;
}
float phu( float n ) {
	int phu = 0 ;
	phu += (2*n)+1 ;
	return phu ; 
}
int main () {
	float s = 1 ; 
	int x , n , t ;
	do {
		cout << " hay nhap vao so nguyen x = " ;
		cin >> x ;
		if ( x < 0 ) {
			cout << " hay nhap lai so nguyen x sao cho x > 1 " << endl ;
		}
	} while ( x  < 1 ) ;
	do {
		cout << " hay nhap vao so nguyen x = " ;
		cin >> n ;
		if ( n < 0 ) {
			cout << " hay nhap lai so nguyen n sao cho n > 1 " << endl ;
		}
	} while ( n < 1 ) ;
	for ( int i = 0 ; i <= n ; i ++ ) {
		 t = phu(i) ;
		 s += (pow (x,t))/(giaithua(t)) ;
		 t = 0;
	}
	cout << " tong la " << s << endl ; 
}