all: install therm

therm: therm.cpp main.cpp
	s++ -O3 -std=c++20 -o therm therm.cpp main.cpp

.PHONY: clean install

clean:
	rm therm	

install:
	cd simplecpp && make install
	cd ../