#include <iostream>
using namespace std;
int main(){
    int m, n, X[100], Y[100], i, j;
    cin >> m >> n;
    for(i=0; i<m; i++) cin >> X[i];
    for(i=0; i<n; i++) cin >> Y[i];

    int k=0;
    for(i=0; i<m; i++){
        if(X[i]!=0){
            X[k]=X[i];
            k++;
        }
    }

    int h=k-1, t=m-1, p=n-1;
    while(p>=0){
        if(h>=0 && X[h]>Y[p]){
            X[t]=X[h];
            h--;
        } else {
            X[t]=Y[p];
            p--;
        }
        t--;
    }

    for(i=0; i<m; i++) cout << X[i] << " ";
    return 0;
}