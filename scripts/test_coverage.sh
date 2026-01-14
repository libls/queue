#!/bin/sh
#
# This file is mostly AI generated.
set -eu

# Absolute paths
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
ROOT_DIR="$SCRIPT_DIR/.."
COVERAGE_DIR="$ROOT_DIR/coverage"

# Clean and prepare coverage dir
rm -rf "$COVERAGE_DIR"
mkdir -p "$COVERAGE_DIR"
cd "$COVERAGE_DIR"

# Build test binary with coverage instrumentation
# Also disable asserts because they do not count for us
gcc -Wall -Wextra -fprofile-arcs -ftest-coverage \
    -DNDEBUG \
    ../ls_queue.h ../tests/tests.c -I../tests -I.. -o tests_cov_tmp

# Run test binary (generates .gcda files here)
./tests_cov_tmp

# Generate coverage reports (all output local to coverage/)
gcovr --root .. --object-directory . --exclude-directories tests --output coverage.txt
gcovr --root .. --object-directory . --exclude-directories tests --html --html-details -o coverage.html

echo "Coverage summary: $COVERAGE_DIR/coverage.txt"
echo "HTML report: $COVERAGE_DIR/coverage.html"
