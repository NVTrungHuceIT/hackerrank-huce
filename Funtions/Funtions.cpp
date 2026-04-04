#include <iostream>
#include <cstdio>

using namespace std;
int a, b, c, d;
int max_of_four(int a, int b, int c, int d);

int main () {
    std::cin >> a >> b >> c >> d;
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    std::cout << max;
}
