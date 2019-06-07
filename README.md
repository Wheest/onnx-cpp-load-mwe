# ONNX C++ Load MWE

MWE which links the ONNX library to a basic C++ program, and allows models into be loaded and manipulated.

The ONNX library should be installed by running:


	git clone https://github.com/onnx/onnx.git
	cd onnx
	git submodule update --init --recursive
	python setup.py install
	
Ideally into a directory called `~/tools/onnx`.  If you want it elsewhere, you'll need to change the hardcoded paths in <CMakeLists.txt>.

In its current state, the MWE does not work on my machine, failing with error

```
	terminate called after throwing an instance of 'std::system_error'
what():  Unknown error -1
```

The error goes away when we remove onnx_proto, but then the library is not available.
