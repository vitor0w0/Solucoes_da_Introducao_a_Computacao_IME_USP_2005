#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a==0) {
        printf("NARN\n");
        return 0;
    }
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("NARN\n");
    } else {
        printf("%.2f %.2f\n", (-b + sqrtf(delta)) / (a*2), (-b - sqrtf(delta)) / (a*2));
    }
    return 0;
}