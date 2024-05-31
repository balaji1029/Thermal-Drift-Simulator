all: g++ not.cpp notnot.cpp -o therm

.PHONY: clean

clean:
  rm therm
