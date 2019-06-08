#include "onnx/onnx_pb.h"
#include "onnx/proto_utils.h"
#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
    // get model path
    if (argc != 1)
	std::cout << "please enter the path to the onnx model\n";
    auto model_path = argv[1];   

    onnx::ModelProto model;
    std::ifstream in(model_path, std::ios_base::binary);
    std::cout << "parsing model" << "\n";
    model.ParseFromIstream(&in);
    in.close();
    std::cout << "model size:";
    std::cout << model.graph().input().size() << "\n";
    return 0;
}

