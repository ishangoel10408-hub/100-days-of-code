// Show that enums store integers by printing assigned values.


#include <stdio.h>

int main() {

    enum Vehicle {
        CAR,
        BIKE,
        BUS,
        TRUCK
    };

    printf("CAR = %d\n", CAR);
    printf("BIKE = %d\n", BIKE);
    printf("BUS = %d\n", BUS);
    printf("TRUCK = %d\n", TRUCK);

    return 0;
}