#include <iostream>
#include <vector>
 
using namespace std ;
 
using ll = long long ;
 
 
 
void readNK( ll& n , ll& k )
{
    cin >> n >> k ;
}
 
 
 
bool ok( ll n , ll k )
{
    if ( k < n || k > 2 * n - 1 )
    {
        cout << -1 << "
" ;
 
        return false ;
    }
 
    return true ;
}
 
 
 
void allocA( ll n , vector< vector< ll > >& A )
{
    A.assign( n , vector< ll > ( n , 0 ) ) ;
}
 
 
 
ll calcM( ll n , ll k )
{
    return 2 * n - k ;
}
 
 
 
void placeDiag( ll m , vector< vector< ll > >& A , ll& cur )
{
    for ( ll i = 0 ; i < m ; ++i )
    {
        A[ i ][ i ] = cur++ ;
    }
}
 
 
 
void placeRow( ll m , ll n , vector< vector< ll > >& A , ll& cur )
{
    for ( ll i = m ; i < n ; ++i )
    {
        A[ i ][ 0 ] = cur++ ;
    }
}
 
 
 
void placeCol( ll m , ll n , vector< vector< ll > >& A , ll& cur )
{
    for ( ll j = m ; j < n ; ++j )
    {
        A[ 0 ][ j ] = cur++ ;
    }
}
 
 
 
void fillRest( ll n , vector< vector< ll > >& A , ll& cur )
{
    for ( ll i = 0 ; i < n ; ++i )
    {
        for ( ll j = 0 ; j < n ; ++j )
        {
            if ( A[ i ][ j ] == 0 )
            {
                A[ i ][ j ] = cur++ ;
            }
        }
    }
}
 
 
 
void printA( ll n , const vector< vector< ll > >& A )
{
    for ( ll i = 0 ; i < n ; ++i )
    {
        for ( ll j = 0 ; j < n ; ++j )
        {
            if ( j > 0 )
            {
                cout << " " ;
            }
 
            cout << A[ i ][ j ] ;
        }
 
        cout << "
" ;
    }
}
 
 
 
void buildA( ll n , ll k , vector< vector< ll > >& A , ll& cur )
{
    ll m = calcM( n , k ) ;
 
 
 
    placeDiag( m , A , cur ) ;
 
 
 
    placeRow( m , n , A , cur ) ;
 
 
 
    placeCol( m , n , A , cur ) ;
}
 
 
 
void solve()
{
    ll n , k ;
 
    readNK( n , k ) ;
 
 
 
    if ( !ok( n , k ) )
    {
        return ;
    }
 
 
 
    vector< vector< ll > > A ;
 
    allocA( n , A ) ;
 
 
 
    ll cur = 1 ;
 
    buildA( n , k , A , cur ) ;
 
 
 
    fillRest( n , A , cur ) ;
 
 
 
    printA( n , A ) ;
}
 
 
 
int main()
{
    ios_base::sync_with_stdio( false ) ;
 
    cin.tie( NULL ) ;
 
 
 
    ll t ;
 
    cin >> t ;
 
    while ( t-- )
    {
        solve() ;
    }
 
 
 
    return 0 ;
}