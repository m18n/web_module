#include "controller.h"
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