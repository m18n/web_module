#include "controller.h"
connector::connector_manager* controller::conn;
void controller::static_files(crow::response& res, std::string path){
    res.set_static_file_info("site/" + path);
    res.end();
}
 void controller::index(crow::request& req, crow::response& res){
    auto page = crow::mustache::load("index.html");
    auto render = page.render();
    res.write(render.body_);
    res.end();
 }
 void controller::get_events(crow::request& req, crow::response& res){
    t_json json=conn->get_all_events();
    res.write(json.dump());
    res.end();
 }
  void controller::answer_event(crow::request& req, crow::response& res,int id){
    res.write("hello");
    res.end();
  }