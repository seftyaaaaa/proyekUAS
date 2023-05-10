#include <stdio.h>

struct data_buku
{
    char judul[255];
    char penerbit[255];
    char pengarang[255];
    int halaman;
    int tahun;
    int tersedia;
};

struct data_buku buku[60];

int main()
{
    int pilihan;
    printf("====Selamat datang di Perpustakaan Statistika====n:\n");
    printf("1. Tambah buku\n");
    printf("2. Cari buku\n");
    printf("3. Pinjam buku\n");
    printf("4. Kembalikan buku\n");
    printf("5. Keluar\n");
    printf("Pilihan anda: ");
    scanf("%d", &pilihan);
    
    switch (pilihan)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 2:
            break;
        case 2:
            break;
       
        }
}
