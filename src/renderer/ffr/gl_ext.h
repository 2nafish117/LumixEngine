#include "glcorearb.h"

#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT
	#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT
	#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT
	#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F
#endif

typedef const GLubyte* (APIENTRY* PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);


FFR_GL_IMPORT(PFNGLACTIVETEXTUREPROC, glActiveTexture);
FFR_GL_IMPORT(PFNGLATTACHSHADERPROC, glAttachShader);
FFR_GL_IMPORT(PFNGLBINDBUFFERPROC, glBindBuffer);
FFR_GL_IMPORT(PFNGLBINDBUFFERRANGEPROC, glBindBufferRange);
FFR_GL_IMPORT(PFNGLBINDBUFFERBASEPROC, glBindBufferBase);
FFR_GL_IMPORT(PFNGLBINDFRAMEBUFFERPROC, glBindFramebuffer);
FFR_GL_IMPORT(PFNGLBINDVERTEXARRAYPROC, glBindVertexArray);
FFR_GL_IMPORT(PFNGLBUFFERDATAPROC, glBufferData);
FFR_GL_IMPORT(PFNGLBUFFERSUBDATAPROC, glBufferSubData);
FFR_GL_IMPORT(PFNGLCHECKFRAMEBUFFERSTATUSPROC, glCheckFramebufferStatus);
FFR_GL_IMPORT(PFNGLCLIPCONTROLPROC, glClipControl);
FFR_GL_IMPORT(PFNGLCOMPILESHADERPROC, glCompileShader);
FFR_GL_IMPORT(PFNGLCOMPRESSEDTEXIMAGE2DPROC, glCompressedTexImage2D);
FFR_GL_IMPORT(PFNGLCREATEFRAMEBUFFERSPROC, glCreateFramebuffers);
FFR_GL_IMPORT(PFNGLCREATEPROGRAMPROC, glCreateProgram);
FFR_GL_IMPORT(PFNGLCREATESHADERPROC, glCreateShader);
FFR_GL_IMPORT(PFNGLCREATETEXTURESPROC, glCreateTextures);
FFR_GL_IMPORT(PFNGLDEBUGMESSAGECALLBACKPROC, glDebugMessageCallback);
FFR_GL_IMPORT(PFNGLDEBUGMESSAGECONTROLPROC, glDebugMessageControl);
FFR_GL_IMPORT(PFNGLDELETEBUFFERSPROC, glDeleteBuffers);
FFR_GL_IMPORT(PFNGLDELETEFRAMEBUFFERSPROC, glDeleteFramebuffers);
FFR_GL_IMPORT(PFNGLDELETEPROGRAMPROC, glDeleteProgram);
FFR_GL_IMPORT(PFNGLDELETEQUERIESPROC, glDeleteQueries);
FFR_GL_IMPORT(PFNGLDELETESHADERPROC, glDeleteShader);
FFR_GL_IMPORT(PFNGLDISABLEVERTEXATTRIBARRAYPROC, glDisableVertexAttribArray);
FFR_GL_IMPORT(PFNGLDRAWBUFFERSPROC, glDrawBuffers);
FFR_GL_IMPORT(PFNGLENABLEVERTEXATTRIBARRAYPROC, glEnableVertexAttribArray);
FFR_GL_IMPORT(PFNGLFRAMEBUFFERTEXTURE2DPROC, glFramebufferTexture2D);
FFR_GL_IMPORT(PFNGLGENBUFFERSPROC, glGenBuffers);
FFR_GL_IMPORT(PFNGLGENFRAMEBUFFERSPROC, glGenFramebuffers);
FFR_GL_IMPORT(PFNGLGENERATEMIPMAPPROC, glGenerateMipmap);
FFR_GL_IMPORT(PFNGLGENQUERIESPROC, glGenQueries);
FFR_GL_IMPORT(PFNGLGENRENDERBUFFERSPROC, glGenRenderbuffers);
FFR_GL_IMPORT(PFNGLGENVERTEXARRAYSPROC, glGenVertexArrays);
FFR_GL_IMPORT(PFNGLGETATTRIBLOCATIONPROC, glGetAttribLocation);
FFR_GL_IMPORT(PFNGLGETDEBUGMESSAGELOGPROC, glGetDebugMessageLog);
FFR_GL_IMPORT(PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC, glGetFramebufferAttachmentParameteriv);
FFR_GL_IMPORT(PFNGLGETPROGRAMINFOLOGPROC, glGetProgramInfoLog);
FFR_GL_IMPORT(PFNGLGETPROGRAMIVPROC, glGetProgramiv);
FFR_GL_IMPORT(PFNGLGETQUERYOBJECTUI64VPROC, glGetQueryObjectui64v);
FFR_GL_IMPORT(PFNGLGETSHADERINFOLOGPROC, glGetShaderInfoLog);
FFR_GL_IMPORT(PFNGLGETSHADERIVPROC, glGetShaderiv);
FFR_GL_IMPORT(PFNGLGETSTRINGIPROC, glGetStringi);
FFR_GL_IMPORT(PFNGLGETTEXTUREIMAGEPROC, glGetTextureImage);
FFR_GL_IMPORT(PFNGLGETUNIFORMBLOCKINDEXPROC, glGetUniformBlockIndex);
FFR_GL_IMPORT(PFNGLGETUNIFORMLOCATIONPROC, glGetUniformLocation);
FFR_GL_IMPORT(PFNGLLINKPROGRAMPROC, glLinkProgram);
FFR_GL_IMPORT(PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC, glNamedFramebufferRenderbuffer);
FFR_GL_IMPORT(PFNGLNAMEDFRAMEBUFFERTEXTUREPROC, glNamedFramebufferTexture);
FFR_GL_IMPORT(PFNGLPOPDEBUGGROUPPROC, glPopDebugGroup);
FFR_GL_IMPORT(PFNGLPUSHDEBUGGROUPPROC, glPushDebugGroup);
FFR_GL_IMPORT(PFNGLQUERYCOUNTERPROC, glQueryCounter);
FFR_GL_IMPORT(PFNGLSHADERSOURCEPROC, glShaderSource);
FFR_GL_IMPORT(PFNGLTEXBUFFERPROC, glTexBuffer);
FFR_GL_IMPORT(PFNGLTEXTURESTORAGE2DPROC, glTextureStorage2D);
FFR_GL_IMPORT(PFNGLUNIFORM1IPROC, glUniform1i);
FFR_GL_IMPORT(PFNGLUNIFORM2FVPROC, glUniform2fv);
FFR_GL_IMPORT(PFNGLUNIFORM4FVPROC, glUniform4fv);
FFR_GL_IMPORT(PFNGLUNIFORMMATRIX4FVPROC, glUniformMatrix4fv);
FFR_GL_IMPORT(PFNGLUNIFORMBLOCKBINDINGPROC, glUniformBlockBinding);
FFR_GL_IMPORT(PFNGLUSEPROGRAMPROC, glUseProgram);
FFR_GL_IMPORT(PFNGLVERTEXATTRIBPOINTERPROC, glVertexAttribPointer);
