#include <iostream>
#include <Windows.h>

int main()
{
    system("cls");
    short N = 0;

    std::cout << "Please, enter N: ";
    std::cin >> N;
    long long maxNumber = LLONG_MIN;
    long long productOfNumbers = 1;
    long long numberInSubsequence = 0;

    long long A;

    for(int i = 1; i <=N; i++)
    {
        std::cin >> A;
        if(A%10==2)
        {
            productOfNumbers = productOfNumbers * A;

            if(A > maxNumber)
            {
                maxNumber = A;
                numberInSubsequence = i;
            }
                

        }
            
    }

    std::cout << "Product of Numbers: " << productOfNumbers << std::endl;
    std::cout << "Maximum number: " << maxNumber << std::endl;
    std::cout << "Number in subsequence: " << numberInSubsequence << std::endl;
    return 0;
}