#include <stdio.h>
void weights(float, float *, float *, float*);
int main()
{
    int w;
    float g,t,p;
    printf("Enter weight in kg: \n");
    scanf("%d", &w);
    weights(w, &g, &t, &p);
    printf("The conversion of input weight to grams, tonnes and pounds is: %.4f, %.4f, %.4f\n", g, t, p);
    return 0; 
}
void weights(float a, float *b, float *c, float *d)
{
    *b = 1000 * a;
    *c = a / 1000.0;
    *d= 2.20462 * a;
}
