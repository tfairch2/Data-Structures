#ifndef STACK_HPP
#define STACK_HPP

#include "../DoublyLinkedList.hpp"

template <typename T>
class Stack : public DoublyLinkedList<T>
{
    public:
    Stack()
        : DoublyLinkedList<T>()
    {
    }

    virtual ~Stack()
    {
    }

    virtual void Push( T data )
    {
		DoublyLinkedList<T>::PushBack(data);
    }

    virtual void Pop(T data)
    {
		DoublyLinkedList<T>::PopBack(data);
    }

    virtual T Take(T data)
    {
		DoublyLinkedList<T>::GetBack(data);
		Return;
    }
};

#endif
