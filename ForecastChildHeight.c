#include <stdio.h>
#define coefficient 0.54;
float calculateChildHeight(float fatherHeight, float motherHeight);

int main() {
    float fatherHeight;
    float motherHeight;

    printf("Please input father's height:");
    scanf("%f", &fatherHeight);

    printf("Please input  mother's height:");
    scanf("%f", &motherHeight);

    float childHeight = calculateChildHeight(fatherHeight, motherHeight);
    printf("Child's height is %.2f\n", childHeight);

    return 0;
}

float calculateChildHeight(float fatherHeight, float motherHeight) {
    float result = (fatherHeight + motherHeight) * coefficient;
    return result;
}