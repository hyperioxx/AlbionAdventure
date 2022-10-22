CXX=g++
OUTPUT=./bin
INCLUDE=./include
VERSION=c++17
SRC_DIR=./src/*

.PHONY: all
all: make_bin compile

make_bin:
	@mkdir -p ./bin

compile:
	$(CXX) -lc++ -std=$(VERSION) -o $(OUTPUT)/edathra -I$(INCLUDE) $(SRC_DIR) -v

