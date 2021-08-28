//
// Created by uffa on 10/07/2021.
//

#ifndef OBSERVER_OKAY_MEGA_SUBJECT_H
#define OBSERVER_OKAY_MEGA_SUBJECT_H


#include "Observer.h"

class Subject {
public:
    virtual ~Subject() {}

    virtual void notify() = 0;

    virtual void subscribe(Observer *o) = 0;

    virtual void unsubscribe(Observer *o) = 0;

private:

};

#endif //OBSERVER_OKAY_MEGA_SUBJECT_H
