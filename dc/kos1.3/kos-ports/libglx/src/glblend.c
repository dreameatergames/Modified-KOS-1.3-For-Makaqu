/* KallistiGL for KOS 1.1.9

   glblend.c
   (c)2002 Benoit Miller
*/

#include <GL/gl.h>
#include <GL/glu.h>
#include "glinternal.h"
#include "glmacros.h"

#include <assert.h>

// CVSID("$Id: glblend.c,v 1.3 2002/04/03 03:33:38 axlen Exp $");

/* Blending */
void glopBlendFunc(GLParam * p)
{
    GLenum sfactor=(GLenum)p[1].i;
    GLenum dfactor=(GLenum)p[2].i;

    assert_msg(!gl_prim_type, "Not allowed within glBegin/glEnd pair.");

    switch(sfactor) {
    case GL_ZERO:
        gl_blend_src_def = PVR_BLEND_ZERO;
        break;
    case GL_ONE:
        gl_blend_src_def = PVR_BLEND_ONE;
        break;
    case GL_DST_COLOR:
        gl_blend_src_def = PVR_BLEND_DESTCOLOR;
        break;
    case GL_ONE_MINUS_DST_COLOR:
        gl_blend_src_def = PVR_BLEND_INVDESTCOLOR;
        break;
    case GL_SRC_ALPHA:
        gl_blend_src_def = PVR_BLEND_SRCALPHA;
        break;
    case GL_ONE_MINUS_SRC_ALPHA:
        gl_blend_src_def = PVR_BLEND_INVSRCALPHA;
        break;
    case GL_DST_ALPHA:
        gl_blend_src_def = PVR_BLEND_DESTALPHA;
        break;
    case GL_ONE_MINUS_DST_ALPHA:
        gl_blend_src_def = PVR_BLEND_INVDESTALPHA;
        break;
    default:
        assert_msg(0, "Invalid source blending function.");
    }

    switch(dfactor) {
    case GL_ZERO:
        gl_blend_dst_def = PVR_BLEND_ZERO;
        break;
    case GL_ONE:
        gl_blend_dst_def = PVR_BLEND_ONE;
        break;
    case GL_SRC_COLOR:
        gl_blend_dst_def = PVR_BLEND_DESTCOLOR;
        break;
    case GL_ONE_MINUS_SRC_COLOR:
        gl_blend_dst_def = PVR_BLEND_INVDESTCOLOR;
        break;
    case GL_SRC_ALPHA:
        gl_blend_dst_def = PVR_BLEND_SRCALPHA;
        break;
    case GL_ONE_MINUS_SRC_ALPHA:
        gl_blend_dst_def = PVR_BLEND_INVSRCALPHA;
        break;
    case GL_DST_ALPHA:
        gl_blend_dst_def = PVR_BLEND_DESTALPHA;
        break;
    case GL_ONE_MINUS_DST_ALPHA:
        gl_blend_dst_def = PVR_BLEND_INVDESTALPHA;
        break;
    default:
        assert_msg(0, "Invalid destination blending function");
    }

    if (gl_first_list == GL_LIST_TRANS_POLY)
    {
	    gl_blend_src=gl_blend_src_def;
	    gl_blend_dst=gl_blend_dst_def;
    }
    else
    {
	    gl_blend_src=PVR_BLEND_ONE;
	    gl_blend_dst=PVR_BLEND_ZERO;
    }

    gl_pbuf_submitted = GL_FALSE;
}
