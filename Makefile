
example: example.cpp lib/ope.a
	g++ example.cpp lib/ope.a -std=c++11  -lntl -lgmp  -lcrypto -o example

lib/ope.a:
	make -C lib/

clean:
	rm -f example
	make clean -C lib/
