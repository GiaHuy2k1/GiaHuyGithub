#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout<<" Bài tập về nhà buổi 2 số ? " ;
    int n;
    cin>>n;
    //case 1 : Viết chương trình nhập vào số  nguyên dương n. Tính tổng S=1/2 + 1/4 +...+1/2n
    //case 2 : Viết chương trình nhập vào số  nguyên dương n. Tính tổng S= 1 + 1*2 +.....+1*2*3*n
    //case 4 : Viết chương trình tính tổng các chữ số trong 1 số .Ví dụ 1234 có S = 1+2+3+4 = 10
    switch (n) {
        case 1 :{
            int n;
            double sum = 0.0;
            cout << "Nhap mot so nguyen duong n: ";
            cin >> n;
            for (int i = 1; i <= n; ++i) {
                sum += 1.0 / (2 * i); // Tính và cộng giá trị 1/(2*i) vào tổng
            }
            cout << "Tong S = 1/2 + 1/4 + ... + 1/2n la: " << sum << endl;
                }
                break;
        case 2 : {
            int n;
            int sum = 0;
            int product = 1;
            cout << "Nhap mot so nguyen duong n: ";
            cin >> n;
        
            for (int i = 1; i <= n; ++i) {
                product *= i;
                sum += product;
            }
            cout << "Tong S = 1 + 1*2 + ... + 1*2*3*n la: " << sum << endl;
                }
                break;
        case 4 : {
            int number;
            cout << "Nhap mot so nguyen: ";
            cin >> number;
            int sum = 0;
            int digit;
            int temp = number;
        
            while (temp > 0) {
                digit = temp % 10; 
                sum += digit;     
                temp /= 10;
            }
            cout << "Tong cac chu so cua so " << number << " la: " << sum << endl;
                }
                break;
    }
}