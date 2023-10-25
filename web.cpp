#include"web.h"

void code(connector_manager* conn,t_json json_req){
    
    t_json res;
    res["data"]["code"]="2222";
    res["meta"]["$type_obj"]="res_code";
    
    conn->send_response(json_req,res);
    std::cout<<"CODE\n";
}