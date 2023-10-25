#include "url.h"
void url::init_web_url(crow::SimpleApp &app) {
  CROW_ROUTE(app, "/")
  ([](crow::request& req, crow::response& res) { controller::index(req,res);});
  CROW_ROUTE(app, "/api/event/getevents")
  ([](crow::request& req, crow::response& res) { controller::get_events(req,res);});
  CROW_ROUTE(app, "/api/event/answer/<int>").methods("POST"_method)
  ([](crow::request& req, crow::response& res,int id) { controller::answer_event(req,res,id);});
  CROW_ROUTE(app, "/public/<path>")
  ([](const crow::request &, crow::response &res, std::string path) {
    controller::static_files(res, path);
  });
}