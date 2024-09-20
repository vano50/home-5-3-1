#include <iostream>
#include <vector>


template<class T>
T kvadrat(const T& value) {
    return value * value;
}


template<typename T>
std::vector<T> kvadrat(const std::vector<T>& vector) {
    std::vector<T> result;
    for (auto v : vector) {
        result.push_back(v * v);
    }
    return result;
}

int main() {

    std::cout << "[IN]: ";
    double number;
    std::cin >> number;
    std::cout << "[OUT]: " << kvadrat(number) << "\n";

    std::cout << "[IN]: ";
    std::vector<int> vec;
    while (true) {
        int temp;
        if (!(std::cin >> temp)) break;
        vec.push_back(temp);
    }
    std::cout << "[OUT]: ";
    for (int i = 0; i < vec.size(); ++i) {

        std::cout << kvadrat(vec[i]) << ", ";
    }
    std::cout << "\n";

    return 0;
}