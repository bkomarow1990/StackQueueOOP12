#pragma once
#include <iostream>
using namespace std;
template <typename T>
class Stack
{
private:
	static const int CAPACITY_DEFAULT = 10;
	static const int EMPTY = -1;
	int capacity;
	T* buffer;
	int top = -1;
public:
	Stack(int capacity=CAPACITY_DEFAULT);
	void push(const T& element);
	void pop();
	bool full()const;
	const T& peak();
	bool empty()const;
	void print() const;
	void clear();
	const int size()const;
};

template<typename T>
inline Stack<T>::Stack(int capacity)
{
	this->capacity = capacity <= 0 ? CAPACITY_DEFAULT : capacity;
	buffer = new T[this->capacity]{};
	top = EMPTY;
}

template<typename T>
inline void Stack<T>::push(const T& element)
{
	if (!full())
	{
		++top;
		buffer[top] = element;
	}
	else {
		std::cerr << "Stack is full\n";
	}
}

template<typename T>
inline void Stack<T>::pop()
{
	if (!empty())
	{
		++first;
	}
}

template<typename T>
inline bool Stack<T>::full() const
{
	return top == capacity - 1;
}

template<typename T>
inline const T& Stack<T>::peak()
{
	static T error;
	if (empty())
	{
		return error;
	}
	return buffer[top];
}

template<typename T>
inline bool Stack<T>::empty() const
{
	return top==EMPTY;
}

template<typename T>
inline void Stack<T>::print() const
{
	if (!empty())
	{
		for (int i = top; i >= 0; i--)
		{
			cout << buffer[i] << " ";
		}
		cout << endl;
	}
}

template<typename T>
inline void Stack<T>::clear()
{
	top = EMPTY;
}

template<typename T>
inline const int Stack<T>::size() const
{
	return top + 1;	
}
