#include <stdio.h>


int main() {
    ConvertToBinary(5);
    return 0;
}
void ConvertToBinary(int n)
{
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    printf("%d", n % 2);
}
