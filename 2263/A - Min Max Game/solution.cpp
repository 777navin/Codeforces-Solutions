/**
 * Problem: A. Min Max Game
 * Platform: Codeforces (Round 1120, Div. 2)
 *
 * Intuition:
 * Each move decreases the array size by 1. There are (n - 1) total moves.
 * - Elsie gets floor((n - 1) / 2) moves.
 * - Each of Elsie's min(x, y) moves can eliminate at most one '1'.
 * - Bessie's max(x, y) moves never reduce the count of '1's.
 * - If the count of 1s is strictly greater than the number of moves Elsie has,
 *   Elsie cannot eliminate all 1s, so Bessie always wins. Otherwise, Elsie wins.
 *
 * Time Complexity: O(n) per test case
 * Space Complexity: O(1) auxiliary space
 */
 
#include <iostream>
 
using namespace std ;
 
using ll = long long ;
 
 
 
ll readN()
{
    ll n ;
 
    cin >> n ;
 
    return n ;
}
 
 
 
ll cnt1( ll n )
{
    ll c = 0 ;
 
 
 
    for ( ll i = 0 ; i < n ; ++i )
    {
        ll v ;
 
        cin >> v ;
 
        if ( v == 1 )
        {
            c++ ;
        }
    }
 
 
 
    return c ;
}
 
 
 
ll elsMv( ll n )
{
    return ( n - 1 ) / 2 ;
}
 
 
 
bool bessieWins( ll c , ll e )
{
    return c > e ;
}
 
 
 
void printWinner( bool bw )
{
    if ( bw )
    {
        cout << "Bessie
" ;
    }
    else
    {
        cout << "Elsie
" ;
    }
}
 
 
 
void solve()
{
    ll n = readN() ;
 
 
 
    ll c = cnt1( n ) ;
 
 
 
    ll e = elsMv( n ) ;
 
    bool bw = bessieWins( c , e ) ;
 
 
 
    printWinner( bw ) ;
}
 
 
 
int main()
{
    ios_base::sync_with_stdio( false ) ;
 
    cin.tie( NULL ) ;
 
 
 
    ll t = readN() ;
 
    while ( t-- )
    {
        solve() ;
    }
 
 
 
    return 0 ;
}