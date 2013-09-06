Saphir
======

Saphirion's fork of REBOL 3 interpreter.

We are going to push some of our stuff to Github.
This is intended so that people from the community can use and enhance our stuff and submit pull-requests to us.
Those pull-requests will be reviewed by the Saphirion team, and if accepted, the changes are merged into our main line.

So, it will be included in our next official release and published via our web-site (http://development.saphirion.com)

Build Target:

Currently only Windows port of Saphir is published in the repository and guaranteed to compile under MSYS.
Other various systems/platforms will be added in the future repository updates.

Build Instructions:

1. download and install MSYS from: http://www.mingw.org/
2. execute following commands from Windows console:
cd saphir-r3/make/
make -f makefile-msys all
