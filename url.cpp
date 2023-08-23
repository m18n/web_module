#include "url.h"
void url::init_web_url(crow::SimpleApp &app) {
  CROW_ROUTE(app, "/")
  ([]() { return "manager server"; });
  
}