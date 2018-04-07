#include <iostream> 

using namespace std; 

int sopheptoan = 0; 
void min_max( int &min, int &max, int a[], int n ) 
{ 
    int i; 
    int min1, max1; 
    min = max = *a; 
    for ( i = 1; i < n - 1; i += 2 ) 
    { 
        if ( a[ i ] > a[ i + 1 ] ) 
        { 
            max1 = a[ i ]; 
            min1 = a[ i + 1 ]; 
        } 
        else  
        { 
            max1 = a[ i + 1 ]; 
            min1 = a[ i ]; 
        } 
        min = min < min1 ? min : min1;
        max = max > max1 ? max : max1;
        sopheptoan += 3; 
    } 
    if ( i == n - 1 ) 
    { 
        min = min < a[ n - 1 ] ? min : a[ n - 1 ];
        max = max > a[ n - 1 ] ? max : a[ n - 1 ];
        sopheptoan += 3; 
    } 
} 

int main() 
{ 
    int a[] = { 29, 50, 64, 95, 14 , 54, 73 , 55 }; 
    int n = sizeof( a ) / sizeof( int ); 

    int min; 
    int max; 
    min_max( min, max, a, n ); 

    cout << "Gia tri nho nhat la: " << min << endl;
	cout << "Gia tri lon nhat la: " << max << endl; 
    cout << "n = " << n << endl; 
	cout << "So phep toan la: " << sopheptoan << endl;
    return 0; 
}  
