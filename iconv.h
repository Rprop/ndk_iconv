/*
 * Copyright (C) 2018 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * https://github.com/rrrfff/ndk_iconv
 */
#ifndef NDK_ANDROID_SUPPORT_ICONV_H
#define NDK_ANDROID_SUPPORT_ICONV_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#define iconv_utf8     "utf8"
#define iconv_wchart   "wchart"
#define iconv_ucs2     "ucs2"
#define iconv_ucs2be   "ucs2be"
#define iconv_ucs2le   "ucs2le"
#define iconv_utf16    "utf16"
#define iconv_utf16be  "utf16be"
#define iconv_utf16le  "utf16le"
#define iconv_ucs4     "ucs4"
#define iconv_ucs4be   "ucs4be"
#define iconv_utf32    "utf32"
#define iconv_utf32be  "utf32be"
#define iconv_ucs4le   "ucs4le"
#define iconv_utf32le  "utf32le"
#define iconv_ascii    "ascii"
#define iconv_usascii  "usascii"
#define iconv_iso646   "iso646"
#define iconv_iso646us "iso646us"
#define iconv_eucjp    "eucjp"
#define iconv_shiftjis "shiftjis"
#define iconv_sjis     "sjis"
#define iconv_gb18030  "gb18030"
#define iconv_gbk      "gbk"
#define iconv_gb2312   "gb2312"
#define iconv_big5     "big5"
#define iconv_bigfive  "bigfive"
#define iconv_cp950    "cp950"
#define iconv_big5hkscs "big5hkscs"
#define iconv_euckr     "euckr"
#define iconv_ksc5601   "ksc5601"
#define iconv_ksx1001   "ksx1001"
#define iconv_cp949     "cp949"
#define iconv_iso88591  "iso88591"
#define iconv_latin1    "latin1"
#define iconv_iso88592  "iso88592"
#define iconv_iso88593  "iso88593"
#define iconv_iso88594  "iso88594"
#define iconv_iso88595  "iso88595"
#define iconv_iso88596  "iso88596"
#define iconv_iso88597  "iso88597"
#define iconv_iso88598  "iso88598"
#define iconv_iso88599  "iso88599"
#define iconv_iso885910 "iso885910"
#define iconv_iso885911 "iso885911"
#define iconv_tis620    "tis620"
#define iconv_iso885913 "iso885913"
#define iconv_iso885914 "iso885914"
#define iconv_iso885915 "iso885915"
#define iconv_latin9    "latin9"
#define iconv_iso885916   "iso885916"
#define iconv_cp1250      "cp1250"
#define iconv_windows1250 "windows1250"
#define iconv_cp1251      "cp1251"
#define iconv_windows1251 "windows1251"
#define iconv_cp1252      "cp1252"
#define iconv_windows1252 "windows1252"
#define iconv_cp1253      "cp1253"
#define iconv_windows1253 "windows1253"
#define iconv_cp1254      "cp1254"
#define iconv_windows1254 "windows1254"
#define iconv_cp1255      "cp1255"
#define iconv_windows1255 "windows1255"
#define iconv_cp1256      "cp1256"
#define iconv_windows1256 "windows1256"
#define iconv_cp1257      "cp1257"
#define iconv_windows1257 "windows1257"
#define iconv_cp1258      "cp1258"
#define iconv_windows1258 "windows1258"
#define iconv_koi8r       "koi8r"
#define iconv_koi8u       "koi8u"
#define iconv_cp437       "cp437"
#define iconv_cp850       "cp850"

typedef void* iconv_t;

iconv_t iconv_open(const char *, const char *);
size_t  iconv(iconv_t, char **, size_t *, char **, size_t *);
int     iconv_close(iconv_t);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // NDK_ANDROID_SUPPORT_ICONV_H
