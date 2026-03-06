🎮 Sistem Kasir Toko Gim
Simulasi sistem kasir toko peralatan gaming berbasis C++ dengan fitur manajemen stok dan transaksi pembelian, dilengkapi sistem autentikasi dua peran (Admin & Pembeli).

📋 Deskripsi Program
Program ini mensimulasikan sistem kasir toko gaming sederhana berbasis terminal. Terdapat dua peran pengguna:

Pembeli — dapat melihat daftar barang, memilih produk, dan mencetak struk belanja
Admin — dapat mengubah stok barang dan menambahkan produk baru


⚙️ Cara Kompilasi & Menjalankan

⚠️ Program ini menggunakan system("cls") sehingga hanya kompatibel di Windows.

Kompilasi
bashg++ -o toko_gim main.cpp
Menjalankan
bash./toko_gim

🔐 Akun & Password
PeranPasswordPembelibeliAdmingimkuat

🛒 Fitur Pembeli
Setelah login, pembeli dapat:

Melihat daftar barang beserta stok dan harga
Memilih barang dan memasukkan jumlah yang ingin dibeli
Melihat struk belanja yang diperbarui setiap transaksi
Melihat total belanja secara otomatis
Keluar dengan memilih [0]

Produk Bawaan
NoNamaStok AwalHarga1RIMBA50Rp 500.0002EVOLENE50Rp 400.0003PROVUS50Rp 450.0004ANS50Rp 700.000

🔧 Fitur Admin
Setelah login, admin dapat:
1. Mengubah Stok Barang

Pilih barang yang ingin diubah stoknya
Pilih apakah stok ingin ditambah atau dikurangi
Masukkan jumlahnya

2. Menambah Barang Baru

Masukkan nama barang (maks. 8 karakter, tanpa spasi)
Masukkan stok awal
Masukkan harga


⚠️ Batasan Program

Toko hanya dapat menampilkan maksimal 10 barang sekaligus
Nama barang harus kurang dari 8 karakter dan tanpa spasi
Program hanya berjalan di Windows (menggunakan system("cls"))
Tidak ada validasi jika pembeli membeli melebihi stok yang tersedia
Password tersimpan dalam bentuk plaintext di dalam kode


📦 Dependensi

Compiler: g++ (C++11 atau lebih baru)
Library standar: <iostream>, <string>
Tidak memerlukan library eksternal tambahan
