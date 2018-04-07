#include<bits/stdc++.h>
#include "darraylist.h"

using namespace std;

class ShrinkingDArrayList:public DArrayList{
	public:
	void shrinToFit();
};

int main(){
	return 0;
}

void ShrinkingDArrayList::shrinToFit(){
	if(size > last+1){
		int* tmp = new int[last+1];
		for(int i = 0 ; i <= last ; i++){
			tmp[i] = element[i];
		}
		delete[] element;
		element = tmp;
		size = last + 1;
	}
}
