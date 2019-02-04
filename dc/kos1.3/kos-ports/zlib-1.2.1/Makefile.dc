TARGET=libz_123.a

KOS_CFLAGS+= -DPACKAGE=\"zlib\" -DVERSION=\"1.2.3\" -DHAVE_UNISTD_H -DUSE_MMAP -D_REENTRANT

#KOS_CFLAGS+=-DNO_ERRNO_H

all: $(TARGET)

include $(KOS_BASE)/Makefile.rules

SRCS = \
	adler32.c \
	compress.c \
	crc32.c \
	gzio.c \
	uncompr.c \
	deflate.c \
	trees.c \
	zutil.c \
	inflate.c \
	inftrees.c \
	infback.c \
	inffast.c \


OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	rm -f $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)
	$(KOS_AR) rcs $(KOS_BASE)/addons/lib/dreamcast/$(TARGET) $(OBJS)
	$(KOS_RANLIB) $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)

clean:
	rm -f $(OBJS)
