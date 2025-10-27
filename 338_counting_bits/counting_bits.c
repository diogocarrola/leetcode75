#include <stdlib.h>

int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* ans = (int*)malloc((n + 1) * sizeof(int));
    ans[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }
    
    return ans;
}