#include <iostream>

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class QueueLinkedList {
private:
    Node* front; // Pointer to the front of the queue
    Node* rear;  // Pointer to the rear of the queue

public:
    // Constructor to initialize the queue
    QueueLinkedList() {
        front = nullptr;
        rear = nullptr;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to add an element to the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = rear = newNode; // If the queue is empty, both front and rear point to the new node
        } else {
            rear->next = newNode; // Link the new node at the end of the queue
            rear = newNode;       // Update the rear pointer
        }
        std::cout << "Enqueued: " << value << "\n";
    }

    // Function to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        Node* temp = front; // Store the front node
        std::cout << "Dequeued: " << front->data << "\n";
        front = front->next; // Move the front pointer to the next node
        delete temp;         // Free the memory of the dequeued node

        if (front == nullptr) {
            rear = nullptr; // If the queue becomes empty, set rear to nullptr
        }
    }

    // Function to display the queue elements
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }
        std::cout << "Queue elements: ";
        Node* temp = front;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << "\n";
    }
};

int main() {
    QueueLinkedList queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();

    queue.dequeue();
    queue.display();

    queue.enqueue(40);
    queue.enqueue(50);
    queue.display();

    return 0;
}
