#include <bits/stdc++.h>
using namespace std;

void printQueue(queue<long long int> Queue)
{
  while (!Queue.empty()) {
    cout << Queue.front() << " ";
    Queue.pop();
  }
}

void revQueue(queue<long long int>& q)
{
  if (q.empty())
    return;

  long long int data = q.front();
  q.pop();

  revQueue(q);

  q.push(data);
}

int main()
{
  queue<long long int> Queue;
  Queue.push(1);
  Queue.push(2);
  Queue.push(3);
  Queue.push(4);
  Queue.push(5);
  revQueue(Queue);
  printQueue(Queue);
}
// Java program to reverse a Queue by recursion
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

// Java program to reverse a queue recursively
 class Queue_reverse {

  static Queue<Integer> queue;

  // Utility function to print the queue
  static void Print()
  {
    while (!queue.isEmpty())
    {
      System.out.print(queue.peek() + " ");
      queue.remove();
    }
  }

// Recurrsive function to reverse the queue
static Queue<Integer> revQueue(Queue<Integer> q)
{
  // Base case
  if (q.isEmpty())
    return q;

  // Dequeue current item (from front)
  int data = q.peek();
  q.remove();

  // Reverse remaining queue
  q = revQueue(q);

  // Enqueue current item (to rear)
  q.add(data);
    
  return q;
}

// Driver code
public static void main(String args[])
{
  queue = new LinkedList<Integer>();
  queue.add(1);
  queue.add(2);
  queue.add(3);
  queue.add(4);
  queue.add(5);
  queue = revQueue(queue);
  Print();
}
}
from queue import Queue


def revQueue(queue: Queue):
  
  if queue.empty():
    return

  item = queue.queue[0]
  queue.get()

  revQueue(queue)

  queue.put(item)


def print_queue(queue: Queue):
  while not queue.empty():
    print(queue.queue[0], end=" ")
    queue.get()
  print()


if __name__ == "__main__":
  q = Queue()
  q.put(1)
  q.put(2)
  q.put(3)
  q.put(4)
  q.put(5)

  revQueue(q)
  print_queue(q)
