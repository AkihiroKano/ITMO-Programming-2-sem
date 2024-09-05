#include "iterator"
#include "stdexcept"
#include "iostream"

#ifndef BASICS_OF_PROGRAMMING_CPP_7_LABA_H
#define BASICS_OF_PROGRAMMING_CPP_7_LABA_H

template<typename T>
class Circular_Buffer {
private:
    T *buffer;
    size_t capacity;
    size_t size;
public:
    void resize_buffer(size_t new_capacity) {
        T *tmp = new T[new_capacity];
        for (size_t i{0}; i < size; ++i) {
            tmp[i] = buffer[i];
        }
        delete[] buffer;
        buffer = tmp;
        capacity = new_capacity;
    }

    class iterator : public std::iterator<std::random_access_iterator_tag, T> {
    private:
        T *index = nullptr;

    public:

        iterator(T *index) : index(index) {}

        ~iterator() = default;

        T &operator*() { return *index; }

        T *operator->() { return index; }

        iterator &operator++() {
            index++;
            return *this;
        }

        iterator &operator--() {
            index--;
            return *this;
        }

        iterator &operator+(size_t value) {
            index = index + value;
            return *this;
        }

        iterator &operator+(const iterator &it) const {
            index = index + it.index;
            return *this;
        }

        iterator &operator-(size_t value) {
            index = index - value;
            return *this;
        }

        iterator &operator-(const iterator &it) const {
            index = index - it.index;
            return *this;
        }

        bool operator!=(const iterator &it) const {
            return this->index != it.index;
        }
    };

    Circular_Buffer(size_t capacity) : buffer(new T[capacity]), capacity(capacity), size(0) {}

    ~Circular_Buffer() {
        delete[] buffer;
    }

    iterator begin() {
        return iterator(buffer);
    }

    iterator end() {
        return iterator(buffer + size);
    }

    T &operator[](size_t index) {
        return buffer[index % capacity];
    }

    void push_back(const T &value) {
        if (size < capacity) {
            buffer[size] = value;
            ++size;
        } else {
            for (size_t i = 1; i < capacity; ++i)
                buffer[i - 1] = buffer[i];
            buffer[capacity - 1] = value;
        }
    }

    void pop_back() {
        if (size == 0) throw std::out_of_range("Buffer is empty");
        --size;
    }

    void push_front(const T &value) {
        if (size < capacity) {
            for (size_t i = size; i >= 1; --i)
                buffer[i] = buffer[i - 1];
            buffer[0] = value;
            ++size;
        } else {
            for (size_t i = capacity - 1; i >= 1; --i)
                buffer[i] = buffer[i - 1];
            buffer[0] = value;
        }
    }

    void pop_front() {
        if (size <= 0) throw std::out_of_range("Buffer is empty");
        else {
            for (size_t i = 0; i < size - 1; ++i) {
                buffer[i] = buffer[i + 1];
                --size;
            }
        }
    }

    void insert(size_t it, T value) {
        buffer[it] = value;
    }

    void erase(size_t it) {
        if (size == 0) throw std::out_of_range("Buffer is empty");
        else {
            for (size_t i{it}; i != size - 1; --i) {
                buffer[i] = buffer[i + 1];
            }
            --size;
        }
    }
};

#endif //BASICS_OF_PROGRAMMING_CPP_7_LABA_H