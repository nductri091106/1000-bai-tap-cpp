# include <iostream> 
using namespace std ; 
int main () {
	int x , n ; 
	int s = 1 ; 
	cout << " hay nhap vao so muon tinh x = " << endl ;
	cin >> x ; 
	do {
		cout << " hay nhap vao so mu n cua so " << x << " n = " << endl ;
		cin >> n ;
		if ( n< 0 ) {
			cout " hay nhap vao so mu n cua so x sao cho n >= 0 " << endl ;
		}
		else if ( n = 0 ) {
			cout << x << " mu " << n << " co gia tri = 0 " << endl ; 
		}
	} while  ( n < 0 ) ;
	for ( int i = 0  ; i <= n ; i ++ ) {
		s*=x ;
	}
	cout << x << " mu " << n << " co gia tri = " << s << endl ; 
	return 0 ; 
}
