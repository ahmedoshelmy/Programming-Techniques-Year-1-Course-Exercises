#include <iostream>
using namespace std;

void countAvgOdds(double&, int&, int*, int*);
bool odd(int x);

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    double average = 0;
    int count = 0;
    countAvgOdds(average, count, arr, arr + 5);
    printf("Count of Odds = %d \n Avg of Odds = %f\n", count, average);
    system("pause");
    return  0;
}

void countAvgOdds(double& avg, int& count, int* start, int* end) {
    for (int* p = start; p != end; p++) {
        if (odd(*p)) {
            count++;
            avg += *p;
        }
    }
    avg /= count;
}

bool odd(int x) {
    if (x % 2 == 1) return true;
    return false;
}