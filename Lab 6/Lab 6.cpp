#include "Lab 6 functions.h"
#include "iostream"
#include "vector"

template<typename T>
bool predicate1(T x) {
    return x < 5;
}

template<typename T>
bool predicate2(T x) {
    return x > 0;
}

int main() {
    std::vector<int> arr = {1, -1, 2, 4, 3, 20, -40};
    std::cout << (any_of(arr.begin(), arr.end(), predicate1<int>) ? "yes\n" : "no\n");
    std::cout << (one_of(arr.begin(), arr.end(), predicate2<int>) ? "yes\n" : "no\n");
    auto element = find_not(arr.begin(), arr.end(), 4);
}

// 2. any_of - возвращает true, если хотя бы один из элементов диапазона удовлетворяет некоторому предикату. Иначе false
// 4. one_of - возвращает true, если ровно один элемент диапазона удовлетворяет некоторому предикату. Иначе false
// 7. find_not - находит первый элемент, не равный заданному