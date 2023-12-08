#include <iostream>
int main()
{
    size_t a = 53837288;
    size_t b = 333163512891532;
    size_t counter = 0;
    for (size_t i = 0; i <= a;i++) {
        //std::cout << "Boat traveled: " << i*(a-i)<< "mm for " << (a-i) << "ms (Button Hold: " << i << "ms)\n";
        if (i * (a - i) > b) {
            counter++;
        }
    }
    std::cout << "Won: " << counter;
}

