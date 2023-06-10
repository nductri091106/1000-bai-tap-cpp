# include <iostream>  
using namespace std ;
int main () { 
    float s = 0 ;
    int n ;
    cout << " hay nhap vao so n  = " << endl ; 
    cin >> n ;
     for ( float i = 1 ; i <= n ; i++ ) { 
       s +=  1/(2*i)  ; 
     } 
    cout << " tong la : " << s << endl ;  
    return 0 ;
}  
