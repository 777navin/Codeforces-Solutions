#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std ;
 
using ll = long long ;
 
const ll MOD = 998244353 ;
 
 
 
ll readN()
{
    ll n ;
 
    cin >> n ;
 
    return n ;
}
 
 
 
void readA( ll n , vector< ll >& a )
{
    a.assign( n , 0 ) ;
 
    for ( ll i = 0 ; i < n ; ++i )
    {
        cin >> a[ i ] ;
    }
}
 
 
 
void sortA( vector< ll >& a )
{
    sort( a.begin() , a.end() ) ;
}
 
 
 
bool dup( ll n , const vector< ll >& a )
{
    for ( ll i = 1 ; i < n ; ++i )
    {
        if ( a[ i ] == a[ i - 1 ] )
        {
            return true ;
        }
    }
 
    return false ;
}
 
 
 
void failExit()
{
    cout << -1 << "
" ;
 
    exit( 0 ) ;
}
 
 
 
ll pw( ll b , ll e )
{
    ll r = 1 ;
 
    b %= MOD ;
 
 
 
    while ( e > 0 )
    {
        if ( e % 2 == 1 )
        {
            r = ( r * b ) % MOD ;
        }
 
 
 
        b = ( b * b ) % MOD ;
 
        e /= 2 ;
    }
 
 
 
    return r ;
}
 
 
 
ll inv( ll x )
{
    return pw( x , MOD - 2 ) ;
}
 
 
 
ll fact( ll n )
{
    ll r = 1 ;
 
    for ( ll i = 1 ; i <= n - 1 ; ++i )
    {
        r = ( r * i ) % MOD ;
    }
 
    return r ;
}
 
 
 
void buildSf( ll n , const vector< ll >& a , vector< ll >& sf )
{
    sf.assign( n + 1 , 0 ) ;
 
    for ( ll i = n - 1 ; i >= 0 ; --i )
    {
        sf[ i ] = ( sf[ i + 1 ] + a[ i ] ) % MOD ;
    }
}
 
 
 
ll addMod( ll x , ll y , ll z )
{
    return ( x + y + z ) % MOD ;
}
 
 
 
ll sweep( ll n , const vector< ll >& a , ll D , const vector< ll >& sf )
{
    ll ans = 0 ;
 
 
 
    for ( ll i = 0 ; i + 1 < n ; ++i )
    {
        ll cs = n - 1 - i ;
 
        ll fq = ( D * inv( cs ) ) % MOD ;
 
        ll sp = sf[ i + 1 ] ;
 
 
 
        ll pc = ( fq * sp ) % MOD ;
 
        ll cc = ( D * ( a[ i ] % MOD ) ) % MOD ;
 
 
 
        ans = addMod( ans , pc , MOD - cc ) ;
    }
 
 
 
    return ans ;
}
 
 
 
void printLL( ll x )
{
    cout << x << "
" ;
}
 
 
 
void solve()
{
    ll n = readN() ;
 
 
 
    vector< ll > a ;
 
    readA( n , a ) ;
 
 
 
    sortA( a ) ;
 
 
 
    if ( dup( n , a ) )
    {
        failExit() ;
    }
 
    if ( n == 1 )
    {
        printLL( 0 ) ;
 
        return ;
    }
 
 
 
    ll D = fact( n ) ;
 
 
 
    vector< ll > sf ;
 
    buildSf( n , a , sf ) ;
 
 
 
    ll ans = sweep( n , a , D , sf ) ;
 
 
 
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