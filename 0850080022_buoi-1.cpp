
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout<<" Bài tập về nhà buổi 1 số ? " ;
    int n;
    cin>>n;
    // case 1 ://Giải phương trình bậc nhất ax+b=0.
    // case 2 : //kiểm tra n có phải là số nguyên tố hay không?.
    // case 3 : //Tìm giá trị biểu thức S=1+2+..n.
    // case 4 : //Nhập vào số nguyên dương n. Tính tổng các chữ số của số đó.
    // case 5 : //Tìm số lớn nhất trong 3 số.
    // case 6 : //Cho số xe (gồm 4 chữ số).Cho biết số xe được mấy nút?.
    // case 7 :  //Cho 1 ký tự thường. In ra ký tự in chữ hoa tương ứng.
    // case 8 : //Nhập vào 3 số nguyên. Cho biết số lớn nhất và nhỏ nhất ?.
    switch (n) {
        case 1 ://Giải phương trình bậc nhất ax+b=0
            {
                double a, b;
            cout << "Nhập hệ số a: ";
            cin >> a;
            cout << "Nhập hệ số b: ";
            cin >> b;
            if (a == 0) {
                if (b == 0) {
                    cout << "Phương trình có vô số nghiệm.";
                } else {
                    cout << "Phương trình vô nghiệm.";
                }
            } else {
                double x = -b / a;
                cout << "Phương trình có nghiệm duy nhất là : " << x;
            }
                        }
                break;
        
        case 2 : //kiểm tra n có phải là số nguyên tố hay không?
            {
                int n;
            cout << "Nhap mot so nguyen duong: ";
            cin >> n;
            if (n) {
                cout << n << " la so nguyen to." << endl;
            } else 
                {
                cout << n << " khong phai la so nguyen to." << endl;
                }
            }
                break;
        
        case 3 : //Tìm giá trị biểu thức S=1+2+..n
            {
                int n;
            cout << "Nhap mot so nguyen duong n: ";
            cin >> n;
        
            int sum = 0;
            for (int i = 1; i <= n; ++i) {
                sum += i;
            }
        
            cout << "Gia tri cua bieu thuc S = 1 + 2 + ... + " << n << " la: " << sum << endl;
                }
                break;

        case 4 : //Nhập vào số nguyên dương n. Tính tổng các chữ số của số đó.
            {
                int n;
            cout << "Nhap mot so nguyen duong: ";
            cin >> n;
            int sum = 0;
            int digit;
            while (n > 0) {
                digit = n % 10; 
                sum += digit;   
                n /= 10;
            }
            cout << "Tong cac chu so cua so " << n << " la: " << sum << endl;
                }
                break;
        
        case 5 : //Tìm số lớn nhất trong 3 số
            {
                int num1, num2, num3;
            cout << "Nhap ba so nguyen: ";
            cin >> num1 >> num2 >> num3;
        
            int maxNumber = num1;
            if (num2 > maxNumber) {
                maxNumber = num2;
            }
            if (num3 > maxNumber) {
                maxNumber = num3;
            }
            cout << "So lon nhat trong ba so la: " << maxNumber << endl;
                }
                break;
        
        case 6 : //Cho số xe (gồm 4 chữ số).Cho biết số xe được mấy nút?
            {
            const int numberOfDigits = 4; // Số lượng chữ số trong số xe
            int num; // Biến để lưu số xe
        
            cout << "Nhap so xe (" << numberOfDigits << " so): ";
            cin >> num;
        
            int sum = 0;
            for (int i = 0; i < numberOfDigits; ++i) {
                int digit = num % 10; // Trích xuất chữ số cuối cùng của số xe
                sum += digit; // Cộng chữ số vào tổng
                num /= 10; // Loại bỏ chữ số cuối cùng của số xe
            }
        
            cout << "Tong 4 so trong so xe la: " << sum << endl;
                }
                break;
       
        case 7 :  //Cho 1 ký tự thường. In ra ký tự in chữ hoa tương ứng
            {
            char lowercaseChar;
            cout << "Nhap mot ky tu chu thuong: ";
            cin >> lowercaseChar;
        
            char uppercaseChar = toupper(lowercaseChar);
        
            cout << "Ky tu chu in hoa tuong ung la: " << uppercaseChar << endl;
                }
                break;
        
        case 8 : //Nhập vào 3 số nguyên. Cho biết số lớn nhất và nhỏ nhất ?
            {
            int num1, num2, num3;

            cout << "Nhap ba so nguyen: ";
            cin >> num1 >> num2 >> num3;
            int maxNum = num1; // Giả sử số đầu tiên là số lớn nhất
            int minNum = num1; // Giả sử số đầu tiên là số nhỏ nhất
            // So sánh để tìm số lớn nhất
            if (num2 > maxNum) {
                maxNum = num2;
            }
            if (num3 > maxNum) {
                maxNum = num3;
            }
            // So sánh để tìm số nhỏ nhất
            if (num2 < minNum) {
                minNum = num2;
            }
            if (num3 < minNum) {
                minNum = num3;
            }
            cout << "So lon nhat la: " << maxNum << endl;
            cout << "So nho nhat la: " << minNum << endl;
                }
                break;
    }
    }
