#include <iostream>
using namespace std;
int main(){
	int j,i;
	int A[] = { 30, 40, 20, 50, 10};
	for (i=1; i<5; i++){
		int tmp=A[i];
		for (j=i-1; j>=0 && tmp<A[j]; j--)
		{
			A[j+1] = A[j];
		}
		A[j+1] = tmp;
	}
	cout << "Sorting:\n";
	for (i=0; i<5; i++)
	{
		cout << A[i] << " " << endl;
	}
}
