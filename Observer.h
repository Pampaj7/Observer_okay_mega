//
// Created by uffa on 10/07/2021.
//

#ifndef OBSERVER_OKAY_MEGA_OBSERVER_H
#define OBSERVER_OKAY_MEGA_OBSERVER_H


class Observer {
public:
    virtual ~Observer() {}
    virtual void update() = 0;
};


#endif //OBSERVER_OKAY_MEGA_OBSERVER_H
