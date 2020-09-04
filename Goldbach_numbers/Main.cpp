#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int counter = 0;
beginning:
    cout << "Enter an even number greater than 12" << endl;
    cin >> n;
    int n_2 = n;
    if (n < 12 || (n % 2) != 0)
    {
        cout << "Invalid input";
        goto beginning;
    }

    if (n % 6 == 0)
    {
        int sum = n / 6;
        for (int k = 1;k <= sum;k++)
        {
            bool isPrime_1 = true;
            bool isPrime_2 = true;

            int p_1 = 6 * k + 1;

            for (int i = 2; i <= p_1 / 2; ++i)
            {
                if (p_1 % i == 0)
                {
                    isPrime_1 = false;
                    break;
                }
            }
            if (isPrime_1)
            {

                int p_2 = n_2 - p_1;

                for (int j = 2; j <= p_2 / 2; ++j)
                {
                    if (p_2 % j == 0)
                    {
                        isPrime_2 = false;
                        break;
                    }
                }
                if (isPrime_2 == true)
                {

                    if (p_1 < n_2 - 1)
                    {

                        counter++;
                        cout << p_1 << " " << p_2 << endl;
                    }
                }
            }

        }
        cout << "There are " << counter << " Goldbach pairs" << endl;
        return 0;


    }

    if (n % 6 == 2)
    {
        int sum = n / 6;
        for (int k = 1;k <= sum;k++)
        {
            bool isPrime_1 = true;
            bool isPrime_2 = true;

            int p_1 = 6 * k + 1;

            for (int i = 2; i <= p_1 / 2; ++i)
            {
                if (p_1 % i == 0)
                {
                    isPrime_1 = false;
                    break;
                }
            }
            if (isPrime_1)
            {

                int p_2 = n_2 - p_1;

                for (int j = 2; j <= p_2 / 2; ++j)
                {
                    if (p_2 % j == 0)
                    {
                        isPrime_2 = false;
                        break;
                    }
                }
                if (isPrime_2 == true)
                {

                    if (p_1 < n_2 - 1)
                    {

                        counter++;
                        cout << p_1 << " " << p_2 << endl;
                    }
                }
            }

        }
        cout << "There are " << counter << " Goldbach pairs" << endl;
        return 0;


    }
    if (n % 6 == 4)
    {
        int sum = (n + 4) / 6;
        for (int k = 1;k <= sum;k++)
        {
        here:
            bool isPrime_1 = true;
            bool isPrime_2 = true;

            int p_1 = 6 * k - 1;

            for (int i = 2; i <= p_1 / 2; i++)
            {
                if (p_1 % i == 0)
                {
                    isPrime_1 = false;
                    break;
                }
            }
            if (isPrime_1)
            {

                int p_2 = n_2 - p_1;

                for (int j = 2; j <= p_2 / 2; ++j)
                {
                    if (p_2 % j == 0)
                    {
                        isPrime_2 = false;
                        break;
                    }
                }
                if (isPrime_2 == true)
                {

                    if (p_1 < n_2 - 1)
                    {

                        counter++;
                        cout << p_1 << " " << p_2 << endl;
                    }
                }
            }

        }
        cout << "There are " << counter << " Goldbach pairs" << endl;
        return 0;


    }
    return 0;
}



