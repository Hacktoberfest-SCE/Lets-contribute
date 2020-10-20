#include <stdio.h>

int counter[5];
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        counter[0]++;               //Line1
        for(j = 0; j < n-i-1; j++)
        {
            counter[1]++;           //Line2
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                counter[2]++;       //Line3
                arr[j] = arr[j+1];
                counter[3]++;       //Line4
                arr[j+1] = temp;
                counter[4]++;       //Line5
            }
        }
    }

    // print the sorted array
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{
    int arr[100], i, n, step, temp;
    // ask user for number of elements to be sorted
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    // input elements if the array
    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    // call the function bubbleSort
    bubbleSort(arr, n);
    printf("Execution of each statement :-\n");
    for(int i=0; i<5; i++)
        printf("Line %d is executed %d times\n",i+1,counter[i]);

    return 0;
}
