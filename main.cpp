// PUT
#include <put/application.h>

// Project
#include "initializer.h"
#include "display.h"


int main(void) // there are no arguments for an init system!
{
  Display::init();
  Application app;
  Initializer::start();
  return app.exec(); // run then exit with generic error code
}
