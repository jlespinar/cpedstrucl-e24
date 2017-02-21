#include <iostream>
using namespace std;
int main(){
	int A[] = { 40, 30, 20, 50, 10 };

	    for (int i=0; i<5-1; i++){
			int min=A[i], index=i;
			for (int j=i+1; j<5; j++){
				if (A[j] < min){
					min = A[j];
					index=j;
				}
			}
			A[index]=A[i];
			A[i]=min;
	}
	cout << "Sorting: " << endl;;
	for(int i=0;i<5;i++){
		cout << A[i] << " " << endl;;
	}
}
