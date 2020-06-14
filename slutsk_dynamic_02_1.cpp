#include <bits/stdc++.h>
using namespace std;
int main(){
    const int16_t max_fib = 92;
    int64_t F[max_fib+1];
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= max_fib; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }
    int n;
    cin >> n;
    cout << F[n];
}
