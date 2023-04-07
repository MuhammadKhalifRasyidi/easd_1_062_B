//1. Pada dasarnya algoritma sendiri memiliki arti serangkai susunan proses pemecahan masalah,
//   itulah kenapa jika kita menulis algotirma yang benar ketika sedang membuat program maka program itu akan berjalan sebagaimana mestinya,
//   tapi jika kita salah dalam menulis algoritma dalam program maka akan terjadi error, segitu berpengaruhnya algoritma dalam memecahkan masalah.
//2. Algortima sekuensial dan algortima perulangan/looping.
//3. Ukuran input data, penggunaan memori, kecepatan prosesor, sistem operasi, dll.
//4. Bubble sort, karena bubble sort merupakan algoritma yang simple dan sangat mudah dipahami, 
//   mungkin itu menjadi suatu alasan juga mengapa materi itu dijelaskan/sampaikan di pertemuan pertama pembahasan algoritma.
//5. Quadratic : Bubble sort, insertion sort, shell sort.
//	 Loglinear : Selection sort, merge sort, quick sort
//6. algoritma merge sort :

#include <iostream>
using namespace std;

const int MAX_DATA = 82; // 62 + 20 -2 x 15 + 10 + 20 ( nim 62)

void merge(int khalif[], int low, int mid, int high) {       //arr diganti dengan nama panggilan 
    int i = low, KR = mid + 1, k = low;                     //j diganti dengan inisial nama awal 
    int b[MAX_DATA];
    while (i <= mid && KR <= high) {
        if (khalif[i] <= khalif[KR]) {
            b[k] = khalif[i];
            i++;
        }
        else {
            b[k] = khalif[KR];
            KR++;
        }
        k++;
    }
    while (KR <= high) {
        b[k] = khalif[KR];
        KR++;
        k++;
    }
    while (i <= mid) {
        b[k] = khalif[KR];
        i++;
        k++;
    }
    for (k = low; k <= high; k++) {
        khalif[k] = b[k];
    }
}

void mergeSort(int khalif[], int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(khalif, low, mid);
    mergeSort(khalif, mid + 1, high);
    merge(khalif, low, mid, high);
}

void input(int khalif[], int& n) {
    cout << "masukkan jumlah elemen (maximum " << MAX_DATA << "): ";
    cin >> n;
    if (n > MAX_DATA) {
        cout << "jumlah elemen maksumum yang dizinkan!" << endl;
        exit(1);
    }
    cout << "masukkan elemen:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> khalif[i];
    }
}

void display(int khalif[], int n) {
    cout << "Sorted elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << khalif[i] << " ";
    }
    cout << endl;
}

int main() {
    int khalif[MAX_DATA];
    int n;
    input(khalif, n);
    mergeSort(khalif, 0, n - 1);
    display(khalif, n);
    return 0;
}
