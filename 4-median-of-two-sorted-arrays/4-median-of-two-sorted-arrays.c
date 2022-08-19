

double findMedianSortedArrays(int* arr1, int size1, int* arr2, int size2){
    int idx1 = 0, idx2 = 0;
    int arr[size1 + size2];
    int idx3 = 0;

    while (idx1 < size1 && idx2 < size2)
    {
        if (arr1[idx1] > arr2[idx2])
        {
            arr[idx3] = arr2[idx2];
            idx2++;
            idx3++;
        }
        else
        {
            arr[idx3] = arr1[idx1];
            idx1++;
            idx3++;
        }
    }
    if (idx1 == size1)
    {
        while (idx2 < size2)
        {
            arr[idx3] = arr2[idx2];
            idx2++;
            idx3++;
        }
    }
    else
    {
        while (idx1 < size1)
        {
            arr[idx3] = arr1[idx1];
            idx1++;
            idx3++;
        }
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", arr[i]);
    }
    if ((size1 + size2) % 2 == 0)
    {
        int temp = (size1 + size2) / 2;
        printf("\n%d",temp);
        return ((double)arr[temp] + (double)arr[temp - 1]) / 2;
    }
    else
    {
        return arr[(size1 + size2 - 1) / 2];
    }
}