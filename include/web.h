#pragma once
#include "url.h"
#include <iostream>
class web {
public:
  web() {
    crow::mustache::set_global_base("site");
    crow::mustache::set_base("site");
    url::init_web_url(website);
    website.port(3001).run();
  }

private:
  crow::SimpleApp website;
};