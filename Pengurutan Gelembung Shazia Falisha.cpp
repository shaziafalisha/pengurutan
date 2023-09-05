#include<iostream>
#include<cstdlib>
using namespace std;

void Bubble_Sort(int A[], int n)
{
     int i, j, buffer;
     for(i = 0; i < n; i++)
     {
           for (j = 0; j < n-i-l; j++)
           {
               if( A[j] > A[j+l])
               {
                   buffer = A[j];
                   A[j] = A[j+l};
                   A[j+l] = buffer;
               }
           }
     }
     cout<<("Hasil Pengurutan: ");
     for(i = 0; i < n; i++)
     {
           cout << A[i] << "m ";
     }
}

int main()
{
    int i, n;
   cout << "Masukkan jumlah elemen yg akan diurutkan: ";
   cin>> n;
   int A[n];
   for(i = 0; i < n; i++)
   {
         cout<< "Masukkan bilangan ke-" << i+l << " : ";
         cin >> A[i];
   }
   Bubble_Sort(A, n);
   syste,("Pause");
   return 0;
}     
