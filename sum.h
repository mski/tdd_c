#ifndef SUM_H
#define SUM_H


#include "money.h"


typedef struct {
  const Expression *augend;
  const Expression *addend;
} Sum;


Expression *create_sum( const Expression *augend, const Expression *addend );


#endif // SUM_H
