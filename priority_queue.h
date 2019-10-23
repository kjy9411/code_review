#ifndef PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

#include <queue>

template <typename T> 
class templatePriorityQueue {
  private:
    std::priority_queue<T> storage_;
  
  public:
    templatePriorityQueue();
    ~templatePriorityQueue();
    bool empty() const;
    const T& top() const;
    int size();
    void push(const T&);
    void pop();	
};

#endif  // PRIORITY_QUEUE_H_
