#include <iostream>
 
using namespace std ;
 
using ll = long long ;
 
 
 
void readNM( ll& n , ll& m )
{
    cin >> n >> m ;
}
 
 
 
ll readFirst( ll k )
{
    ll f = 0 ;
 
 
 
    for ( ll i = 0 ; i < k ; ++i )
    {
        ll x ;
 
        cin >> x ;
 
 
 
        if ( i == 0 )
        {
            f = x ;
        }
    }
 
 
 
    return f ;
}
 
 
 
ll hits( ll s , ll k )
{
    return s + k - 1 ;
}
 
 
 
ll pickWinner( ll hB , ll hV )
{
    if ( hB >= hV )
    {
        return 1 ;
    }
 
    return 2 ;
}
 
 
 
void solve()
{
    ll n , m ;
 
    readNM( n , m ) ;
 
 
 
    ll a1 = readFirst( n ) ;
 
    ll b1 = readFirst( m ) ;
 
 
 
    ll hB = hits( a1 , n ) ;
 
    ll hV = hits( b1 , m ) ;
 
 
 
    cout << pickWinner( hB , hV ) << "
" ;
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