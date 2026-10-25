#include <iostream>
using namespace std;
int main(){
	int n, A[100], i, j;
	cout << "Nhap vao so phan tu cua day: ";
	cin >> n;
	for (i=0; i<n; i++){
		cin >> A[i];
	}
	int k;
	for (i=0; i<n-1; i++){
		k=0;
		for (j=i+1; j<n; j++){
			if (A[i] == A[j]){
				k=1;
				break;
			}
		}
		if (k==1){
			cout << "The duplicate element is " << A[i];
		}
	}
	return 0;
}