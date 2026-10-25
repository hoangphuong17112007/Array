#include <iostream>
using namespace std;
int main(){
	int n, A[100], i;
	cout << "Nhap vao so luong phan tu n: ";
	cin >> n;
	for (i=0; i<n; i++){
		cin >> A[i];
	}
	int target, j, k=0;
	cout << "Nhap vao tong can tim: ";
	cin >> target;
	for (i=0; i<n-1; i++){
		for (j=i+1; j<n; j++){
			if(A[i] + A[j] == target){
				cout << "Pair found " << "(" << A[i] << ","<< A[j] << ")" << endl;
				k++;
			}
		}
	}
	if (k==0){
		cout << "Pair not found";
	}
	 
	return 0;
}