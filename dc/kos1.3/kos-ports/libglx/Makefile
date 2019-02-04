# KallistiOS 1.1.8
#
# addons/libgl Makefile
# (c)2001 Dan Potter
#
# $Id: Makefile,v 1.4 2002/06/28 04:41:52 axlen Exp $

OBJS  = \
	src/glapi.o \
	src/gldlist.o \
	src/gldepth.o \
	src/gldraw.o \
	src/glkos.o \
	src/gllight.o \
	src/glmisc.o\
	src/gltex.o \
	src/gltrans.o \
	src/glvars.o \
	src/glblend.o \
	src/glfog.o \
	src/todo.o

SUBDIRS =

KOS_CFLAGS+= -I${KOS_BASE}/include -Isrc -Iinclude 

#KOS_CFLAGS+= -DTODO_USE_ASSERT
#KOS_CFLAGS+= -DTODO_WARN


TARGET = libkglx.a 

include $(KOS_BASE)/addons/Makefile.prefab 


gldraw.o: gldraw.c gloparray.c
