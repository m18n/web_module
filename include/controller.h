#pragma once
#include "crow.h"
namespace controller {
    void static_files(crow::response& res, std::string path);
    void index(crow::request& req, crow::response& res);
} // namespace controller
