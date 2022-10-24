CXX=g++
OUTPUT=./bin
INCLUDE=./include
VERSION=c++17
SRC_DIR=./src/*
OUT_FILE=albion

.PHONY: all
all: make_bin compile

make_bin:
	@mkdir -p ./bin

compile:
	$(CXX) -lc++ -std=$(VERSION) -o $(OUTPUT)/$(OUT_FILE) -I$(INCLUDE) $(SRC_DIR) -v

