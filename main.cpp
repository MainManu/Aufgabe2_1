#include <iostream>
using namespace std;
#include "Auto.h"
#include <string.h>

int main(void){
    Auto car1;
    Auto car2("Audi", 5, 400);
    Auto car3(car1);
    Auto car4(car2);
    car3.setModell("BMW");

    car1.ausgabe();
    car2.ausgabe();
    car3.ausgabe();
    car4.ausgabe();

    return 0;
}
