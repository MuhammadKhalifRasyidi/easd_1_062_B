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

const int MAX_DATA = 119; // 99 + 20 -2 x 15 + 10 + 20 ( nim 99)

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