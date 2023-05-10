#include <stdio.h>

int total_buku=0;

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

void menambah_buku()
{
    printf("===Untuk menambahkan buku di Perpustakaan Statistika, silahkan masukan===");
    printf("Judul buku: "); //masukan judul buku tanpa spasi
    scanf("%s", buku[total_buku].judul);
    printf("Pengarang: ");
    scanf("%s", buku[total_buku].pengarang);
    printf("Penerbit: ");
    scanf("%s", buku[total_buku].penerbit);
    printf("Jumlah halaman: ");
    scanf("%d", &buku[total_buku].halaman);
    printf("Tahun terbit: ");
    scanf("%d", &buku[total_buku].tahun);
    buku[total_buku].tersedia = 1;

    ++total_buku;
    printf("Buku telah berhasil ditambahkan. Terimakasih ^-^\n");
}

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
            menambahkan_buku();
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
