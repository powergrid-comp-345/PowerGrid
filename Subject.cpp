#include "Subject.h"
//code sourced from examples in lab classes
#include "Observer.h"

Subject::Subject()
{
	_observers = new list<Observer*>;
}


Subject::~Subject()
{
	delete _observers;
}

void Subject::Attach(Observer* o)
{
	_observers->push_back(o);
}

void Subject::Detach(Observer* o)
{
	_observers->remove(o);
}

void Subject::Notify()
{
	list<Observer*>::iterator i = _observers->begin();
	cout << _observers->size() << endl;
	for (; i != _observers->end(); i++)
	{
		(*i)->Update();
	}
}

void Subject::Notify2() 
{
	list<Observer*>::iterator i = _observers->begin();
	cout << _observers->size() << endl;
	for (; i != _observers->end(); i++)
	{
		(*i)->Update2();
	}
}

