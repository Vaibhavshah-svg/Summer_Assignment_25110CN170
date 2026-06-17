#include <stdio.h>

int main()
{
    int array1[] = {1, 3, 5, 7, 9, 5};
    int array2[] = {2, 3, 5, 8, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int minSize = (size1 < size2) ? size1 : size2;
    int intersectionArray[minSize];
    int intersectionSize = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j])
            {
                int isDuplicate = 0;
                for (int k = 0; k < intersectionSize; k++)
                {
                    if (array1[i] == intersectionArray[k])
                    {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate)
                {
                    intersectionArray[intersectionSize] = array1[i];
                    intersectionSize++;
                }
                break;
            }
        }
    }
    printf("Intersection of the two arrays: ");
    if (intersectionSize == 0)
    {
        printf("No common elements found.");
    }
    else
    {
        for (int i = 0; i < intersectionSize; i++)
        {
            printf("%d ", intersectionArray[i]);
        }
    }
    printf("\n");
    return 0;
}