CC = gcc
# TODO: -O3, -ffast-math?
CFLAGS = -std=c99 -g -Wall -DDEBUG=1
LDFLAGS = -lfec -lm -lrtlsdr
.PHONY = all clean

all: rtlvdl2

rtlvdl2: crc.o decode.o bitstream.o deinterleave.o rs.o avlc.o acars.o output.o rtlvdl2.o

decode.o: rtlvdl2.h

bitstream.o: rtlvdl2.h

deinterleave.o: rtlvdl2.h

rs.o: rtlvdl2.h

rtlvdl2.o: rtlvdl2.h

avlc.o: rtlvdl2.h avlc.h

acars.o: rtlvdl2.h acars.h

output.o: avlc.h acars.h

clean:
	rm -f *.o rtlvdl2