#pragma once
#include <iostream>
using namespace std;
template <typename T>
class Queue
{
private:
	static const int CAPACITY_DEFAULT = 10;
	static const int EMPTY = -1;
	int capacity;
	bool full()const;
	T* buffer;
	int last = -1;
	int first = -1; 
public:
	Queue(int capacity=CAPACITY_DEFAULT);
	void push(const T& element);
	void pop();
	const T front()const;
	const T back()const;
};

template<typename T>
inline bool Queue<T>::full() const
{
	return last == capacity - 1;
}

template<typename T>
inline Queue<T>::Queue(int capacity)
{
	this->capacity = capacity <= 0 ? CAPACITY_DEFAULT : capacity;
	buffer = new T[this->capacity]{};
	last = EMPTY;
	first = EMPTY;

}

template<typename T>
inline void Queue<T>::push(const T& element)
{
	if (!full())
	{
		++last;
		buffer[last] = element;
	}
	else {
		cout << "Full" << endl;
	}
	
}

template<typename T>
inline void Queue<T>::pop()
{
	if (!empty())
	{
		if (first+1!=last)
		{
			++first;
		}
		// 10 20 30 40
		//    20 30 40
	}
	
}

template<typename T>
inline const T Queue<T>::front() const
{
	if (!empty)
	{
		return buffer[first];
	}

}

template<typename T>
inline const T Queue<T>::back() const
{
	if (!empty)
	{
		if (!empty)
		{
			return buffer[last];
		}
	}
}
