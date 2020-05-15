#include <iostream>
using namespace std;
// Problema 3 ordenamiento del array
void sort(int *arr, int n)
{
    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (*(arr + j) < *(arr + i)) {

                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
int main()
{
  int arr2[] = {8,7,5,4};
  sort(arr2, 4);
  for(int i = 0; i < 4; i++)
  {
      cout<<arr2[i]<<" ";
  }
  cout<<endl;
}

