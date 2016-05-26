#include<iostream>

#include "lib/ope.hh"

using namespace std;

int main(){

	// plaintext range's length in bits (plaintexts are in [0, 2**P-1]
	unsigned int P = 32;
	// ciphertext range's length in bits (ciphertexts are in [0, 2**C-1]
	unsigned int C = 64;

	OPE o("S0M3 $TR@NG Key", P, C);

	// it works with ZZ instead of usual integers
	NTL::ZZ m1 = NTL::to_ZZ(13);
	NTL::ZZ m2 = NTL::to_ZZ(50);

	NTL::ZZ c1 = o.encrypt(m1);
	NTL::ZZ c2 = o.encrypt(m2);

	cout << "m1 = " << m1 << endl;
	cout << "m2 = " << m2 << endl;
	cout << "enc(m1) = " << c1 << endl;
	cout << "enc(m2) = " << c2 << endl;

	if (c1 < c2){
		cout << "Preserving the order!" << endl;
	}else{
		cout << "o.O ????? OPE not working!" << endl;
	}

	NTL::ZZ dec_m1 = o.decrypt(c1);
	NTL::ZZ dec_m2 = o.decrypt(c2);
	
	if (m1 == dec_m1 && m2 == dec_m2){
		cout << "Decryption working fine." << endl;
	}else{
		cout << "Decryption NOT working." << endl;
	}

	return 0;
}
