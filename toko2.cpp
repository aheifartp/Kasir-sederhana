#include <iostream>
#include <string>
using namespace std;
// NAMA : MUHAMMAD RAFIE HABIBI FAUZI
// KELAS: TEKKOM A
// NIM  : 235150301111009

// 1.toko ini hanya mampu menampilkan display 10 barang
// 2.nama barang harus kurang dari 8 karakter tanpa spasi
// 3.password admin adalah "gimkuat"
// 4.password pembeli adalah "beli"
// 5.admin bisa mengubah stok dan mengubah harga
int main(){
    system("cls");
    // Declare variabel
    int y,x;
    int a=0,b=0,c=0,d=0,e=0,f=0;
    int belibrg[10]={0,0,0,0,0,0,0,0,0,0};
    int pilih1,pilihan2,pilihan3,pilihan4;
    int stokbrg[10]={50,50,50,50,0,0,0,0};
    int hargabrg[10]={500000,400000,450000,700000};
    string password;
    string namabrg[10]={};
    //pilih role
    for (int i = 0; ; i++)
    {
        AWAL:
        cout << "=========SELAMAT DATANG DI TOKO GIM=========" << endl;
        cout << "PILIH ROLE\n[1]PEMBELI\n[2]ADMIN\n[0]KELUAR\nPILIH :";
        cin >> x;
        system("cls");
        
    if (x==1)
    {
        AUTH1:
        cout<<"MASUKKAN PASSWORD ANDA\nPASSWORD :";
        cin>>password;
        system("cls");
        if (password=="beli"){


      for (int i = 0;  ;i++)
      {
        //display pembeli(barang, stok dan harga barang)
        cout<<"BARANG\t\t||\tSTOK\t||\tHARGA"<<endl;
        cout<<"============================================="<< endl;
        cout<<"[1]RIMBA\t||\t"<<stokbrg[0]<<"\t||\t" << hargabrg[0] << endl;
        cout<<"[2]EVOLENE\t||\t"<<stokbrg[1]<<"\t||\t" << hargabrg[1] <<endl;
        cout<<"[3]PROVUS\t||\t"<<stokbrg[2]<<"\t||\t" << hargabrg[2] <<endl;
        cout<<"[4]ANS\t\t||\t"<<stokbrg[3]<<"\t||\t" << hargabrg[3] <<endl;
            for (int i = 5; i < 5 + e; i++)
            {
                 cout<<"["<<i<<"]"<<namabrg[i] <<"\t\t||\t"<<stokbrg[i]<<"\t||\t" << hargabrg[i] <<endl;
            }
        cout<<"\n[0]KELUAR\n";
        cout<<"PILIHAN BARANG :";
        cin>>pilih1;
        //pilih barang dan banyak barang yang ingin dibeli
        if (pilih1==1)
        {
            cout << "BERAPA BANYAK :";
            cin >> x;
            a=a+x;
            system("cls");
            stokbrg[0]=stokbrg[0]-x;
        } else if (pilih1==2)
        {
            cout << "BERAPA BANYAK :";
            cin >> x;
            b=b+x;
            system("cls");
            stokbrg[1]=stokbrg[1]-x;
        } else if (pilih1==3)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
            c=c+x;
             system("cls");
            stokbrg[2]=stokbrg[2]-x;
        } else if (pilih1==4)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
            d=d+x;
             system("cls");
            stokbrg[3]=stokbrg[3]-x;
        } else if (pilih1==5)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
             system("cls");
            belibrg[0]= belibrg[0]+x;
            stokbrg[5]=stokbrg[5]-x;
        } else if (pilih1==6)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
             system("cls");
            belibrg[1]= belibrg[1]+x;
            stokbrg[6]=stokbrg[6]-x;
        } else if (pilih1==7)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
             system("cls");
            belibrg[1]= belibrg[1]+x;
            stokbrg[7]=stokbrg[7]-x;
        } else if (pilih1==8)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
             system("cls");
            belibrg[2]= belibrg[2]+x;
            stokbrg[8]=stokbrg[8]-x;
        } else if (pilih1==9)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
             system("cls");
            belibrg[3]= belibrg[3]+x;
            stokbrg[9]=stokbrg[9]-x;
        } else if (pilih1==10)
        {
            cout << "BERAPA BANYAK :";
             cin >> x;
             system("cls");
            belibrg[4]= belibrg[4]+x;
            stokbrg[10]=stokbrg[10]-x;
        }  else if (pilih1==0)
        { 
            system("cls");
            break;
        }
        //tampilan struk
        cout<<"==================\n";
        cout<<"STRUK ANDA"<<"\t||\n";
        cout<<"==================\n";
        cout<<"RIMBA\t||"<<a<<"\t||\n";
        cout<<"EVOLENE\t||"<<b<<"\t||\n";
        cout<<"PROVUS\t||"<<c<<"\t||\n";
        cout<<"ANS\t||"<<d<<"\t||\n";
        for (int i = 5; i < 5 + e; i++)
            {
                 cout<<namabrg[i] <<"\t||"<<belibrg[i-5]<<"\t||"<<endl;
            }
        cout<<"==================\n";
        
        //total belanja
        cout<<"TOTAL BELANJA :Rp"<<a*hargabrg[0]+b*hargabrg[1]+c*hargabrg[2]+d*hargabrg[3]+belibrg[0]*hargabrg[5]+belibrg[1]*hargabrg[6]+belibrg[2]*hargabrg[7]+belibrg[3]*hargabrg[8]+belibrg[4]*hargabrg[9]+belibrg[4]*hargabrg[10];

        
        cout<<endl<<endl;
      }
        } else {
            cout << "PASSWORD ANDA SALAH\n";
            goto AUTH1;
        }
    } else if (x==2)
    {
        //autentikasi admin
        AUTH:
        cout<<"MASUKKAN PASSWORD ANDA\nPASSWORD :";
        cin>>password;
        system("cls");
        if (password=="gimkuat")
        {
            STOK:
            cout<<"BARANG\t\t||\tSTOK\t||\tHARGA"<<endl;
            cout<<"=============================================" << endl;
            cout<<"RIMBA\t\t||\t"<<stokbrg[0]<<"\t||\t" << hargabrg[0] << endl;
            cout<<"EVOLENE\t\t||\t"<<stokbrg[1]<<"\t||\t" << hargabrg[1] <<endl;
            cout<<"PROVUS\t\t||\t"<<stokbrg[2]<<"\t||\t" << hargabrg[2] <<endl;
            cout<<"ANS\t\t||\t"<<stokbrg[3]<<"\t||\t" << hargabrg[3] <<endl;
            for (int i = 5; i < 5 + e; i++)
            {
                 cout<< namabrg[i] <<"\t\t||\t"<<stokbrg[i]<<"\t||\t" << hargabrg[i] <<endl;
            }
            
            cout<<"=============================================" << endl;
            cout<<"[1]MENGUBAH STOK\n[2]TAMBAH BARANG\n[0]KELUAR\nPILIH :";
            cin>>pilihan2;
            //admin mengubah stok
             system("cls");
            switch (pilihan2)
             {
                case 1:
                {
                    cout<<"UBAH STOK\n";
                    cout<<"[1]RIMBA MASS\n[2]EVOLENE\n[3]PROVUS\n[4]ANS\n";
                    for (int i = 5; i < 5+e ; i++)
                    {
                        cout <<"["<<i<<"]"<<namabrg[i]<<endl;
                    }
                    
                    cout<<"[0]KELUAR"<<endl;
                    cout<<"PILIH :";
                    //pilih barang yang mana yang ingin diubah stoknya
                    cin>>pilihan3;
                    system("cls");
                    switch (pilihan3)
                    {
                    case 1:
                        cout<<"STOK RIMBA :"<<stokbrg[0];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG"<<endl;
                        cout<<"PILIH :";
                        cin >> pilihan4;
                        //pilihan apakah barang ingin ditambah atau dikurang
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[0]=stokbrg[0] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[0]=stokbrg[0] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                            
                        }
                        break;
                    
                    case 2:
                        cout<<"STOK EVOLENE :"<<stokbrg[1];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[1]=stokbrg[1] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[1]=stokbrg[1] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                            
                        }
                        break;

                    case 3:
                        cout<<"STOK PROVUS :"<<stokbrg[2];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[2]=stokbrg[2] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[2]=stokbrg[2] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                            
                        }
                        break;

                    case 4:
                        cout<<"STOK ANS :"<<stokbrg[3];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG\n"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[3]=stokbrg[3] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[3]=stokbrg[3] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                         }
                    
                    case 5:
                        cout<<"STOK "<<namabrg[5]<<" :"<<stokbrg[5];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG\n"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[5]=stokbrg[5] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[5]=stokbrg[5] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                        }

                    case 6:
                        cout<<"STOK "<<namabrg[6]<<" :"<<stokbrg[6];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG\n"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[6]=stokbrg[6] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[6]=stokbrg[6] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                        }
                    
                    case 7:                       
                        cout<<"STOK "<<namabrg[7]<<" :"<<stokbrg[7];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG\n"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[7]=stokbrg[7] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[7]=stokbrg[7] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                        }

                    case 8:
                        cout<<"STOK "<<namabrg[8]<<" :"<<stokbrg[8];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG\n"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[8]=stokbrg[8] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[8]=stokbrg[8] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                        }

                    case 9:
                        cout<<"STOK "<<namabrg[9]<<" :"<<stokbrg[9];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG\n"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[9]=stokbrg[9] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[9]=stokbrg[9] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                        }
                    
                    case 10:
                        cout<<"STOK "<<namabrg[10]<<" :"<<stokbrg[10];
                        cout<<"\n[1]DITAMBAH\n[2]DIKURANG\n"<<endl;
                        cout<<"PILIH :";
                        cin>>pilihan4;
                        switch (pilihan4)
                        {
                        case 1:
                            cout<<"MASUKKAN PENAMBAHAN :";
                            cin>>x;
                            system("cls");
                            stokbrg[9]=stokbrg[9] + x;
                            goto STOK;
                        
                        case 2:
                            cout<<"MASUKKAN PENGURANGAN :";
                            cin>>y;
                            system("cls");
                            stokbrg[9]=stokbrg[9] - y;
                            goto STOK;
                        
                        default:
                            goto STOK;
                        }
                    case 0:
                        goto STOK;
                    }


                 }
                case 0:
                goto AWAL;

                case 2:
                e++;
                f++;
                //menambah barang baru
                cout <<"TAMBAH BARANG" << endl;
                cout<<"=============================================" << endl;
                cout << "NAMA BARANG :";
                cin >> namabrg[4 + f];
                cout << "STOK BARANG :";
                cin >> stokbrg[4 + f];
                cout << "HARGA BARANG :";
                cin >> hargabrg[4 + f];
                system("cls");
                goto STOK;
            }
         } else
         {
            //password salah
            cout << "PASSWORD ANDA SALAH\n";
            goto AUTH;
         }
         
    } else {
        return 0;
    }
}

}
             

      
    
    