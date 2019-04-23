conv:
	cd cpp && make
run: conv
	./cpp/conv < e0.ocl
