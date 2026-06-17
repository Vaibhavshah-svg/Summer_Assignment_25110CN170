#include <stdio.h>

int main()
{
    int array1[] = {1, 3, 5, 7, 9};
    int array2[] = {2, 3, 5, 8};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int unionArray[size1 + size2];
    int unionSize = 0;
    for (int i = 0; i < size1; i++)
    {
        unionArray[unionSize] = array1[i];
        unionSize++;
    }
    for (int i = 0; i < size2; i++)
    {
        int isDuplicate = 0;
        for (int j = 0; j < unionSize; j++)
        {
            if (array2[i] == unionArray[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            unionArray[unionSize] = array2[i];
            unionSize++;
        }
    }
    printf("Union of the two arrays: ");
    for (int i = 0; i < unionSize; i++)
    {
        printf("%d ", unionArray[i]);
    }
    printf("\n");
    return 0;
}