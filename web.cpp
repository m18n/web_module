#include"web.h"

void code(connector::connector_manager* conn,connector::t_json json_req){
    
    connector::t_json res;
    res["data"]["code"]="2222";
    res["meta"]["$type_obj"]="res_code";
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int random_number = std::rand() % 400 + 1;
    //std::this_thread::sleep_for(std::chrono::milliseconds(500+random_number));
    conn->send_response(json_req,res);
    connector::connector_log->log(1,"code","\n\nCODE\n\n");
}