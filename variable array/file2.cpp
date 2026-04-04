 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q; // Đọc số lượng mảng 👎 và số truy vấn (q)

    // Khai báo một mảng chứa n mảng con
    vector<vector<int>> a(n);

    // Bước 1: Đọc dữ liệu vào các mảng
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; // Đọc số lượng phần tử của mảng con thứ i
        a[i].resize(k); // Chỉnh kích thước của mảng con cho vừa với k phần tử

        // Nhập các phần tử vào mảng con thứ i
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    // Bước 2: Xử lý các truy vấn
    for (int query = 0; query < q; query++) {
        int i, j;
        cin >> i >> j; // Đọc chỉ số mảng con (i) và chỉ số phần tử (j)
        
        // In ra kết quả
        cout << a[i][j] << endl;
    }

    return 0;
}