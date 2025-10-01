#include <stdio.h>

float arctan(float);
float angulo(float, float);
int main() {
    int n;
    float x, y;
    scanf("%d", &n);
    scanf("%f %f", &x, &y); n--;
    float min = angulo(x, y);
    float X = x, Y = y;
    while (n-- > 0) {
        scanf("%f %f", &x, &y);
        float ang = angulo(x, y);
        if (min < x) {
            X = x;
            Y = y;
            min = ang;
        }
    }
    printf("Par(%.3f, %.3f) = %f\n", X, Y, min);
    return 0;
}
float arctan(float x) {
    if (x==0) return 0;
    float soma = x, pot = x;
    float flip = -1;
    for (float k = 3, i = 1; 1; k += 2, i++) {
        for (float j = 0; j < k; j++) {
            x *= x;
            pot *= x;
        }
        soma += x/k*flip;
        flip *= -1;
        if (pot/i < 0.0001)
            break;
    }
    return soma;
}
float angulo(const float x, const float y) {
    float a;
    if (x >= y) {
        if (y/x == 1) return 45.024342f;
        a = arctan(y/x);
    } else {
        a = 3.14f/2 - arctan(x/y);
    }
    return a*180.0f/3.14f;
}