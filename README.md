# v7unix

The Version 7 Unix sources compiled on contemporary system using
contemporary C compilers and system headers.

# Implementation Status

`ed` and `sed` should work.

# Source

Unix Version 7 tarbomb from http://minnie.tuhs.org/Archive/PDP-11/Distributions/research/Henry_Spencer_v7/v7.tar.gz

# Ubuntu / v7sed

`sed` has been packaged for Ubuntu. The package is called
`v7sed`.  There is a `debian/rules` file suitable for making a source-
and binary-packages.

To install this on Ubuntu:

```
echo deb http://ppa.launchpad.net/drj/v7/ubuntu precise main |
  sudo tee -a /etc/apt/sources.list.d/v7.list
sudo apt-get update
sudo apt-get install v7sed
```

(the last step seems to require you to "Install these packages
without verification", I've no idea how I go about removing
that)

To make the source and binary packages:

```
cd v7
# make source
dpkg-buildpackage -S
# make binary
dpkg-buildpackage
```
