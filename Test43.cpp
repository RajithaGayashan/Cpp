#include<iostream>
#define MAX 20
using namespace std;
void print_table( int * , int ) ;
int main()
{
int table[MAX] ;
int i ;
for( i = 0 ; i < MAX ; i++ )
table[i] = i ;
print_table( table , MAX ) ;
}
void print_table( int *ptr , int n )
{
    int *endptr ; /* pointer to last element */
    for( endptr = ptr + n - 1 ; ptr <= endptr ; ptr++ ) 
    cout<<*ptr<<endl ;
}
