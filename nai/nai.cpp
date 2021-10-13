#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;
auto f1 = [](int x){x = 20 - abs(x); return x;};
auto f2 = [](int i){ i = (2 * (i%2) - 1)*i/2; return i;};

auto obliczenia = [](auto f1, auto f2, int n) {
    int max_x = f2(0);
    int max_y = f1(max_y);
    for (int i = 1; i < n; i++) {
        int x = f2(i);
        int y = f1(x);
        if (y > max_y) {
            max_x = x;
            max_y = y;
        }
    }
    return make_pair(max_x, max_y);
};

int main() {
    auto [a,b] = obliczenia(f1, f2, 22);
    cout << a << " : " << b << endl;
  
}
