conv:
	cd cpp && make
run: conv
	./cpp/conv.exe < e1.ocl
