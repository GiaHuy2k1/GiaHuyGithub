#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int reverseNumber(int n) {
    int sodaonguoc = 0;

    while (n > 0) {
        int a = n % 10;
        sodaonguoc = sodaonguoc * 10 + a; 
        n /= 10;
    }

    return sodaonguoc;
}
int giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giaithua(n - 1);
    }
}
    //CHÚ THÍCH
    //case 1 : Nhập số nguyên n từ bàn phím trong phạm vi 10-99 sao cho tích của 2 chữ số bằng 2 lần tổng của 2 chữ số đó
    //case 2 : In ra các số nguyên tố nhỏ hơn n được nhập từ bàn phím
    //case 3 : xuất ra bản mã ASCII : gồm 2 cột : ký tự và mã ASCII
    //case 4 : Tìm chữ số đảo ngược của số nguyên dương n
    //case 5 : Đếm số lượng chữ số, tính tổng các chữ số của số nguyên dương n
    //case 6 : Tính cước truy cập Internet
    //case 7 : Tính tiền thuê phòng
    //case 9 : Tính tiền số Km khi đi taxi
    //case 12(bài ứng dụng duy nhất hiểu dc =)) ) : Tính tổng S(n)

int main()
{
    cout<<" Bài tập lab 2 ? " ;
    int n;
    cin>>n;
    switch (n) {
        case 1 :{
        int a, b ,n, soa, sob;
        cout <<" Nhập số nguyên từ bàn phím : ";
        cin>> n;
        if (n>10 && n<=99)
        {
            soa = n%10;
            sob = n/10;
            a = soa * sob;
            b = 2 * (soa + sob);
            if ( a==b ){
                cout <<" Số nhập vào thỏa mãn điều kiện "<<n<<endl;
            }
            else{
                cout <<" Số nhập vào không thỏa điều kiện ";
            }
            
        }
        else {
            cout <<" Số nhập vào không thỏa điều kiện từ 10-99 ";
        }
            }
            break;
        case 2 : {
            int n;
            cout << "Nhap mot so nguyen duong n: ";
            cin >> n;
        
            cout << "Cac so nguyen to nho hon " << n << " la: ";
        
            for (int i = 2; i < n; ++i) {
                bool sont = true;
        
                if (i < 2) {
                    sont = false;
                }
                for (int j = 2; j * j <= i; ++j) {
                    if (i % j == 0) {
                        sont = false;
                        break;
                    }
                }
                if (sont) {
                    cout << i << " ";}
        }
            }
            break;
        case 3 : {
             const int charactersPerPage = 56;

            int count = 0;
            cout << "Ma ASCII cua cac ky tu:" << endl;
            for (int ascii = 32; ascii <= 127; ++ascii) {
                cout << char(ascii) << " - " << ascii << "   ";
                ++count;
                if (count % charactersPerPage == 0) {
                    cout << endl << "Nhan phim bat ky de xem trang tiep theo...";
                    cin.get();
                    cout << endl;
                }
            }
            cout << endl;
            }
            break;
        case 4 : {
            int n;
            cout << "Nhap mot so nguyen duong n: ";
            cin >> n;
        
            int sodaonguoc = reverseNumber(n);
        
            cout << "So dao nguoc cua " << n << " la: " << sodaonguoc << endl;

        }
        break;
        case 5 : {
            int n;
            cout << "Nhap mot so nguyen duong n: ";
            cin >> n;
        
            int demso = 0;
            int tong = 0;
            int sobandau = n;
            
            int num = n; 
            while (num > 0) {
                int kytu = num % 10;
                tong+= kytu; 
                demso++; 
                num /= 10;
            }
            cout << "So luong chu so cua " << sobandau << " la: " << demso << endl;
            cout << "Tong cac chu so cua " << sobandau << " la: " << tong << endl;

            }
            break;
        case 6 : {
            int gio;
            char buoi;
            double A = 400;
            double B = 350;
            double C = 300;
            double giatien,giatiensaugiamgia;
            cout << "So gio ban muon su dung la : ";
            cin >> gio;
            cout << "Ban su dung vao luc nao? Chon : A (buoi sang chieu 7h-17h)_ B (buoi toi 17h-24h)_ C (buoi khuya 24h-7h) la : ";
            cin >> buoi;
            switch(buoi){  
                case 'A' : {
                    if(gio>6)
                    {
                        giatien= A * gio * 60;
                        giatiensaugiamgia = giatien*(100-10)/100;
                        cout<<"So tien cho tong gio su dung internet la "<<giatiensaugiamgia<<" VND";
                    }
                    else {
                        giatien= A * gio *60;
                        cout<<"So tien su dung internet la "<<giatien<<" VND";
                    };
                }break;
                case 'B' : {
                    if(gio>4)
                    {
                        giatien= B * gio * 60;
                        giatiensaugiamgia = giatien*(100-12)/100;
                        cout<<"So tien cho tong gio su dung internet la "<<giatiensaugiamgia<<" VND";
                    }
                    else {
                        giatien= B * gio * 60;
                        cout<<"So tien su dung internet la "<<giatien<<" VND";
                    };
                }break;
                case 'C' : {
                    if(gio>7)
                    {
                        giatien= C * gio * 60;
                        giatiensaugiamgia = giatien*(100-15)/100;
                        cout<<"So tien cho tong gio su dung internet la "<<giatiensaugiamgia<<" VND";
                    }
                    else {
                        giatien= C * gio * 60;
                        cout<<"So tien su dung internet la "<<giatien<<" VND";
                    };
                }break;
                
            }
        }break;
        case 7 : {
            int ngaythue;
            char loaiphong;
            double A = 250;
            double B = 200;
            double C = 150;
            double giatien,giatiensaugiamgia;
            cout<< " So ngay ban muon thue la : ";
            cin >> ngaythue;
            cout<< " Loai phong ban muon thue la : ";
            cin >> loaiphong;
            switch(loaiphong){
                case 'A' : {
                    if(ngaythue>=12)
                    {
                        giatien= A * ngaythue;
                        giatiensaugiamgia = giatien*(100-10)/100;
                        cout<<"So tien thue phong la "<<giatiensaugiamgia<<" ngan VND";
                    }
                    else {
                        giatien=A * ngaythue;
                        cout<<"So tien thue phong la "<<giatien<<" ngan VND";
                    };
                }break;
                case 'B' : {
                    if(ngaythue>=12)
                    {
                        giatien= B * ngaythue;
                        giatiensaugiamgia = giatien*(100-8)/100;
                        cout<<"So tien thue phong la "<<giatiensaugiamgia<<" ngan VND";
                    }
                    else {
                        giatien=B * ngaythue;
                        cout<<"So tien thue phong la "<<giatien <<" ngan VND";
                    };
                }break;
                case 'C' : {
                    if(ngaythue>=12)
                    {
                        giatien= C * ngaythue;
                        giatiensaugiamgia = giatien*(100-8)/100;
                        cout<<"So tien thue phong la "<<giatiensaugiamgia<<" ngan VND";
                    }
                    else {
                        giatien=C * ngaythue;
                        cout<<"So tien thue phong la "<<giatien <<" ngan VND";
                    }
                }break;
            }
            }
            break;
        case 9 : {
            int gia;
            int khoangcach;
            const int sokm1 = 15000;
            const int sokm2to5 = 13500;
            const int sokm6to11 = 11000;
            const double giamgia = 0.1;
            
            cout << " Nhap so km da di la : ";
            cin >>khoangcach;
            
            if (khoangcach <= 0) {
            cout << "So km khong hop le!" << endl;
            return 1;
            } 
        else if (khoangcach == 1) {
            gia = sokm1;
            }
        else if (khoangcach >= 2 && khoangcach <= 5) 
        {
            gia = khoangcach * sokm2to5;
            }
        else if (khoangcach >= 6 && khoangcach <= 11) 
        {
            gia = khoangcach * sokm6to11;
            }
        else { 
            gia = khoangcach * sokm1;
            gia *= (1 - giamgia);
        }
         cout << "Tong so tien di taxi: " << gia << " VND" << endl;
        }break;
        case 12 : {
            int n;
            cout << "Nhap mot so nguyen duong n: ";
            cin >> n;
        
            double Tong = 0;
            double partialSum = 0;
        
            for (int i = 1; i <= n; ++i) {
                partialSum += i;
                Tong += partialSum / giaithua(i);
            }
        
            cout << "Tong S(n) = " << Tong << endl;
            
        }
        break;
    }
}


