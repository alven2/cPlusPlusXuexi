#include <iostream>

int main() {
    
int column; std::cin >> column;
int rows; std::cin >> rows;
char karacter; std::cin >> karacter;

for (int i = 1; i <= column; i++) {
        for (int j = 1; j <= rows; j++) {
            std::cout << karacter;
            std::cout << '\n';
};
};
    return 0;

};