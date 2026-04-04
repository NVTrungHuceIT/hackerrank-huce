#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin >> n >> q;
    cin.ignore();

    vector<vector<int>> a(n);
    // Đưa dữ liệu vào mảng
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        a[i].resize(k);

        for (int j=0; j<k; j++) {
            cin >> a[i][j];
        }
    }
    // Xử lí yêu cầu
    for (int query=0; query < q; query++ ){
        int i, j;
        cin >> i >> j;
        cout << a[i][j] <<endl;
    }

     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}