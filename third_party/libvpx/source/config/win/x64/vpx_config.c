/* Copyright (c) 2011 The WebM project authors. All Rights Reserved. */
/*  */
/* Use of this source code is governed by a BSD-style license */
/* that can be found in the LICENSE file in the root of the source */
/* tree. An additional intellectual property rights grant can be found */
/* in the file PATENTS.  All contributing project authors may */
/* be found in the AUTHORS file in the root of the source tree. */
static const char* const cfg = "--target=x86_64-win64-vs9 --enable-pic --enable-error-concealment --disable-install-docs --disable-install-srcs --disable-examples --disable-internal-stats --disable-install-libs --disable-install-bins --enable-realtime-only --enable-static-msvcrt --as=yasm";
const char *vpx_codec_build_config(void) {return cfg;}