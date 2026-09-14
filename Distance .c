#include <stdio.h>

int main() {
    float s,t,d;
    float m,cm,mm;

    
    printf("Enter speed in km/h: ");
    scanf("%f", &s);
    
    printf("Enter time in hours: ");
    scanf("%f", &t);

    
    d = s * t;

    
    m = d * 1000;
    cm = d * 100000;
    mm = d * 1000000;

    
    printf("Distance in Meters:      %.2f m\n", m);
    printf("Distance in Centimeters: %.2f cm\n", cm);
    printf("Distance in Millimeters: %.2f mm\n", mm);

    return 0;
}
