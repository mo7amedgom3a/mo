#include <iostream>
using namespace std;
int main()
{
    //            0,1,2,3,4,5
    int arr[] = {2, 7, 1, 9, 6, 4};
    int key, j;
    int size = sizeof(arr) / sizeof(*arr);
    for (int i = 1; i < size; i++)
    {
        key = arr[i]; //at i=1 -->key=7
                      //at i=2 --> key=1

        j = i - 1; // at i=1-->j=0
                   // at i=2 --> j==1
                   //arr[0]=2 كدا في أول لفة مش هيخش في اللوب
                   // في تاني لفة arr[1] هتساوي 7 وهيكون أكبر من الkey إلي هيا 1
        while (j >= 0 && arr[j] > key)
        {
            //at j==0 and arr[0]=2>key=2
            //هندخل في اللوب من تاني لفة
            arr[j + 1] = arr[j];
            //arr[2]=arr[1]=7
            //2 7 7 9 6 4

            //arr[1]=arr[0]=2
            //2 2 7 9 6 4
            j--;
            //j=0
            
            //j=-1
            //كدا هيطلع من ال while وهييحط ال1 في أول index
        }

        arr[j + 1] = key;
        //arr[-1+1]=arr[0]=key=1
        // 1 2 7 9 6 4
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}