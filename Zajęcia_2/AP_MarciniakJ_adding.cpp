#include <iostream>

 int reverse(int x)
{
    int ans = 0;
    while(x !=0)
    {
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    return ans;
}

int main()
{
    int ilosc_przypadkow, liczba1, liczba2;
    std::cin >> ilosc_przypadkow;

    while(ilosc_przypadkow--)
    {
        std::cin >> liczba1 >> liczba2;
        const int suma = reverse(liczba1) + reverse(liczba2);
        std::cout << reverse(suma) << std::endl;
    }

}