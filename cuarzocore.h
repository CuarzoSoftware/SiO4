#ifndef CUARZOCORE_H
#define CUARZOCORE_H

#include "includes.h"

class CuarzoCore : public QLabel
{
    Q_OBJECT

public:
    CuarzoCore();
    ~CuarzoCore();

    void startUI();
};

#endif // CUARZOCORE_H