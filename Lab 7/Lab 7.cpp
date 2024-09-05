#include "Lab 7 functions.h"

int main() {
    Circular_Buffer<int> buffer(5);

    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_back(3);
    buffer.push_back(4);
    buffer.push_back(5);
    buffer.push_back(6);

    buffer.pop_front();
    buffer.pop_back();

    buffer.push_front(0);

    buffer.insert(1, 99);

    buffer.erase(5);

    buffer.resize_buffer(10);


}
