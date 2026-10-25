#include <iostream>
using namespace std;
int main(){
    int n, binary[100], i;
    cout << "Nhap vao so phan tu cua danh sach: ";
    cin >> n;
    for (i=0; i<n; i++){
        cin >> binary[i];
    }
    int k=0, A[100];
    for (i=0; i<n; i++){
        if (binary[i] == 0){
            A[k] = binary[i];
            k++;
        }
    }
    for (i=0; i<n; i++){
        if (binary[i] == 1){
            A[k] = binary[i];
            k++;
        }
    }
    for (k=0; k<n; k++){
        cout << A[k] << " ";
    }
    return 0;
}
