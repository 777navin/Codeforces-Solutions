#pragma GCC optimize( "O3,unroll-loops" )
 
#include <bits/stdc++.h>
 
using namespace std ;
 
using ll = long long ;
 
const ll INF = 1e9 + 7 ;
 
const ll MM = 200005 ;
 
 
 
struct Nd
{
    ll mv ;
 
    bool cl ;
} t[ 4 * ( MM + 5 ) ] ;
 
 
 
void build( ll v , ll tl , ll tr )
{
    t[ v ].mv = -INF ;
 
    t[ v ].cl = false ;
 
    if ( tl == tr )
    {
        return ;
    }
 
 
 
    ll tm = tl + ( tr - tl ) / 2 ;
 
    build( 2 * v , tl , tm ) ;
 
    build( 2 * v + 1 , tm + 1 , tr ) ;
}
 
 
 
void push( ll v )
{
    if ( !t[ v ].cl )
    {
        return ;
    }
 
 
 
    t[ 2 * v ].mv = -INF ;
 
    t[ 2 * v ].cl = true ;
 
    t[ 2 * v + 1 ].mv = -INF ;
 
    t[ 2 * v + 1 ].cl = true ;
 
    t[ v ].cl = false ;
}
 
 
 
ll mx2( ll x , ll y )
{
    return ( x > y ) ? x : y ;
}
 
 
 
void upd( ll v , ll tl , ll tr , ll p , ll val )
{
    if ( tl == tr )
    {
        t[ v ].mv = mx2( t[ v ].mv , val ) ;
 
        return ;
    }
 
 
 
    push( v ) ;
 
    ll tm = tl + ( tr - tl ) / 2 ;
 
    if ( p <= tm )
    {
        upd( 2 * v , tl , tm , p , val ) ;
    }
    else
    {
        upd( 2 * v + 1 , tm + 1 , tr , p , val ) ;
    }
 
 
 
    t[ v ].mv = mx2( t[ 2 * v ].mv , t[ 2 * v + 1 ].mv ) ;
}
 
 
 
void clrR( ll v , ll tl , ll tr , ll l , ll r )
{
    if ( l > r )
    {
        return ;
    }
 
    if ( l == tl && r == tr )
    {
        t[ v ].mv = -INF ;
 
        t[ v ].cl = true ;
 
        return ;
    }
 
 
 
    push( v ) ;
 
    ll tm = tl + ( tr - tl ) / 2 ;
 
    clrR( 2 * v , tl , tm , l , min( r , tm ) ) ;
 
    clrR( 2 * v + 1 , tm + 1 , tr , max( l , tm + 1 ) , r ) ;
 
 
 
    t[ v ].mv = mx2( t[ 2 * v ].mv , t[ 2 * v + 1 ].mv ) ;
}
 
 
 
ll qry( ll v , ll tl , ll tr , ll l , ll r )
{
    if ( l > r )
    {
        return -INF ;
    }
 
    if ( l == tl && r == tr )
    {
        return t[ v ].mv ;
    }
 
 
 
    push( v ) ;
 
    ll tm = tl + ( tr - tl ) / 2 ;
 
    ll p1 = qry( 2 * v , tl , tm , l , min( r , tm ) ) ;
 
    ll p2 = qry( 2 * v + 1 , tm + 1 , tr , max( l , tm + 1 ) , r ) ;
 
 
 
    return mx2( p1 , p2 ) ;
}
 
 
 
void readNM( ll& n , ll& m )
{
    cin >> n >> m ;
}
 
 
 
void readB( ll n , ll m , vector< ll >& b , vector< vector< ll > >& o )
{
    b.assign( m , 0 ) ;
 
    o.assign( n + 1 , vector< ll > () ) ;
 
 
 
    for ( ll i = 0 ; i < m ; ++i )
    {
        cin >> b[ i ] ;
 
        if ( b[ i ] <= n )
        {
            o[ b[ i ] ].push_back( i + 1 ) ;
        }
    }
}
 
 
 
bool hasAll( ll n , const vector< vector< ll > >& o )
{
    for ( ll i = 1 ; i <= n ; ++i )
    {
        if ( o[ i ].empty() )
        {
            return false ;
        }
    }
 
    return true ;
}
 
 
 
