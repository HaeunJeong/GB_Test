#include <cstdio>
#include <algorithm>

using namespace std;

int N;

int arr[11];

int Plus, Minus, Mul, Mod;

int Min = 1000000001, Max = -1000000001;

void solve(int idx, int sum, int plus, int minus, int mul, int mod) {

#ifdef DEBUG
    printf("idx: %d, sum: %d, plus: %d, minus: %d, mul: %d, mod: %d\n",idx, sum, plus, minus, mul, mod);
#endif

    if (idx == N) {

        Min = min(Min, sum);

        Max = max(Max, sum);

        return;

    }


    if (plus) {

        #ifdef DEBUG
            printf("puls called\n");
        #endif
        
        solve(idx + 1, sum + arr[idx], plus - 1, minus, mul, mod);
        
    }

    if (minus) {
        #ifdef DEBUG
            printf("minus called\n");
         #endif
        
        solve(idx + 1, sum - arr[idx], plus, minus - 1, mul, mod);

    }
    
   

    if (mul){

        #ifdef DEBUG
            printf("mul called\n");
         #endif

        solve(idx + 1, sum*arr[idx], plus, minus, mul - 1, mod);

    } 

    if (mod){


         #ifdef DEBUG
            printf("mod called\n");
         #endif

        solve(idx + 1, sum / arr[idx], plus, minus, mul, mod - 1);

    }

}

int main() {

    scanf("%d", &N);

    for (int n = 0;n < N;n++) scanf("%d", &arr[n]);

    scanf("%d%d%d%d", &Plus, &Minus, &Mul, &Mod);

    solve(1, arr[0], Plus, Minus, Mul, Mod);

    printf("%d\n%d\n", Max, Min);

    return 0;

}
