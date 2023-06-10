# include <iostream>  
using namespace std ;
int main () { 
    int s = 0 ;
    int n ;
    cout << " hay nhap vao so n " << endl ;
    cin >> n ;
     for ( int i = 1 ; i <= n ; i++ ) { 
       s += i  ; 
     } 
    cout << " tong la : " << s << endl ;  
    return 0 ;
}  
