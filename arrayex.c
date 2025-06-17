
#include <stdio.h>

int main()
{
    int i, A[5] = {3, 18, 1000, 40, 99};
    int ma = A[0];
    
    for(i=0; i<5; i++){
        if(ma< A[i])
            ma = A[i];
    }
    
    printf("%d", ma);
    return 0;
}