void failPrint()
{
    cout << -1 << "
" ;
}
 
 
 
ll back( const vector< ll >& v )
{
    return v.back() ;
}
 
 
 
ll qFrom( ll m , ll p )
{
    return qry( 1 , 1 , m + 1 , p + 1 , m + 1 ) ;
}
 
 
 
void addUpd( vector< pair< ll , ll > >& up , ll p , ll v )
{
    up.push_back( make_pair( p , v ) ) ;
}
 
 
 
void applyUpd( ll m , const vector< pair< ll , ll > >& up )
{
    for ( ll i = 0 ; i < ( ll ) up.size() ; ++i )
    {
        upd( 1 , 1 , m + 1 , up[ i ].first , up[ i ].second ) ;
    }
}
 
 
 
void clrTail( ll m , ll Li )
{
    clrR( 1 , 1 , m + 1 , Li + 1 , m + 1 ) ;
}
 
 
 
void prepSt( ll m )
{
    build( 1 , 1 , m + 1 ) ;
 
    upd( 1 , 1 , m + 1 , m + 1 , 0 ) ;
}
 
 
 
ll top()
{
    return t[ 1 ].mv ;
}
 
 
 
void doF( ll n , ll m , const vector< vector< ll > >& o , vector< ll >& f )
{
    f.assign( n + 1 , 0 ) ;
 
    prepSt( m ) ;
 
 
 
    for ( ll i = 1 ; i <= n ; ++i )
    {
        ll Li = back( o[ i ] ) ;
 
        vector< pair< ll , ll > > up ;
 
 
 
        for ( ll j = 0 ; j < ( ll ) o[ i ].size() ; ++j )
        {
            ll p = o[ i ][ j ] ;
 
            ll v = qFrom( m , p ) ;
 
            if ( v != -INF )
            {
                addUpd( up , p , v + 1 ) ;
            }
        }
 
 
 
        ll vc = qFrom( m , Li ) ;
 
        if ( vc != -INF )
        {
            addUpd( up , Li , vc ) ;
        }
 
 
 
        applyUpd( m , up ) ;
 
        clrTail( m , Li ) ;
 
 
 
        f[ i ] = top() ;
    }
}
 
 
 
void doG( ll n , ll m , const vector< vector< ll > >& o , vector< ll >& g )
{
    g.assign( n + 2 , 0 ) ;
 
    prepSt( m ) ;
 
 
 
    for ( ll i = n ; i >= 1 ; --i )
    {
        ll Li = back( o[ i ] ) ;
 
        vector< pair< ll , ll > > up ;
 
 
 
        for ( ll j = 0 ; j < ( ll ) o[ i ].size() ; ++j )
        {
            ll p = o[ i ][ j ] ;
 
            ll v = qFrom( m , p ) ;
 
            if ( v != -INF )
            {
                addUpd( up , p , v + 1 ) ;
            }
        }
 
 
 
        ll vc = qFrom( m , Li ) ;
 
        if ( vc != -INF )
        {
            addUpd( up , Li , vc ) ;
        }
 
 
 
        applyUpd( m , up ) ;
 
        clrTail( m , Li ) ;
 
 
 
        g[ i ] = top() ;
    }
}
 
 
 
ll bestK( ll n , const vector< ll >& f , const vector< ll >& g )
{
    ll ans = 0 ;
 
    for ( ll k = 0 ; k <= n ; ++k )
    {
        ll cur = f[ k ] + g[ k + 1 ] ;
 
        if ( cur > ans )
        {
            ans = cur ;
        }
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
    ll n , m ;
 
    readNM( n , m ) ;
 
 
 
    vector< ll > b ;
 
    vector< vector< ll > > o ;
 
    readB( n , m , b , o ) ;
 
 
 
    if ( !hasAll( n , o ) )
    {
        failPrint() ;
 
        return ;
    }
 
 
 
    vector< ll > f ;
 
    doF( n , m , o , f ) ;
 
 
 
    vector< ll > g ;
 
    doG( n , m , o , g ) ;
 
 
 
    ll bst = bestK( n , f , g ) ;
 
 
 
    printLL( n - bst ) ;
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