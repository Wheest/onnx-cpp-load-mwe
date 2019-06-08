# ONNX C++ Load MWE

MWE which links the ONNX library to a basic C++ program, and allows models into be loaded and manipulated.

[The ONNX library](https://github.com/onnx/onnx) should be installed by running (and be sure to instal dependencies):


	git clone https://github.com/onnx/onnx.git
	cd onnx
	git submodule update --init --recursive
	python setup.py install
	
Ideally into a directory called `~/tools/onnx`.  If you want it elsewhere, you'll need to change the hardcoded paths in <CMakeLists.txt>.

Initially, the MWE did not work on my machine, failing with error:

```
	terminate called after throwing an instance of 'std::system_error'
what():  Unknown error -1
```

and with gdb giving further information:

```
Program received signal SIGABRT, Aborted.
__GI_raise (sig=sig@entry=6) at ../sysdeps/unix/sysv/linux/raise.c:50
50    ../sysdeps/unix/sysv/linux/raise.c: No such file or directory.
```

The error did not occur an another machine, but it was eventually fixed by linking pthread on my host machine.

To run the example:

```
mkdir _build
cd _build
cmake .. && make
./src/main ../test_model.onnx
```
