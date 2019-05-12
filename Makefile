conv:
	cd cpp && make
run: conv
	./cpp/conv.exe < e0.ocl
