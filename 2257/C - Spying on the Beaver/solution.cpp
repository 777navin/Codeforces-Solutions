#include <iostream>
#include <vector>
 
using namespace std ;
 
using ll = long long ;
 
 
 
ll readN()
{
    ll n ;
 
    cin >> n ;
 
    return n ;
}
 
 
 
void buildTree( ll n , vector< ll >& p , vector< vector< ll > >& adj )
{
    p.resize( n + 1 ) ;
 
    adj.assign( n + 1 , vector< ll >() ) ;
 
 
 
    for ( ll i = 2 ; i <= n ; ++i )
    {
        cin >> p[ i ] ;
 
        adj[ p[ i ] ].push_back( i ) ;
    }
}
 
 
 
void markDam( ll n , ll m , vector< bool >& dm , vector< ll >& cnt )
{
    dm.assign( n + 1 , false ) ;
 
    cnt.assign( n + 1 , 0 ) ;
 
 
 
    for ( ll i = 0 ; i < m ; ++i )
    {
        ll a ;
 
        cin >> a ;
 
 
 
        dm[ a ] = true ;
 
        cnt[ a ] = 1 ;
    }
}
 
 
 
void accCnt( ll n , const vector< ll >& p , vector< ll >& cnt )
{
    for ( ll i = n ; i >= 2 ; --i )
    {
        cnt[ p[ i ] ] += cnt[ i ] ;
    }
}
 
 
 
vector< ll > validCh( ll i , const vector< vector< ll > >& adj , const vector< ll >& cnt )
{
    vector< ll > vc ;
 
 
 
    for ( ll c : adj[ i ] )
    {
        if ( cnt[ c ] > 0 )
        {
            vc.push_back( c ) ;
        }
    }
 
 
 
    return vc ;
}
 
 
 
void addAll( vector< ll >& ans , const vector< ll >& vc )
{
    for ( ll c : vc )
    {
        ans.push_back( c ) ;
    }
}
 
 
 
void addTail( vector< ll >& ans , const vector< ll >& vc )
{
    for ( size_t j = 1 ; j < vc.size() ; ++j )
    {
        ans.push_back( vc[ j ] ) ;
    }
}
 
 
 
vector< ll > collectAns( ll n , const vector< vector< ll > >& adj , const vector< bool >& dm , const vector< ll >& cnt )
{
    vector< ll > ans ;
 
 
 
    for ( ll i = 1 ; i <= n ; ++i )
    {
        vector< ll > vc = validCh( i , adj , cnt ) ;
 
 
 
        if ( vc.empty() )
        {
            continue ;
        }
 
 
 
        if ( dm[ i ] )
        {
            addAll( ans , vc ) ;
        }
        else
        {
            addTail( ans , vc ) ;
        }
    }
 
 
 
    return ans ;
}
 
 
 
void printAns( const vector< ll >& ans )
{
    cout << ans.size() ;
 
    for ( ll x : ans )
    {
        cout << " " << x ;
    }
 
    cout << "
" ;
}
 
 
 
void solve()
{
    ll n = readN() ;
 
 
 
    vector< ll > p ;
 
    vector< vector< ll > > adj ;
 
    buildTree( n , p , adj ) ;
 
 
 
    ll m = readN() ;
 
    vector< bool > dm ;
 
    vector< ll > cnt ;
 
    markDam( n , m , dm , cnt ) ;
 
 
 
    accCnt( n , p , cnt ) ;
 
    vector< ll > ans = collectAns( n , adj , dm , cnt ) ;
 
 
 
    printAns( ans ) ;
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