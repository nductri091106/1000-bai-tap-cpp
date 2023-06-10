# include <iostream>  
using namespace std ;
int main () { 
    float s = 0 ;
    int n ;
    cout << " nhap n " << endl ;
    cin >> n ;
     for ( float i = 0 ; i <= n ; i++ ) { 
       s += ((2*i)+1)/((2*i)+2) ; 
     } 
    cout << " tong la : " <<  s  <<  endl;  
    return 0 ;
}  
