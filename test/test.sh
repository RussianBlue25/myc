#!/bin/bash
assert() {
  expected="$1"
  input="$2"

  ./myc "$input" > tmp/tmp.s
  cc -o tmp/myctmp tmp/tmp.s
  ./tmp/myctmp
  actual="$?"

  if [ "$actual" = "$expected" ]; then
    echo "$input => $actual"
  else
    echo "$input => $expected expected, but got $actual"
    exit 1
  fi
}

assert 0 0
assert 42 42
