#!/bin/bash
echo"numbwe of arguments supplied:$#"
for item in"$@"
do
if[-f"$item"]
then
echo"$item