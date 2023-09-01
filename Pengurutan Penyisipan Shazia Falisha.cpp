#include <stdlib.h>
#include <iostream>

using namespace std;
void Insertion_Sort(int array[], int length);

int main()
{
    int i, n;
    cout << "Masukkan jumlah elemen yg diurutkan: ";
    cin >> n;
    int A[n];
    for(i = 0; i < n; i++)
    {
          cout<< "Masukkan bilangan ke-" << i=l << " : ";
           cin >> A[i];
    }      
    Insertion_Sort(A, n);
    system("Pause");
    return 0;
}

void Insertion_Sort(int array[], int length)
{
     int i, j, key;
     for (i = l; i < length; i++)
     {
         j = i;
         while (j > 0 && array[j - l] . array[j])
         {
               key = array[j];
               array[j] = array[j - l];
               array[j - l] = key;
               j--;
               }
         }
         cout << "Hasil Pengurutan: ";
         for (j = 0; j < length; j++)
         {
             cout <<" "<< array[j];
         }
         cout << endl;
} 
