TARGET=libpng_128.a

KOS_CFLAGS+= -D_REENTRANT -DPACKAGE=\"libpng\" -DVERSION=\"1.2.8\" -DHAVE_UNISTD_H -DPNG_NO_CONSOLE_IO -DPNG_USER_MEM_SUPPORTED -DPNG_NO_WRITE_SUPPORTED -DPNG_SETJMP_NOT_SUPPORTED -I../zlib-1.2.3

all: $(TARGET)

include $(KOS_BASE)/Makefile.rules

SRCS = \
	png.c \
	pngset.c \
	pngget.c \
	pngrutil.c \
	pngtrans.c \
	pngwutil.c \
	pngread.c \
	pngrio.c \
	pngwio.c \
	pngwrite.c \
	pngrtran.c \
	pngwtran.c \
	pngmem.c \
	pngerror.c \
	pngpread.c \


OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	rm -f $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)
	$(KOS_AR) rcs $(KOS_BASE)/addons/lib/dreamcast/$(TARGET) $(OBJS)
	$(KOS_RANLIB) $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)

clean:
	rm -f $(OBJS)
