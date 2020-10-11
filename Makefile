CC        = gcc
CFLAGS    = -Iinclude -std=c89 -Wall -Wextra -pedantic-errors

Q         = @

SRCS      := src/int.cpp
OBJS       = $(patsubst %.c, %.o, $(SRCS))

.PHONY: all test clean

all: libint.a

libint.a: $(OBJS)
	$(Q) echo [Linking] $@
	$(Q) $(AR) rcs $@ $(OBJS)
	$(Q) echo done

test: test/main.c
	$(Q) echo [Compile] $<
	$(Q) $(CC) $< -o main $(CFLAGS) -lint -L. -Iinclude
	$(Q) echo done

clean:
	$(Q) rm -f $(OBJS) libint.a

%.o: %.c
	$(Q) echo [Compile] $<
	$(Q) $(CC) -c $< -o $@ $(CFLAGS)
