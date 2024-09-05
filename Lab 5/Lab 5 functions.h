#ifndef BASICS_OF_PROGRAMMING_CPP_5_LABA_H
#define BASICS_OF_PROGRAMMING_CPP_5_LABA_H

#include "iostream"
#include "exception" // Подключение стандартной библиотеки для работы с исключениями

// Класс-исключение для переполнения очереди
class QueueOverflowException : public std::exception {
public:
    const char *what() const noexcept override {
        return "Queue Overflow Exception: The queue is full."; // Возвращает сообщение о переполнении очереди
    }
};

// Класс-исключение для изъятия элемента из пустой очереди
class QueueEmptyException : public std::exception {
public:
    const char *what() const noexcept override {
        return "Queue Empty Exception: Trying to dequeue from an empty queue."; // Возвращает сообщение об изъятии элемента из пустой очереди
    }
};

template<int N, class T>
class Queue {
private:
    T data[N]; // Массив для хранения элементов очереди
    int front; // Индекс переднего элемента очереди
    int rear;  // Индекс хвостового элемента очереди
    int counter;
public:
    Queue() : front(0), rear(0), counter(0) {} // Конструктор без аргументов

    void enqueue(const T &element) {
        if (counter == N) { // Проверка на переполнение очереди
            throw QueueOverflowException(); // Генерация исключения при переполнении очереди
        }
        data[rear] = element; // Добавление элемента в очередь
        rear = (rear + 1) % N; // Обновление индекса хвостового элемента
        ++counter;
    }

    T dequeue() {
        if (front == rear && counter == 0) { // Проверка на пустоту очереди
            throw QueueEmptyException(); // Генерация исключения при изъятии из пустой очереди
        }
        T element = data[front]; // Извлечение элемента из очереди
        front = (front + 1) % N; // Обновление индекса переднего элемента
        --counter;
        return element; // Возвращение извлеченного элемента
    }
};

#endif //BASICS_OF_PROGRAMMING_CPP_5_LABA_H
