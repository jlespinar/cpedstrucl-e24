#include<iostream>
using namespace std;
int main(){
	int A[]= {40, 30, 20, 50, 10};
	int q=1, x, y, w=5;
	cout<<"Array: ";
	for(int k=0; k<5; k++)
		cout<<A[k]<<" ";
		cout<<endl<<endl;
	for (int i=1; i<5; i++){
		int j, temp=A[i];
		for(j=i-1; j>=0 && temp<A[j]; j--){
			A[j+1] = A[j];
			x=A[j];
			y=temp;
		}
		A[j+1] = temp;			
		cout<<"Pass "<<q++<<": ";
		for (int k=0; k<w; k++){
			cout<<A[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
