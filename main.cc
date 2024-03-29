#include <iostream>
#include <cstdlib>
#include "priority_queue.h"

using namespace std;

template <typename T>
void pushQueue(TemplatePriorityQueue<T>* queue, int data) {
  cout << "[+] Integer "<< data <<" pushed in the Priority Queue." << endl;
  queue->push(data);
}

template<typename T>
void popQueue(TemplatePriorityQueue<T>* queue) {
  cout << "[+] Integer "<< queue->top() << " will be poped from the Priority Queue." << endl;
  queue->pop();
}

int main(int argc, char* argv[]) {
	TemplatePriorityQueue<int> priQueue;
  int customNumber = 0;

  if (priQueue.empty()) {
    cout << "[!] Priority Queue is empty - initialized" << endl;
  }

  // push
  pushQueue(&priQueue, 23);
  pushQueue(&priQueue, 598);
  pushQueue(&priQueue, 302);

  if ( argc > 1) {
    customNumber = atoi(argv[1]);
    if (customNumber > -500 && customNumber < 2000) {
      pushQueue(&priQueue, customNumber);
	}
	else {
	  pushQueue(&priQueue, -1);
	}
  }
  else {
    pushQueue(&priQueue, -1);
  }

  //empty & size
  if (priQueue.empty()) {
    cout << "[-] Priority Queue is empty. - Push method did not work!" << endl;
	  return -1;
  }
  else {
    cout << "[+] Priority Queue has data. - Queue Size : " << priQueue.size() << endl;
  }

  // pop twice
  for (int i = 0; i < 2; i++) {
	popQueue(&priQueue);
  }

  cout << "[+] Now, Top element of Priority Queue is " << priQueue.top() << endl;
  return 0;
}
