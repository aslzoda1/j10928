#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void displayHeader() {
    std::cout << "⚙️ Aslzoda Bozorboyeva - High Performance C++ Logic" << std::endl;
}

void analyzeVector() {
    std::vector<int> datasets = {12, 45, 78, 34, 89, 23};
    std::sort(datasets.begin(), datasets.end());
    std::cout << "🔢 Min Element: " << datasets.front() << " | Max Element: " << datasets.back() << std::endl;
}

int computeAccumulation() {
    std::vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    return std::accumulate(values.begin(), values.end(), 0);
}

int main() {
    displayHeader();
    analyzeVector();
    int sum = computeAccumulation();
    std::cout << "📊 Accumulated Linear Matrix Value: " << sum << std::endl;
    return 0;
}