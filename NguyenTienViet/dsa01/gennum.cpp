#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>

using namespace std;

int main()
{
	srand(time(NULL));
	int n = rand();

    ofstream f;
    f.open("DAYSO1.txt");
    f << n << endl;
    for(int i = 0; i < n; i++){
        int a = rand();
        f << a << endl;
    }

    f.close();

	return 0;
}
