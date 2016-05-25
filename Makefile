lib_ope_cryptdb:
	@g++ -c ope.cc hgd.cc -I.  -std=c++11
	@ar rs ope.a ope.o hgd.o > /dev/null 2>&1
	@rm ope.o hgd.o
	@echo
	@echo
	@echo 'To compile <your_cpp_file>, run g++ <your_cpp_file> crypto/ope.a -std=c++11  -lntl -lgmp  -lcrypto'
	@echo
	@echo

clean:
	rm ope.a
