#include  <iostream>
#include  <vector>
 
using   namespace   std ;
 
void   evaluateSubarrays ( )   {
    int   sequenceSize ;
    long long   minimumLength ;
    cin   >>   sequenceSize   >>   minimumLength ;
 
    vector < long long >   cumulativeSums ( sequenceSize  +  1 ,  0 ) ;
    for ( int   position  =  1 ;   position  <=  sequenceSize ;   ++ position )   {
        long long   currentElement ;
        cin   >>   currentElement ;
        cumulativeSums [ position ]   =   cumulativeSums [ position  -  1 ]   +   currentElement ;
    }
 
    if ( minimumLength  >=  sequenceSize )   {
        cout   <<   0   <<   "
" ;
        return ;
    }
 
    long long   matchingSubarrayCount   =   0 ;
    vector < int >   remainderFrequencies ( minimumLength ,  0 ) ;
 
    for ( int   endIndex  =  1 ;   endIndex  <=  sequenceSize ;   ++ endIndex )   {
        int   validStartIndex   =   endIndex  -  minimumLength  -  1 ;
        if ( validStartIndex  >=  0 )   {
            long long   eligibleRemainder   =   ( ( cumulativeSums [ validStartIndex ]  %  minimumLength )  +  minimumLength )  %  minimumLength ;
            remainderFrequencies [ eligibleRemainder ] ++ ;
        }
 
        long long   currentRemainder   =   ( ( cumulativeSums [ endIndex ]  %  minimumLength )  +  minimumLength )  %  minimumLength ;
        matchingSubarrayCount   +=   remainderFrequencies [ currentRemainder ] ;
    }
 
    cout   <<   matchingSubarrayCount   <<   "
" ;
}
 
int   main ( )   {
    ios_base :: sync_with_stdio ( false ) ;
    cin.tie ( nullptr ) ;
 
    int   totalTestCases ;
    cin   >>   totalTestCases ;
 
    while ( totalTestCases -- )   {
        evaluateSubarrays ( ) ;
    }
 
    return   0 ;
}