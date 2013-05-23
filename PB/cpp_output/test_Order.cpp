/*
  Desc:    Google ProtoBuffer C++ Demo
  Time:    Wed May 22 23:36:37 CST 2013 @110775501
  Email:   uestczhangchao@gmail.com
  Author:  justinzhang
  Using command:
  g++ -g -I ~/program_files/protocol_buffer/include/ -L ~/program_files/protocol_buffer/lib/ -lprotobuf test_Order.cpp Order.pb.cc -o test_Order

 */
#include "Order.pb.h"
#include <iostream>
#include <string>
using namespace xquant;

void initOrder(Order* order)
{
  order->set_action(100);
  order->set_serialno("100abc");
  order->set_version("1.00.003");
  std::string	code = "TF0001";
  order->set_code(code);

  std::string	name = "test";
  order->set_name(name);
  order->set_price("10.01");
  order->set_amount("100000.00");
  
}

int main()
{
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Order		order;
  initOrder(&order);
  //  serialize object to string
  std::string	order_str;
  order.SerializeToString(&order_str);
  std::cout << order_str << std::endl;

  std::string	Order_debug = order.DebugString();
  std::cout << Order_debug << std::endl;

  Order order_2;
  order_2.ParseFromString(order_str);

  google::protobuf::ShutdownProtobufLibrary();
  
  return 0;
}
