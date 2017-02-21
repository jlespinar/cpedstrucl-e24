#include<iostream>
using namespace std;
int main(){
	int A[]={30, 40, 20, 50, 10};
	int n=5, q=1;
	cout<<"Array: ";
	for(int k=0; k<5; k++)
		cout<<A[k]<<" ";
		cout<<endl<<endl;
	for(int i=0; i<n-1; i++){
		int min=A[i], index=i;
		for(int j=i+1; j<n; j++)
			if (A[j] < min){
				min = A[j];
				index = j;
			}
		A[index]=A[i];
		A[i]=min;
		cout<<"Pass: "<<q++<<": ";
		for (int i=0; i<5; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
