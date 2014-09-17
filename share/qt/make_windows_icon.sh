#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/gnosis.ico

convert ../../src/qt/res/icons/gnosis-16.png ../../src/qt/res/icons/gnosis-32.png ../../src/qt/res/icons/gnosis-48.png ${ICON_DST}
