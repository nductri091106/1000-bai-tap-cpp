# include <iostream>  
using namespace std ;
int main () { 
    float s = 0 ;
    int n ;
    cout << " nhap n "<< endl ;
    cin >> n ;
     for ( float i = 1 ; i <= n ; i++ ) { 
       s += 1/(i*(i+1))  ; 
     } 
    cout << " tong la : " << s << endl ;  
    return 0 ;
}  
