#include <iostream>
using namespace std;
int main(){
	int A[] = { 35, 10, 55, 20, 5 }, j, i;
	{for (int i=5; i<5; i--)
		for (int j=0; j<5-1; j++)
			if (A[j] > A[j+1])
			{
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
			}
	}
	cout << "Sorted array element:\n ";
	for(i=0; i<6-1; i++)
		cout << A[i] << " " << endl;;
	return 0;
}
