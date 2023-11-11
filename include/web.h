#pragma once
#include "url.h"
#include <iostream>
#include"connector_manager.h"

void test(t_json send,t_json answer);
void code(connector::connector_manager* conn,t_json json_req);
class web {
private:
void add_handlers(){
  conn.add_handler("code",code);
}
public:
  web() {
    
    t_json json;
    add_handlers();
    conn.name_client="web";
    conn.add_connection("127.0.0.1:3001");
    //conn.add_connection("127.0.0.1:3001");
    conn.on();
    // json["meta"]["$type_event"]="req";
    // json["meta"]["$type_obj"]="test";
    // json["meta"]["$list_servers"][0]={{"name","tasker"}};
    // json["meta"]["$list_servers"][1]={{"name","web"}};
    // conn.send(json);
    // communicate::init_ptr_event(&ev);
    // controller::ev=&ev;
    //tasker.start_loop();
    controller::conn=&conn;
    crow::mustache::set_global_base("site");
    crow::mustache::set_base("site");
    url::init_web_url(website);
    //website.port(3002).run();
    
  }

private:
  connector::connector_manager conn;
  
  crow::SimpleApp website;
};