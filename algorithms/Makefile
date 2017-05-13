BUILD_DIR=../build

CC=gcc
CFLAGS=-c -Wall -I../data-structures
AR=ar
ARFLAGS=rcs
LIBS=-pthread

SOURCES=two_sum.c \
		valid_palindrome.c \
		strstr.c \
		reverse_words.c \
		reverse_words_in_place.c

OBJECTS=$(SOURCES:.c=.o)

STATIC_LIB=libalgos.a

DEPENDENCIES=../data-structures

DEPENDS_TARGET=all

define get_objs =
`ls $(1)/*.o`
endef

default: $(SOURCES) $(STATIC_LIB)

all: DEPENDS_TARGET=all
all: default

debug: CFLAGS += -DDEBUG -g -O0
debug: DEPENDS_TARGET=debug
debug: default

$(STATIC_LIB): dependencies $(OBJECTS)
	$(AR) $(ARFLAGS) $(BUILD_DIR)/$@ $(foreach dir, $(BUILD_DIR), $(call get_objs,$(dir)))

%.o : %.c
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@

.PHONY: dependencies $(DEPENDENCIES)

dependencies: $(DEPENDENCIES)

$(DEPENDENCIES):
	$(MAKE) -C $@ $(DEPENDS_TARGET)

clean:
	rm -f $(BUILD_DIR)/*o $(BUILD_DIR)/$(STATIC_LIB)
	for dir in $(DEPENDENCIES); do \
	$(MAKE) -C $$dir clean; \
	done