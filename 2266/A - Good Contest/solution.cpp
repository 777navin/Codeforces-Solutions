#include <iostream>
#include <algorithm>
 
using namespace std ;
 
using ll = long long ;
 
 
 
ll readN()
{
    ll n ;
 
    cin >> n ;
 
    return n ;
}
 
 
 
void readA( ll& a1 , ll& a2 , ll& a3 )
{
    cin >> a1 >> a2 >> a3 ;
}
 
 
 
ll mn3( ll a , ll b , ll c )
{
    return min( { a , b , c } ) ;
}
 
 
 
ll calc( ll n , ll ms )
{
    return n - ms ;
}
 
 
 
void printLL( ll x )
{
    cout << x << "
" ;
}
 
 
 
void solve()
{
    ll n = readN() ;
 
 
 
    ll a1 , a2 , a3 ;
 
    readA( a1 , a2 , a3 ) ;
 
 
 
    ll ms = mn3( a1 , a2 , a3 ) ;
 
    ll ans = calc( n , ms ) ;
 
 
 
    printLL( ans ) ;
}
 
 
 
int main()
{
    ios_base::sync_with_stdio( false ) ;
 
    cin.tie( NULL ) ;
 
 
 
    ll t ;
 
    if ( cin >> t )
    {
        while ( t-- )
        {
            solve() ;
        }
    }
 
 
 
    return 0 ;
}