#ifndef QUEUE_H
#define QUEUE_H
#include <string>

using namespace std;


// Exception base class
class RuntimeException { 
private:
    string errorMsg; // Error message
public:
    RuntimeException(const string& err) : errorMsg(err) {} // Constructor with initializer list
    string getMessage() const { return errorMsg; } // Retrieve the error message
};

// Exception for empty queue
class QueueEmpty : public RuntimeException {
public:
    QueueEmpty(const string& err) : RuntimeException(err) { }
};



template <typename E>
class Queue {
public:
    int size() const;                   // Number of items in queue
    bool empty() const;               // Is the queue empty?
    const E& front() const throw(QueueEmpty); // Front element (throws if empty)
    void enqueue(const E& e);          // Enqueue element at the rear
    void dequeue() throw(QueueEmpty);  // Dequeue element at the front (throws if empty)
    ~Queue() {}                            // Virtual destructor
};

#endif