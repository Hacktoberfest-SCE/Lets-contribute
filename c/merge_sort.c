#include<stdio.h>
void mergeSort(int [], int , int );
void merge(int [], int , int , int);
void printArray(int [],int);
// merge sort function
int counter[20];
void mergeSort(int a[], int p, int r)
{
    int q;
    if(p < r)
    {
        q = (p + r) / 2;        //Line1
        counter[0]++;
        mergeSort(a, p, q);     //Line2
        counter[1]++;
        mergeSort(a, q+1, r);   //Line3
        counter[2]++;
        merge(a, p, q, r);      //Line4
        counter[3]++;
    }
}

// function to merge the subarrays
void merge(int arr[], int p, int q, int r) {

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];      //Line5
        counter[4]++;
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];  //Line6
        counter[5]++;

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2)    //Line7
    {
            counter[6]++;
        if (L[i] <= M[j]) {
            arr[k] = L[i];      //Line8
            counter[7]++;
            i++;                //Line9
            counter[8]++;
        } else {
            arr[k] = M[j];      //Line10
            counter[9]++;
            j++;                //Line11
            counter[10]++;
        }
        k++;                    //Line12
        counter[11]++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) {
        arr[k] = L[i];          //Line13
        counter[12]++;
        i++;                    //Line14
        counter[13]++;
        k++;                    //Line15
        counter[14]++;
    }

    while (j < n2) {
        arr[k] = M[j];          //Line16
        counter[15]++;
        j++;                    //Line17
        counter[16]++;
        k++;                    //Line18
        counter[17]++;
    }
}

// function to print the array
void printArray(int a[],int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10],n,i;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Given array: \n");
    printArray(arr, n);

    // calling merge sort
    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: \n");
    printArray(arr, n);
    printf("Execution of each statement :-\n");
    for(int i=0; i<18; i++)
        printf("Line %d is executed %d times\n",i+1,counter[i]);
    return 0;
}
