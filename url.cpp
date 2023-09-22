#include "url.h"
void url::init_web_url(crow::SimpleApp &app) {
  CROW_ROUTE(app, "/")
  ([](crow::request& req, crow::response& res) { controller::index(req,res);});
  CROW_ROUTE(app, "/public/<path>")
  ([](const crow::request &, crow::response &res, std::string path) {
    controller::static_files(res, path);
  });
}