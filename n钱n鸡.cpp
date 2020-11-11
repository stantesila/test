#include <iostream>

using namespace std;



#define LL long long
#define LD long double



int main() {
    LL n, now,times, tmp, ii;
    int flag;
    while (scanf_s("%lld", &n)) {
        if (n == 1 || n == 2 || n == 3 || n == 5 || n == 6 || n == 9 || n == 10 || n == 13 || n == 17) {
            puts("No Answer.");
            continue;
        }
        ii = 0;
        flag = 0;
        now = n / 7;
        times = now - 5;
        if (now * 7 == n) {
            ii = now;
        }
        else {
            for (LL i = now; i >= times; --i) {
                for (LL j = 1; j <= 40; ++j) {
                    tmp = i * 7 + j * 4;
                    if (tmp > n) {
                        break;
                    }
                    else if (tmp == n) {
                        flag = 1;
                        break;
                    }
                }
                if (flag) {
                    ii = i;
                    break;
                }
            }
            if (!flag) {
                puts("No Answer.");
                continue;
            }
        }
        cout << (ii / 4) + 1 << endl;
    }
    return 0;
}