#include <iostream>
#include <vector>

void separate_digits(const std::vector<int>& input, std::vector<int>& output) {
    for (int num : input) {
        int n = num;
        int digits = 0;
        int temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        for (int i = digits - 1; i >= 0; i--) {
            output.push_back(n % 10);
            n /= 10;
        }
    }
}

int main() {
    std::vector<int> input = { 123, 456, 789 };
    std::vector<int> output;
    separate_digits(input, output);
    for (int digit : output) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;
    return 0;
}