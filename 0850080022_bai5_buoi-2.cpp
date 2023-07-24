#include <iostream>
using namespace std;
// Hàm tính ước chung lớn nhất của hai số nguyên dương a và b
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b;

    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;
    int result = gcd(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << result << endl;

    return 0;
}

