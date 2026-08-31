// Diffusion Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int N_values[] = { 10, 100, 1000, 10000, 100000 };
    int M = 10;

    cout << "N\tM\tD\tT" << endl;

    for (int n = 0; n < 5; n++) {

        int N = N_values[n];

        for (int trial = 1; trial <= M; trial++) {

            int currentPosition = 0;

            clock_t start = clock();

            for (int step = 0; step < N; step++) {

                int coin = rand() % 2;

                if (coin == 0) {
                    currentPosition++;
                }
                else {
                    currentPosition--;
                }
            }

            clock_t end = clock();

            double timeTaken =
                1000.0 * (end - start) / CLOCKS_PER_SEC;

            cout << N << "\t"
                << trial << "\t"
                << currentPosition << "\t"
                << timeTaken << "ms" << endl;
        }
    }

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
