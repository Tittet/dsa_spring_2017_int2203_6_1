#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
    ifstream f;
    int n;
    f.open("DAYSO1.txt");
    f >> n;
    int ar[n];
    for(int i = 0; i < n; i++){
        f >> ar[i];
    }
    f.close();
    for (int i = 0; i < n - 1; i++)
        for (int j = i+1; j < n; j++){
            if(ar[j] < ar[i]){
                int t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
        }
    int k;
    cout << " Nhap k:";
    cin >> k;
    cout << "So lon nhat: " << ar[n-1] << endl;
    cout << "So lon thu 2: " << ar[n-2] << endl;
    cout << "So lon thu k: " << ar[n - k];

	return 0;
}
