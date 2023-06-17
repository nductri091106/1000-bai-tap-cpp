# include <iostream> 
using namespace std ;
int main () {
	int n ;
	do {
		cout << " hay nhap vao so nguyen duong n = " ;
		cin >> n ;
		if ( n <= 0 ) {
			cout << " hay nhap nhap lai so nguyen duong n sao cho n > 0 " << endl ;
		} 
	} while ( n <= 0 ) ;
	cout << " uoc cua so nguyn duong " << n << " la: " << endl ; 
	for ( int i = 1 ; i <= n ; i ++ ) {
		if ( ( n % i ) == 0 ){
			cout << i << endl ; 
		}
	}
	return 0 ;	
}