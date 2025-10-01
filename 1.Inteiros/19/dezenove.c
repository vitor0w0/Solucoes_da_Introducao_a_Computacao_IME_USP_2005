#include<stdio.h>
int main() {
    int x, y, z;
    printf("Digite x, y, e z:");
    scanf("%d %d %d", &x,&y,&z);
    //const int res = x > y? x > z? x : z : y > z? y : z;
    int res;
    if (x > y) {
        if (x > z) {
            res = y;
        } else {
            res = z;
        }
    } else {
        if (y > z) {
            res = y;
        } else {
            res = z;
        }
    }
    printf("Maior: %d", res);
    return 0;
}