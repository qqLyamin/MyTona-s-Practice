#include "MyList.h"

template<typename T>
inline void MyList<T>::push_back(const T & myT)
{
	Node * next = new Node;
	auto myptr = this->head->pNext;

	next(myT, myptr);
}

template<typename T>
void MyList<T>::push_back(T && myT)
{
	//???????
}

template<typename T>
Node & MyList<T>::pop_back()//почему ошибка? создано лампочкой
{	
	Node tmp = this->head->pNext;
	while (true)
	{
		if (his->head->pNext == nullptr)
		{
			throw "empty List"
		}

		if (tmp != nullptr)
		{
			tmp = tmp->pNext;
		}
		esle
		{
			// тут по идее предыдущему надо сказать
			// что у него теперь pNext = nullptr
			// но я запутался
			return tmp;
		}
	}
}


