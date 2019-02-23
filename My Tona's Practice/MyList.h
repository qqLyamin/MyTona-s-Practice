#pragma once

template <typename T>
class MyList
{	
private:

	class Node
	{
	public:
		//посоображать
		T mydata{};
		Node * pNext = nullptr;

		Node() = default;
		~Node() = default;
		Node(const T * data, Node * next);
	};

	size_t size;
	Node head;

public:

	void push_back(const T & myT);
	void push_back(T && myT);

	Node & pop_back();

	T & operator[](int id);

	MyList() = default;
	~MyList() = default;
};

template<typename T>
inline MyList<T>::Node::Node(const T * data, Node * next)
{
	if (this->pNext != nullptr)
	{
		next->pNext = this->pNext;		
	}
	else
	{
		next->pNext = nullptr;
	}

	this->pNext = next;
	next->mydata = data;//записал новую информацию в новый нод	
}
