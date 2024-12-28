#include <iostream>


class BubleSort
{
public:
    void sort(int Tab[], int n)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = 0; j < n - 1 - i; ++j)
            {
                if (Tab[j] > Tab[j + 1])
                {
                    int tmp = Tab[j + 1];
                    Tab[j + 1] = Tab[j];
                    Tab[j] = tmp;
                }
            }
        }
    }

};

void afficher(int Tab[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << Tab[i] << " " ;
    }
    std::cout << std::endl;
}

int main() {
    int Tab[] = { 64, 34, 25, 12, 22, 11, 90, 110, 2, -3 };
    int n = sizeof(Tab) / sizeof(Tab[0]);

    std::cout << "Tableau original: ";
    afficher(Tab, n);

    BubleSort tri;
    tri.sort(Tab, n);

    std::cout << "Tableau apres tri a bulle: ";
    afficher(Tab, n);

    return 0;
}

