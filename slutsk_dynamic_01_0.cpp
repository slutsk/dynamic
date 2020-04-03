#include<iostream>
using namespace std;
int main(){
    int arr[100]={};
    int n;
    cin >> n;
    for(int i = 1; i <=n; i++){
        arr[i] = arr[i-1] + i;
    }
    cout << arr[n];
    return 0;
}
