#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[5] = {'a','b','c','d','\0'};
    char Brr[5] = "abcd";
    char Crr[] = "abcd";

    printf("%s\n",Arr);     //  abcd
    printf("%s\n",Brr);     //  abcd
    printf("%s\n",Crr);     //  abcd

    printf("Size of Arr is : %d\n",sizeof(Arr));    // 5
    printf("Size of Brr is : %d\n",sizeof(Brr));    // 5
    printf("Size of Crr is : %d\n",sizeof(Crr));    // 5

    printf("Length of Arr is : %d\n",strlen(Arr));  // 4
    printf("Length of Brr is : %d\n",strlen(Brr));  // 4
    printf("Length of Crr is : %d\n",strlen(Crr));  // 4

    return 0;
}