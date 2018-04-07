#include <iostream> 

using namespace std; 

int rowMax( int a[][4], int n ) 
{ 
    int j = 0; 
    while ( a[ 0 ][ j ] && j < n ) 
        j++; 
     
    int row = 0; 
    for ( int i = 1; i < n; i++ ) 
        while ( a[ i ][ j ] && j < n ) 
        { 
            j++; 
            row = i; 
        } 
    return row; 
} 

int main() 
{ 
    int a[4][4] = { 1, 0, 0, 0, 
                    1, 0, 1, 0, 
                    1, 1, 0, 0, 
                    1, 1, 1, 1 }; 
    cout << "Hang co nhieu so 1 nhat la:" << rowMax( a, 4 ) << endl; 

    return 0; 
}  
