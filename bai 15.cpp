# include <iostream> 
using namespace std ;
int main () {
	int  n ;
	float s = 0 , t = 0 ;
	do {
		cout << " hay nhap vao so nguyen n = " ;
		cin >> n ;
		if ( n < 1 ) {
			cout << " hay nhap vao lai so n sao cho n lon hon hoac bang 1 " << endl ;
		}
	} while ( n < 1 ) ;
	for ( float  i = 1 ; i <= n ; i ++ ) {
		t += i ;
		s += 1/t ;
	}
	cout << " tong la s = " << s << endl ;
	return 0 ;
} 
