#include <stdio.h>

int main() {
    float dollars;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    float pounds = (dollars * 80) / 70;
    printf("Pounds = %.2f\n", pounds);
    return 0;
}
