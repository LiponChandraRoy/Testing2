#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int head = 0, tail = 0, i, j, t;
    char str[20];

    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);

        scanf("%s", str);
        for(j = 0; j < n; j++){
            if (str[j] == 'H')
                head++;
            else
                tail++;
        }

        if (head > tail)
            printf("England\n");
        else
            printf("Pakistan\n");

        head = 0;
        tail = 0;
    }
    return 0;
}
