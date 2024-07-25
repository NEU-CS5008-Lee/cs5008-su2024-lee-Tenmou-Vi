// Tianmeng Xia
// tenmousha@gmail.com

#include <stdio.h>

int d[20];

long long int dp(int n) {

    d[0] = 1; 
    d[1] = 0; 
    d[2] = 3;

    for (int i = 3; i <= n; i++) {
        d[i] = d[i-2] * 3; 
        for (int j = 4; j <= i; j += 2) {
            d[i] += d[i-j] * 2; 
        }
    }

    return d[n];

}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld\n", dp(n));
}
