lib_ope_cryptdb:
	@g++ -c ope.cc hgd.cc -I.  -std=c++11
	@ar rs ope.a ope.o hgd.o > /dev/null 2>&1
	@rm ope.o hgd.o

clean:
	rm -f ope.a
