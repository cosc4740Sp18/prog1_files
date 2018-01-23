/*
  Here is some example code for Program 1.  You don't have to use any of
  it, but if you are having trouble, it might get you started.
  The etype used through this is the template class your need to create
  in this class, etype means Example TYPE
*/
#include <cstdlib>  //This is for the exit command.

template <class etype>
class queue
{
  public:
    //public functions that the QueueArray class will use
  private:
    //private varaibles for the queue itself and functions
};


template <class etype>
class QueueArray
{
  public:
    QueueArray(int);
    ~QueueArray();
    int Asize(); 
    etype Dequeue();
    int Enqueue(const etype &item,const int index);
    int QAsize(); 
    int Qsize(int index) ;
    etype* Qstate(int index);

  private:
    int size;      //size of the array
    queue<etype>* array;   //the array of queues
    int totalItems; //total number of items stored in the queues
};

//Constructor for the queue array.  It sets the default size
//to 10, initializes the private variables size and totalItems
template <class etype>
QueueArray<etype>::QueueArray(int sz = 10):size(sz),totalItems(0)
{
  array = new queue<etype>[size];
  if( array == NULL)
  {
    cout << "Not enough memory to create the array" << endl;
    exit(-1);
  }
}

