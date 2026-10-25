#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int i, j, n, m, X[100], Y[100];
    cout << "Nhap vao so phan tu cua hai mang: ";
    cin >> n >> m;
    for(i=0; i<n; i++) cin >> X[i];
    for(i=0; i<m; i++) cin >> Y[i];

    int h = n-1, k = 0;
    while(h >= 0 && k < m){
        if(X[h] > Y[k]){
            swap(&X[h], &Y[k]);
            h--;
            k++;
        } else break;
    }

    for(i=0; i<m-1; i++){
        for(j=0; j<m-i-1; j++){
            if(Y[j] > Y[j+1]){
                swap(&Y[j], &Y[j+1]);
            }
        }
    }

for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(X[j] > X[j+1]){
                swap(&X[j], &X[j+1]);
            }
        }
    }
    cout << "X[] = { ";
    for(i=0; i<n; i++) cout << X[i] << " ";
    cout << "}" << endl;
    cout << "Y[] = { ";
    for(i=0; i<m; i++) cout << Y[i] << " ";
    cout << "}" << endl;
    return 0;
}