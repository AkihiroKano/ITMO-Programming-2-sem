#include "Lab 5 functions.h"

int main() {
    Queue<5, int> intQueue;  // Создание экземпляра очереди типа int с максимальной вместимостью 5

    try {
        intQueue.enqueue(10); // Добавление элемента в очередь
        intQueue.enqueue(20);
        intQueue.enqueue(30);
        intQueue.enqueue(40);
        intQueue.enqueue(50);
        intQueue.enqueue(60); // для теста QueueOverflowException

        std::cout << "Dequeued: " << intQueue.dequeue() << '\n'; // Извлечение элемента из очереди и вывод
        std::cout << "Dequeued: " << intQueue.dequeue() << '\n';
        std::cout << "Dequeued: " << intQueue.dequeue() << '\n';
        std::cout << "Dequeued: " << intQueue.dequeue() << '\n';
        std::cout << "Dequeued: " << intQueue.dequeue() << '\n';
        /*intQueue.dequeue(); // Для теста QueueEmptyException*/
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << '\n'; // Вывод сообщения об исключении
    }
}
