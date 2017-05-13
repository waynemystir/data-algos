BUILD_DIR=../build

CC=gcc
CFLAGS=-c -Wall -I../data-structures -I../algorithms
LDFLAGS=-Wall -I../data-structures -I../algorithms -L$(BUILD_DIR)
LIBS=-pthread -lalgos

THE_SOURCES=main.c \
		two_sum_test.c \
		valid_palindrome_test.c \
		strstr_test.c \
		reverse_words_test.c

THE_EXECUTABLE=test_algorithms

DEPENDENCIES=../algorithms \
		../data-structures

DEPENDS_TARGET=all

define get_objs =
`ls $(1)/*.o`
endef

default: $(THE_SOURCES) $(THE_EXECUTABLE)

all: DEPENDS_TARGET=all
all: default

debug: CFLAGS += -DDEBUG -g -O0
debug: LDFLAGS += -DDEBUG -g -O0
debug: DEPENDS_TARGET=debug
debug: default

$(THE_EXECUTABLE): dependencies
	$(CC) $(LDFLAGS) $(THE_SOURCES) -o $(BUILD_DIR)/$@ $(LIBS)

.PHONY: dependencies $(DEPENDENCIES)

dependencies: $(DEPENDENCIES)

$(DEPENDENCIES):
	$(MAKE) -C $@ $(DEPENDS_TARGET)

clean:
	rm -f $(BUILD_DIR)/*o $(BUILD_DIR)/$(THE_EXECUTABLE)
	for dir in $(DEPENDENCIES); do \
	$(MAKE) -C $$dir clean; \
	done