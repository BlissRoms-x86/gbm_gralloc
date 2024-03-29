/*
 * Copyright (C) 2010-2011 Chia-I Wu <olvaffe@gmail.com>
 * Copyright (C) 2010-2011 LunarG Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _GRALLOC_DRM_H_
#define _GRALLOC_DRM_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
	/* perform(const struct gralloc_module_t *mod,
	 *	   int op,
	 *	   int *fd);
	 */
	GRALLOC_MODULE_PERFORM_GET_DRM_FD                = 0x40000002,
	GRALLOC_MODULE_PERFORM_ENTER_VT                  = 0x80000005,
	GRALLOC_MODULE_PERFORM_LEAVE_VT                  = 0x80000006,

};

#ifdef __cplusplus
}
#endif
#endif /* _GRALLOC_DRM_H_ */
