#include <stdio.h>

int main() {
    int a = 7;
    int *aPtr = &a;

    printf("address of a is %p\nValue of aPtr is %p\n\n", (void*)&a, (void*)aPtr);
    printf("value of a is %d\nValue pointed to by aPtr is %d\n\n", a, *aPtr);
    printf("address of a is %p\nValue of aPtr is %p\n\n", (void*)&a, (void*)aPtr);
    printf("address of *aPtr is %p\nValue of *&aPtr is %p\n\n", (void*)&*aPtr, (void*)*&aPtr);



    int *ptr = (int *)0x600000; // cast integer address to pointer

    // Be careful: this may crash your program if the address is invalid or not mapped
    // Uncomment only in controlled environment
    // *ptr = 42;
    // printf("Value at 0x600000 = %d\n", *ptr);

    printf("Pointer set to address: %p\n", (void*)ptr);


    return 0;
}


/*
%p expects a void*, so you should cast pointers when using %p.
*aPtr gives you the value at the address (which is 7).
&*aPtr is the same as aPtr, and *&aPtr is still aPtr
*/