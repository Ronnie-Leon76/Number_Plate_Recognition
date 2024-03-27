#!/bin/bash
FILES=../Kenyan_License_Plate_Images/*.png
for f in $FILES
do
    echo "Processing $f file..."
    # take action on each file. $f store current file name
    ../build/ANPR $f
done
