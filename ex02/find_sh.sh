#!/bin/sh

find . -type f -iname '*.sh' -print | sed -e 's/.\///g'
