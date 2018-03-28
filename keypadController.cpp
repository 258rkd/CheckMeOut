#include "keypadController.h"

keypadController::keypadController(order * items)
{
  cart = items;
  display.refresh(*cart);
  cart->addObserver(this);
}

void keypadController::update(){
  notifyObservers();
}
