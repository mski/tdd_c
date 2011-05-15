#include <stdlib.h>
#include "money.h"
#include "franc.h"
#include "money_private.h"



Franc *
create_franc( unsigned int amount, Currency currency ) {
  return ( Franc * ) create_money( amount, currency );
}


Money *
multiply_franc( const Franc *_franc, unsigned int multiplier ) {
  Currency currency = CHF;
  return ( Money * ) 
    create_franc( ( ( MoneyPrivate * )  _franc )->amount * multiplier, currency);
}
