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

void mencari_buku()
{
    char judul[255];
    int cari_buku = 0;

    printf("Cari buku : ");
    scanf("%s", judul);

    for (int i = 0; i < total_buku; i++)
    {
        if (strcmp(buku[i].judul, judul) == 0)
        {
            printf("Judul buku: %s\n", buku[i].judul);
            printf("Pengarang: %s\n", buku[i].pengarang);
            printf("Tahun terbit: %d\n", buku[i].tahun);
            printf("Penerbit %s\n", buku[i].penerbit);
            printf("Jumlah halaman: %d\n", buku[i].halaman);
            cari_buku = 1;
            break;
        }
    }

    if (cari_buku == 0)
    {
        printf("Buku %s tidak ditemukan di Perpustakaan ini\n", judul);
    }
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
