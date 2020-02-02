#Makefile for the assignment

asn1_a:asn1_a.cpp
	g++ -o asn1_a asn1_a.cpp

asn1_b:asn1_b.cpp
	g++ -o asn1_b asn1_b.cpp

asn1_c:asn1_c.cpp
	g++ -o asn1_c asn1_c.cpp -lgmp

clean:
	rm -f asn1_a asn1_b asn1_c *.out *.o core
