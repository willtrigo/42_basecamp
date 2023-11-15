#!/bin/sh

ifconfig -a | grep ethe | sed -e 's/^[[:space:]]* ether //'
