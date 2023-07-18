/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout<<" Bài số ? " ;
    int n;
    cin>>n;
    switch (n) {
    case 1 :
        cout<<"*****************************"<<endl;
        cout<<"**    THAO CHUONG BANG     **"<<endl;
        cout<<"**      NGON NGU C         **"<<endl;
        cout<<"*****************************"<<endl;
    break;
    
    case 2 :
    cout<< "Nhập năm sinh ";
    int nam, tuoi;
    cin>>nam;
    tuoi=2023-nam;
    cout<<"Số tuổi bằng " <<tuoi;
        break;
        
    case 3 :
    char ch;
        int ascii;
        int number;
        cout << "Nhập một kí tự hoặc số: ";
        if( cin >> ch){
           
            ascii = ch;
            cout << "Mã ASCII của kí tự '" << ch << "' là: " << ascii << endl;
        
        }
        break;
    case 4 :
    float c,r,s,pi;
		pi = 3.14;
		int chon;
		cout <<"Nhập bán kính hình tròn: ";
		cin>>r;
		cout<<"hãy điền 1 số tượng trưng cho chu vi hoặc 2 số tượng trưng cho diện tích: ";
		cin>>chon;
		switch (chon) {
	    case 1:
		c = (r * 2) * pi;
		cout<<"chu vi của hình tròn là " << c;
		break;
	    case 2:
	    s = pow(r, 2) * pi;
	    cout<<"diện tích của hình tròn là " << s;
        break;
		}
       
	    break;
    
    case 5 : 
    {
        int a, b;
    
    cout << "Nhap so nguyen thu nhat: ";
    cin >> a;
    
    cout << "Nhap so nguyen thu hai: ";
    cin >> b;
    
    int min_value = min(a, b);
    int max_value = max(a, b);
    
    cout << "min = " << min_value << ", max = " << max_value << endl;
    }
    
        break;
    case 6 : {
        string hoTen;
        string gioiTinh;
        string lop;
        string SDT;
        string MaSV;
        cout << "Nhập họ và tên sinh viên: ";
        getline(cin, hoTen);
        cin>>hoTen;
    
        cout << "Nhập mã số sinh viên: ";
        getline(cin, MaSV);
        cin >> MaSV;
    
        cout << "Nhập giới tính sinh viên: ";
        getline(cin, gioiTinh);
        cin>> gioiTinh;
    
        cout << "Nhập lớp của sinh viên: ";
        getline(cin, lop);
        cin>> lop;
        
         cout << "Nhập SDT của sinh viên: ";
        getline(cin, SDT);
        cin>> SDT;
        // Xuất thông tin sinh viên ra màn hình
        cout << "Thông tin sinh viên:" << endl;
        cout << "Họ và tên: " << hoTen << endl;
        cout << "MaSV: " << MaSV << endl;
        cout << "Giới tính: " << gioiTinh << endl;
        cout << "Lớp: " << lop << endl;
        cout << "SDT :  " << SDT << endl;
        }
        break;
        /////////////////////////////////////////////////////////////////////
        case 10 : //Câu 1 ứng dụng (bài ứng dụng từ câu 10 trở đi)
        {
                double ban_kinh;
                cout << "Nhập bán kính của hình cau: ";
                cin >> ban_kinh;
                double dien_tich = 4 * M_PI * pow(ban_kinh, 2);
                double the_tich = (4.0 / 3.0) * M_PI * pow(ban_kinh, 3);
                // In ra kết quả
                cout << "Diện tích hình cầu là: " << dien_tich << endl;
                cout << "Thể tích hình cầu là: " << the_tich << endl;
                }
                break;
        case 13 ://câu 4 ứng dụng
        {

                double R1, R2, R3;
            
                cout << "Nhập giá trị điện trở R1: ";
                cin >> R1;
            
                cout << "Nhập giá trị điện trở R2: ";
                cin >> R2;
            
                cout << "Nhập giá trị điện trở R3: ";
                cin >> R3;
            
                // Tính điện trở tương đương Rt
                double Rtd = 1 / (1 / R1 + 1 / R2 + 1 / R3);
            
                // In ra kết quả
                cout << "Điện trở tương đương của mạch là: " << Rtd << " ohm" << endl;
            
                }
                break;
        case 15 : {

                double canh_a;
                
                cout << "Nhập cạnh a của tam giác đều: ";
                cin >> canh_a;
                
                double chu_vi = 3 * canh_a;
                double dien_tich = (sqrt(3) / 4) * pow(canh_a, 2);
                
                cout << "Chu vi tam giác đều là: " << chu_vi << endl;
                cout << "Diện tích tam giác đều là: " << dien_tich << endl;
                }       
                break;
        case 16  :
                { 
                int gio, phut, giay;
                
                cout << "Nhập giờ: ";
                cin >> gio;
                cout << "Nhập phút: ";
                cin >> phut;
                cout << "Nhập giây: ";
                cin >> giay;
                
                int tong_giay = gio * 3600 + phut * 60 + giay;
                
                cout << "Thời gian tương ứng: " << tong_giay << " giây" << endl;
                }
                break;
        case 17 :{
                int thoi_gian_giay;
                cout << "Nhập thời gian tính bằng giây: ";
                cin >> thoi_gian_giay;
                
                int gio = thoi_gian_giay / 3600;
                int phut = (thoi_gian_giay % 3600) / 60;
                int giay = thoi_gian_giay % 60;
                
                cout << "Thời gian tương ứng: " << gio << " giờ, " << phut << " phút, " << giay << " giây" << endl;
                }
                break;
                
        ///////////////////////////////////////////////////////////////////////////////////        
        case 20 ://câu 1 bonus
        { 
       int tong_so_giay;
    
            cout << "Nhập tổng số giây: ";
            cin >> tong_so_giay;
        
            // Tính giờ, phút và giây từ tổng số giây
            int phut = (tong_so_giay % 3600) / 60;
            int gio = tong_so_giay / 3600;
            int giay = tong_so_giay % 60;
        
            // In ra kết quả
            cout << "Kết quả chuyển đổi:" << endl;
            cout << "Giờ: " << gio << endl;
            cout << "Phút: " << phut << endl;
            cout << "Giây: " << giay << endl;     
        }
        break;

    }
}

