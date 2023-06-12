# include <iostream> 
using namespace std ;
int main () {
	int x , n , v = 1 ;
	float s= 0 , t = 1 ;
	cout << " hay nhap vao so nguyen x = " ;
	cin >> x ;
	do {
		cout << " hay nhap vao so nguyen n = " ;
		cin >> n ;
		if ( n < 1 ) {
			cout << " hay nhap lai so nguyen n sao cho n lon hon hoac bang 1 " << endl ;
		}
	} while ( n < 1 ) ;
	for ( float i = 1 ; i <= n ; i++ ) {
		v *= x ;
		t *= i ;
		s += ( v / t ) ;
	}
	cout << " tong la s = " << s << endl ; 
	return 0 ;
}
