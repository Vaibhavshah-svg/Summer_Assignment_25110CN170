#include <stdio.h>

int main()
{
    int array1[] = {12, 5, 8, 3, 14, 5};
    int array2[] = {5, 9, 14, 2, 8, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int minSize = (size1 < size2) ? size1 : size2;
    int commonElements[minSize];
    int commonCount = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {

            if (array1[i] == array2[j])
            {
                int alreadyAdded = 0;
                for (int k = 0; k < commonCount; k++)
                {
                    if (array1[i] == commonElements[k])
                    {
                        alreadyAdded = 1;
                        break;
                    }
                }
                if (!alreadyAdded)
                {
                    commonElements[commonCount] = array1[i];
                    commonCount++;
                }
                break;
            }
        }
    }
    printf("Common elements: ");
    if (commonCount == 0)
    {
        printf("None");
    }
    else
    {
        for (int i = 0; i < commonCount; i++)
        {
            printf("%d ", commonElements[i]);
        }
    }
    printf("\n");
    return 0;
}