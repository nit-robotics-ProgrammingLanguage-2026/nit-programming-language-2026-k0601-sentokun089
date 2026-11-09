#include <stdio.h>
 
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
 
    // n が負の場合は NG を表示
    if (n < 0) {
        printf("NG\n");
    } else {
        // 合計が int の範囲を超える可能性があるため long long 型を使用
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("%lld\n", sum);
    }
 
    return 0;
} 