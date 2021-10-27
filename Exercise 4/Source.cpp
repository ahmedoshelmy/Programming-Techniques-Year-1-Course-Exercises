#include <iostream>
using namespace std;

bool isEven(int x) {
    if (x % 2) return false;
    return  true;
}

void calcMaxMinEven(int* start, int* end, int* min, int* max,bool *x) {
    for (int* ptr = start; ptr != end; ptr++) {
        if (isEven(*ptr)) {
            *x = true;
            if (*max < *ptr) {
                *max = *ptr;
            }
            if (*min > *ptr) {
                *min = *ptr;
            }
        }
    }
}
int main() {
    int input[10];
    for (int i = 0; i < 10; i++) {
        cin >> input[i];
    }
    int min = INT32_MAX;
    int max = INT32_MIN;
    bool thereiseven=false;
    calcMaxMinEven(input, input + 10, &min, &max, &thereiseven);
    if (!thereiseven) printf("There is no even numbers in the input");
    else
    printf("Max of Evens = %d\nMin of Evens = %d\n", max, min);
}
