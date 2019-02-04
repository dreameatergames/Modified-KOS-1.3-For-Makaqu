INCS = $(KOS_INCS) -I../SDL-1.2.9/include -I. -I../SFont -I../SDL_mixer-1.2.6 -I../SDL_image-1.2.4
DEFS =  -DPACKAGE=\"SDL_flic\" -DDC -DDREAMCAST
KOS_CFLAGS+=$(DEFS) $(INCS) $(OPTFLAGS)


TARGET = libSDL_flic.a

all: $(TARGET)

include $(KOS_BASE)/Makefile.rules

SRCS =	\
	font-arial-12.c \
	node_text.c \
	SDL_flic.c \
	SDL_playflic.c


OBJS = $(SRCS:.c=.o)

clean:
	rm -f $(OBJS)

$(TARGET) : $(OBJS)
	rm -f $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)
	$(KOS_AR) rcs $(KOS_BASE)/addons/lib/dreamcast/$(TARGET) $(OBJS)
	$(KOS_RANLIB) $(KOS_BASE)/addons/lib/dreamcast/$(TARGET)
