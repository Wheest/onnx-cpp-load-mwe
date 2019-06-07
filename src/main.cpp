#include "onnx/onnx_pb.h"
#include "onnx/proto_utils.h"
#include <fstream>
#include <iostream>

int main()
{
  onnx::ModelProto model;
  std::ifstream in("/tmp/grouped_model_16.onnx", std::ios_base::binary);
  std::cout << "parsing model" << "\n";
  model.ParseFromIstream(&in);
  in.close();
  std::cout << "model size:";
  std::cout << model.graph().input().size() << "\n";
  return 0;
}

