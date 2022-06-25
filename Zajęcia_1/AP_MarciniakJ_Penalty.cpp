#include <iostream>

int main() {

    long long G, T, A, D;
    while (true) {
	    std::cin >> G >> T >> A >> D;

        if (G == -1 && T == -1 && A == -1 && D == -1)
            break;

	    long long numGamesX = 0;
        long long numTeamsY = 0;

        numGamesX += G * T * (T - 1) / 2;

        long long knockout = A * G + D;
        long long power = 1;
        while (power < knockout)
            power *= 2;
        numTeamsY = power - knockout;

        while (power > 0) {
            numGamesX += (power / 2);
            power /= 2;
        }

	    std::cout << G << "*" << A << "/" << T << "+" << D << "=" << numGamesX << "+" << numTeamsY << std::endl;
    }
    return 0;
}