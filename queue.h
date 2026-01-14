#pragma once

/* Lion's Standard (LS) ANSI C ring buffer queue.
 *
 * Version: 1.0
 * Repo: https://github.com/lionkor/ls_queue
 * SPDX-License-Identifier: MIT
 *
 * ==== TABLE OF CONTENTS ====
 *
 * 1. DESCRIPTION
 * 2. HOW TO USE
 * 3. LICENSE
 *
 * ==== 1. DESCRIPTION ====
 *
 * TODO
 *
 * ==== 2. HOW TO USE ====
 *
 * 1. Copy this file into your project and include it:
 *
 *      #include "ls_queue.h"
 *
 * 2. In ONE C file, define LS_QUEUE_IMPLEMENTATION before including:
 *
 *      #define LS_QUEUE_IMPLEMENTATION
 *      #include "ls_queue.h"
 *
 * 3. TODO
 *
 *      TODO
 *
 * ==== 3. LICENSE ====
 *
 * This file is provided under the MIT license. For commercial support and
 * maintenance, feel free to use the e-mail below to contact the author(s).
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2026 Lion Kortlepel <development@kortlepel.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the “Software”), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

typedef struct ls_queue {
    int a;
} ls_queue;
