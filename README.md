# OPE from CryptDB

This is the Order-preserving encryption (OPE) lib extracted from the CryptoDB (http://css.csail.mit.edu/cryptdb/).

With this it is not necessary to compile the whole CryptDB to use the OPE lib.

Just download these files, execute the Makefile (with ```make```), which generates an ope.a file, and then run 

```
g++ <your_cpp_file> ope.a -std=c++11  -lntl -lgmp  -lcrypto
```

to compile ```<your_cpp_file>```.
