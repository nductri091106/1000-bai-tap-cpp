# include <iostream> 
using namespace std ;
int main () {
	int x , n , s = 0 , t = 1 ;
	cout << " hay nhap vao so nguyen x = " ;
	cin >> x ;
	do {
		cout << " hay nhap vo so nguyen n = " ;
		cin >> n ;
		if ( n <= 0 ) {
			cout << " hay nhap lai so nguyen n sao cho n lon hon hoac bang 1 " << endl ;
		}
	} while ( n <= 0 ) ;
	for ( int i = 1 ; i <= n ; i++ ) {
		t *= x*x ; 
		s += t ;
	}
	cout << " tong la s = " << s << endl ; 
	return 0 ;
}
