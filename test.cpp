#include <iostream>

double getTotal(double prices[], int size);

int main() {

double prices[] = {10, 28, 2, 1.5, 24};
int size = sizeof(prices)/(prices[0]);
double total = getTotal(prices, size);
std::cout << '$' << total;

return 0;
};

double getTotal(double prices[], int size) {
double total = 0;
for (int i = 0; i < size; i++) {
    total += prices[i];
};
return total;
};