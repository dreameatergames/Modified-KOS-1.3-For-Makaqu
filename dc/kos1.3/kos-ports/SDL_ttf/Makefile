INCS = $(KOS_INCS) -I../SDL-1.2.9/include -I../freetype-2.0.9/include/ -I.
DEFS =  -DPACKAGE=\"SDL_ttf\" -DVERSION=\"2.0.8\" -DHAVE_ALLOCA_H -DDREAMCAST
KOS_CFLAGS+=$(DEFS) $(INCS) $(OPTFLAGS)


TARGET = libSDL_ttf.a

all: $(TARGET)

include $(KOS_BASE)/Makefile.rules

SRCS =	\
	SDL_ttf.c


OBJS = $(SRCS:.c=.o)

clean:
	rm -f $(OBJS)

$(TARGET) : $(OBJS)
	rm -f $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)
	$(KOS_AR) rcs $(KOS_BASE)/addons/lib/dreamcast/$(TARGET) $(OBJS)
	$(KOS_RANLIB) $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)
