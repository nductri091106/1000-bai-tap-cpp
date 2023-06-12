# include <iostream> 
using namespace std ;
int main (){
	int n , s = 1  , t = 1  ;
	do {
		cout << " hay nhap vao so tu nhien n = " ;
		cin >> n ;
		if ( n != 0 ) {
			if ( n < 0 ) {
				cout << " hay nhap lai so tu nhien n sao cho n lon hon hoac bang 0 " << endl ;
			}
			else if ( n = 0 ) {
				cout << " s = 0 " << endl ;
			} 
		}  
	} while ( n < 0 ) ;
	if ( n = 1 ) {
		cout << " s = 1 " << endl ;
	}
	else {
		if ( n > 1) { 
			for ( int i = 2 ; i <= n ; i++ ) {
				t *= i ;
				s += t ;
			}
			cout << " s = " << s << endl ; 
		}
	}
	return 0 ;
}  
