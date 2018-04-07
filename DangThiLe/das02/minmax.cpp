#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void min_max( int &min, int &max, int a[], int n )
{
	int i;
	int minTemp, maxTemp;
	min = max = *a;
	for ( i = 1; i < n - 1; i += 2 ){
		if ( a[ i ] > a[ i + 1 ] ){
			maxTemp = a[ i ];
			minTemp = a[ i + 1 ];
		}
		else {
			maxTemp = a[ i + 1 ];
			minTemp = a[ i ];
		}
		min = min < minTemp ? min : minTemp;
		max = max > maxTemp ? max : maxTemp;
		
	}
	if ( i == n - 1 ){
		min = min < a[ n - 1 ] ? min : a[ n - 1 ];
		max = max > a[ n - 1 ] ? max : a[ n - 1 ];
		
	}
}

int main(){
	int i, n, a[100];
	srand(time(NULL));
	cin >> n;
    for(i = 0; i <  n; i++) {               
        a[i] = rand()%1000 + 1;
        cout << a[i] << "\n";
    }
	

	int min;
	int max;
	min_max( min, max, a, n );

	cout << "min = " << min << endl << "max = " << max << endl;

	return 0;
}
