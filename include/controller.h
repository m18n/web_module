#pragma once
#include "crow.h"
#include"connector_manager.h"
namespace controller {
    extern connector::connector_manager* conn;
    void static_files(crow::response& res, std::string path);
    void index(crow::request& req, crow::response& res);
    void get_events(crow::request& req, crow::response& res);
    void answer_event(crow::request& req, crow::response& res,int id);
} // namespace controller
