//
// Created by uffa on 10/07/2021.
//

#ifndef OBSERVER_OKAY_MEGA_SUMFORMULA_H
#define OBSERVER_OKAY_MEGA_SUMFORMULA_H




#include <string>
#include <list>

#include "Cell.h"
#include "Observer.h"

class SumFormula : public Observer {
public:
    SumFormula(std::string n) : name(n) {}
    virtual ~SumFormula();

    void calc();

    void addCell( Cell* cell );
    void removeCell( Cell* cell );

    void update() override;

private:
    std::string name;
    std::list<Cell*> cells;
};



#endif //OBSERVER_OKAY_MEGA_SUMFORMULA_H
