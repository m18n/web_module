#pragma once
#include "url.h"
#include <iostream>
class web {
public:
  web() {
    url::init_web_url(website);
    website.port(3001).run();
  }

private:
  crow::SimpleApp website;
};