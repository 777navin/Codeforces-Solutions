#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
 
using namespace std ;
 
using ll = long long ;
 
const ll INF = 4e18 ;
 
 
 
void readNM( ll& n , ll& m )
{
    cin >> n >> m ;
}
 
 
 
void readA( ll n , vector< ll >& a )
{
    a.assign( n , 0 ) ;
 
    for ( ll i = 0 ; i < n ; ++i )
    {
        cin >> a[ i ] ;
    }
}
 
 
 
ll mxElem( ll n , const vector< ll >& a )
{
    ll mx = a[ 0 ] ;
 
    for ( ll i = 1 ; i < n ; ++i )
    {
        if ( a[ i ] > mx )
        {
            mx = a[ i ] ;
        }
    }
 
    return mx ;
}
 
 
 
void fillPq( ll m , const vector< ll >& a , priority_queue< ll >& pq , ll& ss )
{
    ss = 0 ;
 
    for ( ll i = 0 ; i + 1 < m ; ++i )
    {
        pq.push( a[ i ] ) ;
 
        ss += a[ i ] ;
    }
}
 
 
 
ll scoreAt( ll m , ll aj , ll ss )
{
    return m * aj - ss ;
}
 
 
 
bool smaller( priority_queue< ll >& pq , ll aj )
{
    if ( pq.empty() )
    {
        return false ;
    }
 
    return aj < pq.top() ;
}
 
 
 
void updPq( priority_queue< ll >& pq , ll aj , ll& ss )
{
    ss -= pq.top() ;
 
    pq.pop() ;
 
    pq.push( aj ) ;
 
    ss += aj ;
}
 
 
 
ll sweep( ll n , ll m , const vector< ll >& a )
{
    priority_queue< ll > pq ;
 
    ll ss ;
 
    fillPq( m , a , pq , ss ) ;
 
 
 
    ll best = -INF ;
 
    for ( ll j = m - 1 ; j < n ; ++j )
    {
        ll sc = scoreAt( m , a[ j ] , ss ) ;
 
        if ( sc > best )
        {
            best = sc ;
        }
 
 
 
        if ( smaller( pq , a[ j ] ) )
        {
            updPq( pq , a[ j ] , ss ) ;
        }
    }
 
 
 
    return best ;
}
 
 
 
void printLL( ll x )
{
    cout << x << "
" ;
}
 
 
 
void solve()
{
    ll n , m ;
 
    readNM( n , m ) ;
 
 
 
    vector< ll > a ;
 
    readA( n , a ) ;
 
 
 
    if ( m == 1 )
    {
        ll ans = mxElem( n , a ) ;
 
        printLL( ans ) ;
 
        return ;
    }
 
 
 
    ll ans = sweep( n , m , a ) ;
 
 
 
    printLL( ans ) ;
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