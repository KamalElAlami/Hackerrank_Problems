#include <stdio.h>

int max_of_four(a, b, c, d) {
    int i, arr[4], max;
    
    i = 0;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    max = arr[0];
    while (arr[i++])
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return(max);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
