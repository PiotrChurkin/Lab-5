#include <iostream>


int main()
{
    long long N = 0;
    std::cin >> N;
    N = std::abs(N);

    long long A = N;
    int maxValue = -1;
    int maxNumber = 0;
    int maxI = 0;

    for(int i = 0; i <= 9; i++)
    {
        maxI = 0;
        while(N!=0)
        {
            if(N%10==i)
                maxI = maxI + 1;

            N = N/10;
        }

        if(maxI > maxNumber)
        {
            maxValue = i;
            maxNumber = maxI;
        }

        N = A;
    }
    
    std::cout << maxValue << std::endl << maxNumber;
    
    
    
    return 0;
}