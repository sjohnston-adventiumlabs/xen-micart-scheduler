# Generated automatically from Makefile.in by configure.

# Makefile.in is generated from Makefile.tpl by 'autogen Makefile.def'.
#
# Makefile for directory with subdirs to build.
#   Copyright (C) 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998,
#   1999, 2000, 2001, 2002, 2003, 2004 Free Software Foundation
#
# This file is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
#

# -------------------------------
# Standard Autoconf-set variables
# -------------------------------
VPATH=../gdb-6.2.1

build_alias=x86_64-unknown-linux-gnu
build=x86_64-unknown-linux-gnu
host_alias=x86_64-unknown-linux-gnu
host=x86_64-unknown-linux-gnu
target_alias=x86_64-unknown-linux-gnu
target=x86_64-unknown-linux-gnu

program_transform_name = s,x,x,

prefix = /usr/local
exec_prefix = ${prefix}

srcdir = ../gdb-6.2.1

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
includedir = ${prefix}/include
oldincludedir = /usr/include
infodir = ${prefix}/info
mandir = ${prefix}/man
man1dir = $(mandir)/man1
man2dir = $(mandir)/man2
man3dir = $(mandir)/man3
man4dir = $(mandir)/man4
man5dir = $(mandir)/man5
man6dir = $(mandir)/man6
man7dir = $(mandir)/man7
man8dir = $(mandir)/man8
man9dir = $(mandir)/man9

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
INSTALL_DATA = ${INSTALL} -m 644
LN = ln
LN_S = ln -s

# -------------------------------------------------
# Miscellaneous non-standard autoconf-set variables
# -------------------------------------------------

# The file containing GCC's version number.
gcc_version_trigger = 
gcc_version = 4.5.1

# The gcc driver likes to know the arguments it was configured with.
TOPLEVEL_CONFIGURE_ARGUMENTS=../gdb-6.2.1/configure 

gxx_include_dir = ${prefix}/include/c++/4.5.1
libstdcxx_incdir = c++/4.5.1

tooldir = ${exec_prefix}/x86_64-unknown-linux-gnu
build_tooldir = ${exec_prefix}/x86_64-unknown-linux-gnu

# Directory in which the compiler finds executables, libraries, etc.
libsubdir = $(libdir)/gcc/$(target_alias)/$(gcc_version)
GDB_NLM_DEPS = 

# This is the name of the environment variable used for the path to
# the libraries.
RPATH_ENVVAR = LD_LIBRARY_PATH

# This is set by configure to REALLY_SET_LIB_PATH if --enable-shared
# was used.
SET_LIB_PATH = 

# configure.in sets SET_LIB_PATH to this if --enable-shared was used.
# Some platforms don't like blank entries, so we remove duplicate,
# leading and trailing colons.
REALLY_SET_LIB_PATH = \
  $(RPATH_ENVVAR)=`echo "$(HOST_LIB_PATH):$(TARGET_LIB_PATH):$$$(RPATH_ENVVAR)" | sed 's,::*,:,g;s,^:*,,;s,:*$$,,'`; export $(RPATH_ENVVAR);

# This is the list of directories to be built for the build system.
BUILD_CONFIGDIRS = libiberty libbanshee
# Build programs are put under this directory.
BUILD_SUBDIR = build-x86_64-unknown-linux-gnu
# This is set by the configure script to the arguments to use when configuring
# directories built for the build system.
BUILD_CONFIGARGS = --cache-file=../config.cache --build=x86_64-unknown-linux-gnu --host=x86_64-unknown-linux-gnu  --program-transform-name='s,y,y,'

# This is the list of variables to export in the environment when
# configuring any subdirectory.  It must also be exported whenever
# recursing into a build directory in case that directory's Makefile
# re-runs configure.
BASE_EXPORTS = \
	FLEX="$(FLEX)"; export FLEX; \
	LEX="$(LEX)"; export LEX; \
	BISON="$(BISON)"; export BISON; \
	YACC="$(YACC)"; export YACC; \
	M4="$(M4)"; export M4; \
	MAKEINFO="$(MAKEINFO)"; export MAKEINFO;

# This is the list of variables to export in the environment when
# configuring subdirectories for the build system.
BUILD_EXPORTS = \
	$(BASE_EXPORTS) \
	AR="$(AR_FOR_BUILD)"; export AR; \
	AS="$(AS_FOR_BUILD)"; export AS; \
	CC="$(CC_FOR_BUILD)"; export CC; \
	CFLAGS="$(CFLAGS_FOR_BUILD)"; export CFLAGS; \
	CONFIG_SHELL="$(SHELL)"; export CONFIG_SHELL; \
	CXX="$(CXX_FOR_BUILD)"; export CXX; \
	CXXFLAGS="$(CXXFLAGS_FOR_BUILD)"; export CXXFLAGS; \
	GCJ="$(GCJ_FOR_BUILD)"; export GCJ; \
	GFORTRAN="$(GFORTRAN_FOR_BUILD)"; export GFORTRAN; \
	DLLTOOL="$(DLLTOOL_FOR_BUILD)"; export DLLTOOL; \
	LD="$(LD_FOR_BUILD)"; export LD; \
	LDFLAGS="$(LDFLAGS_FOR_BUILD)"; export LDFLAGS; \
	NM="$(NM_FOR_BUILD)"; export NM; \
	RANLIB="$(RANLIB_FOR_BUILD)"; export RANLIB; \
	WINDRES="$(WINDRES_FOR_BUILD)"; export WINDRES;

# This is the list of directories to built for the host system.
SUBDIRS =  intl mmalloc libiberty opcodes bfd readline sim gdb etc utils
# This is set by the configure script to the arguments to use when configuring
# directories built for the host system.
HOST_CONFIGARGS = --cache-file=./config.cache --build=x86_64-unknown-linux-gnu --host=x86_64-unknown-linux-gnu --target=x86_64-unknown-linux-gnu   --program-transform-name='s,y,y,'
# This is the list of variables to export in the environment when
# configuring subdirectories for the host system.
HOST_EXPORTS = \
	$(BASE_EXPORTS) \
	CC="$(CC)"; export CC; \
	CFLAGS="$(CFLAGS)"; export CFLAGS; \
	CONFIG_SHELL="$(SHELL)"; export CONFIG_SHELL; \
	CXX="$(CXX)"; export CXX; \
	CXXFLAGS="$(CXXFLAGS)"; export CXXFLAGS; \
	AR="$(AR)"; export AR; \
	AS="$(AS)"; export AS; \
	CC_FOR_BUILD="$(CC_FOR_BUILD)"; export CC_FOR_BUILD; \
	DLLTOOL="$(DLLTOOL)"; export DLLTOOL; \
	LD="$(LD)"; export LD; \
	LDFLAGS="$(LDFLAGS)"; export LDFLAGS; \
	NM="$(NM)"; export NM; \
	RANLIB="$(RANLIB)"; export RANLIB; \
	WINDRES="$(WINDRES)"; export WINDRES; \
	OBJCOPY="$(OBJCOPY)"; export OBJCOPY; \
	OBJDUMP="$(OBJDUMP)"; export OBJDUMP; \
	TOPLEVEL_CONFIGURE_ARGUMENTS="$(TOPLEVEL_CONFIGURE_ARGUMENTS)"; export TOPLEVEL_CONFIGURE_ARGUMENTS; \
	GMPLIBS="$(HOST_GMPLIBS)"; export GMPLIBS; \
	GMPINC="$(HOST_GMPINC)"; export GMPINC;

# Similar, for later GCC stages.
STAGE_HOST_EXPORTS = \
	$(HOST_EXPORTS) \
	CC="$(STAGE_CC_WRAPPER) $$r/prev-gcc/xgcc$(exeext) -B$$r/prev-gcc/ -B$(build_tooldir)/bin/"; export CC; \
	CC_FOR_BUILD="$(STAGE_CC_WRAPPER) $$r/prev-gcc/xgcc$(exeext) -B$$r/prev-gcc/ -B$(build_tooldir)/bin/"; export CC_FOR_BUILD;

# This is set by the configure script to the list of directories which
# should be built using the target tools.
TARGET_CONFIGDIRS = 
# Target libraries are put under this directory:
TARGET_SUBDIR = x86_64-unknown-linux-gnu
# This is set by the configure script to the arguments to use when configuring
# directories built for the target.
TARGET_CONFIGARGS = --cache-file=./config.cache --host=x86_64-unknown-linux-gnu --build=x86_64-unknown-linux-gnu --enable-multilib  --program-transform-name='s,y,y,'
# This is the list of variables to export in the environment when
# configuring subdirectories for the host system.
BASE_TARGET_EXPORTS = \
	$(BASE_EXPORTS) \
	AR="$(AR_FOR_TARGET)"; export AR; \
	AS="$(AS_FOR_TARGET)"; export AS; \
	CC="$(CC_FOR_TARGET)"; export CC; \
	CFLAGS="$(CFLAGS_FOR_TARGET)"; export CFLAGS; \
	CONFIG_SHELL="$(SHELL)"; export CONFIG_SHELL; \
	CPPFLAGS="$(CFLAGS_FOR_TARGET)"; export CPPFLAGS; \
	CXXFLAGS="$(CXXFLAGS_FOR_TARGET)"; export CXXFLAGS; \
	GCJ="$(GCJ_FOR_TARGET)"; export GCJ; \
	GFORTRAN="$(GFORTRAN_FOR_TARGET)"; export GFORTRAN; \
	DLLTOOL="$(DLLTOOL_FOR_TARGET)"; export DLLTOOL; \
	LD="$(LD_FOR_TARGET)"; export LD; \
	LDFLAGS="$(LDFLAGS_FOR_TARGET)"; export LDFLAGS; \
	NM="$(NM_FOR_TARGET)"; export NM; \
	RANLIB="$(RANLIB_FOR_TARGET)"; export RANLIB; \
	WINDRES="$(WINDRES_FOR_TARGET)"; export WINDRES;

RAW_CXX_TARGET_EXPORTS = \
	$(BASE_TARGET_EXPORTS) \
	CXX_FOR_TARGET="$(RAW_CXX_FOR_TARGET)"; export CXX_FOR_TARGET; \
	CXX="$(RAW_CXX_FOR_TARGET)"; export CXX;

NORMAL_TARGET_EXPORTS = \
	$(BASE_TARGET_EXPORTS) \
	CXX="$(CXX_FOR_TARGET)"; export CXX;

# Where to find GMP
HOST_GMPLIBS = -lgmp
HOST_GMPINC = 

# ----------------------------------------------
# Programs producing files for the BUILD machine
# ----------------------------------------------

SHELL = /bin/sh

# pwd command to use.  Allow user to override default by setting PWDCMD in
# the environment to account for automounters.  The make variable must not
# be called PWDCMD, otherwise the value set here is passed to make
# subprocesses and overrides the setting from the user's environment.
# Don't use PWD since it is a common shell environment variable and we
# don't want to corrupt it.
PWD_COMMAND = $${PWDCMD-pwd}

# compilers to use to create programs which must be run in the build
# environment.
CC_FOR_BUILD = $(CC)
CFLAGS_FOR_BUILD = -g -O2

CXX_FOR_BUILD = $(CXX)

# Path to the build directory for a Canadian cross, empty otherwise.
BUILD_DIR_PREFIX = 

# Special variables passed down in EXTRA_GCC_FLAGS.  They are defined
# here so that they can be overridden by Makefile fragments.
BUILD_PREFIX = 
BUILD_PREFIX_1 = loser-

CONFIGURED_BISON = bison
BISON = `if [ -f $$r/$(BUILD_DIR_PREFIX)/bison/bison ] ; then \
	    echo $$r/$(BUILD_DIR_PREFIX)/bison/bison -L $$s/bison/ ; \
	 else \
	    echo ${CONFIGURED_BISON} ; \
	 fi`

CONFIGURED_YACC = bison -y
YACC = `if [ -f $$s/$(BUILD_DIR_PREFIX)/bison/bison ] ; then \
	    echo $$r/$(BUILD_DIR_PREFIX)/bison/bison -y -L $$s/bison/ ; \
	elif [ -f $$s/$(BUILD_DIR_PREFIX)/byacc/byacc ] ; then \
	    echo $$r/$(BUILD_DIR_PREFIX)/byacc/byacc ; \
	else \
	    echo ${CONFIGURED_YACC} ; \
	fi`

CONFIGURED_FLEX = flex
FLEX = `if [ -f $$r/$(BUILD_DIR_PREFIX)/flex/flex ] ; \
	then echo $$r/$(BUILD_DIR_PREFIX)/flex/flex ; \
	else echo ${CONFIGURED_FLEX} ; fi`

CONFIGURED_LEX = flex
LEX = `if [ -f $$r/$(BUILD_DIR_PREFIX)/flex/flex ] ; \
	then echo $$r/$(BUILD_DIR_PREFIX)/flex/flex ; \
	else echo ${CONFIGURED_LEX} ; fi`

CONFIGURED_M4 = m4
M4 = `if [ -f $$r/$(BUILD_DIR_PREFIX)/m4/m4 ] ; \
	then echo $$r/$(BUILD_DIR_PREFIX)/m4/m4 ; \
	else echo ${CONFIGURED_M4} ; fi`

# For an installed makeinfo, we require it to be from texinfo 4.2 or
# higher, else we use the "missing" dummy.  We also pass the subdirectory
# makeinfo even if only the Makefile is there, because Texinfo builds its
# manual when made, and it requires its own version.
CONFIGURED_MAKEINFO = makeinfo
MAKEINFO = `if [ -f $$r/$(BUILD_DIR_PREFIX)/texinfo/makeinfo/Makefile ] ; \
	then echo $$r/$(BUILD_DIR_PREFIX)/texinfo/makeinfo/makeinfo ; \
	else if (${CONFIGURED_MAKEINFO} --version \
	  | egrep 'texinfo[^0-9]*([1-3][0-9]|4\.[2-9]|[5-9])') >/dev/null 2>&1; \
        then echo ${CONFIGURED_MAKEINFO}; else echo $$s/missing makeinfo; fi; fi`

# This just becomes part of the MAKEINFO definition passed down to
# sub-makes.  It lets flags be given on the command line while still
# using the makeinfo from the object tree.
# (Default to avoid splitting info files by setting the threshold high.)
MAKEINFOFLAGS = --split-size=5000000

EXPECT = `if [ -f $$r/expect/expect ] ; \
	then echo $$r/expect/expect ; \
	else echo expect ; fi`

RUNTEST = `if [ -f $$s/dejagnu/runtest ] ; \
	then echo $$s/dejagnu/runtest ; \
	else echo runtest ; fi`

# ---------------------------------------------
# Programs producing files for the HOST machine
# ---------------------------------------------

# This is the list of directories that may be needed in RPATH_ENVVAR
# so that programs built for the host machine work.
HOST_LIB_PATH = $$r/bfd:$$r/opcodes

AS = as

AR = ar
AR_FLAGS = rc

CC = gcc
CFLAGS = -g -O2
LIBCFLAGS = $(CFLAGS)

CXX = c++
CXXFLAGS = -g -O2
LIBCXXFLAGS = $(CXXFLAGS) -fno-implicit-templates

DLLTOOL = dlltool

NM = nm

LD = ld
LDFLAGS = 

RANLIB = ranlib

WINDRES = windres

PICFLAG = 

# -----------------------------------------------
# Programs producing files for the TARGET machine
# -----------------------------------------------

# This is the list of directories that may be needed in RPATH_ENVVAR
# so that prorgams built for the target machine work.
TARGET_LIB_PATH = $$r/$(TARGET_SUBDIR)/libstdc++-v3/src/.libs:$$r/$(TARGET_SUBDIR)/libmudflap/.libs

FLAGS_FOR_TARGET = 

AR_FOR_TARGET=$(USUAL_AR_FOR_TARGET)
CONFIGURED_AR_FOR_TARGET=ar
USUAL_AR_FOR_TARGET = ` \
  if [ -f $$r/binutils/ar ] ; then \
    echo $$r/binutils/ar ; \
  else \
    if [ '$(host)' = '$(target)' ] ; then \
      echo $(AR); \
    else \
      echo $(CONFIGURED_AR_FOR_TARGET) ; \
    fi; \
  fi`

AS_FOR_TARGET=$(USUAL_AS_FOR_TARGET)
CONFIGURED_AS_FOR_TARGET=as
USUAL_AS_FOR_TARGET = ` \
  if [ -f $$r/gas/as-new ] ; then \
    echo $$r/gas/as-new ; \
  elif [ -f $$r/gcc/xgcc ]; then \
    $(CC_FOR_TARGET) -print-prog-name=as ; \
  else \
    if [ '$(host)' = '$(target)' ] ; then \
      echo $(AS); \
    else \
      echo $(CONFIGURED_AS_FOR_TARGET) ; \
    fi; \
  fi`

CC_FOR_TARGET = $(STAGE_CC_WRAPPER) $(CC) $(FLAGS_FOR_TARGET)
# During gcc bootstrap, if we use some random cc for stage1 then
# CFLAGS will be just -g.  We want to ensure that TARGET libraries
# (which we know are built with gcc) are built with optimizations so
# prepend -O2 when setting CFLAGS_FOR_TARGET.
CFLAGS_FOR_TARGET = -O2 $(CFLAGS)
# If GCC_FOR_TARGET is not overriden on the command line, then this
# variable is passed down to the gcc Makefile, where it is used to
# build libgcc2.a.  We define it here so that it can itself be
# overridden on the command line.
GCC_FOR_TARGET=$(USUAL_GCC_FOR_TARGET)
USUAL_GCC_FOR_TARGET = $(STAGE_CC_WRAPPER) $$r/gcc/xgcc -B$$r/gcc/ $(FLAGS_FOR_TARGET)
LIBCFLAGS_FOR_TARGET = $(CFLAGS_FOR_TARGET)

CXX_FOR_TARGET = $(STAGE_CC_WRAPPER) $(CXX) $(FLAGS_FOR_TARGET)
RAW_CXX_FOR_TARGET = $(STAGE_CC_WRAPPER) $(CXX) $(FLAGS_FOR_TARGET)
CXX_FOR_TARGET_FOR_RECURSIVE_MAKE = $(STAGE_CC_WRAPPER) $(CXX) $(FLAGS_FOR_TARGET)
RAW_CXX_FOR_TARGET_FOR_RECURSIVE_MAKE = $(STAGE_CC_WRAPPER) $(CXX) $(FLAGS_FOR_TARGET)
CXXFLAGS_FOR_TARGET = $(CXXFLAGS)
LIBCXXFLAGS_FOR_TARGET = $(CXXFLAGS_FOR_TARGET) -fno-implicit-templates

DLLTOOL_FOR_TARGET=$(USUAL_DLLTOOL_FOR_TARGET)
CONFIGURED_DLLTOOL_FOR_TARGET=dlltool
USUAL_DLLTOOL_FOR_TARGET = ` \
  if [ -f $$r/binutils/dlltool ] ; then \
    echo $$r/binutils/dlltool ; \
  else \
    if [ '$(host)' = '$(target)' ] ; then \
      echo $(DLLTOOL); \
    else \
      echo $(CONFIGURED_DLLTOOL_FOR_TARGET) ; \
    fi; \
  fi`

GCJ_FOR_TARGET = $(STAGE_CC_WRAPPER) gcj $(FLAGS_FOR_TARGET)
GFORTRAN_FOR_TARGET = $(STAGE_CC_WRAPPER) gfortran $(FLAGS_FOR_TARGET)

LD_FOR_TARGET=$(USUAL_LD_FOR_TARGET)
CONFIGURED_LD_FOR_TARGET=ld
USUAL_LD_FOR_TARGET = ` \
  if [ -f $$r/ld/ld-new ] ; then \
    echo $$r/ld/ld-new ; \
  elif [ -f $$r/gcc/xgcc ]; then \
    $(CC_FOR_TARGET) -print-prog-name=ld ; \
  else \
    if [ '$(host)' = '$(target)' ] ; then \
      echo $(LD); \
    else \
      echo $(CONFIGURED_LD_FOR_TARGET) ; \
    fi; \
  fi`

LDFLAGS_FOR_TARGET = 

NM_FOR_TARGET=$(USUAL_NM_FOR_TARGET)
CONFIGURED_NM_FOR_TARGET=nm
USUAL_NM_FOR_TARGET = ` \
  if [ -f $$r/binutils/nm-new ] ; then \
    echo $$r/binutils/nm-new ; \
  elif [ -f $$r/gcc/xgcc ]; then \
    $(CC_FOR_TARGET) -print-prog-name=nm ; \
  else \
    if [ '$(host)' = '$(target)' ] ; then \
      echo $(NM); \
    else \
      echo $(CONFIGURED_NM_FOR_TARGET) ; \
    fi; \
  fi`

RANLIB_FOR_TARGET=$(USUAL_RANLIB_FOR_TARGET)
CONFIGURED_RANLIB_FOR_TARGET=ranlib
USUAL_RANLIB_FOR_TARGET = ` \
  if [ -f $$r/binutils/ranlib ] ; then \
    echo $$r/binutils/ranlib ; \
  else \
    if [ '$(host)' = '$(target)' ] ; then \
      if [ x'$(RANLIB)' != x ]; then \
         echo $(RANLIB); \
      else \
         echo ranlib; \
      fi; \
    else \
      echo $(CONFIGURED_RANLIB_FOR_TARGET) ; \
    fi; \
  fi`

WINDRES_FOR_TARGET=$(USUAL_WINDRES_FOR_TARGET)
CONFIGURED_WINDRES_FOR_TARGET=windres
USUAL_WINDRES_FOR_TARGET = ` \
  if [ -f $$r/binutils/windres ] ; then \
    echo $$r/binutils/windres ; \
  else \
    if [ '$(host)' = '$(target)' ] ; then \
      echo $(WINDRES); \
    else \
      echo $(CONFIGURED_WINDRES_FOR_TARGET) ; \
    fi; \
  fi`

PICFLAG_FOR_TARGET = 

# ------------------------------------
# Miscellaneous targets and flag lists
# ------------------------------------

# The first rule in the file had better be this one.  Don't put any above it.
# This lives here to allow makefile fragments to contain dependencies.
all:

#### host and target specific makefile fragments come in here.

CXXFLAGS_FOR_TARGET = $(CXXFLAGS) -D_GNU_SOURCE



###

# Flags to pass down to all sub-makes.
BASE_FLAGS_TO_PASS = \
	"DESTDIR=$(DESTDIR)" \
	"RPATH_ENVVAR=$(RPATH_ENVVAR)" \
	"TARGET_SUBDIR=$(TARGET_SUBDIR)" \
	"bindir=$(bindir)" \
	"datadir=$(datadir)" \
	"exec_prefix=$(exec_prefix)" \
	"includedir=$(includedir)" \
	"infodir=$(infodir)" \
	"libdir=$(libdir)" \
	"libexecdir=$(libexecdir)" \
	"lispdir=$(lispdir)" \
	"libstdcxx_incdir=$(libstdcxx_incdir)" \
	"libsubdir=$(libsubdir)" \
	"localstatedir=$(localstatedir)" \
	"mandir=$(mandir)" \
	"oldincludedir=$(oldincludedir)" \
	"prefix=$(prefix)" \
	"sbindir=$(sbindir)" \
	"sharedstatedir=$(sharedstatedir)" \
	"sysconfdir=$(sysconfdir)" \
	"tooldir=$(tooldir)" \
	"build_tooldir=$(build_tooldir)" \
	"gxx_include_dir=$(gxx_include_dir)" \
	"gcc_version=$(gcc_version)" \
	"gcc_version_trigger=$(gcc_version_trigger)" \
	"target_alias=$(target_alias)" \
	"BISON=$(BISON)" \
	"CC_FOR_BUILD=$(CC_FOR_BUILD)" \
	"CXX_FOR_BUILD=$(CXX_FOR_BUILD)" \
	"EXPECT=$(EXPECT)" \
	"FLEX=$(FLEX)" \
	"INSTALL=$(INSTALL)" \
	"INSTALL_DATA=$(INSTALL_DATA)" \
	"INSTALL_PROGRAM=$(INSTALL_PROGRAM)" \
	"INSTALL_SCRIPT=$(INSTALL_SCRIPT)" \
	"LEX=$(LEX)" \
	"M4=$(M4)" \
	"MAKE=$(MAKE)" \
	"RUNTEST=$(RUNTEST)" \
	"RUNTESTFLAGS=$(RUNTESTFLAGS)" \
	"SHELL=$(SHELL)" \
	"YACC=$(YACC)" \
	"AR_FLAGS=$(AR_FLAGS)" \
	"CFLAGS=$(CFLAGS)" \
	"CXXFLAGS=$(CXXFLAGS)" \
	"LDFLAGS=$(LDFLAGS)" \
	"LIBCFLAGS=$(LIBCFLAGS)" \
	"LIBCXXFLAGS=$(LIBCXXFLAGS)" \
	"AR_FOR_TARGET=$(AR_FOR_TARGET)" \
	"AS_FOR_TARGET=$(AS_FOR_TARGET)" \
	"CC_FOR_TARGET=$(CC_FOR_TARGET)" \
	"CFLAGS_FOR_TARGET=$(CFLAGS_FOR_TARGET)" \
	"CXX_FOR_TARGET=$(CXX_FOR_TARGET)" \
	"CXXFLAGS_FOR_TARGET=$(CXXFLAGS_FOR_TARGET)" \
	"DLLTOOL_FOR_TARGET=$(DLLTOOL_FOR_TARGET)" \
	"GCJ_FOR_TARGET=$(GCJ_FOR_TARGET)" \
	"GFORTRAN_FOR_TARGET=$(GFORTRAN_FOR_TARGET)" \
	"LD_FOR_TARGET=$(LD_FOR_TARGET)" \
	"LIBCFLAGS_FOR_TARGET=$(LIBCFLAGS_FOR_TARGET)" \
	"LIBCXXFLAGS_FOR_TARGET=$(LIBCXXFLAGS_FOR_TARGET)" \
	"NM_FOR_TARGET=$(NM_FOR_TARGET)" \
	"RANLIB_FOR_TARGET=$(RANLIB_FOR_TARGET)" \
	"WINDRES_FOR_TARGET=$(WINDRES_FOR_TARGET)" \
	"CONFIG_SHELL=$(SHELL)" \
	"MAKEINFO=$(MAKEINFO) $(MAKEINFOFLAGS)" 

# For any flags above that may contain shell code that varies from one
# target library to another.  When doing recursive invocations of the
# top-level Makefile, we don't want the outer make to evaluate them,
# so we pass these variables down unchanged.  They must not contain
# single nor double quotes.
RECURSE_FLAGS = \
	CXX_FOR_TARGET='$(CXX_FOR_TARGET_FOR_RECURSIVE_MAKE)' \
	RAW_CXX_FOR_TARGET='$(RAW_CXX_FOR_TARGET_FOR_RECURSIVE_MAKE)' \

RECURSE_FLAGS_TO_PASS = $(BASE_FLAGS_TO_PASS) $(RECURSE_FLAGS)

# Flags to pass down to most sub-makes, in which we're building with
# the host environment.
EXTRA_HOST_FLAGS = \
	'AR=$(AR)' \
	'AS=$(AS)' \
	'CC=$(CC)' \
	'CXX=$(CXX)' \
	'DLLTOOL=$(DLLTOOL)' \
	'LD=$(LD)' \
	'NM=$(NM)' \
	'RANLIB=$(RANLIB)' \
	'WINDRES=$(WINDRES)'

FLAGS_TO_PASS = $(BASE_FLAGS_TO_PASS) $(EXTRA_HOST_FLAGS)

# Flags that are concerned with the location of the X11 include files
# and library files
#
# NOTE: until the top-level is getting the values via autoconf, it only
# causes problems to have this top-level Makefile overriding the autoconf-set
# values in child directories.  Only variables that don't conflict with
# autoconf'ed ones should be passed by X11_FLAGS_TO_PASS for now.
#
X11_FLAGS_TO_PASS = \
	'X11_EXTRA_CFLAGS=$(X11_EXTRA_CFLAGS)' \
	'X11_EXTRA_LIBS=$(X11_EXTRA_LIBS)'

# Flags to pass down to makes which are built with the target environment.
# The double $ decreases the length of the command line; the variables
# are set in BASE_FLAGS_TO_PASS, and the sub-make will expand them.
EXTRA_TARGET_FLAGS = \
	'AR=$$(AR_FOR_TARGET)' \
	'AS=$$(AS_FOR_TARGET)' \
	'CC=$$(CC_FOR_TARGET)' \
	'CFLAGS=$$(CFLAGS_FOR_TARGET)' \
	'CXX=$$(CXX_FOR_TARGET)' \
	'CXXFLAGS=$$(CXXFLAGS_FOR_TARGET)' \
	'DLLTOOL=$$(DLLTOOL_FOR_TARGET)' \
	'LD=$$(LD_FOR_TARGET)' \
	'LIBCFLAGS=$$(LIBCFLAGS_FOR_TARGET)' \
	'LIBCXXFLAGS=$$(LIBCXXFLAGS_FOR_TARGET)' \
	'NM=$$(NM_FOR_TARGET)' \
	'RANLIB=$$(RANLIB_FOR_TARGET)' \
	'WINDRES=$$(WINDRES_FOR_TARGET)'

TARGET_FLAGS_TO_PASS = $(BASE_FLAGS_TO_PASS) $(EXTRA_TARGET_FLAGS)

# Flags to pass down to gcc.  gcc builds a library, libgcc.a, so it
# unfortunately needs the native compiler and the target ar and
# ranlib.
# If any variables are added here, they must be added to do-*, below.
# The BUILD_* variables are a special case, which are used for the gcc
# cross-building scheme.
EXTRA_GCC_FLAGS = \
	'BUILD_PREFIX=$(BUILD_PREFIX)' \
	'BUILD_PREFIX_1=$(BUILD_PREFIX_1)' \
	"GCC_FOR_TARGET=$(GCC_FOR_TARGET)" \
	"CFLAGS_FOR_BUILD=$(CFLAGS_FOR_BUILD)" \
	"`echo 'LANGUAGES=$(LANGUAGES)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'STMP_FIXPROTO=$(STMP_FIXPROTO)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'LIMITS_H_TEST=$(LIMITS_H_TEST)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'LIBGCC2_CFLAGS=$(LIBGCC2_CFLAGS)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'LIBGCC2_DEBUG_CFLAGS=$(LIBGCC2_DEBUG_CFLAGS)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'LIBGCC2_INCLUDES=$(LIBGCC2_INCLUDES)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'STAGE1_CFLAGS=$(STAGE1_CFLAGS)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'BOOT_CFLAGS=$(BOOT_CFLAGS)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`" \
	"`echo 'BOOT_ADAFLAGS=$(BOOT_ADAFLAGS)' | sed -e s'/[^=][^=]*=$$/XFOO=/'`"

GCC_FLAGS_TO_PASS = $(BASE_FLAGS_TO_PASS) $(EXTRA_HOST_FLAGS) $(EXTRA_GCC_FLAGS)

.PHONY: configure-host
configure-host: maybe-configure-gcc  \
    maybe-configure-ash \
    maybe-configure-autoconf \
    maybe-configure-automake \
    maybe-configure-bash \
    maybe-configure-bfd \
    maybe-configure-opcodes \
    maybe-configure-binutils \
    maybe-configure-bison \
    maybe-configure-byacc \
    maybe-configure-bzip2 \
    maybe-configure-dejagnu \
    maybe-configure-diff \
    maybe-configure-dosutils \
    maybe-configure-etc \
    maybe-configure-fastjar \
    maybe-configure-fileutils \
    maybe-configure-findutils \
    maybe-configure-find \
    maybe-configure-flex \
    maybe-configure-gas \
    maybe-configure-gawk \
    maybe-configure-gettext \
    maybe-configure-gnuserv \
    maybe-configure-gprof \
    maybe-configure-gzip \
    maybe-configure-hello \
    maybe-configure-indent \
    maybe-configure-intl \
    maybe-configure-tcl \
    maybe-configure-itcl \
    maybe-configure-ld \
    maybe-configure-libcpp \
    maybe-configure-libgui \
    maybe-configure-libbanshee \
    maybe-configure-libiberty \
    maybe-configure-libtool \
    maybe-configure-m4 \
    maybe-configure-make \
    maybe-configure-mmalloc \
    maybe-configure-patch \
    maybe-configure-perl \
    maybe-configure-prms \
    maybe-configure-rcs \
    maybe-configure-readline \
    maybe-configure-release \
    maybe-configure-recode \
    maybe-configure-sed \
    maybe-configure-send-pr \
    maybe-configure-shellutils \
    maybe-configure-sid \
    maybe-configure-sim \
    maybe-configure-tar \
    maybe-configure-texinfo \
    maybe-configure-textutils \
    maybe-configure-time \
    maybe-configure-uudecode \
    maybe-configure-wdiff \
    maybe-configure-zip \
    maybe-configure-zlib \
    maybe-configure-gdb \
    maybe-configure-expect \
    maybe-configure-guile \
    maybe-configure-tk \
    maybe-configure-tix \
    maybe-configure-libtermcap \
    maybe-configure-utils
.PHONY: configure-target
configure-target:  \
    maybe-configure-target-libstdc++-v3 \
    maybe-configure-target-libmudflap \
    maybe-configure-target-newlib \
    maybe-configure-target-libgfortran \
    maybe-configure-target-libobjc \
    maybe-configure-target-libtermcap \
    maybe-configure-target-winsup \
    maybe-configure-target-libgloss \
    maybe-configure-target-libiberty \
    maybe-configure-target-gperf \
    maybe-configure-target-examples \
    maybe-configure-target-libffi \
    maybe-configure-target-libjava \
    maybe-configure-target-zlib \
    maybe-configure-target-boehm-gc \
    maybe-configure-target-qthreads \
    maybe-configure-target-rda \
    maybe-configure-target-libada

# The target built for a native non-bootstrap build.
.PHONY: all
all: all-build all-host all-target

.PHONY: all-build
all-build:  \
    maybe-all-build-libiberty \
    maybe-all-build-libbanshee \
    maybe-all-build-bison \
    maybe-all-build-byacc \
    maybe-all-build-flex \
    maybe-all-build-m4 \
    maybe-all-build-texinfo
.PHONY: all-host
all-host: maybe-all-gcc  \
    maybe-all-ash \
    maybe-all-autoconf \
    maybe-all-automake \
    maybe-all-bash \
    maybe-all-bfd \
    maybe-all-opcodes \
    maybe-all-binutils \
    maybe-all-bison \
    maybe-all-byacc \
    maybe-all-bzip2 \
    maybe-all-dejagnu \
    maybe-all-diff \
    maybe-all-dosutils \
    maybe-all-etc \
    maybe-all-fastjar \
    maybe-all-fileutils \
    maybe-all-findutils \
    maybe-all-find \
    maybe-all-flex \
    maybe-all-gas \
    maybe-all-gawk \
    maybe-all-gettext \
    maybe-all-gnuserv \
    maybe-all-gprof \
    maybe-all-gzip \
    maybe-all-hello \
    maybe-all-indent \
    maybe-all-intl \
    maybe-all-tcl \
    maybe-all-itcl \
    maybe-all-ld \
    maybe-all-libcpp \
    maybe-all-libgui \
    maybe-all-libbanshee \
    maybe-all-libiberty \
    maybe-all-libtool \
    maybe-all-m4 \
    maybe-all-make \
    maybe-all-mmalloc \
    maybe-all-patch \
    maybe-all-perl \
    maybe-all-prms \
    maybe-all-rcs \
    maybe-all-readline \
    maybe-all-release \
    maybe-all-recode \
    maybe-all-sed \
    maybe-all-send-pr \
    maybe-all-shellutils \
    maybe-all-sid \
    maybe-all-sim \
    maybe-all-tar \
    maybe-all-texinfo \
    maybe-all-textutils \
    maybe-all-time \
    maybe-all-uudecode \
    maybe-all-wdiff \
    maybe-all-zip \
    maybe-all-zlib \
    maybe-all-gdb \
    maybe-all-expect \
    maybe-all-guile \
    maybe-all-tk \
    maybe-all-tix \
    maybe-all-libtermcap \
    maybe-all-utils
.PHONY: all-target
all-target:  \
    maybe-all-target-libstdc++-v3 \
    maybe-all-target-libmudflap \
    maybe-all-target-newlib \
    maybe-all-target-libgfortran \
    maybe-all-target-libobjc \
    maybe-all-target-libtermcap \
    maybe-all-target-winsup \
    maybe-all-target-libgloss \
    maybe-all-target-libiberty \
    maybe-all-target-gperf \
    maybe-all-target-examples \
    maybe-all-target-libffi \
    maybe-all-target-libjava \
    maybe-all-target-zlib \
    maybe-all-target-boehm-gc \
    maybe-all-target-qthreads \
    maybe-all-target-rda \
    maybe-all-target-libada

# Do a target for all the subdirectories.  A ``make do-X'' will do a
# ``make X'' in all subdirectories (because, in general, there is a
# dependency (below) of X upon do-X, a ``make X'' will also do this,
# but it may do additional work as well).

.PHONY: do-info
do-info: info-host info-target

.PHONY: info-host
info-host: maybe-info-gcc  \
    maybe-info-ash \
    maybe-info-autoconf \
    maybe-info-automake \
    maybe-info-bash \
    maybe-info-bfd \
    maybe-info-opcodes \
    maybe-info-binutils \
    maybe-info-bison \
    maybe-info-byacc \
    maybe-info-bzip2 \
    maybe-info-dejagnu \
    maybe-info-diff \
    maybe-info-dosutils \
    maybe-info-etc \
    maybe-info-fastjar \
    maybe-info-fileutils \
    maybe-info-findutils \
    maybe-info-find \
    maybe-info-flex \
    maybe-info-gas \
    maybe-info-gawk \
    maybe-info-gettext \
    maybe-info-gnuserv \
    maybe-info-gprof \
    maybe-info-gzip \
    maybe-info-hello \
    maybe-info-indent \
    maybe-info-intl \
    maybe-info-tcl \
    maybe-info-itcl \
    maybe-info-ld \
    maybe-info-libcpp \
    maybe-info-libgui \
    maybe-info-libbanshee \
    maybe-info-libiberty \
    maybe-info-libtool \
    maybe-info-m4 \
    maybe-info-make \
    maybe-info-mmalloc \
    maybe-info-patch \
    maybe-info-perl \
    maybe-info-prms \
    maybe-info-rcs \
    maybe-info-readline \
    maybe-info-release \
    maybe-info-recode \
    maybe-info-sed \
    maybe-info-send-pr \
    maybe-info-shellutils \
    maybe-info-sid \
    maybe-info-sim \
    maybe-info-tar \
    maybe-info-texinfo \
    maybe-info-textutils \
    maybe-info-time \
    maybe-info-uudecode \
    maybe-info-wdiff \
    maybe-info-zip \
    maybe-info-zlib \
    maybe-info-gdb \
    maybe-info-expect \
    maybe-info-guile \
    maybe-info-tk \
    maybe-info-tix \
    maybe-info-libtermcap \
    maybe-info-utils

.PHONY: info-target
info-target:  \
    maybe-info-target-libstdc++-v3 \
    maybe-info-target-libmudflap \
    maybe-info-target-newlib \
    maybe-info-target-libgfortran \
    maybe-info-target-libobjc \
    maybe-info-target-libtermcap \
    maybe-info-target-winsup \
    maybe-info-target-libgloss \
    maybe-info-target-libiberty \
    maybe-info-target-gperf \
    maybe-info-target-examples \
    maybe-info-target-libffi \
    maybe-info-target-libjava \
    maybe-info-target-zlib \
    maybe-info-target-boehm-gc \
    maybe-info-target-qthreads \
    maybe-info-target-rda \
    maybe-info-target-libada

.PHONY: do-dvi
do-dvi: dvi-host dvi-target

.PHONY: dvi-host
dvi-host: maybe-dvi-gcc  \
    maybe-dvi-ash \
    maybe-dvi-autoconf \
    maybe-dvi-automake \
    maybe-dvi-bash \
    maybe-dvi-bfd \
    maybe-dvi-opcodes \
    maybe-dvi-binutils \
    maybe-dvi-bison \
    maybe-dvi-byacc \
    maybe-dvi-bzip2 \
    maybe-dvi-dejagnu \
    maybe-dvi-diff \
    maybe-dvi-dosutils \
    maybe-dvi-etc \
    maybe-dvi-fastjar \
    maybe-dvi-fileutils \
    maybe-dvi-findutils \
    maybe-dvi-find \
    maybe-dvi-flex \
    maybe-dvi-gas \
    maybe-dvi-gawk \
    maybe-dvi-gettext \
    maybe-dvi-gnuserv \
    maybe-dvi-gprof \
    maybe-dvi-gzip \
    maybe-dvi-hello \
    maybe-dvi-indent \
    maybe-dvi-intl \
    maybe-dvi-tcl \
    maybe-dvi-itcl \
    maybe-dvi-ld \
    maybe-dvi-libcpp \
    maybe-dvi-libgui \
    maybe-dvi-libbanshee \
    maybe-dvi-libiberty \
    maybe-dvi-libtool \
    maybe-dvi-m4 \
    maybe-dvi-make \
    maybe-dvi-mmalloc \
    maybe-dvi-patch \
    maybe-dvi-perl \
    maybe-dvi-prms \
    maybe-dvi-rcs \
    maybe-dvi-readline \
    maybe-dvi-release \
    maybe-dvi-recode \
    maybe-dvi-sed \
    maybe-dvi-send-pr \
    maybe-dvi-shellutils \
    maybe-dvi-sid \
    maybe-dvi-sim \
    maybe-dvi-tar \
    maybe-dvi-texinfo \
    maybe-dvi-textutils \
    maybe-dvi-time \
    maybe-dvi-uudecode \
    maybe-dvi-wdiff \
    maybe-dvi-zip \
    maybe-dvi-zlib \
    maybe-dvi-gdb \
    maybe-dvi-expect \
    maybe-dvi-guile \
    maybe-dvi-tk \
    maybe-dvi-tix \
    maybe-dvi-libtermcap \
    maybe-dvi-utils

.PHONY: dvi-target
dvi-target:  \
    maybe-dvi-target-libstdc++-v3 \
    maybe-dvi-target-libmudflap \
    maybe-dvi-target-newlib \
    maybe-dvi-target-libgfortran \
    maybe-dvi-target-libobjc \
    maybe-dvi-target-libtermcap \
    maybe-dvi-target-winsup \
    maybe-dvi-target-libgloss \
    maybe-dvi-target-libiberty \
    maybe-dvi-target-gperf \
    maybe-dvi-target-examples \
    maybe-dvi-target-libffi \
    maybe-dvi-target-libjava \
    maybe-dvi-target-zlib \
    maybe-dvi-target-boehm-gc \
    maybe-dvi-target-qthreads \
    maybe-dvi-target-rda \
    maybe-dvi-target-libada

.PHONY: do-TAGS
do-TAGS: TAGS-host TAGS-target

.PHONY: TAGS-host
TAGS-host: maybe-TAGS-gcc  \
    maybe-TAGS-ash \
    maybe-TAGS-autoconf \
    maybe-TAGS-automake \
    maybe-TAGS-bash \
    maybe-TAGS-bfd \
    maybe-TAGS-opcodes \
    maybe-TAGS-binutils \
    maybe-TAGS-bison \
    maybe-TAGS-byacc \
    maybe-TAGS-bzip2 \
    maybe-TAGS-dejagnu \
    maybe-TAGS-diff \
    maybe-TAGS-dosutils \
    maybe-TAGS-etc \
    maybe-TAGS-fastjar \
    maybe-TAGS-fileutils \
    maybe-TAGS-findutils \
    maybe-TAGS-find \
    maybe-TAGS-flex \
    maybe-TAGS-gas \
    maybe-TAGS-gawk \
    maybe-TAGS-gettext \
    maybe-TAGS-gnuserv \
    maybe-TAGS-gprof \
    maybe-TAGS-gzip \
    maybe-TAGS-hello \
    maybe-TAGS-indent \
    maybe-TAGS-intl \
    maybe-TAGS-tcl \
    maybe-TAGS-itcl \
    maybe-TAGS-ld \
    maybe-TAGS-libcpp \
    maybe-TAGS-libgui \
    maybe-TAGS-libbanshee \
    maybe-TAGS-libiberty \
    maybe-TAGS-libtool \
    maybe-TAGS-m4 \
    maybe-TAGS-make \
    maybe-TAGS-mmalloc \
    maybe-TAGS-patch \
    maybe-TAGS-perl \
    maybe-TAGS-prms \
    maybe-TAGS-rcs \
    maybe-TAGS-readline \
    maybe-TAGS-release \
    maybe-TAGS-recode \
    maybe-TAGS-sed \
    maybe-TAGS-send-pr \
    maybe-TAGS-shellutils \
    maybe-TAGS-sid \
    maybe-TAGS-sim \
    maybe-TAGS-tar \
    maybe-TAGS-texinfo \
    maybe-TAGS-textutils \
    maybe-TAGS-time \
    maybe-TAGS-uudecode \
    maybe-TAGS-wdiff \
    maybe-TAGS-zip \
    maybe-TAGS-zlib \
    maybe-TAGS-gdb \
    maybe-TAGS-expect \
    maybe-TAGS-guile \
    maybe-TAGS-tk \
    maybe-TAGS-tix \
    maybe-TAGS-libtermcap \
    maybe-TAGS-utils

.PHONY: TAGS-target
TAGS-target:  \
    maybe-TAGS-target-libstdc++-v3 \
    maybe-TAGS-target-libmudflap \
    maybe-TAGS-target-newlib \
    maybe-TAGS-target-libgfortran \
    maybe-TAGS-target-libobjc \
    maybe-TAGS-target-libtermcap \
    maybe-TAGS-target-winsup \
    maybe-TAGS-target-libgloss \
    maybe-TAGS-target-libiberty \
    maybe-TAGS-target-gperf \
    maybe-TAGS-target-examples \
    maybe-TAGS-target-libffi \
    maybe-TAGS-target-libjava \
    maybe-TAGS-target-zlib \
    maybe-TAGS-target-boehm-gc \
    maybe-TAGS-target-qthreads \
    maybe-TAGS-target-rda \
    maybe-TAGS-target-libada

.PHONY: do-install-info
do-install-info: install-info-host install-info-target

.PHONY: install-info-host
install-info-host: maybe-install-info-gcc  \
    maybe-install-info-ash \
    maybe-install-info-autoconf \
    maybe-install-info-automake \
    maybe-install-info-bash \
    maybe-install-info-bfd \
    maybe-install-info-opcodes \
    maybe-install-info-binutils \
    maybe-install-info-bison \
    maybe-install-info-byacc \
    maybe-install-info-bzip2 \
    maybe-install-info-dejagnu \
    maybe-install-info-diff \
    maybe-install-info-dosutils \
    maybe-install-info-etc \
    maybe-install-info-fastjar \
    maybe-install-info-fileutils \
    maybe-install-info-findutils \
    maybe-install-info-find \
    maybe-install-info-flex \
    maybe-install-info-gas \
    maybe-install-info-gawk \
    maybe-install-info-gettext \
    maybe-install-info-gnuserv \
    maybe-install-info-gprof \
    maybe-install-info-gzip \
    maybe-install-info-hello \
    maybe-install-info-indent \
    maybe-install-info-intl \
    maybe-install-info-tcl \
    maybe-install-info-itcl \
    maybe-install-info-ld \
    maybe-install-info-libcpp \
    maybe-install-info-libgui \
    maybe-install-info-libbanshee \
    maybe-install-info-libiberty \
    maybe-install-info-libtool \
    maybe-install-info-m4 \
    maybe-install-info-make \
    maybe-install-info-mmalloc \
    maybe-install-info-patch \
    maybe-install-info-perl \
    maybe-install-info-prms \
    maybe-install-info-rcs \
    maybe-install-info-readline \
    maybe-install-info-release \
    maybe-install-info-recode \
    maybe-install-info-sed \
    maybe-install-info-send-pr \
    maybe-install-info-shellutils \
    maybe-install-info-sid \
    maybe-install-info-sim \
    maybe-install-info-tar \
    maybe-install-info-texinfo \
    maybe-install-info-textutils \
    maybe-install-info-time \
    maybe-install-info-uudecode \
    maybe-install-info-wdiff \
    maybe-install-info-zip \
    maybe-install-info-zlib \
    maybe-install-info-gdb \
    maybe-install-info-expect \
    maybe-install-info-guile \
    maybe-install-info-tk \
    maybe-install-info-tix \
    maybe-install-info-libtermcap \
    maybe-install-info-utils

.PHONY: install-info-target
install-info-target:  \
    maybe-install-info-target-libstdc++-v3 \
    maybe-install-info-target-libmudflap \
    maybe-install-info-target-newlib \
    maybe-install-info-target-libgfortran \
    maybe-install-info-target-libobjc \
    maybe-install-info-target-libtermcap \
    maybe-install-info-target-winsup \
    maybe-install-info-target-libgloss \
    maybe-install-info-target-libiberty \
    maybe-install-info-target-gperf \
    maybe-install-info-target-examples \
    maybe-install-info-target-libffi \
    maybe-install-info-target-libjava \
    maybe-install-info-target-zlib \
    maybe-install-info-target-boehm-gc \
    maybe-install-info-target-qthreads \
    maybe-install-info-target-rda \
    maybe-install-info-target-libada

.PHONY: do-installcheck
do-installcheck: installcheck-host installcheck-target

.PHONY: installcheck-host
installcheck-host: maybe-installcheck-gcc  \
    maybe-installcheck-ash \
    maybe-installcheck-autoconf \
    maybe-installcheck-automake \
    maybe-installcheck-bash \
    maybe-installcheck-bfd \
    maybe-installcheck-opcodes \
    maybe-installcheck-binutils \
    maybe-installcheck-bison \
    maybe-installcheck-byacc \
    maybe-installcheck-bzip2 \
    maybe-installcheck-dejagnu \
    maybe-installcheck-diff \
    maybe-installcheck-dosutils \
    maybe-installcheck-etc \
    maybe-installcheck-fastjar \
    maybe-installcheck-fileutils \
    maybe-installcheck-findutils \
    maybe-installcheck-find \
    maybe-installcheck-flex \
    maybe-installcheck-gas \
    maybe-installcheck-gawk \
    maybe-installcheck-gettext \
    maybe-installcheck-gnuserv \
    maybe-installcheck-gprof \
    maybe-installcheck-gzip \
    maybe-installcheck-hello \
    maybe-installcheck-indent \
    maybe-installcheck-intl \
    maybe-installcheck-tcl \
    maybe-installcheck-itcl \
    maybe-installcheck-ld \
    maybe-installcheck-libcpp \
    maybe-installcheck-libgui \
    maybe-installcheck-libbanshee \
    maybe-installcheck-libiberty \
    maybe-installcheck-libtool \
    maybe-installcheck-m4 \
    maybe-installcheck-make \
    maybe-installcheck-mmalloc \
    maybe-installcheck-patch \
    maybe-installcheck-perl \
    maybe-installcheck-prms \
    maybe-installcheck-rcs \
    maybe-installcheck-readline \
    maybe-installcheck-release \
    maybe-installcheck-recode \
    maybe-installcheck-sed \
    maybe-installcheck-send-pr \
    maybe-installcheck-shellutils \
    maybe-installcheck-sid \
    maybe-installcheck-sim \
    maybe-installcheck-tar \
    maybe-installcheck-texinfo \
    maybe-installcheck-textutils \
    maybe-installcheck-time \
    maybe-installcheck-uudecode \
    maybe-installcheck-wdiff \
    maybe-installcheck-zip \
    maybe-installcheck-zlib \
    maybe-installcheck-gdb \
    maybe-installcheck-expect \
    maybe-installcheck-guile \
    maybe-installcheck-tk \
    maybe-installcheck-tix \
    maybe-installcheck-libtermcap \
    maybe-installcheck-utils

.PHONY: installcheck-target
installcheck-target:  \
    maybe-installcheck-target-libstdc++-v3 \
    maybe-installcheck-target-libmudflap \
    maybe-installcheck-target-newlib \
    maybe-installcheck-target-libgfortran \
    maybe-installcheck-target-libobjc \
    maybe-installcheck-target-libtermcap \
    maybe-installcheck-target-winsup \
    maybe-installcheck-target-libgloss \
    maybe-installcheck-target-libiberty \
    maybe-installcheck-target-gperf \
    maybe-installcheck-target-examples \
    maybe-installcheck-target-libffi \
    maybe-installcheck-target-libjava \
    maybe-installcheck-target-zlib \
    maybe-installcheck-target-boehm-gc \
    maybe-installcheck-target-qthreads \
    maybe-installcheck-target-rda \
    maybe-installcheck-target-libada

.PHONY: do-mostlyclean
do-mostlyclean: mostlyclean-host mostlyclean-target

.PHONY: mostlyclean-host
mostlyclean-host: maybe-mostlyclean-gcc  \
    maybe-mostlyclean-ash \
    maybe-mostlyclean-autoconf \
    maybe-mostlyclean-automake \
    maybe-mostlyclean-bash \
    maybe-mostlyclean-bfd \
    maybe-mostlyclean-opcodes \
    maybe-mostlyclean-binutils \
    maybe-mostlyclean-bison \
    maybe-mostlyclean-byacc \
    maybe-mostlyclean-bzip2 \
    maybe-mostlyclean-dejagnu \
    maybe-mostlyclean-diff \
    maybe-mostlyclean-dosutils \
    maybe-mostlyclean-etc \
    maybe-mostlyclean-fastjar \
    maybe-mostlyclean-fileutils \
    maybe-mostlyclean-findutils \
    maybe-mostlyclean-find \
    maybe-mostlyclean-flex \
    maybe-mostlyclean-gas \
    maybe-mostlyclean-gawk \
    maybe-mostlyclean-gettext \
    maybe-mostlyclean-gnuserv \
    maybe-mostlyclean-gprof \
    maybe-mostlyclean-gzip \
    maybe-mostlyclean-hello \
    maybe-mostlyclean-indent \
    maybe-mostlyclean-intl \
    maybe-mostlyclean-tcl \
    maybe-mostlyclean-itcl \
    maybe-mostlyclean-ld \
    maybe-mostlyclean-libcpp \
    maybe-mostlyclean-libgui \
    maybe-mostlyclean-libbanshee \
    maybe-mostlyclean-libiberty \
    maybe-mostlyclean-libtool \
    maybe-mostlyclean-m4 \
    maybe-mostlyclean-make \
    maybe-mostlyclean-mmalloc \
    maybe-mostlyclean-patch \
    maybe-mostlyclean-perl \
    maybe-mostlyclean-prms \
    maybe-mostlyclean-rcs \
    maybe-mostlyclean-readline \
    maybe-mostlyclean-release \
    maybe-mostlyclean-recode \
    maybe-mostlyclean-sed \
    maybe-mostlyclean-send-pr \
    maybe-mostlyclean-shellutils \
    maybe-mostlyclean-sid \
    maybe-mostlyclean-sim \
    maybe-mostlyclean-tar \
    maybe-mostlyclean-texinfo \
    maybe-mostlyclean-textutils \
    maybe-mostlyclean-time \
    maybe-mostlyclean-uudecode \
    maybe-mostlyclean-wdiff \
    maybe-mostlyclean-zip \
    maybe-mostlyclean-zlib \
    maybe-mostlyclean-gdb \
    maybe-mostlyclean-expect \
    maybe-mostlyclean-guile \
    maybe-mostlyclean-tk \
    maybe-mostlyclean-tix \
    maybe-mostlyclean-libtermcap \
    maybe-mostlyclean-utils

.PHONY: mostlyclean-target
mostlyclean-target:  \
    maybe-mostlyclean-target-libstdc++-v3 \
    maybe-mostlyclean-target-libmudflap \
    maybe-mostlyclean-target-newlib \
    maybe-mostlyclean-target-libgfortran \
    maybe-mostlyclean-target-libobjc \
    maybe-mostlyclean-target-libtermcap \
    maybe-mostlyclean-target-winsup \
    maybe-mostlyclean-target-libgloss \
    maybe-mostlyclean-target-libiberty \
    maybe-mostlyclean-target-gperf \
    maybe-mostlyclean-target-examples \
    maybe-mostlyclean-target-libffi \
    maybe-mostlyclean-target-libjava \
    maybe-mostlyclean-target-zlib \
    maybe-mostlyclean-target-boehm-gc \
    maybe-mostlyclean-target-qthreads \
    maybe-mostlyclean-target-rda \
    maybe-mostlyclean-target-libada

.PHONY: do-clean
do-clean: clean-host clean-target

.PHONY: clean-host
clean-host: maybe-clean-gcc  \
    maybe-clean-ash \
    maybe-clean-autoconf \
    maybe-clean-automake \
    maybe-clean-bash \
    maybe-clean-bfd \
    maybe-clean-opcodes \
    maybe-clean-binutils \
    maybe-clean-bison \
    maybe-clean-byacc \
    maybe-clean-bzip2 \
    maybe-clean-dejagnu \
    maybe-clean-diff \
    maybe-clean-dosutils \
    maybe-clean-etc \
    maybe-clean-fastjar \
    maybe-clean-fileutils \
    maybe-clean-findutils \
    maybe-clean-find \
    maybe-clean-flex \
    maybe-clean-gas \
    maybe-clean-gawk \
    maybe-clean-gettext \
    maybe-clean-gnuserv \
    maybe-clean-gprof \
    maybe-clean-gzip \
    maybe-clean-hello \
    maybe-clean-indent \
    maybe-clean-intl \
    maybe-clean-tcl \
    maybe-clean-itcl \
    maybe-clean-ld \
    maybe-clean-libcpp \
    maybe-clean-libgui \
    maybe-clean-libbanshee \
    maybe-clean-libiberty \
    maybe-clean-libtool \
    maybe-clean-m4 \
    maybe-clean-make \
    maybe-clean-mmalloc \
    maybe-clean-patch \
    maybe-clean-perl \
    maybe-clean-prms \
    maybe-clean-rcs \
    maybe-clean-readline \
    maybe-clean-release \
    maybe-clean-recode \
    maybe-clean-sed \
    maybe-clean-send-pr \
    maybe-clean-shellutils \
    maybe-clean-sid \
    maybe-clean-sim \
    maybe-clean-tar \
    maybe-clean-texinfo \
    maybe-clean-textutils \
    maybe-clean-time \
    maybe-clean-uudecode \
    maybe-clean-wdiff \
    maybe-clean-zip \
    maybe-clean-zlib \
    maybe-clean-gdb \
    maybe-clean-expect \
    maybe-clean-guile \
    maybe-clean-tk \
    maybe-clean-tix \
    maybe-clean-libtermcap \
    maybe-clean-utils

.PHONY: clean-target
clean-target:  \
    maybe-clean-target-libstdc++-v3 \
    maybe-clean-target-libmudflap \
    maybe-clean-target-newlib \
    maybe-clean-target-libgfortran \
    maybe-clean-target-libobjc \
    maybe-clean-target-libtermcap \
    maybe-clean-target-winsup \
    maybe-clean-target-libgloss \
    maybe-clean-target-libiberty \
    maybe-clean-target-gperf \
    maybe-clean-target-examples \
    maybe-clean-target-libffi \
    maybe-clean-target-libjava \
    maybe-clean-target-zlib \
    maybe-clean-target-boehm-gc \
    maybe-clean-target-qthreads \
    maybe-clean-target-rda \
    maybe-clean-target-libada

.PHONY: do-distclean
do-distclean: distclean-host distclean-target

.PHONY: distclean-host
distclean-host: maybe-distclean-gcc  \
    maybe-distclean-ash \
    maybe-distclean-autoconf \
    maybe-distclean-automake \
    maybe-distclean-bash \
    maybe-distclean-bfd \
    maybe-distclean-opcodes \
    maybe-distclean-binutils \
    maybe-distclean-bison \
    maybe-distclean-byacc \
    maybe-distclean-bzip2 \
    maybe-distclean-dejagnu \
    maybe-distclean-diff \
    maybe-distclean-dosutils \
    maybe-distclean-etc \
    maybe-distclean-fastjar \
    maybe-distclean-fileutils \
    maybe-distclean-findutils \
    maybe-distclean-find \
    maybe-distclean-flex \
    maybe-distclean-gas \
    maybe-distclean-gawk \
    maybe-distclean-gettext \
    maybe-distclean-gnuserv \
    maybe-distclean-gprof \
    maybe-distclean-gzip \
    maybe-distclean-hello \
    maybe-distclean-indent \
    maybe-distclean-intl \
    maybe-distclean-tcl \
    maybe-distclean-itcl \
    maybe-distclean-ld \
    maybe-distclean-libcpp \
    maybe-distclean-libgui \
    maybe-distclean-libbanshee \
    maybe-distclean-libiberty \
    maybe-distclean-libtool \
    maybe-distclean-m4 \
    maybe-distclean-make \
    maybe-distclean-mmalloc \
    maybe-distclean-patch \
    maybe-distclean-perl \
    maybe-distclean-prms \
    maybe-distclean-rcs \
    maybe-distclean-readline \
    maybe-distclean-release \
    maybe-distclean-recode \
    maybe-distclean-sed \
    maybe-distclean-send-pr \
    maybe-distclean-shellutils \
    maybe-distclean-sid \
    maybe-distclean-sim \
    maybe-distclean-tar \
    maybe-distclean-texinfo \
    maybe-distclean-textutils \
    maybe-distclean-time \
    maybe-distclean-uudecode \
    maybe-distclean-wdiff \
    maybe-distclean-zip \
    maybe-distclean-zlib \
    maybe-distclean-gdb \
    maybe-distclean-expect \
    maybe-distclean-guile \
    maybe-distclean-tk \
    maybe-distclean-tix \
    maybe-distclean-libtermcap \
    maybe-distclean-utils

.PHONY: distclean-target
distclean-target:  \
    maybe-distclean-target-libstdc++-v3 \
    maybe-distclean-target-libmudflap \
    maybe-distclean-target-newlib \
    maybe-distclean-target-libgfortran \
    maybe-distclean-target-libobjc \
    maybe-distclean-target-libtermcap \
    maybe-distclean-target-winsup \
    maybe-distclean-target-libgloss \
    maybe-distclean-target-libiberty \
    maybe-distclean-target-gperf \
    maybe-distclean-target-examples \
    maybe-distclean-target-libffi \
    maybe-distclean-target-libjava \
    maybe-distclean-target-zlib \
    maybe-distclean-target-boehm-gc \
    maybe-distclean-target-qthreads \
    maybe-distclean-target-rda \
    maybe-distclean-target-libada

.PHONY: do-maintainer-clean
do-maintainer-clean: maintainer-clean-host maintainer-clean-target

.PHONY: maintainer-clean-host
maintainer-clean-host: maybe-maintainer-clean-gcc  \
    maybe-maintainer-clean-ash \
    maybe-maintainer-clean-autoconf \
    maybe-maintainer-clean-automake \
    maybe-maintainer-clean-bash \
    maybe-maintainer-clean-bfd \
    maybe-maintainer-clean-opcodes \
    maybe-maintainer-clean-binutils \
    maybe-maintainer-clean-bison \
    maybe-maintainer-clean-byacc \
    maybe-maintainer-clean-bzip2 \
    maybe-maintainer-clean-dejagnu \
    maybe-maintainer-clean-diff \
    maybe-maintainer-clean-dosutils \
    maybe-maintainer-clean-etc \
    maybe-maintainer-clean-fastjar \
    maybe-maintainer-clean-fileutils \
    maybe-maintainer-clean-findutils \
    maybe-maintainer-clean-find \
    maybe-maintainer-clean-flex \
    maybe-maintainer-clean-gas \
    maybe-maintainer-clean-gawk \
    maybe-maintainer-clean-gettext \
    maybe-maintainer-clean-gnuserv \
    maybe-maintainer-clean-gprof \
    maybe-maintainer-clean-gzip \
    maybe-maintainer-clean-hello \
    maybe-maintainer-clean-indent \
    maybe-maintainer-clean-intl \
    maybe-maintainer-clean-tcl \
    maybe-maintainer-clean-itcl \
    maybe-maintainer-clean-ld \
    maybe-maintainer-clean-libcpp \
    maybe-maintainer-clean-libgui \
    maybe-maintainer-clean-libbanshee \
    maybe-maintainer-clean-libiberty \
    maybe-maintainer-clean-libtool \
    maybe-maintainer-clean-m4 \
    maybe-maintainer-clean-make \
    maybe-maintainer-clean-mmalloc \
    maybe-maintainer-clean-patch \
    maybe-maintainer-clean-perl \
    maybe-maintainer-clean-prms \
    maybe-maintainer-clean-rcs \
    maybe-maintainer-clean-readline \
    maybe-maintainer-clean-release \
    maybe-maintainer-clean-recode \
    maybe-maintainer-clean-sed \
    maybe-maintainer-clean-send-pr \
    maybe-maintainer-clean-shellutils \
    maybe-maintainer-clean-sid \
    maybe-maintainer-clean-sim \
    maybe-maintainer-clean-tar \
    maybe-maintainer-clean-texinfo \
    maybe-maintainer-clean-textutils \
    maybe-maintainer-clean-time \
    maybe-maintainer-clean-uudecode \
    maybe-maintainer-clean-wdiff \
    maybe-maintainer-clean-zip \
    maybe-maintainer-clean-zlib \
    maybe-maintainer-clean-gdb \
    maybe-maintainer-clean-expect \
    maybe-maintainer-clean-guile \
    maybe-maintainer-clean-tk \
    maybe-maintainer-clean-tix \
    maybe-maintainer-clean-libtermcap \
    maybe-maintainer-clean-utils

.PHONY: maintainer-clean-target
maintainer-clean-target:  \
    maybe-maintainer-clean-target-libstdc++-v3 \
    maybe-maintainer-clean-target-libmudflap \
    maybe-maintainer-clean-target-newlib \
    maybe-maintainer-clean-target-libgfortran \
    maybe-maintainer-clean-target-libobjc \
    maybe-maintainer-clean-target-libtermcap \
    maybe-maintainer-clean-target-winsup \
    maybe-maintainer-clean-target-libgloss \
    maybe-maintainer-clean-target-libiberty \
    maybe-maintainer-clean-target-gperf \
    maybe-maintainer-clean-target-examples \
    maybe-maintainer-clean-target-libffi \
    maybe-maintainer-clean-target-libjava \
    maybe-maintainer-clean-target-zlib \
    maybe-maintainer-clean-target-boehm-gc \
    maybe-maintainer-clean-target-qthreads \
    maybe-maintainer-clean-target-rda \
    maybe-maintainer-clean-target-libada


# Here are the targets which correspond to the do-X targets.

.PHONY: info installcheck dvi install-info
.PHONY: clean distclean mostlyclean maintainer-clean realclean
.PHONY: local-clean local-distclean local-maintainer-clean
info: do-info
installcheck: do-installcheck
dvi: do-dvi

# Make sure makeinfo is built before we do a `make info', if we're
# in fact building texinfo.
do-info: maybe-all-texinfo

install-info: do-install-info dir.info
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	if [ -f dir.info ] ; then \
	  $(INSTALL_DATA) dir.info $(DESTDIR)$(infodir)/dir.info ; \
	else true ; fi

local-clean:
	-rm -f *.a TEMP errs core *.o *~ \#* TAGS *.E *.log

local-distclean:
	-rm -f Makefile config.status config.cache mh-frag mt-frag
	-rm -f multilib.out multilib.tmp maybedep.tmp serdep.tmp
	-if [ "$(TARGET_SUBDIR)" != "." ]; then \
	  rm -rf $(TARGET_SUBDIR); \
	else true; fi
	-rm -rf $(BUILD_SUBDIR)
	-rm -f texinfo/po/Makefile texinfo/po/Makefile.in texinfo/info/Makefile
	-rm -f texinfo/doc/Makefile texinfo/po/POTFILES
	-rmdir texinfo/doc texinfo/info texinfo/intl texinfo/lib 2>/dev/null
	-rmdir texinfo/makeinfo texinfo/po texinfo/util 2>/dev/null
	-rmdir fastjar gcc libiberty texinfo zlib 2>/dev/null

local-maintainer-clean:
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

clean: do-clean local-clean
mostlyclean: do-mostlyclean local-clean
distclean: do-distclean local-clean local-distclean
maintainer-clean: local-maintainer-clean do-maintainer-clean local-clean 
maintainer-clean: local-distclean
realclean: maintainer-clean

# Extra dependency for clean-target, owing to the mixed nature of gcc
clean-target: clean-target-libgcc
clean-target-libgcc:
	test ! -d gcc/libgcc || \
	(cd gcc/libgcc && find . -type d -print) | \
	while read d; do rm -f gcc/$$d/libgcc.a || : ; done
	-rm -rf gcc/libgcc

# Check target.

.PHONY: check do-check
check: do-check

# Only include modules actually being configured and built.
do-check: maybe-check-gcc  \
    maybe-check-ash \
    maybe-check-autoconf \
    maybe-check-automake \
    maybe-check-bash \
    maybe-check-bfd \
    maybe-check-opcodes \
    maybe-check-binutils \
    maybe-check-bison \
    maybe-check-byacc \
    maybe-check-bzip2 \
    maybe-check-dejagnu \
    maybe-check-diff \
    maybe-check-dosutils \
    maybe-check-etc \
    maybe-check-fastjar \
    maybe-check-fileutils \
    maybe-check-findutils \
    maybe-check-find \
    maybe-check-flex \
    maybe-check-gas \
    maybe-check-gawk \
    maybe-check-gettext \
    maybe-check-gnuserv \
    maybe-check-gprof \
    maybe-check-gzip \
    maybe-check-hello \
    maybe-check-indent \
    maybe-check-intl \
    maybe-check-tcl \
    maybe-check-itcl \
    maybe-check-ld \
    maybe-check-libcpp \
    maybe-check-libgui \
    maybe-check-libbanshee \
    maybe-check-libiberty \
    maybe-check-libtool \
    maybe-check-m4 \
    maybe-check-make \
    maybe-check-mmalloc \
    maybe-check-patch \
    maybe-check-perl \
    maybe-check-prms \
    maybe-check-rcs \
    maybe-check-readline \
    maybe-check-release \
    maybe-check-recode \
    maybe-check-sed \
    maybe-check-send-pr \
    maybe-check-shellutils \
    maybe-check-sid \
    maybe-check-sim \
    maybe-check-tar \
    maybe-check-texinfo \
    maybe-check-textutils \
    maybe-check-time \
    maybe-check-uudecode \
    maybe-check-wdiff \
    maybe-check-zip \
    maybe-check-zlib \
    maybe-check-gdb \
    maybe-check-expect \
    maybe-check-guile \
    maybe-check-tk \
    maybe-check-tix \
    maybe-check-libtermcap \
    maybe-check-utils \
    maybe-check-target-libstdc++-v3 \
    maybe-check-target-libmudflap \
    maybe-check-target-newlib \
    maybe-check-target-libgfortran \
    maybe-check-target-libobjc \
    maybe-check-target-libtermcap \
    maybe-check-target-winsup \
    maybe-check-target-libgloss \
    maybe-check-target-libiberty \
    maybe-check-target-gperf \
    maybe-check-target-examples \
    maybe-check-target-libffi \
    maybe-check-target-libjava \
    maybe-check-target-zlib \
    maybe-check-target-boehm-gc \
    maybe-check-target-qthreads \
    maybe-check-target-rda \
    maybe-check-target-libada

# Automated reporting of test results.

warning.log: build.log
	$(srcdir)/contrib/warn_summary build.log > $@

mail-report.log:
	if test x'$(BOOT_CFLAGS)' != x''; then \
	    BOOT_CFLAGS='$(BOOT_CFLAGS)'; export BOOT_CFLAGS; \
	fi; \
	$(srcdir)/contrib/test_summary -t >$@
	chmod +x $@
	echo If you really want to send e-mail, run ./$@ now

mail-report-with-warnings.log: warning.log
	if test x'$(BOOT_CFLAGS)' != x''; then \
	    BOOT_CFLAGS='$(BOOT_CFLAGS)'; export BOOT_CFLAGS; \
	fi; \
	$(srcdir)/contrib/test_summary -t -i warning.log >$@
	chmod +x $@
	echo If you really want to send e-mail, run ./$@ now

# Installation targets.

.PHONY: install uninstall
install: installdirs install-host install-target

.PHONY: install-host-nogcc
install-host-nogcc:  \
    maybe-install-ash \
    maybe-install-autoconf \
    maybe-install-automake \
    maybe-install-bash \
    maybe-install-bfd \
    maybe-install-opcodes \
    maybe-install-binutils \
    maybe-install-bison \
    maybe-install-byacc \
    maybe-install-bzip2 \
    maybe-install-dejagnu \
    maybe-install-diff \
    maybe-install-dosutils \
    maybe-install-etc \
    maybe-install-fastjar \
    maybe-install-fileutils \
    maybe-install-findutils \
    maybe-install-find \
    maybe-install-flex \
    maybe-install-gas \
    maybe-install-gawk \
    maybe-install-gettext \
    maybe-install-gnuserv \
    maybe-install-gprof \
    maybe-install-gzip \
    maybe-install-hello \
    maybe-install-indent \
    maybe-install-intl \
    maybe-install-tcl \
    maybe-install-itcl \
    maybe-install-ld \
    maybe-install-libcpp \
    maybe-install-libgui \
    maybe-install-libbanshee \
    maybe-install-libiberty \
    maybe-install-libtool \
    maybe-install-m4 \
    maybe-install-make \
    maybe-install-mmalloc \
    maybe-install-patch \
    maybe-install-perl \
    maybe-install-prms \
    maybe-install-rcs \
    maybe-install-readline \
    maybe-install-release \
    maybe-install-recode \
    maybe-install-sed \
    maybe-install-send-pr \
    maybe-install-shellutils \
    maybe-install-sid \
    maybe-install-sim \
    maybe-install-tar \
    maybe-install-texinfo \
    maybe-install-textutils \
    maybe-install-time \
    maybe-install-uudecode \
    maybe-install-wdiff \
    maybe-install-zip \
    maybe-install-zlib \
    maybe-install-gdb \
    maybe-install-expect \
    maybe-install-guile \
    maybe-install-tk \
    maybe-install-tix \
    maybe-install-libtermcap \
    maybe-install-utils

.PHONY: install-host
install-host: maybe-install-gcc  \
    maybe-install-ash \
    maybe-install-autoconf \
    maybe-install-automake \
    maybe-install-bash \
    maybe-install-bfd \
    maybe-install-opcodes \
    maybe-install-binutils \
    maybe-install-bison \
    maybe-install-byacc \
    maybe-install-bzip2 \
    maybe-install-dejagnu \
    maybe-install-diff \
    maybe-install-dosutils \
    maybe-install-etc \
    maybe-install-fastjar \
    maybe-install-fileutils \
    maybe-install-findutils \
    maybe-install-find \
    maybe-install-flex \
    maybe-install-gas \
    maybe-install-gawk \
    maybe-install-gettext \
    maybe-install-gnuserv \
    maybe-install-gprof \
    maybe-install-gzip \
    maybe-install-hello \
    maybe-install-indent \
    maybe-install-intl \
    maybe-install-tcl \
    maybe-install-itcl \
    maybe-install-ld \
    maybe-install-libcpp \
    maybe-install-libgui \
    maybe-install-libbanshee \
    maybe-install-libiberty \
    maybe-install-libtool \
    maybe-install-m4 \
    maybe-install-make \
    maybe-install-mmalloc \
    maybe-install-patch \
    maybe-install-perl \
    maybe-install-prms \
    maybe-install-rcs \
    maybe-install-readline \
    maybe-install-release \
    maybe-install-recode \
    maybe-install-sed \
    maybe-install-send-pr \
    maybe-install-shellutils \
    maybe-install-sid \
    maybe-install-sim \
    maybe-install-tar \
    maybe-install-texinfo \
    maybe-install-textutils \
    maybe-install-time \
    maybe-install-uudecode \
    maybe-install-wdiff \
    maybe-install-zip \
    maybe-install-zlib \
    maybe-install-gdb \
    maybe-install-expect \
    maybe-install-guile \
    maybe-install-tk \
    maybe-install-tix \
    maybe-install-libtermcap \
    maybe-install-utils

.PHONY: install-target
install-target:  \
    maybe-install-target-libstdc++-v3 \
    maybe-install-target-libmudflap \
    maybe-install-target-newlib \
    maybe-install-target-libgfortran \
    maybe-install-target-libobjc \
    maybe-install-target-libtermcap \
    maybe-install-target-winsup \
    maybe-install-target-libgloss \
    maybe-install-target-libiberty \
    maybe-install-target-gperf \
    maybe-install-target-examples \
    maybe-install-target-libffi \
    maybe-install-target-libjava \
    maybe-install-target-zlib \
    maybe-install-target-boehm-gc \
    maybe-install-target-qthreads \
    maybe-install-target-rda \
    maybe-install-target-libada

uninstall:
	@echo "the uninstall target is not supported in this tree"

.PHONY: install.all
install.all: install-no-fixedincludes
	@if [ -f ./gcc/Makefile ] ; then \
		r=`${PWD_COMMAND}` ; export r ; \
		$(SET_LIB_PATH) \
		$(HOST_EXPORTS) \
		(cd ./gcc && \
		$(MAKE) $(FLAGS_TO_PASS) install-headers) ; \
	else \
		true ; \
	fi

# install-no-fixedincludes is used because Cygnus can not distribute
# the fixed header files.
.PHONY: install-no-fixedincludes
install-no-fixedincludes: installdirs install-host-nogcc \
	install-target gcc-no-fixedincludes

### other supporting targets

MAKEDIRS= \
	$(DESTDIR)$(prefix) \
	$(DESTDIR)$(exec_prefix)
.PHONY: installdirs
installdirs: mkinstalldirs
	$(SHELL) $(srcdir)/mkinstalldirs $(MAKEDIRS)

dir.info: do-install-info
	if [ -f $(srcdir)/texinfo/gen-info-dir ] ; then \
	  $(srcdir)/texinfo/gen-info-dir $(DESTDIR)$(infodir) $(srcdir)/texinfo/dir.info-template > dir.info.new ; \
	  mv -f dir.info.new dir.info ; \
	else true ; \
	fi

dist:
	@echo "Building a full distribution of this tree isn't done"
	@echo "via 'make dist'.  Check out the etc/ subdirectory" 

etags tags: TAGS

# Right now this just builds TAGS in each subdirectory.  emacs19 has the
# ability to use several tags files at once, so there is probably no need
# to combine them into one big TAGS file (like CVS 1.3 does).  We could
# (if we felt like it) have this Makefile write a piece of elisp which
# the user could load to tell emacs19 where all the TAGS files we just
# built are.
TAGS: do-TAGS

# --------------------------------------
# Modules which run on the build machine
# --------------------------------------

.PHONY: configure-build-libiberty maybe-configure-build-libiberty
maybe-configure-build-libiberty:

.PHONY: all-build-libiberty maybe-all-build-libiberty
maybe-all-build-libiberty:

.PHONY: configure-build-libbanshee maybe-configure-build-libbanshee
maybe-configure-build-libbanshee:

.PHONY: all-build-libbanshee maybe-all-build-libbanshee
maybe-all-build-libbanshee:

.PHONY: configure-build-bison maybe-configure-build-bison
maybe-configure-build-bison:

.PHONY: all-build-bison maybe-all-build-bison
maybe-all-build-bison:

.PHONY: configure-build-byacc maybe-configure-build-byacc
maybe-configure-build-byacc:

.PHONY: all-build-byacc maybe-all-build-byacc
maybe-all-build-byacc:

.PHONY: configure-build-flex maybe-configure-build-flex
maybe-configure-build-flex:

.PHONY: all-build-flex maybe-all-build-flex
maybe-all-build-flex:

.PHONY: configure-build-m4 maybe-configure-build-m4
maybe-configure-build-m4:

.PHONY: all-build-m4 maybe-all-build-m4
maybe-all-build-m4:

.PHONY: configure-build-texinfo maybe-configure-build-texinfo
maybe-configure-build-texinfo:

.PHONY: all-build-texinfo maybe-all-build-texinfo
maybe-all-build-texinfo:


# --------------------------------------
# Modules which run on the host machine
# --------------------------------------

.PHONY: configure-ash maybe-configure-ash
maybe-configure-ash:

.PHONY: all-ash maybe-all-ash
maybe-all-ash:

.PHONY: check-ash maybe-check-ash
maybe-check-ash:

.PHONY: install-ash maybe-install-ash
maybe-install-ash:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-ash info-ash
maybe-info-ash:

.PHONY: maybe-dvi-ash dvi-ash
maybe-dvi-ash:

.PHONY: maybe-TAGS-ash TAGS-ash
maybe-TAGS-ash:

.PHONY: maybe-install-info-ash install-info-ash
maybe-install-info-ash:

.PHONY: maybe-installcheck-ash installcheck-ash
maybe-installcheck-ash:

.PHONY: maybe-mostlyclean-ash mostlyclean-ash
maybe-mostlyclean-ash:

.PHONY: maybe-clean-ash clean-ash
maybe-clean-ash:

.PHONY: maybe-distclean-ash distclean-ash
maybe-distclean-ash:

.PHONY: maybe-maintainer-clean-ash maintainer-clean-ash
maybe-maintainer-clean-ash:


.PHONY: configure-autoconf maybe-configure-autoconf
maybe-configure-autoconf:

.PHONY: all-autoconf maybe-all-autoconf
maybe-all-autoconf:

.PHONY: check-autoconf maybe-check-autoconf
maybe-check-autoconf:

.PHONY: install-autoconf maybe-install-autoconf
maybe-install-autoconf:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-autoconf info-autoconf
maybe-info-autoconf:

.PHONY: maybe-dvi-autoconf dvi-autoconf
maybe-dvi-autoconf:

.PHONY: maybe-TAGS-autoconf TAGS-autoconf
maybe-TAGS-autoconf:

.PHONY: maybe-install-info-autoconf install-info-autoconf
maybe-install-info-autoconf:

.PHONY: maybe-installcheck-autoconf installcheck-autoconf
maybe-installcheck-autoconf:

.PHONY: maybe-mostlyclean-autoconf mostlyclean-autoconf
maybe-mostlyclean-autoconf:

.PHONY: maybe-clean-autoconf clean-autoconf
maybe-clean-autoconf:

.PHONY: maybe-distclean-autoconf distclean-autoconf
maybe-distclean-autoconf:

.PHONY: maybe-maintainer-clean-autoconf maintainer-clean-autoconf
maybe-maintainer-clean-autoconf:


.PHONY: configure-automake maybe-configure-automake
maybe-configure-automake:

.PHONY: all-automake maybe-all-automake
maybe-all-automake:

.PHONY: check-automake maybe-check-automake
maybe-check-automake:

.PHONY: install-automake maybe-install-automake
maybe-install-automake:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-automake info-automake
maybe-info-automake:

.PHONY: maybe-dvi-automake dvi-automake
maybe-dvi-automake:

.PHONY: maybe-TAGS-automake TAGS-automake
maybe-TAGS-automake:

.PHONY: maybe-install-info-automake install-info-automake
maybe-install-info-automake:

.PHONY: maybe-installcheck-automake installcheck-automake
maybe-installcheck-automake:

.PHONY: maybe-mostlyclean-automake mostlyclean-automake
maybe-mostlyclean-automake:

.PHONY: maybe-clean-automake clean-automake
maybe-clean-automake:

.PHONY: maybe-distclean-automake distclean-automake
maybe-distclean-automake:

.PHONY: maybe-maintainer-clean-automake maintainer-clean-automake
maybe-maintainer-clean-automake:


.PHONY: configure-bash maybe-configure-bash
maybe-configure-bash:

.PHONY: all-bash maybe-all-bash
maybe-all-bash:

.PHONY: check-bash maybe-check-bash
maybe-check-bash:

.PHONY: install-bash maybe-install-bash
maybe-install-bash:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-bash info-bash
maybe-info-bash:

.PHONY: maybe-dvi-bash dvi-bash
maybe-dvi-bash:

.PHONY: maybe-TAGS-bash TAGS-bash
maybe-TAGS-bash:

.PHONY: maybe-install-info-bash install-info-bash
maybe-install-info-bash:

.PHONY: maybe-installcheck-bash installcheck-bash
maybe-installcheck-bash:

.PHONY: maybe-mostlyclean-bash mostlyclean-bash
maybe-mostlyclean-bash:

.PHONY: maybe-clean-bash clean-bash
maybe-clean-bash:

.PHONY: maybe-distclean-bash distclean-bash
maybe-distclean-bash:

.PHONY: maybe-maintainer-clean-bash maintainer-clean-bash
maybe-maintainer-clean-bash:


.PHONY: configure-bfd maybe-configure-bfd
maybe-configure-bfd:
maybe-configure-bfd: configure-bfd
configure-bfd:
	@test ! -f bfd/Makefile || exit 0; \
	[ -d bfd ] || mkdir bfd; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in bfd; \
	cd bfd || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/bfd"; \
	    libsrcdir="$$s/bfd";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/bfd"; \
	    libsrcdir="$$s/bfd";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-bfd maybe-all-bfd
maybe-all-bfd:
maybe-all-bfd: all-bfd
all-bfd: configure-bfd
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd bfd && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-bfd maybe-check-bfd
maybe-check-bfd:
maybe-check-bfd: check-bfd

check-bfd:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd bfd && $(MAKE) $(FLAGS_TO_PASS)  check)


.PHONY: install-bfd maybe-install-bfd
maybe-install-bfd:
maybe-install-bfd: install-bfd

install-bfd: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd bfd && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-bfd info-bfd
maybe-info-bfd:
maybe-info-bfd: info-bfd

info-bfd: \
    configure-bfd 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-bfd dvi-bfd
maybe-dvi-bfd:
maybe-dvi-bfd: dvi-bfd

dvi-bfd: \
    configure-bfd 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-bfd TAGS-bfd
maybe-TAGS-bfd:
maybe-TAGS-bfd: TAGS-bfd

TAGS-bfd: \
    configure-bfd 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-bfd install-info-bfd
maybe-install-info-bfd:
maybe-install-info-bfd: install-info-bfd

install-info-bfd: \
    configure-bfd \
    info-bfd 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-bfd installcheck-bfd
maybe-installcheck-bfd:
maybe-installcheck-bfd: installcheck-bfd

installcheck-bfd: \
    configure-bfd 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-bfd mostlyclean-bfd
maybe-mostlyclean-bfd:
maybe-mostlyclean-bfd: mostlyclean-bfd

mostlyclean-bfd: 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-bfd clean-bfd
maybe-clean-bfd:
maybe-clean-bfd: clean-bfd

clean-bfd: 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-bfd distclean-bfd
maybe-distclean-bfd:
maybe-distclean-bfd: distclean-bfd

distclean-bfd: 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-bfd maintainer-clean-bfd
maybe-maintainer-clean-bfd:
maybe-maintainer-clean-bfd: maintainer-clean-bfd

maintainer-clean-bfd: 
	@[ -f ./bfd/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in bfd" ; \
	(cd bfd && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-opcodes maybe-configure-opcodes
maybe-configure-opcodes:
maybe-configure-opcodes: configure-opcodes
configure-opcodes:
	@test ! -f opcodes/Makefile || exit 0; \
	[ -d opcodes ] || mkdir opcodes; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in opcodes; \
	cd opcodes || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/opcodes"; \
	    libsrcdir="$$s/opcodes";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/opcodes"; \
	    libsrcdir="$$s/opcodes";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-opcodes maybe-all-opcodes
maybe-all-opcodes:
maybe-all-opcodes: all-opcodes
all-opcodes: configure-opcodes
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd opcodes && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-opcodes maybe-check-opcodes
maybe-check-opcodes:
maybe-check-opcodes: check-opcodes

check-opcodes:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd opcodes && $(MAKE) $(FLAGS_TO_PASS)  check)


.PHONY: install-opcodes maybe-install-opcodes
maybe-install-opcodes:
maybe-install-opcodes: install-opcodes

install-opcodes: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd opcodes && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-opcodes info-opcodes
maybe-info-opcodes:
maybe-info-opcodes: info-opcodes

info-opcodes: \
    configure-opcodes 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-opcodes dvi-opcodes
maybe-dvi-opcodes:
maybe-dvi-opcodes: dvi-opcodes

dvi-opcodes: \
    configure-opcodes 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-opcodes TAGS-opcodes
maybe-TAGS-opcodes:
maybe-TAGS-opcodes: TAGS-opcodes

TAGS-opcodes: \
    configure-opcodes 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-opcodes install-info-opcodes
maybe-install-info-opcodes:
maybe-install-info-opcodes: install-info-opcodes

install-info-opcodes: \
    configure-opcodes \
    info-opcodes 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-opcodes installcheck-opcodes
maybe-installcheck-opcodes:
maybe-installcheck-opcodes: installcheck-opcodes

installcheck-opcodes: \
    configure-opcodes 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-opcodes mostlyclean-opcodes
maybe-mostlyclean-opcodes:
maybe-mostlyclean-opcodes: mostlyclean-opcodes

mostlyclean-opcodes: 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-opcodes clean-opcodes
maybe-clean-opcodes:
maybe-clean-opcodes: clean-opcodes

clean-opcodes: 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-opcodes distclean-opcodes
maybe-distclean-opcodes:
maybe-distclean-opcodes: distclean-opcodes

distclean-opcodes: 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-opcodes maintainer-clean-opcodes
maybe-maintainer-clean-opcodes:
maybe-maintainer-clean-opcodes: maintainer-clean-opcodes

maintainer-clean-opcodes: 
	@[ -f ./opcodes/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in opcodes" ; \
	(cd opcodes && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-binutils maybe-configure-binutils
maybe-configure-binutils:

.PHONY: all-binutils maybe-all-binutils
maybe-all-binutils:

.PHONY: check-binutils maybe-check-binutils
maybe-check-binutils:

.PHONY: install-binutils maybe-install-binutils
maybe-install-binutils:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-binutils info-binutils
maybe-info-binutils:

.PHONY: maybe-dvi-binutils dvi-binutils
maybe-dvi-binutils:

.PHONY: maybe-TAGS-binutils TAGS-binutils
maybe-TAGS-binutils:

.PHONY: maybe-install-info-binutils install-info-binutils
maybe-install-info-binutils:

.PHONY: maybe-installcheck-binutils installcheck-binutils
maybe-installcheck-binutils:

.PHONY: maybe-mostlyclean-binutils mostlyclean-binutils
maybe-mostlyclean-binutils:

.PHONY: maybe-clean-binutils clean-binutils
maybe-clean-binutils:

.PHONY: maybe-distclean-binutils distclean-binutils
maybe-distclean-binutils:

.PHONY: maybe-maintainer-clean-binutils maintainer-clean-binutils
maybe-maintainer-clean-binutils:


.PHONY: configure-bison maybe-configure-bison
maybe-configure-bison:

.PHONY: all-bison maybe-all-bison
maybe-all-bison:

.PHONY: check-bison maybe-check-bison
maybe-check-bison:

.PHONY: install-bison maybe-install-bison
maybe-install-bison:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-bison info-bison
maybe-info-bison:

.PHONY: maybe-dvi-bison dvi-bison
maybe-dvi-bison:

.PHONY: maybe-TAGS-bison TAGS-bison
maybe-TAGS-bison:

.PHONY: maybe-install-info-bison install-info-bison
maybe-install-info-bison:

.PHONY: maybe-installcheck-bison installcheck-bison
maybe-installcheck-bison:

.PHONY: maybe-mostlyclean-bison mostlyclean-bison
maybe-mostlyclean-bison:

.PHONY: maybe-clean-bison clean-bison
maybe-clean-bison:

.PHONY: maybe-distclean-bison distclean-bison
maybe-distclean-bison:

.PHONY: maybe-maintainer-clean-bison maintainer-clean-bison
maybe-maintainer-clean-bison:


.PHONY: configure-byacc maybe-configure-byacc
maybe-configure-byacc:

.PHONY: all-byacc maybe-all-byacc
maybe-all-byacc:

.PHONY: check-byacc maybe-check-byacc
maybe-check-byacc:

.PHONY: install-byacc maybe-install-byacc
maybe-install-byacc:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-byacc info-byacc
maybe-info-byacc:

.PHONY: maybe-dvi-byacc dvi-byacc
maybe-dvi-byacc:

.PHONY: maybe-TAGS-byacc TAGS-byacc
maybe-TAGS-byacc:

.PHONY: maybe-install-info-byacc install-info-byacc
maybe-install-info-byacc:

.PHONY: maybe-installcheck-byacc installcheck-byacc
maybe-installcheck-byacc:

.PHONY: maybe-mostlyclean-byacc mostlyclean-byacc
maybe-mostlyclean-byacc:

.PHONY: maybe-clean-byacc clean-byacc
maybe-clean-byacc:

.PHONY: maybe-distclean-byacc distclean-byacc
maybe-distclean-byacc:

.PHONY: maybe-maintainer-clean-byacc maintainer-clean-byacc
maybe-maintainer-clean-byacc:


.PHONY: configure-bzip2 maybe-configure-bzip2
maybe-configure-bzip2:

.PHONY: all-bzip2 maybe-all-bzip2
maybe-all-bzip2:

.PHONY: check-bzip2 maybe-check-bzip2
maybe-check-bzip2:

.PHONY: install-bzip2 maybe-install-bzip2
maybe-install-bzip2:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-bzip2 info-bzip2
maybe-info-bzip2:

.PHONY: maybe-dvi-bzip2 dvi-bzip2
maybe-dvi-bzip2:

.PHONY: maybe-TAGS-bzip2 TAGS-bzip2
maybe-TAGS-bzip2:

.PHONY: maybe-install-info-bzip2 install-info-bzip2
maybe-install-info-bzip2:

.PHONY: maybe-installcheck-bzip2 installcheck-bzip2
maybe-installcheck-bzip2:

.PHONY: maybe-mostlyclean-bzip2 mostlyclean-bzip2
maybe-mostlyclean-bzip2:

.PHONY: maybe-clean-bzip2 clean-bzip2
maybe-clean-bzip2:

.PHONY: maybe-distclean-bzip2 distclean-bzip2
maybe-distclean-bzip2:

.PHONY: maybe-maintainer-clean-bzip2 maintainer-clean-bzip2
maybe-maintainer-clean-bzip2:


.PHONY: configure-dejagnu maybe-configure-dejagnu
maybe-configure-dejagnu:

.PHONY: all-dejagnu maybe-all-dejagnu
maybe-all-dejagnu:

.PHONY: check-dejagnu maybe-check-dejagnu
maybe-check-dejagnu:

.PHONY: install-dejagnu maybe-install-dejagnu
maybe-install-dejagnu:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-dejagnu info-dejagnu
maybe-info-dejagnu:

.PHONY: maybe-dvi-dejagnu dvi-dejagnu
maybe-dvi-dejagnu:

.PHONY: maybe-TAGS-dejagnu TAGS-dejagnu
maybe-TAGS-dejagnu:

.PHONY: maybe-install-info-dejagnu install-info-dejagnu
maybe-install-info-dejagnu:

.PHONY: maybe-installcheck-dejagnu installcheck-dejagnu
maybe-installcheck-dejagnu:

.PHONY: maybe-mostlyclean-dejagnu mostlyclean-dejagnu
maybe-mostlyclean-dejagnu:

.PHONY: maybe-clean-dejagnu clean-dejagnu
maybe-clean-dejagnu:

.PHONY: maybe-distclean-dejagnu distclean-dejagnu
maybe-distclean-dejagnu:

.PHONY: maybe-maintainer-clean-dejagnu maintainer-clean-dejagnu
maybe-maintainer-clean-dejagnu:


.PHONY: configure-diff maybe-configure-diff
maybe-configure-diff:

.PHONY: all-diff maybe-all-diff
maybe-all-diff:

.PHONY: check-diff maybe-check-diff
maybe-check-diff:

.PHONY: install-diff maybe-install-diff
maybe-install-diff:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-diff info-diff
maybe-info-diff:

.PHONY: maybe-dvi-diff dvi-diff
maybe-dvi-diff:

.PHONY: maybe-TAGS-diff TAGS-diff
maybe-TAGS-diff:

.PHONY: maybe-install-info-diff install-info-diff
maybe-install-info-diff:

.PHONY: maybe-installcheck-diff installcheck-diff
maybe-installcheck-diff:

.PHONY: maybe-mostlyclean-diff mostlyclean-diff
maybe-mostlyclean-diff:

.PHONY: maybe-clean-diff clean-diff
maybe-clean-diff:

.PHONY: maybe-distclean-diff distclean-diff
maybe-distclean-diff:

.PHONY: maybe-maintainer-clean-diff maintainer-clean-diff
maybe-maintainer-clean-diff:


.PHONY: configure-dosutils maybe-configure-dosutils
maybe-configure-dosutils:

.PHONY: all-dosutils maybe-all-dosutils
maybe-all-dosutils:

.PHONY: check-dosutils maybe-check-dosutils
maybe-check-dosutils:

.PHONY: install-dosutils maybe-install-dosutils
maybe-install-dosutils:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-dosutils info-dosutils
maybe-info-dosutils:

.PHONY: maybe-dvi-dosutils dvi-dosutils
maybe-dvi-dosutils:

.PHONY: maybe-TAGS-dosutils TAGS-dosutils
maybe-TAGS-dosutils:

.PHONY: maybe-install-info-dosutils install-info-dosutils
maybe-install-info-dosutils:

.PHONY: maybe-installcheck-dosutils installcheck-dosutils
maybe-installcheck-dosutils:

.PHONY: maybe-mostlyclean-dosutils mostlyclean-dosutils
maybe-mostlyclean-dosutils:

.PHONY: maybe-clean-dosutils clean-dosutils
maybe-clean-dosutils:

.PHONY: maybe-distclean-dosutils distclean-dosutils
maybe-distclean-dosutils:

.PHONY: maybe-maintainer-clean-dosutils maintainer-clean-dosutils
maybe-maintainer-clean-dosutils:


.PHONY: configure-etc maybe-configure-etc
maybe-configure-etc:
maybe-configure-etc: configure-etc
configure-etc:
	@test ! -f etc/Makefile || exit 0; \
	[ -d etc ] || mkdir etc; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in etc; \
	cd etc || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/etc"; \
	    libsrcdir="$$s/etc";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/etc"; \
	    libsrcdir="$$s/etc";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-etc maybe-all-etc
maybe-all-etc:
maybe-all-etc: all-etc
all-etc: configure-etc
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd etc && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-etc maybe-check-etc
maybe-check-etc:
maybe-check-etc: check-etc

check-etc:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd etc && $(MAKE) $(FLAGS_TO_PASS)  check)


.PHONY: install-etc maybe-install-etc
maybe-install-etc:
maybe-install-etc: install-etc

install-etc: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd etc && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-etc info-etc
maybe-info-etc:
maybe-info-etc: info-etc

info-etc: \
    configure-etc 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-etc dvi-etc
maybe-dvi-etc:
maybe-dvi-etc: dvi-etc

dvi-etc: \
    configure-etc 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-etc TAGS-etc
maybe-TAGS-etc:
maybe-TAGS-etc: TAGS-etc

TAGS-etc: \
    configure-etc 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-etc install-info-etc
maybe-install-info-etc:
maybe-install-info-etc: install-info-etc

install-info-etc: \
    configure-etc \
    info-etc 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-etc installcheck-etc
maybe-installcheck-etc:
maybe-installcheck-etc: installcheck-etc

installcheck-etc: \
    configure-etc 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-etc mostlyclean-etc
maybe-mostlyclean-etc:
maybe-mostlyclean-etc: mostlyclean-etc

mostlyclean-etc: 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-etc clean-etc
maybe-clean-etc:
maybe-clean-etc: clean-etc

clean-etc: 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-etc distclean-etc
maybe-distclean-etc:
maybe-distclean-etc: distclean-etc

distclean-etc: 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-etc maintainer-clean-etc
maybe-maintainer-clean-etc:
maybe-maintainer-clean-etc: maintainer-clean-etc

maintainer-clean-etc: 
	@[ -f ./etc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in etc" ; \
	(cd etc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-fastjar maybe-configure-fastjar
maybe-configure-fastjar:

.PHONY: all-fastjar maybe-all-fastjar
maybe-all-fastjar:

.PHONY: check-fastjar maybe-check-fastjar
maybe-check-fastjar:

.PHONY: install-fastjar maybe-install-fastjar
maybe-install-fastjar:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-fastjar info-fastjar
maybe-info-fastjar:

.PHONY: maybe-dvi-fastjar dvi-fastjar
maybe-dvi-fastjar:

.PHONY: maybe-TAGS-fastjar TAGS-fastjar
maybe-TAGS-fastjar:

.PHONY: maybe-install-info-fastjar install-info-fastjar
maybe-install-info-fastjar:

.PHONY: maybe-installcheck-fastjar installcheck-fastjar
maybe-installcheck-fastjar:

.PHONY: maybe-mostlyclean-fastjar mostlyclean-fastjar
maybe-mostlyclean-fastjar:

.PHONY: maybe-clean-fastjar clean-fastjar
maybe-clean-fastjar:

.PHONY: maybe-distclean-fastjar distclean-fastjar
maybe-distclean-fastjar:

.PHONY: maybe-maintainer-clean-fastjar maintainer-clean-fastjar
maybe-maintainer-clean-fastjar:


.PHONY: configure-fileutils maybe-configure-fileutils
maybe-configure-fileutils:

.PHONY: all-fileutils maybe-all-fileutils
maybe-all-fileutils:

.PHONY: check-fileutils maybe-check-fileutils
maybe-check-fileutils:

.PHONY: install-fileutils maybe-install-fileutils
maybe-install-fileutils:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-fileutils info-fileutils
maybe-info-fileutils:

.PHONY: maybe-dvi-fileutils dvi-fileutils
maybe-dvi-fileutils:

.PHONY: maybe-TAGS-fileutils TAGS-fileutils
maybe-TAGS-fileutils:

.PHONY: maybe-install-info-fileutils install-info-fileutils
maybe-install-info-fileutils:

.PHONY: maybe-installcheck-fileutils installcheck-fileutils
maybe-installcheck-fileutils:

.PHONY: maybe-mostlyclean-fileutils mostlyclean-fileutils
maybe-mostlyclean-fileutils:

.PHONY: maybe-clean-fileutils clean-fileutils
maybe-clean-fileutils:

.PHONY: maybe-distclean-fileutils distclean-fileutils
maybe-distclean-fileutils:

.PHONY: maybe-maintainer-clean-fileutils maintainer-clean-fileutils
maybe-maintainer-clean-fileutils:


.PHONY: configure-findutils maybe-configure-findutils
maybe-configure-findutils:

.PHONY: all-findutils maybe-all-findutils
maybe-all-findutils:

.PHONY: check-findutils maybe-check-findutils
maybe-check-findutils:

.PHONY: install-findutils maybe-install-findutils
maybe-install-findutils:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-findutils info-findutils
maybe-info-findutils:

.PHONY: maybe-dvi-findutils dvi-findutils
maybe-dvi-findutils:

.PHONY: maybe-TAGS-findutils TAGS-findutils
maybe-TAGS-findutils:

.PHONY: maybe-install-info-findutils install-info-findutils
maybe-install-info-findutils:

.PHONY: maybe-installcheck-findutils installcheck-findutils
maybe-installcheck-findutils:

.PHONY: maybe-mostlyclean-findutils mostlyclean-findutils
maybe-mostlyclean-findutils:

.PHONY: maybe-clean-findutils clean-findutils
maybe-clean-findutils:

.PHONY: maybe-distclean-findutils distclean-findutils
maybe-distclean-findutils:

.PHONY: maybe-maintainer-clean-findutils maintainer-clean-findutils
maybe-maintainer-clean-findutils:


.PHONY: configure-find maybe-configure-find
maybe-configure-find:

.PHONY: all-find maybe-all-find
maybe-all-find:

.PHONY: check-find maybe-check-find
maybe-check-find:

.PHONY: install-find maybe-install-find
maybe-install-find:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-find info-find
maybe-info-find:

.PHONY: maybe-dvi-find dvi-find
maybe-dvi-find:

.PHONY: maybe-TAGS-find TAGS-find
maybe-TAGS-find:

.PHONY: maybe-install-info-find install-info-find
maybe-install-info-find:

.PHONY: maybe-installcheck-find installcheck-find
maybe-installcheck-find:

.PHONY: maybe-mostlyclean-find mostlyclean-find
maybe-mostlyclean-find:

.PHONY: maybe-clean-find clean-find
maybe-clean-find:

.PHONY: maybe-distclean-find distclean-find
maybe-distclean-find:

.PHONY: maybe-maintainer-clean-find maintainer-clean-find
maybe-maintainer-clean-find:


.PHONY: configure-flex maybe-configure-flex
maybe-configure-flex:

.PHONY: all-flex maybe-all-flex
maybe-all-flex:

.PHONY: check-flex maybe-check-flex
maybe-check-flex:

.PHONY: install-flex maybe-install-flex
maybe-install-flex:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-flex info-flex
maybe-info-flex:

.PHONY: maybe-dvi-flex dvi-flex
maybe-dvi-flex:

.PHONY: maybe-TAGS-flex TAGS-flex
maybe-TAGS-flex:

.PHONY: maybe-install-info-flex install-info-flex
maybe-install-info-flex:

.PHONY: maybe-installcheck-flex installcheck-flex
maybe-installcheck-flex:

.PHONY: maybe-mostlyclean-flex mostlyclean-flex
maybe-mostlyclean-flex:

.PHONY: maybe-clean-flex clean-flex
maybe-clean-flex:

.PHONY: maybe-distclean-flex distclean-flex
maybe-distclean-flex:

.PHONY: maybe-maintainer-clean-flex maintainer-clean-flex
maybe-maintainer-clean-flex:


.PHONY: configure-gas maybe-configure-gas
maybe-configure-gas:

.PHONY: all-gas maybe-all-gas
maybe-all-gas:

.PHONY: check-gas maybe-check-gas
maybe-check-gas:

.PHONY: install-gas maybe-install-gas
maybe-install-gas:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-gas info-gas
maybe-info-gas:

.PHONY: maybe-dvi-gas dvi-gas
maybe-dvi-gas:

.PHONY: maybe-TAGS-gas TAGS-gas
maybe-TAGS-gas:

.PHONY: maybe-install-info-gas install-info-gas
maybe-install-info-gas:

.PHONY: maybe-installcheck-gas installcheck-gas
maybe-installcheck-gas:

.PHONY: maybe-mostlyclean-gas mostlyclean-gas
maybe-mostlyclean-gas:

.PHONY: maybe-clean-gas clean-gas
maybe-clean-gas:

.PHONY: maybe-distclean-gas distclean-gas
maybe-distclean-gas:

.PHONY: maybe-maintainer-clean-gas maintainer-clean-gas
maybe-maintainer-clean-gas:


.PHONY: configure-gawk maybe-configure-gawk
maybe-configure-gawk:

.PHONY: all-gawk maybe-all-gawk
maybe-all-gawk:

.PHONY: check-gawk maybe-check-gawk
maybe-check-gawk:

.PHONY: install-gawk maybe-install-gawk
maybe-install-gawk:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-gawk info-gawk
maybe-info-gawk:

.PHONY: maybe-dvi-gawk dvi-gawk
maybe-dvi-gawk:

.PHONY: maybe-TAGS-gawk TAGS-gawk
maybe-TAGS-gawk:

.PHONY: maybe-install-info-gawk install-info-gawk
maybe-install-info-gawk:

.PHONY: maybe-installcheck-gawk installcheck-gawk
maybe-installcheck-gawk:

.PHONY: maybe-mostlyclean-gawk mostlyclean-gawk
maybe-mostlyclean-gawk:

.PHONY: maybe-clean-gawk clean-gawk
maybe-clean-gawk:

.PHONY: maybe-distclean-gawk distclean-gawk
maybe-distclean-gawk:

.PHONY: maybe-maintainer-clean-gawk maintainer-clean-gawk
maybe-maintainer-clean-gawk:


.PHONY: configure-gettext maybe-configure-gettext
maybe-configure-gettext:

.PHONY: all-gettext maybe-all-gettext
maybe-all-gettext:

.PHONY: check-gettext maybe-check-gettext
maybe-check-gettext:

.PHONY: install-gettext maybe-install-gettext
maybe-install-gettext:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-gettext info-gettext
maybe-info-gettext:

.PHONY: maybe-dvi-gettext dvi-gettext
maybe-dvi-gettext:

.PHONY: maybe-TAGS-gettext TAGS-gettext
maybe-TAGS-gettext:

.PHONY: maybe-install-info-gettext install-info-gettext
maybe-install-info-gettext:

.PHONY: maybe-installcheck-gettext installcheck-gettext
maybe-installcheck-gettext:

.PHONY: maybe-mostlyclean-gettext mostlyclean-gettext
maybe-mostlyclean-gettext:

.PHONY: maybe-clean-gettext clean-gettext
maybe-clean-gettext:

.PHONY: maybe-distclean-gettext distclean-gettext
maybe-distclean-gettext:

.PHONY: maybe-maintainer-clean-gettext maintainer-clean-gettext
maybe-maintainer-clean-gettext:


.PHONY: configure-gnuserv maybe-configure-gnuserv
maybe-configure-gnuserv:

.PHONY: all-gnuserv maybe-all-gnuserv
maybe-all-gnuserv:

.PHONY: check-gnuserv maybe-check-gnuserv
maybe-check-gnuserv:

.PHONY: install-gnuserv maybe-install-gnuserv
maybe-install-gnuserv:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-gnuserv info-gnuserv
maybe-info-gnuserv:

.PHONY: maybe-dvi-gnuserv dvi-gnuserv
maybe-dvi-gnuserv:

.PHONY: maybe-TAGS-gnuserv TAGS-gnuserv
maybe-TAGS-gnuserv:

.PHONY: maybe-install-info-gnuserv install-info-gnuserv
maybe-install-info-gnuserv:

.PHONY: maybe-installcheck-gnuserv installcheck-gnuserv
maybe-installcheck-gnuserv:

.PHONY: maybe-mostlyclean-gnuserv mostlyclean-gnuserv
maybe-mostlyclean-gnuserv:

.PHONY: maybe-clean-gnuserv clean-gnuserv
maybe-clean-gnuserv:

.PHONY: maybe-distclean-gnuserv distclean-gnuserv
maybe-distclean-gnuserv:

.PHONY: maybe-maintainer-clean-gnuserv maintainer-clean-gnuserv
maybe-maintainer-clean-gnuserv:


.PHONY: configure-gprof maybe-configure-gprof
maybe-configure-gprof:

.PHONY: all-gprof maybe-all-gprof
maybe-all-gprof:

.PHONY: check-gprof maybe-check-gprof
maybe-check-gprof:

.PHONY: install-gprof maybe-install-gprof
maybe-install-gprof:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-gprof info-gprof
maybe-info-gprof:

.PHONY: maybe-dvi-gprof dvi-gprof
maybe-dvi-gprof:

.PHONY: maybe-TAGS-gprof TAGS-gprof
maybe-TAGS-gprof:

.PHONY: maybe-install-info-gprof install-info-gprof
maybe-install-info-gprof:

.PHONY: maybe-installcheck-gprof installcheck-gprof
maybe-installcheck-gprof:

.PHONY: maybe-mostlyclean-gprof mostlyclean-gprof
maybe-mostlyclean-gprof:

.PHONY: maybe-clean-gprof clean-gprof
maybe-clean-gprof:

.PHONY: maybe-distclean-gprof distclean-gprof
maybe-distclean-gprof:

.PHONY: maybe-maintainer-clean-gprof maintainer-clean-gprof
maybe-maintainer-clean-gprof:


.PHONY: configure-gzip maybe-configure-gzip
maybe-configure-gzip:

.PHONY: all-gzip maybe-all-gzip
maybe-all-gzip:

.PHONY: check-gzip maybe-check-gzip
maybe-check-gzip:

.PHONY: install-gzip maybe-install-gzip
maybe-install-gzip:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-gzip info-gzip
maybe-info-gzip:

.PHONY: maybe-dvi-gzip dvi-gzip
maybe-dvi-gzip:

.PHONY: maybe-TAGS-gzip TAGS-gzip
maybe-TAGS-gzip:

.PHONY: maybe-install-info-gzip install-info-gzip
maybe-install-info-gzip:

.PHONY: maybe-installcheck-gzip installcheck-gzip
maybe-installcheck-gzip:

.PHONY: maybe-mostlyclean-gzip mostlyclean-gzip
maybe-mostlyclean-gzip:

.PHONY: maybe-clean-gzip clean-gzip
maybe-clean-gzip:

.PHONY: maybe-distclean-gzip distclean-gzip
maybe-distclean-gzip:

.PHONY: maybe-maintainer-clean-gzip maintainer-clean-gzip
maybe-maintainer-clean-gzip:


.PHONY: configure-hello maybe-configure-hello
maybe-configure-hello:

.PHONY: all-hello maybe-all-hello
maybe-all-hello:

.PHONY: check-hello maybe-check-hello
maybe-check-hello:

.PHONY: install-hello maybe-install-hello
maybe-install-hello:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-hello info-hello
maybe-info-hello:

.PHONY: maybe-dvi-hello dvi-hello
maybe-dvi-hello:

.PHONY: maybe-TAGS-hello TAGS-hello
maybe-TAGS-hello:

.PHONY: maybe-install-info-hello install-info-hello
maybe-install-info-hello:

.PHONY: maybe-installcheck-hello installcheck-hello
maybe-installcheck-hello:

.PHONY: maybe-mostlyclean-hello mostlyclean-hello
maybe-mostlyclean-hello:

.PHONY: maybe-clean-hello clean-hello
maybe-clean-hello:

.PHONY: maybe-distclean-hello distclean-hello
maybe-distclean-hello:

.PHONY: maybe-maintainer-clean-hello maintainer-clean-hello
maybe-maintainer-clean-hello:


.PHONY: configure-indent maybe-configure-indent
maybe-configure-indent:

.PHONY: all-indent maybe-all-indent
maybe-all-indent:

.PHONY: check-indent maybe-check-indent
maybe-check-indent:

.PHONY: install-indent maybe-install-indent
maybe-install-indent:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-indent info-indent
maybe-info-indent:

.PHONY: maybe-dvi-indent dvi-indent
maybe-dvi-indent:

.PHONY: maybe-TAGS-indent TAGS-indent
maybe-TAGS-indent:

.PHONY: maybe-install-info-indent install-info-indent
maybe-install-info-indent:

.PHONY: maybe-installcheck-indent installcheck-indent
maybe-installcheck-indent:

.PHONY: maybe-mostlyclean-indent mostlyclean-indent
maybe-mostlyclean-indent:

.PHONY: maybe-clean-indent clean-indent
maybe-clean-indent:

.PHONY: maybe-distclean-indent distclean-indent
maybe-distclean-indent:

.PHONY: maybe-maintainer-clean-indent maintainer-clean-indent
maybe-maintainer-clean-indent:


.PHONY: configure-intl maybe-configure-intl
maybe-configure-intl:
maybe-configure-intl: configure-intl
configure-intl:
	@test ! -f intl/Makefile || exit 0; \
	[ -d intl ] || mkdir intl; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in intl; \
	cd intl || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/intl"; \
	    libsrcdir="$$s/intl";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/intl"; \
	    libsrcdir="$$s/intl";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-intl maybe-all-intl
maybe-all-intl:
maybe-all-intl: all-intl
all-intl: configure-intl
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd intl && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-intl maybe-check-intl
maybe-check-intl:
maybe-check-intl: check-intl

check-intl:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd intl && $(MAKE) $(FLAGS_TO_PASS)  check)


.PHONY: install-intl maybe-install-intl
maybe-install-intl:
maybe-install-intl: install-intl

install-intl: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd intl && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-intl info-intl
maybe-info-intl:
maybe-info-intl: info-intl

info-intl: \
    configure-intl 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-intl dvi-intl
maybe-dvi-intl:
maybe-dvi-intl: dvi-intl

dvi-intl: \
    configure-intl 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-intl TAGS-intl
maybe-TAGS-intl:
maybe-TAGS-intl: TAGS-intl

TAGS-intl: \
    configure-intl 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-intl install-info-intl
maybe-install-info-intl:
maybe-install-info-intl: install-info-intl

install-info-intl: \
    configure-intl \
    info-intl 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-intl installcheck-intl
maybe-installcheck-intl:
maybe-installcheck-intl: installcheck-intl

installcheck-intl: \
    configure-intl 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-intl mostlyclean-intl
maybe-mostlyclean-intl:
maybe-mostlyclean-intl: mostlyclean-intl

mostlyclean-intl: 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-intl clean-intl
maybe-clean-intl:
maybe-clean-intl: clean-intl

clean-intl: 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-intl distclean-intl
maybe-distclean-intl:
maybe-distclean-intl: distclean-intl

distclean-intl: 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-intl maintainer-clean-intl
maybe-maintainer-clean-intl:
maybe-maintainer-clean-intl: maintainer-clean-intl

maintainer-clean-intl: 
	@[ -f ./intl/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in intl" ; \
	(cd intl && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-tcl maybe-configure-tcl
maybe-configure-tcl:

.PHONY: all-tcl maybe-all-tcl
maybe-all-tcl:

.PHONY: check-tcl maybe-check-tcl
maybe-check-tcl:

.PHONY: install-tcl maybe-install-tcl
maybe-install-tcl:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-tcl info-tcl
maybe-info-tcl:

.PHONY: maybe-dvi-tcl dvi-tcl
maybe-dvi-tcl:

.PHONY: maybe-TAGS-tcl TAGS-tcl
maybe-TAGS-tcl:

.PHONY: maybe-install-info-tcl install-info-tcl
maybe-install-info-tcl:

.PHONY: maybe-installcheck-tcl installcheck-tcl
maybe-installcheck-tcl:

.PHONY: maybe-mostlyclean-tcl mostlyclean-tcl
maybe-mostlyclean-tcl:

.PHONY: maybe-clean-tcl clean-tcl
maybe-clean-tcl:

.PHONY: maybe-distclean-tcl distclean-tcl
maybe-distclean-tcl:

.PHONY: maybe-maintainer-clean-tcl maintainer-clean-tcl
maybe-maintainer-clean-tcl:


.PHONY: configure-itcl maybe-configure-itcl
maybe-configure-itcl:

.PHONY: all-itcl maybe-all-itcl
maybe-all-itcl:

.PHONY: check-itcl maybe-check-itcl
maybe-check-itcl:

.PHONY: install-itcl maybe-install-itcl
maybe-install-itcl:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-itcl info-itcl
maybe-info-itcl:

.PHONY: maybe-dvi-itcl dvi-itcl
maybe-dvi-itcl:

.PHONY: maybe-TAGS-itcl TAGS-itcl
maybe-TAGS-itcl:

.PHONY: maybe-install-info-itcl install-info-itcl
maybe-install-info-itcl:

.PHONY: maybe-installcheck-itcl installcheck-itcl
maybe-installcheck-itcl:

.PHONY: maybe-mostlyclean-itcl mostlyclean-itcl
maybe-mostlyclean-itcl:

.PHONY: maybe-clean-itcl clean-itcl
maybe-clean-itcl:

.PHONY: maybe-distclean-itcl distclean-itcl
maybe-distclean-itcl:

.PHONY: maybe-maintainer-clean-itcl maintainer-clean-itcl
maybe-maintainer-clean-itcl:


.PHONY: configure-ld maybe-configure-ld
maybe-configure-ld:

.PHONY: all-ld maybe-all-ld
maybe-all-ld:

.PHONY: check-ld maybe-check-ld
maybe-check-ld:

.PHONY: install-ld maybe-install-ld
maybe-install-ld:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-ld info-ld
maybe-info-ld:

.PHONY: maybe-dvi-ld dvi-ld
maybe-dvi-ld:

.PHONY: maybe-TAGS-ld TAGS-ld
maybe-TAGS-ld:

.PHONY: maybe-install-info-ld install-info-ld
maybe-install-info-ld:

.PHONY: maybe-installcheck-ld installcheck-ld
maybe-installcheck-ld:

.PHONY: maybe-mostlyclean-ld mostlyclean-ld
maybe-mostlyclean-ld:

.PHONY: maybe-clean-ld clean-ld
maybe-clean-ld:

.PHONY: maybe-distclean-ld distclean-ld
maybe-distclean-ld:

.PHONY: maybe-maintainer-clean-ld maintainer-clean-ld
maybe-maintainer-clean-ld:


.PHONY: configure-libcpp maybe-configure-libcpp
maybe-configure-libcpp:

.PHONY: all-libcpp maybe-all-libcpp
maybe-all-libcpp:

.PHONY: check-libcpp maybe-check-libcpp
maybe-check-libcpp:

.PHONY: install-libcpp maybe-install-libcpp
maybe-install-libcpp:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-libcpp info-libcpp
maybe-info-libcpp:

.PHONY: maybe-dvi-libcpp dvi-libcpp
maybe-dvi-libcpp:

.PHONY: maybe-TAGS-libcpp TAGS-libcpp
maybe-TAGS-libcpp:

.PHONY: maybe-install-info-libcpp install-info-libcpp
maybe-install-info-libcpp:

.PHONY: maybe-installcheck-libcpp installcheck-libcpp
maybe-installcheck-libcpp:

.PHONY: maybe-mostlyclean-libcpp mostlyclean-libcpp
maybe-mostlyclean-libcpp:

.PHONY: maybe-clean-libcpp clean-libcpp
maybe-clean-libcpp:

.PHONY: maybe-distclean-libcpp distclean-libcpp
maybe-distclean-libcpp:

.PHONY: maybe-maintainer-clean-libcpp maintainer-clean-libcpp
maybe-maintainer-clean-libcpp:


.PHONY: configure-libgui maybe-configure-libgui
maybe-configure-libgui:

.PHONY: all-libgui maybe-all-libgui
maybe-all-libgui:

.PHONY: check-libgui maybe-check-libgui
maybe-check-libgui:

.PHONY: install-libgui maybe-install-libgui
maybe-install-libgui:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-libgui info-libgui
maybe-info-libgui:

.PHONY: maybe-dvi-libgui dvi-libgui
maybe-dvi-libgui:

.PHONY: maybe-TAGS-libgui TAGS-libgui
maybe-TAGS-libgui:

.PHONY: maybe-install-info-libgui install-info-libgui
maybe-install-info-libgui:

.PHONY: maybe-installcheck-libgui installcheck-libgui
maybe-installcheck-libgui:

.PHONY: maybe-mostlyclean-libgui mostlyclean-libgui
maybe-mostlyclean-libgui:

.PHONY: maybe-clean-libgui clean-libgui
maybe-clean-libgui:

.PHONY: maybe-distclean-libgui distclean-libgui
maybe-distclean-libgui:

.PHONY: maybe-maintainer-clean-libgui maintainer-clean-libgui
maybe-maintainer-clean-libgui:


.PHONY: configure-libbanshee maybe-configure-libbanshee
maybe-configure-libbanshee:

.PHONY: all-libbanshee maybe-all-libbanshee
maybe-all-libbanshee:

.PHONY: check-libbanshee maybe-check-libbanshee
maybe-check-libbanshee:

.PHONY: install-libbanshee maybe-install-libbanshee
maybe-install-libbanshee:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-libbanshee info-libbanshee
maybe-info-libbanshee:

.PHONY: maybe-dvi-libbanshee dvi-libbanshee
maybe-dvi-libbanshee:

.PHONY: maybe-TAGS-libbanshee TAGS-libbanshee
maybe-TAGS-libbanshee:

.PHONY: maybe-install-info-libbanshee install-info-libbanshee
maybe-install-info-libbanshee:

.PHONY: maybe-installcheck-libbanshee installcheck-libbanshee
maybe-installcheck-libbanshee:

.PHONY: maybe-mostlyclean-libbanshee mostlyclean-libbanshee
maybe-mostlyclean-libbanshee:

.PHONY: maybe-clean-libbanshee clean-libbanshee
maybe-clean-libbanshee:

.PHONY: maybe-distclean-libbanshee distclean-libbanshee
maybe-distclean-libbanshee:

.PHONY: maybe-maintainer-clean-libbanshee maintainer-clean-libbanshee
maybe-maintainer-clean-libbanshee:


.PHONY: configure-libiberty maybe-configure-libiberty
maybe-configure-libiberty:
maybe-configure-libiberty: configure-libiberty
configure-libiberty:
	@test ! -f libiberty/Makefile || exit 0; \
	[ -d libiberty ] || mkdir libiberty; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in libiberty; \
	cd libiberty || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/libiberty"; \
	    libsrcdir="$$s/libiberty";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/libiberty"; \
	    libsrcdir="$$s/libiberty";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-libiberty maybe-all-libiberty
maybe-all-libiberty:
maybe-all-libiberty: all-libiberty
all-libiberty: configure-libiberty
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd libiberty && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-libiberty maybe-check-libiberty
maybe-check-libiberty:
maybe-check-libiberty: check-libiberty

check-libiberty:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd libiberty && $(MAKE) $(FLAGS_TO_PASS)  check)


.PHONY: install-libiberty maybe-install-libiberty
maybe-install-libiberty:
maybe-install-libiberty: install-libiberty

install-libiberty: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd libiberty && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-libiberty info-libiberty
maybe-info-libiberty:
maybe-info-libiberty: info-libiberty

info-libiberty: \
    configure-libiberty 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-libiberty dvi-libiberty
maybe-dvi-libiberty:
maybe-dvi-libiberty: dvi-libiberty

dvi-libiberty: \
    configure-libiberty 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-libiberty TAGS-libiberty
maybe-TAGS-libiberty:
maybe-TAGS-libiberty: TAGS-libiberty

TAGS-libiberty: \
    configure-libiberty 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-libiberty install-info-libiberty
maybe-install-info-libiberty:
maybe-install-info-libiberty: install-info-libiberty

install-info-libiberty: \
    configure-libiberty \
    info-libiberty 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-libiberty installcheck-libiberty
maybe-installcheck-libiberty:
maybe-installcheck-libiberty: installcheck-libiberty

installcheck-libiberty: \
    configure-libiberty 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-libiberty mostlyclean-libiberty
maybe-mostlyclean-libiberty:
maybe-mostlyclean-libiberty: mostlyclean-libiberty

mostlyclean-libiberty: 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-libiberty clean-libiberty
maybe-clean-libiberty:
maybe-clean-libiberty: clean-libiberty

clean-libiberty: 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-libiberty distclean-libiberty
maybe-distclean-libiberty:
maybe-distclean-libiberty: distclean-libiberty

distclean-libiberty: 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-libiberty maintainer-clean-libiberty
maybe-maintainer-clean-libiberty:
maybe-maintainer-clean-libiberty: maintainer-clean-libiberty

maintainer-clean-libiberty: 
	@[ -f ./libiberty/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in libiberty" ; \
	(cd libiberty && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-libtool maybe-configure-libtool
maybe-configure-libtool:

.PHONY: all-libtool maybe-all-libtool
maybe-all-libtool:

.PHONY: check-libtool maybe-check-libtool
maybe-check-libtool:

.PHONY: install-libtool maybe-install-libtool
maybe-install-libtool:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-libtool info-libtool
maybe-info-libtool:

.PHONY: maybe-dvi-libtool dvi-libtool
maybe-dvi-libtool:

.PHONY: maybe-TAGS-libtool TAGS-libtool
maybe-TAGS-libtool:

.PHONY: maybe-install-info-libtool install-info-libtool
maybe-install-info-libtool:

.PHONY: maybe-installcheck-libtool installcheck-libtool
maybe-installcheck-libtool:

.PHONY: maybe-mostlyclean-libtool mostlyclean-libtool
maybe-mostlyclean-libtool:

.PHONY: maybe-clean-libtool clean-libtool
maybe-clean-libtool:

.PHONY: maybe-distclean-libtool distclean-libtool
maybe-distclean-libtool:

.PHONY: maybe-maintainer-clean-libtool maintainer-clean-libtool
maybe-maintainer-clean-libtool:


.PHONY: configure-m4 maybe-configure-m4
maybe-configure-m4:

.PHONY: all-m4 maybe-all-m4
maybe-all-m4:

.PHONY: check-m4 maybe-check-m4
maybe-check-m4:

.PHONY: install-m4 maybe-install-m4
maybe-install-m4:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-m4 info-m4
maybe-info-m4:

.PHONY: maybe-dvi-m4 dvi-m4
maybe-dvi-m4:

.PHONY: maybe-TAGS-m4 TAGS-m4
maybe-TAGS-m4:

.PHONY: maybe-install-info-m4 install-info-m4
maybe-install-info-m4:

.PHONY: maybe-installcheck-m4 installcheck-m4
maybe-installcheck-m4:

.PHONY: maybe-mostlyclean-m4 mostlyclean-m4
maybe-mostlyclean-m4:

.PHONY: maybe-clean-m4 clean-m4
maybe-clean-m4:

.PHONY: maybe-distclean-m4 distclean-m4
maybe-distclean-m4:

.PHONY: maybe-maintainer-clean-m4 maintainer-clean-m4
maybe-maintainer-clean-m4:


.PHONY: configure-make maybe-configure-make
maybe-configure-make:

.PHONY: all-make maybe-all-make
maybe-all-make:

.PHONY: check-make maybe-check-make
maybe-check-make:

.PHONY: install-make maybe-install-make
maybe-install-make:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-make info-make
maybe-info-make:

.PHONY: maybe-dvi-make dvi-make
maybe-dvi-make:

.PHONY: maybe-TAGS-make TAGS-make
maybe-TAGS-make:

.PHONY: maybe-install-info-make install-info-make
maybe-install-info-make:

.PHONY: maybe-installcheck-make installcheck-make
maybe-installcheck-make:

.PHONY: maybe-mostlyclean-make mostlyclean-make
maybe-mostlyclean-make:

.PHONY: maybe-clean-make clean-make
maybe-clean-make:

.PHONY: maybe-distclean-make distclean-make
maybe-distclean-make:

.PHONY: maybe-maintainer-clean-make maintainer-clean-make
maybe-maintainer-clean-make:


.PHONY: configure-mmalloc maybe-configure-mmalloc
maybe-configure-mmalloc:
maybe-configure-mmalloc: configure-mmalloc
configure-mmalloc:
	@test ! -f mmalloc/Makefile || exit 0; \
	[ -d mmalloc ] || mkdir mmalloc; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in mmalloc; \
	cd mmalloc || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/mmalloc"; \
	    libsrcdir="$$s/mmalloc";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/mmalloc"; \
	    libsrcdir="$$s/mmalloc";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-mmalloc maybe-all-mmalloc
maybe-all-mmalloc:
maybe-all-mmalloc: all-mmalloc
all-mmalloc: configure-mmalloc
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd mmalloc && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-mmalloc maybe-check-mmalloc
maybe-check-mmalloc:
maybe-check-mmalloc: check-mmalloc

check-mmalloc:


.PHONY: install-mmalloc maybe-install-mmalloc
maybe-install-mmalloc:
maybe-install-mmalloc: install-mmalloc

install-mmalloc: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd mmalloc && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-mmalloc info-mmalloc
maybe-info-mmalloc:
maybe-info-mmalloc: info-mmalloc

info-mmalloc: \
    configure-mmalloc 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-mmalloc dvi-mmalloc
maybe-dvi-mmalloc:
maybe-dvi-mmalloc: dvi-mmalloc

dvi-mmalloc: \
    configure-mmalloc 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-mmalloc TAGS-mmalloc
maybe-TAGS-mmalloc:
maybe-TAGS-mmalloc: TAGS-mmalloc

TAGS-mmalloc: \
    configure-mmalloc 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-mmalloc install-info-mmalloc
maybe-install-info-mmalloc:
maybe-install-info-mmalloc: install-info-mmalloc

install-info-mmalloc: \
    configure-mmalloc \
    info-mmalloc 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-mmalloc installcheck-mmalloc
maybe-installcheck-mmalloc:
maybe-installcheck-mmalloc: installcheck-mmalloc

installcheck-mmalloc: \
    configure-mmalloc 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-mmalloc mostlyclean-mmalloc
maybe-mostlyclean-mmalloc:
maybe-mostlyclean-mmalloc: mostlyclean-mmalloc

mostlyclean-mmalloc: 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-mmalloc clean-mmalloc
maybe-clean-mmalloc:
maybe-clean-mmalloc: clean-mmalloc

clean-mmalloc: 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-mmalloc distclean-mmalloc
maybe-distclean-mmalloc:
maybe-distclean-mmalloc: distclean-mmalloc

distclean-mmalloc: 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-mmalloc maintainer-clean-mmalloc
maybe-maintainer-clean-mmalloc:
maybe-maintainer-clean-mmalloc: maintainer-clean-mmalloc

maintainer-clean-mmalloc: 
	@[ -f ./mmalloc/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in mmalloc" ; \
	(cd mmalloc && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-patch maybe-configure-patch
maybe-configure-patch:

.PHONY: all-patch maybe-all-patch
maybe-all-patch:

.PHONY: check-patch maybe-check-patch
maybe-check-patch:

.PHONY: install-patch maybe-install-patch
maybe-install-patch:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-patch info-patch
maybe-info-patch:

.PHONY: maybe-dvi-patch dvi-patch
maybe-dvi-patch:

.PHONY: maybe-TAGS-patch TAGS-patch
maybe-TAGS-patch:

.PHONY: maybe-install-info-patch install-info-patch
maybe-install-info-patch:

.PHONY: maybe-installcheck-patch installcheck-patch
maybe-installcheck-patch:

.PHONY: maybe-mostlyclean-patch mostlyclean-patch
maybe-mostlyclean-patch:

.PHONY: maybe-clean-patch clean-patch
maybe-clean-patch:

.PHONY: maybe-distclean-patch distclean-patch
maybe-distclean-patch:

.PHONY: maybe-maintainer-clean-patch maintainer-clean-patch
maybe-maintainer-clean-patch:


.PHONY: configure-perl maybe-configure-perl
maybe-configure-perl:

.PHONY: all-perl maybe-all-perl
maybe-all-perl:

.PHONY: check-perl maybe-check-perl
maybe-check-perl:

.PHONY: install-perl maybe-install-perl
maybe-install-perl:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-perl info-perl
maybe-info-perl:

.PHONY: maybe-dvi-perl dvi-perl
maybe-dvi-perl:

.PHONY: maybe-TAGS-perl TAGS-perl
maybe-TAGS-perl:

.PHONY: maybe-install-info-perl install-info-perl
maybe-install-info-perl:

.PHONY: maybe-installcheck-perl installcheck-perl
maybe-installcheck-perl:

.PHONY: maybe-mostlyclean-perl mostlyclean-perl
maybe-mostlyclean-perl:

.PHONY: maybe-clean-perl clean-perl
maybe-clean-perl:

.PHONY: maybe-distclean-perl distclean-perl
maybe-distclean-perl:

.PHONY: maybe-maintainer-clean-perl maintainer-clean-perl
maybe-maintainer-clean-perl:


.PHONY: configure-prms maybe-configure-prms
maybe-configure-prms:

.PHONY: all-prms maybe-all-prms
maybe-all-prms:

.PHONY: check-prms maybe-check-prms
maybe-check-prms:

.PHONY: install-prms maybe-install-prms
maybe-install-prms:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-prms info-prms
maybe-info-prms:

.PHONY: maybe-dvi-prms dvi-prms
maybe-dvi-prms:

.PHONY: maybe-TAGS-prms TAGS-prms
maybe-TAGS-prms:

.PHONY: maybe-install-info-prms install-info-prms
maybe-install-info-prms:

.PHONY: maybe-installcheck-prms installcheck-prms
maybe-installcheck-prms:

.PHONY: maybe-mostlyclean-prms mostlyclean-prms
maybe-mostlyclean-prms:

.PHONY: maybe-clean-prms clean-prms
maybe-clean-prms:

.PHONY: maybe-distclean-prms distclean-prms
maybe-distclean-prms:

.PHONY: maybe-maintainer-clean-prms maintainer-clean-prms
maybe-maintainer-clean-prms:


.PHONY: configure-rcs maybe-configure-rcs
maybe-configure-rcs:

.PHONY: all-rcs maybe-all-rcs
maybe-all-rcs:

.PHONY: check-rcs maybe-check-rcs
maybe-check-rcs:

.PHONY: install-rcs maybe-install-rcs
maybe-install-rcs:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-rcs info-rcs
maybe-info-rcs:

.PHONY: maybe-dvi-rcs dvi-rcs
maybe-dvi-rcs:

.PHONY: maybe-TAGS-rcs TAGS-rcs
maybe-TAGS-rcs:

.PHONY: maybe-install-info-rcs install-info-rcs
maybe-install-info-rcs:

.PHONY: maybe-installcheck-rcs installcheck-rcs
maybe-installcheck-rcs:

.PHONY: maybe-mostlyclean-rcs mostlyclean-rcs
maybe-mostlyclean-rcs:

.PHONY: maybe-clean-rcs clean-rcs
maybe-clean-rcs:

.PHONY: maybe-distclean-rcs distclean-rcs
maybe-distclean-rcs:

.PHONY: maybe-maintainer-clean-rcs maintainer-clean-rcs
maybe-maintainer-clean-rcs:


.PHONY: configure-readline maybe-configure-readline
maybe-configure-readline:
maybe-configure-readline: configure-readline
configure-readline:
	@test ! -f readline/Makefile || exit 0; \
	[ -d readline ] || mkdir readline; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in readline; \
	cd readline || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/readline"; \
	    libsrcdir="$$s/readline";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/readline"; \
	    libsrcdir="$$s/readline";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-readline maybe-all-readline
maybe-all-readline:
maybe-all-readline: all-readline
all-readline: configure-readline
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd readline && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-readline maybe-check-readline
maybe-check-readline:
maybe-check-readline: check-readline

check-readline:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd readline && $(MAKE) $(FLAGS_TO_PASS)  check)


.PHONY: install-readline maybe-install-readline
maybe-install-readline:
maybe-install-readline: install-readline

install-readline: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd readline && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-readline info-readline
maybe-info-readline:
maybe-info-readline: info-readline

info-readline: \
    configure-readline 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-readline dvi-readline
maybe-dvi-readline:
maybe-dvi-readline: dvi-readline

dvi-readline: \
    configure-readline 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-readline TAGS-readline
maybe-TAGS-readline:
maybe-TAGS-readline: TAGS-readline

TAGS-readline: \
    configure-readline 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-readline install-info-readline
maybe-install-info-readline:
maybe-install-info-readline: install-info-readline

install-info-readline: \
    configure-readline \
    info-readline 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-readline installcheck-readline
maybe-installcheck-readline:
maybe-installcheck-readline: installcheck-readline

installcheck-readline: \
    configure-readline 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-readline mostlyclean-readline
maybe-mostlyclean-readline:
maybe-mostlyclean-readline: mostlyclean-readline

mostlyclean-readline: 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-readline clean-readline
maybe-clean-readline:
maybe-clean-readline: clean-readline

clean-readline: 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-readline distclean-readline
maybe-distclean-readline:
maybe-distclean-readline: distclean-readline

distclean-readline: 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-readline maintainer-clean-readline
maybe-maintainer-clean-readline:
maybe-maintainer-clean-readline: maintainer-clean-readline

maintainer-clean-readline: 
	@[ -f ./readline/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in readline" ; \
	(cd readline && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-release maybe-configure-release
maybe-configure-release:

.PHONY: all-release maybe-all-release
maybe-all-release:

.PHONY: check-release maybe-check-release
maybe-check-release:

.PHONY: install-release maybe-install-release
maybe-install-release:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-release info-release
maybe-info-release:

.PHONY: maybe-dvi-release dvi-release
maybe-dvi-release:

.PHONY: maybe-TAGS-release TAGS-release
maybe-TAGS-release:

.PHONY: maybe-install-info-release install-info-release
maybe-install-info-release:

.PHONY: maybe-installcheck-release installcheck-release
maybe-installcheck-release:

.PHONY: maybe-mostlyclean-release mostlyclean-release
maybe-mostlyclean-release:

.PHONY: maybe-clean-release clean-release
maybe-clean-release:

.PHONY: maybe-distclean-release distclean-release
maybe-distclean-release:

.PHONY: maybe-maintainer-clean-release maintainer-clean-release
maybe-maintainer-clean-release:


.PHONY: configure-recode maybe-configure-recode
maybe-configure-recode:

.PHONY: all-recode maybe-all-recode
maybe-all-recode:

.PHONY: check-recode maybe-check-recode
maybe-check-recode:

.PHONY: install-recode maybe-install-recode
maybe-install-recode:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-recode info-recode
maybe-info-recode:

.PHONY: maybe-dvi-recode dvi-recode
maybe-dvi-recode:

.PHONY: maybe-TAGS-recode TAGS-recode
maybe-TAGS-recode:

.PHONY: maybe-install-info-recode install-info-recode
maybe-install-info-recode:

.PHONY: maybe-installcheck-recode installcheck-recode
maybe-installcheck-recode:

.PHONY: maybe-mostlyclean-recode mostlyclean-recode
maybe-mostlyclean-recode:

.PHONY: maybe-clean-recode clean-recode
maybe-clean-recode:

.PHONY: maybe-distclean-recode distclean-recode
maybe-distclean-recode:

.PHONY: maybe-maintainer-clean-recode maintainer-clean-recode
maybe-maintainer-clean-recode:


.PHONY: configure-sed maybe-configure-sed
maybe-configure-sed:

.PHONY: all-sed maybe-all-sed
maybe-all-sed:

.PHONY: check-sed maybe-check-sed
maybe-check-sed:

.PHONY: install-sed maybe-install-sed
maybe-install-sed:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-sed info-sed
maybe-info-sed:

.PHONY: maybe-dvi-sed dvi-sed
maybe-dvi-sed:

.PHONY: maybe-TAGS-sed TAGS-sed
maybe-TAGS-sed:

.PHONY: maybe-install-info-sed install-info-sed
maybe-install-info-sed:

.PHONY: maybe-installcheck-sed installcheck-sed
maybe-installcheck-sed:

.PHONY: maybe-mostlyclean-sed mostlyclean-sed
maybe-mostlyclean-sed:

.PHONY: maybe-clean-sed clean-sed
maybe-clean-sed:

.PHONY: maybe-distclean-sed distclean-sed
maybe-distclean-sed:

.PHONY: maybe-maintainer-clean-sed maintainer-clean-sed
maybe-maintainer-clean-sed:


.PHONY: configure-send-pr maybe-configure-send-pr
maybe-configure-send-pr:

.PHONY: all-send-pr maybe-all-send-pr
maybe-all-send-pr:

.PHONY: check-send-pr maybe-check-send-pr
maybe-check-send-pr:

.PHONY: install-send-pr maybe-install-send-pr
maybe-install-send-pr:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-send-pr info-send-pr
maybe-info-send-pr:

.PHONY: maybe-dvi-send-pr dvi-send-pr
maybe-dvi-send-pr:

.PHONY: maybe-TAGS-send-pr TAGS-send-pr
maybe-TAGS-send-pr:

.PHONY: maybe-install-info-send-pr install-info-send-pr
maybe-install-info-send-pr:

.PHONY: maybe-installcheck-send-pr installcheck-send-pr
maybe-installcheck-send-pr:

.PHONY: maybe-mostlyclean-send-pr mostlyclean-send-pr
maybe-mostlyclean-send-pr:

.PHONY: maybe-clean-send-pr clean-send-pr
maybe-clean-send-pr:

.PHONY: maybe-distclean-send-pr distclean-send-pr
maybe-distclean-send-pr:

.PHONY: maybe-maintainer-clean-send-pr maintainer-clean-send-pr
maybe-maintainer-clean-send-pr:


.PHONY: configure-shellutils maybe-configure-shellutils
maybe-configure-shellutils:

.PHONY: all-shellutils maybe-all-shellutils
maybe-all-shellutils:

.PHONY: check-shellutils maybe-check-shellutils
maybe-check-shellutils:

.PHONY: install-shellutils maybe-install-shellutils
maybe-install-shellutils:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-shellutils info-shellutils
maybe-info-shellutils:

.PHONY: maybe-dvi-shellutils dvi-shellutils
maybe-dvi-shellutils:

.PHONY: maybe-TAGS-shellutils TAGS-shellutils
maybe-TAGS-shellutils:

.PHONY: maybe-install-info-shellutils install-info-shellutils
maybe-install-info-shellutils:

.PHONY: maybe-installcheck-shellutils installcheck-shellutils
maybe-installcheck-shellutils:

.PHONY: maybe-mostlyclean-shellutils mostlyclean-shellutils
maybe-mostlyclean-shellutils:

.PHONY: maybe-clean-shellutils clean-shellutils
maybe-clean-shellutils:

.PHONY: maybe-distclean-shellutils distclean-shellutils
maybe-distclean-shellutils:

.PHONY: maybe-maintainer-clean-shellutils maintainer-clean-shellutils
maybe-maintainer-clean-shellutils:


.PHONY: configure-sid maybe-configure-sid
maybe-configure-sid:

.PHONY: all-sid maybe-all-sid
maybe-all-sid:

.PHONY: check-sid maybe-check-sid
maybe-check-sid:

.PHONY: install-sid maybe-install-sid
maybe-install-sid:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-sid info-sid
maybe-info-sid:

.PHONY: maybe-dvi-sid dvi-sid
maybe-dvi-sid:

.PHONY: maybe-TAGS-sid TAGS-sid
maybe-TAGS-sid:

.PHONY: maybe-install-info-sid install-info-sid
maybe-install-info-sid:

.PHONY: maybe-installcheck-sid installcheck-sid
maybe-installcheck-sid:

.PHONY: maybe-mostlyclean-sid mostlyclean-sid
maybe-mostlyclean-sid:

.PHONY: maybe-clean-sid clean-sid
maybe-clean-sid:

.PHONY: maybe-distclean-sid distclean-sid
maybe-distclean-sid:

.PHONY: maybe-maintainer-clean-sid maintainer-clean-sid
maybe-maintainer-clean-sid:


.PHONY: configure-sim maybe-configure-sim
maybe-configure-sim:
maybe-configure-sim: configure-sim
configure-sim:
	@test ! -f sim/Makefile || exit 0; \
	[ -d sim ] || mkdir sim; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in sim; \
	cd sim || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/sim"; \
	    libsrcdir="$$s/sim";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/sim"; \
	    libsrcdir="$$s/sim";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-sim maybe-all-sim
maybe-all-sim:
maybe-all-sim: all-sim
all-sim: configure-sim
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd sim && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-sim maybe-check-sim
maybe-check-sim:
maybe-check-sim: check-sim

check-sim:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd sim && $(MAKE) $(FLAGS_TO_PASS)  check)


.PHONY: install-sim maybe-install-sim
maybe-install-sim:
maybe-install-sim: install-sim

install-sim: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd sim && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-sim info-sim
maybe-info-sim:
maybe-info-sim: info-sim

info-sim: \
    configure-sim 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-sim dvi-sim
maybe-dvi-sim:
maybe-dvi-sim: dvi-sim

dvi-sim: \
    configure-sim 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-sim TAGS-sim
maybe-TAGS-sim:
maybe-TAGS-sim: TAGS-sim

TAGS-sim: \
    configure-sim 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-sim install-info-sim
maybe-install-info-sim:
maybe-install-info-sim: install-info-sim

install-info-sim: \
    configure-sim \
    info-sim 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-sim installcheck-sim
maybe-installcheck-sim:
maybe-installcheck-sim: installcheck-sim

installcheck-sim: \
    configure-sim 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-sim mostlyclean-sim
maybe-mostlyclean-sim:
maybe-mostlyclean-sim: mostlyclean-sim

mostlyclean-sim: 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-sim clean-sim
maybe-clean-sim:
maybe-clean-sim: clean-sim

clean-sim: 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-sim distclean-sim
maybe-distclean-sim:
maybe-distclean-sim: distclean-sim

distclean-sim: 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-sim maintainer-clean-sim
maybe-maintainer-clean-sim:
maybe-maintainer-clean-sim: maintainer-clean-sim

maintainer-clean-sim: 
	@[ -f ./sim/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in sim" ; \
	(cd sim && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-tar maybe-configure-tar
maybe-configure-tar:

.PHONY: all-tar maybe-all-tar
maybe-all-tar:

.PHONY: check-tar maybe-check-tar
maybe-check-tar:

.PHONY: install-tar maybe-install-tar
maybe-install-tar:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-tar info-tar
maybe-info-tar:

.PHONY: maybe-dvi-tar dvi-tar
maybe-dvi-tar:

.PHONY: maybe-TAGS-tar TAGS-tar
maybe-TAGS-tar:

.PHONY: maybe-install-info-tar install-info-tar
maybe-install-info-tar:

.PHONY: maybe-installcheck-tar installcheck-tar
maybe-installcheck-tar:

.PHONY: maybe-mostlyclean-tar mostlyclean-tar
maybe-mostlyclean-tar:

.PHONY: maybe-clean-tar clean-tar
maybe-clean-tar:

.PHONY: maybe-distclean-tar distclean-tar
maybe-distclean-tar:

.PHONY: maybe-maintainer-clean-tar maintainer-clean-tar
maybe-maintainer-clean-tar:


.PHONY: configure-texinfo maybe-configure-texinfo
maybe-configure-texinfo:

.PHONY: all-texinfo maybe-all-texinfo
maybe-all-texinfo:

.PHONY: check-texinfo maybe-check-texinfo
maybe-check-texinfo:

.PHONY: install-texinfo maybe-install-texinfo
maybe-install-texinfo:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-texinfo info-texinfo
maybe-info-texinfo:

.PHONY: maybe-dvi-texinfo dvi-texinfo
maybe-dvi-texinfo:

.PHONY: maybe-TAGS-texinfo TAGS-texinfo
maybe-TAGS-texinfo:

.PHONY: maybe-install-info-texinfo install-info-texinfo
maybe-install-info-texinfo:

.PHONY: maybe-installcheck-texinfo installcheck-texinfo
maybe-installcheck-texinfo:

.PHONY: maybe-mostlyclean-texinfo mostlyclean-texinfo
maybe-mostlyclean-texinfo:

.PHONY: maybe-clean-texinfo clean-texinfo
maybe-clean-texinfo:

.PHONY: maybe-distclean-texinfo distclean-texinfo
maybe-distclean-texinfo:

.PHONY: maybe-maintainer-clean-texinfo maintainer-clean-texinfo
maybe-maintainer-clean-texinfo:


.PHONY: configure-textutils maybe-configure-textutils
maybe-configure-textutils:

.PHONY: all-textutils maybe-all-textutils
maybe-all-textutils:

.PHONY: check-textutils maybe-check-textutils
maybe-check-textutils:

.PHONY: install-textutils maybe-install-textutils
maybe-install-textutils:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-textutils info-textutils
maybe-info-textutils:

.PHONY: maybe-dvi-textutils dvi-textutils
maybe-dvi-textutils:

.PHONY: maybe-TAGS-textutils TAGS-textutils
maybe-TAGS-textutils:

.PHONY: maybe-install-info-textutils install-info-textutils
maybe-install-info-textutils:

.PHONY: maybe-installcheck-textutils installcheck-textutils
maybe-installcheck-textutils:

.PHONY: maybe-mostlyclean-textutils mostlyclean-textutils
maybe-mostlyclean-textutils:

.PHONY: maybe-clean-textutils clean-textutils
maybe-clean-textutils:

.PHONY: maybe-distclean-textutils distclean-textutils
maybe-distclean-textutils:

.PHONY: maybe-maintainer-clean-textutils maintainer-clean-textutils
maybe-maintainer-clean-textutils:


.PHONY: configure-time maybe-configure-time
maybe-configure-time:

.PHONY: all-time maybe-all-time
maybe-all-time:

.PHONY: check-time maybe-check-time
maybe-check-time:

.PHONY: install-time maybe-install-time
maybe-install-time:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-time info-time
maybe-info-time:

.PHONY: maybe-dvi-time dvi-time
maybe-dvi-time:

.PHONY: maybe-TAGS-time TAGS-time
maybe-TAGS-time:

.PHONY: maybe-install-info-time install-info-time
maybe-install-info-time:

.PHONY: maybe-installcheck-time installcheck-time
maybe-installcheck-time:

.PHONY: maybe-mostlyclean-time mostlyclean-time
maybe-mostlyclean-time:

.PHONY: maybe-clean-time clean-time
maybe-clean-time:

.PHONY: maybe-distclean-time distclean-time
maybe-distclean-time:

.PHONY: maybe-maintainer-clean-time maintainer-clean-time
maybe-maintainer-clean-time:


.PHONY: configure-uudecode maybe-configure-uudecode
maybe-configure-uudecode:

.PHONY: all-uudecode maybe-all-uudecode
maybe-all-uudecode:

.PHONY: check-uudecode maybe-check-uudecode
maybe-check-uudecode:

.PHONY: install-uudecode maybe-install-uudecode
maybe-install-uudecode:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-uudecode info-uudecode
maybe-info-uudecode:

.PHONY: maybe-dvi-uudecode dvi-uudecode
maybe-dvi-uudecode:

.PHONY: maybe-TAGS-uudecode TAGS-uudecode
maybe-TAGS-uudecode:

.PHONY: maybe-install-info-uudecode install-info-uudecode
maybe-install-info-uudecode:

.PHONY: maybe-installcheck-uudecode installcheck-uudecode
maybe-installcheck-uudecode:

.PHONY: maybe-mostlyclean-uudecode mostlyclean-uudecode
maybe-mostlyclean-uudecode:

.PHONY: maybe-clean-uudecode clean-uudecode
maybe-clean-uudecode:

.PHONY: maybe-distclean-uudecode distclean-uudecode
maybe-distclean-uudecode:

.PHONY: maybe-maintainer-clean-uudecode maintainer-clean-uudecode
maybe-maintainer-clean-uudecode:


.PHONY: configure-wdiff maybe-configure-wdiff
maybe-configure-wdiff:

.PHONY: all-wdiff maybe-all-wdiff
maybe-all-wdiff:

.PHONY: check-wdiff maybe-check-wdiff
maybe-check-wdiff:

.PHONY: install-wdiff maybe-install-wdiff
maybe-install-wdiff:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-wdiff info-wdiff
maybe-info-wdiff:

.PHONY: maybe-dvi-wdiff dvi-wdiff
maybe-dvi-wdiff:

.PHONY: maybe-TAGS-wdiff TAGS-wdiff
maybe-TAGS-wdiff:

.PHONY: maybe-install-info-wdiff install-info-wdiff
maybe-install-info-wdiff:

.PHONY: maybe-installcheck-wdiff installcheck-wdiff
maybe-installcheck-wdiff:

.PHONY: maybe-mostlyclean-wdiff mostlyclean-wdiff
maybe-mostlyclean-wdiff:

.PHONY: maybe-clean-wdiff clean-wdiff
maybe-clean-wdiff:

.PHONY: maybe-distclean-wdiff distclean-wdiff
maybe-distclean-wdiff:

.PHONY: maybe-maintainer-clean-wdiff maintainer-clean-wdiff
maybe-maintainer-clean-wdiff:


.PHONY: configure-zip maybe-configure-zip
maybe-configure-zip:

.PHONY: all-zip maybe-all-zip
maybe-all-zip:

.PHONY: check-zip maybe-check-zip
maybe-check-zip:

.PHONY: install-zip maybe-install-zip
maybe-install-zip:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-zip info-zip
maybe-info-zip:

.PHONY: maybe-dvi-zip dvi-zip
maybe-dvi-zip:

.PHONY: maybe-TAGS-zip TAGS-zip
maybe-TAGS-zip:

.PHONY: maybe-install-info-zip install-info-zip
maybe-install-info-zip:

.PHONY: maybe-installcheck-zip installcheck-zip
maybe-installcheck-zip:

.PHONY: maybe-mostlyclean-zip mostlyclean-zip
maybe-mostlyclean-zip:

.PHONY: maybe-clean-zip clean-zip
maybe-clean-zip:

.PHONY: maybe-distclean-zip distclean-zip
maybe-distclean-zip:

.PHONY: maybe-maintainer-clean-zip maintainer-clean-zip
maybe-maintainer-clean-zip:


.PHONY: configure-zlib maybe-configure-zlib
maybe-configure-zlib:

.PHONY: all-zlib maybe-all-zlib
maybe-all-zlib:

.PHONY: check-zlib maybe-check-zlib
maybe-check-zlib:

.PHONY: install-zlib maybe-install-zlib
maybe-install-zlib:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-zlib info-zlib
maybe-info-zlib:

.PHONY: maybe-dvi-zlib dvi-zlib
maybe-dvi-zlib:

.PHONY: maybe-TAGS-zlib TAGS-zlib
maybe-TAGS-zlib:

.PHONY: maybe-install-info-zlib install-info-zlib
maybe-install-info-zlib:

.PHONY: maybe-installcheck-zlib installcheck-zlib
maybe-installcheck-zlib:

.PHONY: maybe-mostlyclean-zlib mostlyclean-zlib
maybe-mostlyclean-zlib:

.PHONY: maybe-clean-zlib clean-zlib
maybe-clean-zlib:

.PHONY: maybe-distclean-zlib distclean-zlib
maybe-distclean-zlib:

.PHONY: maybe-maintainer-clean-zlib maintainer-clean-zlib
maybe-maintainer-clean-zlib:


.PHONY: configure-gdb maybe-configure-gdb
maybe-configure-gdb:
maybe-configure-gdb: configure-gdb
configure-gdb:
	@test ! -f gdb/Makefile || exit 0; \
	[ -d gdb ] || mkdir gdb; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in gdb; \
	cd gdb || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/gdb"; \
	    libsrcdir="$$s/gdb";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/gdb"; \
	    libsrcdir="$$s/gdb";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-gdb maybe-all-gdb
maybe-all-gdb:
maybe-all-gdb: all-gdb
all-gdb: configure-gdb
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd gdb && $(MAKE) $(FLAGS_TO_PASS) $(X11_FLAGS_TO_PASS)  all)

.PHONY: check-gdb maybe-check-gdb
maybe-check-gdb:
maybe-check-gdb: check-gdb

check-gdb:
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd gdb && $(MAKE) $(FLAGS_TO_PASS) $(X11_FLAGS_TO_PASS)  check)


.PHONY: install-gdb maybe-install-gdb
maybe-install-gdb:
maybe-install-gdb: install-gdb

install-gdb: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd gdb && $(MAKE) $(FLAGS_TO_PASS) $(X11_FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-gdb info-gdb
maybe-info-gdb:
maybe-info-gdb: info-gdb

info-gdb: \
    configure-gdb 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-gdb dvi-gdb
maybe-dvi-gdb:
maybe-dvi-gdb: dvi-gdb

dvi-gdb: \
    configure-gdb 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-gdb TAGS-gdb
maybe-TAGS-gdb:
maybe-TAGS-gdb: TAGS-gdb

TAGS-gdb: \
    configure-gdb 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-gdb install-info-gdb
maybe-install-info-gdb:
maybe-install-info-gdb: install-info-gdb

install-info-gdb: \
    configure-gdb \
    info-gdb 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-gdb installcheck-gdb
maybe-installcheck-gdb:
maybe-installcheck-gdb: installcheck-gdb

installcheck-gdb: \
    configure-gdb 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-gdb mostlyclean-gdb
maybe-mostlyclean-gdb:
maybe-mostlyclean-gdb: mostlyclean-gdb

mostlyclean-gdb: 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-gdb clean-gdb
maybe-clean-gdb:
maybe-clean-gdb: clean-gdb

clean-gdb: 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-gdb distclean-gdb
maybe-distclean-gdb:
maybe-distclean-gdb: distclean-gdb

distclean-gdb: 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-gdb maintainer-clean-gdb
maybe-maintainer-clean-gdb:
maybe-maintainer-clean-gdb: maintainer-clean-gdb

maintainer-clean-gdb: 
	@[ -f ./gdb/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in gdb" ; \
	(cd gdb && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1



.PHONY: configure-expect maybe-configure-expect
maybe-configure-expect:

.PHONY: all-expect maybe-all-expect
maybe-all-expect:

.PHONY: check-expect maybe-check-expect
maybe-check-expect:

.PHONY: install-expect maybe-install-expect
maybe-install-expect:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-expect info-expect
maybe-info-expect:

.PHONY: maybe-dvi-expect dvi-expect
maybe-dvi-expect:

.PHONY: maybe-TAGS-expect TAGS-expect
maybe-TAGS-expect:

.PHONY: maybe-install-info-expect install-info-expect
maybe-install-info-expect:

.PHONY: maybe-installcheck-expect installcheck-expect
maybe-installcheck-expect:

.PHONY: maybe-mostlyclean-expect mostlyclean-expect
maybe-mostlyclean-expect:

.PHONY: maybe-clean-expect clean-expect
maybe-clean-expect:

.PHONY: maybe-distclean-expect distclean-expect
maybe-distclean-expect:

.PHONY: maybe-maintainer-clean-expect maintainer-clean-expect
maybe-maintainer-clean-expect:


.PHONY: configure-guile maybe-configure-guile
maybe-configure-guile:

.PHONY: all-guile maybe-all-guile
maybe-all-guile:

.PHONY: check-guile maybe-check-guile
maybe-check-guile:

.PHONY: install-guile maybe-install-guile
maybe-install-guile:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-guile info-guile
maybe-info-guile:

.PHONY: maybe-dvi-guile dvi-guile
maybe-dvi-guile:

.PHONY: maybe-TAGS-guile TAGS-guile
maybe-TAGS-guile:

.PHONY: maybe-install-info-guile install-info-guile
maybe-install-info-guile:

.PHONY: maybe-installcheck-guile installcheck-guile
maybe-installcheck-guile:

.PHONY: maybe-mostlyclean-guile mostlyclean-guile
maybe-mostlyclean-guile:

.PHONY: maybe-clean-guile clean-guile
maybe-clean-guile:

.PHONY: maybe-distclean-guile distclean-guile
maybe-distclean-guile:

.PHONY: maybe-maintainer-clean-guile maintainer-clean-guile
maybe-maintainer-clean-guile:


.PHONY: configure-tk maybe-configure-tk
maybe-configure-tk:

.PHONY: all-tk maybe-all-tk
maybe-all-tk:

.PHONY: check-tk maybe-check-tk
maybe-check-tk:

.PHONY: install-tk maybe-install-tk
maybe-install-tk:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-tk info-tk
maybe-info-tk:

.PHONY: maybe-dvi-tk dvi-tk
maybe-dvi-tk:

.PHONY: maybe-TAGS-tk TAGS-tk
maybe-TAGS-tk:

.PHONY: maybe-install-info-tk install-info-tk
maybe-install-info-tk:

.PHONY: maybe-installcheck-tk installcheck-tk
maybe-installcheck-tk:

.PHONY: maybe-mostlyclean-tk mostlyclean-tk
maybe-mostlyclean-tk:

.PHONY: maybe-clean-tk clean-tk
maybe-clean-tk:

.PHONY: maybe-distclean-tk distclean-tk
maybe-distclean-tk:

.PHONY: maybe-maintainer-clean-tk maintainer-clean-tk
maybe-maintainer-clean-tk:


.PHONY: configure-tix maybe-configure-tix
maybe-configure-tix:

.PHONY: all-tix maybe-all-tix
maybe-all-tix:

.PHONY: check-tix maybe-check-tix
maybe-check-tix:

.PHONY: install-tix maybe-install-tix
maybe-install-tix:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-tix info-tix
maybe-info-tix:

.PHONY: maybe-dvi-tix dvi-tix
maybe-dvi-tix:

.PHONY: maybe-TAGS-tix TAGS-tix
maybe-TAGS-tix:

.PHONY: maybe-install-info-tix install-info-tix
maybe-install-info-tix:

.PHONY: maybe-installcheck-tix installcheck-tix
maybe-installcheck-tix:

.PHONY: maybe-mostlyclean-tix mostlyclean-tix
maybe-mostlyclean-tix:

.PHONY: maybe-clean-tix clean-tix
maybe-clean-tix:

.PHONY: maybe-distclean-tix distclean-tix
maybe-distclean-tix:

.PHONY: maybe-maintainer-clean-tix maintainer-clean-tix
maybe-maintainer-clean-tix:


.PHONY: configure-libtermcap maybe-configure-libtermcap
maybe-configure-libtermcap:

.PHONY: all-libtermcap maybe-all-libtermcap
maybe-all-libtermcap:

.PHONY: check-libtermcap maybe-check-libtermcap
maybe-check-libtermcap:

.PHONY: install-libtermcap maybe-install-libtermcap
maybe-install-libtermcap:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-libtermcap info-libtermcap
maybe-info-libtermcap:

.PHONY: maybe-dvi-libtermcap dvi-libtermcap
maybe-dvi-libtermcap:

.PHONY: maybe-TAGS-libtermcap TAGS-libtermcap
maybe-TAGS-libtermcap:

.PHONY: maybe-install-info-libtermcap install-info-libtermcap
maybe-install-info-libtermcap:

.PHONY: maybe-installcheck-libtermcap installcheck-libtermcap
maybe-installcheck-libtermcap:

.PHONY: maybe-mostlyclean-libtermcap mostlyclean-libtermcap
maybe-mostlyclean-libtermcap:

.PHONY: maybe-clean-libtermcap clean-libtermcap
maybe-clean-libtermcap:

.PHONY: maybe-distclean-libtermcap distclean-libtermcap
maybe-distclean-libtermcap:

.PHONY: maybe-maintainer-clean-libtermcap maintainer-clean-libtermcap
maybe-maintainer-clean-libtermcap:


.PHONY: configure-utils maybe-configure-utils
maybe-configure-utils:
maybe-configure-utils: configure-utils
configure-utils:
	@test ! -f utils/Makefile || exit 0; \
	[ -d utils ] || mkdir utils; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(HOST_EXPORTS) \
	echo Configuring in utils; \
	cd utils || exit 1; \
	case $(srcdir) in \
	  \.) \
	    srcdiroption="--srcdir=."; \
	    libsrcdir=".";; \
	  /* | [A-Za-z]:[\\/]*) \
	    srcdiroption="--srcdir=$(srcdir)/utils"; \
	    libsrcdir="$$s/utils";; \
	  *) \
	    srcdiroption="--srcdir=../$(srcdir)/utils"; \
	    libsrcdir="$$s/utils";; \
	esac; \
	$(SHELL) $${libsrcdir}/configure \
	  $(HOST_CONFIGARGS) $${srcdiroption}  \
	  || exit 1

.PHONY: all-utils maybe-all-utils
maybe-all-utils:
maybe-all-utils: all-utils
all-utils: configure-utils
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd utils && $(MAKE) $(FLAGS_TO_PASS)  all)

.PHONY: check-utils maybe-check-utils
maybe-check-utils:
maybe-check-utils: check-utils

check-utils:


.PHONY: install-utils maybe-install-utils
maybe-install-utils:
maybe-install-utils: install-utils

install-utils: installdirs
	@r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	(cd utils && $(MAKE) $(FLAGS_TO_PASS)  install)


# Other targets (info, dvi, etc.)

.PHONY: maybe-info-utils info-utils
maybe-info-utils:
maybe-info-utils: info-utils

info-utils: \
    configure-utils 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing info in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           info) \
	  || exit 1


.PHONY: maybe-dvi-utils dvi-utils
maybe-dvi-utils:
maybe-dvi-utils: dvi-utils

dvi-utils: \
    configure-utils 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing dvi in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           dvi) \
	  || exit 1


.PHONY: maybe-TAGS-utils TAGS-utils
maybe-TAGS-utils:
maybe-TAGS-utils: TAGS-utils

TAGS-utils: \
    configure-utils 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing TAGS in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           TAGS) \
	  || exit 1


.PHONY: maybe-install-info-utils install-info-utils
maybe-install-info-utils:
maybe-install-info-utils: install-info-utils

install-info-utils: \
    configure-utils \
    info-utils 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing install-info in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           install-info) \
	  || exit 1


.PHONY: maybe-installcheck-utils installcheck-utils
maybe-installcheck-utils:
maybe-installcheck-utils: installcheck-utils

installcheck-utils: \
    configure-utils 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing installcheck in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           installcheck) \
	  || exit 1


.PHONY: maybe-mostlyclean-utils mostlyclean-utils
maybe-mostlyclean-utils:
maybe-mostlyclean-utils: mostlyclean-utils

mostlyclean-utils: 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing mostlyclean in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           mostlyclean) \
	  || exit 1


.PHONY: maybe-clean-utils clean-utils
maybe-clean-utils:
maybe-clean-utils: clean-utils

clean-utils: 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing clean in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           clean) \
	  || exit 1


.PHONY: maybe-distclean-utils distclean-utils
maybe-distclean-utils:
maybe-distclean-utils: distclean-utils

distclean-utils: 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing distclean in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           distclean) \
	  || exit 1


.PHONY: maybe-maintainer-clean-utils maintainer-clean-utils
maybe-maintainer-clean-utils:
maybe-maintainer-clean-utils: maintainer-clean-utils

maintainer-clean-utils: 
	@[ -f ./utils/Makefile ] || exit 0; \
	r=`${PWD_COMMAND}`; export r; \
	s=`cd $(srcdir); ${PWD_COMMAND}`; export s; \
	$(SET_LIB_PATH) \
	$(HOST_EXPORTS) \
	for flag in $(EXTRA_HOST_FLAGS); do \
	  eval `echo "$$flag" | sed -e "s|^\([^=]*\)=\(.*\)|\1='\2'; export \1|"`; \
	done; \
	echo "Doing maintainer-clean in utils" ; \
	(cd utils && \
	  $(MAKE) $(BASE_FLAGS_TO_PASS) "AR=$${AR}" "AS=$${AS}" \
	          "CC=$${CC}" "CXX=$${CXX}" "LD=$${LD}" "NM=$${NM}" \
	          "RANLIB=$${RANLIB}" \
	          "DLLTOOL=$${DLLTOOL}" "WINDRES=$${WINDRES}" \
	           maintainer-clean) \
	  || exit 1




# ---------------------------------------
# Modules which run on the target machine
# ---------------------------------------

.PHONY: configure-target-libstdc++-v3 maybe-configure-target-libstdc++-v3
maybe-configure-target-libstdc++-v3:

.PHONY: all-target-libstdc++-v3 maybe-all-target-libstdc++-v3
maybe-all-target-libstdc++-v3:

.PHONY: check-target-libstdc++-v3 maybe-check-target-libstdc++-v3
maybe-check-target-libstdc++-v3:

.PHONY: install-target-libstdc++-v3 maybe-install-target-libstdc++-v3
maybe-install-target-libstdc++-v3:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libstdc++-v3 info-target-libstdc++-v3
maybe-info-target-libstdc++-v3:

.PHONY: maybe-dvi-target-libstdc++-v3 dvi-target-libstdc++-v3
maybe-dvi-target-libstdc++-v3:

.PHONY: maybe-TAGS-target-libstdc++-v3 TAGS-target-libstdc++-v3
maybe-TAGS-target-libstdc++-v3:

.PHONY: maybe-install-info-target-libstdc++-v3 install-info-target-libstdc++-v3
maybe-install-info-target-libstdc++-v3:

.PHONY: maybe-installcheck-target-libstdc++-v3 installcheck-target-libstdc++-v3
maybe-installcheck-target-libstdc++-v3:

.PHONY: maybe-mostlyclean-target-libstdc++-v3 mostlyclean-target-libstdc++-v3
maybe-mostlyclean-target-libstdc++-v3:

.PHONY: maybe-clean-target-libstdc++-v3 clean-target-libstdc++-v3
maybe-clean-target-libstdc++-v3:

.PHONY: maybe-distclean-target-libstdc++-v3 distclean-target-libstdc++-v3
maybe-distclean-target-libstdc++-v3:

.PHONY: maybe-maintainer-clean-target-libstdc++-v3 maintainer-clean-target-libstdc++-v3
maybe-maintainer-clean-target-libstdc++-v3:


.PHONY: configure-target-libmudflap maybe-configure-target-libmudflap
maybe-configure-target-libmudflap:

.PHONY: all-target-libmudflap maybe-all-target-libmudflap
maybe-all-target-libmudflap:

.PHONY: check-target-libmudflap maybe-check-target-libmudflap
maybe-check-target-libmudflap:

.PHONY: install-target-libmudflap maybe-install-target-libmudflap
maybe-install-target-libmudflap:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libmudflap info-target-libmudflap
maybe-info-target-libmudflap:

.PHONY: maybe-dvi-target-libmudflap dvi-target-libmudflap
maybe-dvi-target-libmudflap:

.PHONY: maybe-TAGS-target-libmudflap TAGS-target-libmudflap
maybe-TAGS-target-libmudflap:

.PHONY: maybe-install-info-target-libmudflap install-info-target-libmudflap
maybe-install-info-target-libmudflap:

.PHONY: maybe-installcheck-target-libmudflap installcheck-target-libmudflap
maybe-installcheck-target-libmudflap:

.PHONY: maybe-mostlyclean-target-libmudflap mostlyclean-target-libmudflap
maybe-mostlyclean-target-libmudflap:

.PHONY: maybe-clean-target-libmudflap clean-target-libmudflap
maybe-clean-target-libmudflap:

.PHONY: maybe-distclean-target-libmudflap distclean-target-libmudflap
maybe-distclean-target-libmudflap:

.PHONY: maybe-maintainer-clean-target-libmudflap maintainer-clean-target-libmudflap
maybe-maintainer-clean-target-libmudflap:


.PHONY: configure-target-newlib maybe-configure-target-newlib
maybe-configure-target-newlib:

.PHONY: all-target-newlib maybe-all-target-newlib
maybe-all-target-newlib:

.PHONY: check-target-newlib maybe-check-target-newlib
maybe-check-target-newlib:

.PHONY: install-target-newlib maybe-install-target-newlib
maybe-install-target-newlib:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-newlib info-target-newlib
maybe-info-target-newlib:

.PHONY: maybe-dvi-target-newlib dvi-target-newlib
maybe-dvi-target-newlib:

.PHONY: maybe-TAGS-target-newlib TAGS-target-newlib
maybe-TAGS-target-newlib:

.PHONY: maybe-install-info-target-newlib install-info-target-newlib
maybe-install-info-target-newlib:

.PHONY: maybe-installcheck-target-newlib installcheck-target-newlib
maybe-installcheck-target-newlib:

.PHONY: maybe-mostlyclean-target-newlib mostlyclean-target-newlib
maybe-mostlyclean-target-newlib:

.PHONY: maybe-clean-target-newlib clean-target-newlib
maybe-clean-target-newlib:

.PHONY: maybe-distclean-target-newlib distclean-target-newlib
maybe-distclean-target-newlib:

.PHONY: maybe-maintainer-clean-target-newlib maintainer-clean-target-newlib
maybe-maintainer-clean-target-newlib:


.PHONY: configure-target-libgfortran maybe-configure-target-libgfortran
maybe-configure-target-libgfortran:

.PHONY: all-target-libgfortran maybe-all-target-libgfortran
maybe-all-target-libgfortran:

.PHONY: check-target-libgfortran maybe-check-target-libgfortran
maybe-check-target-libgfortran:

.PHONY: install-target-libgfortran maybe-install-target-libgfortran
maybe-install-target-libgfortran:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libgfortran info-target-libgfortran
maybe-info-target-libgfortran:

.PHONY: maybe-dvi-target-libgfortran dvi-target-libgfortran
maybe-dvi-target-libgfortran:

.PHONY: maybe-TAGS-target-libgfortran TAGS-target-libgfortran
maybe-TAGS-target-libgfortran:

.PHONY: maybe-install-info-target-libgfortran install-info-target-libgfortran
maybe-install-info-target-libgfortran:

.PHONY: maybe-installcheck-target-libgfortran installcheck-target-libgfortran
maybe-installcheck-target-libgfortran:

.PHONY: maybe-mostlyclean-target-libgfortran mostlyclean-target-libgfortran
maybe-mostlyclean-target-libgfortran:

.PHONY: maybe-clean-target-libgfortran clean-target-libgfortran
maybe-clean-target-libgfortran:

.PHONY: maybe-distclean-target-libgfortran distclean-target-libgfortran
maybe-distclean-target-libgfortran:

.PHONY: maybe-maintainer-clean-target-libgfortran maintainer-clean-target-libgfortran
maybe-maintainer-clean-target-libgfortran:


.PHONY: configure-target-libobjc maybe-configure-target-libobjc
maybe-configure-target-libobjc:

.PHONY: all-target-libobjc maybe-all-target-libobjc
maybe-all-target-libobjc:

.PHONY: check-target-libobjc maybe-check-target-libobjc
maybe-check-target-libobjc:

.PHONY: install-target-libobjc maybe-install-target-libobjc
maybe-install-target-libobjc:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libobjc info-target-libobjc
maybe-info-target-libobjc:

.PHONY: maybe-dvi-target-libobjc dvi-target-libobjc
maybe-dvi-target-libobjc:

.PHONY: maybe-TAGS-target-libobjc TAGS-target-libobjc
maybe-TAGS-target-libobjc:

.PHONY: maybe-install-info-target-libobjc install-info-target-libobjc
maybe-install-info-target-libobjc:

.PHONY: maybe-installcheck-target-libobjc installcheck-target-libobjc
maybe-installcheck-target-libobjc:

.PHONY: maybe-mostlyclean-target-libobjc mostlyclean-target-libobjc
maybe-mostlyclean-target-libobjc:

.PHONY: maybe-clean-target-libobjc clean-target-libobjc
maybe-clean-target-libobjc:

.PHONY: maybe-distclean-target-libobjc distclean-target-libobjc
maybe-distclean-target-libobjc:

.PHONY: maybe-maintainer-clean-target-libobjc maintainer-clean-target-libobjc
maybe-maintainer-clean-target-libobjc:


.PHONY: configure-target-libtermcap maybe-configure-target-libtermcap
maybe-configure-target-libtermcap:

.PHONY: all-target-libtermcap maybe-all-target-libtermcap
maybe-all-target-libtermcap:

.PHONY: check-target-libtermcap maybe-check-target-libtermcap
maybe-check-target-libtermcap:

.PHONY: install-target-libtermcap maybe-install-target-libtermcap
maybe-install-target-libtermcap:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libtermcap info-target-libtermcap
maybe-info-target-libtermcap:

.PHONY: maybe-dvi-target-libtermcap dvi-target-libtermcap
maybe-dvi-target-libtermcap:

.PHONY: maybe-TAGS-target-libtermcap TAGS-target-libtermcap
maybe-TAGS-target-libtermcap:

.PHONY: maybe-install-info-target-libtermcap install-info-target-libtermcap
maybe-install-info-target-libtermcap:

.PHONY: maybe-installcheck-target-libtermcap installcheck-target-libtermcap
maybe-installcheck-target-libtermcap:

.PHONY: maybe-mostlyclean-target-libtermcap mostlyclean-target-libtermcap
maybe-mostlyclean-target-libtermcap:

.PHONY: maybe-clean-target-libtermcap clean-target-libtermcap
maybe-clean-target-libtermcap:

.PHONY: maybe-distclean-target-libtermcap distclean-target-libtermcap
maybe-distclean-target-libtermcap:

.PHONY: maybe-maintainer-clean-target-libtermcap maintainer-clean-target-libtermcap
maybe-maintainer-clean-target-libtermcap:


.PHONY: configure-target-winsup maybe-configure-target-winsup
maybe-configure-target-winsup:

.PHONY: all-target-winsup maybe-all-target-winsup
maybe-all-target-winsup:

.PHONY: check-target-winsup maybe-check-target-winsup
maybe-check-target-winsup:

.PHONY: install-target-winsup maybe-install-target-winsup
maybe-install-target-winsup:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-winsup info-target-winsup
maybe-info-target-winsup:

.PHONY: maybe-dvi-target-winsup dvi-target-winsup
maybe-dvi-target-winsup:

.PHONY: maybe-TAGS-target-winsup TAGS-target-winsup
maybe-TAGS-target-winsup:

.PHONY: maybe-install-info-target-winsup install-info-target-winsup
maybe-install-info-target-winsup:

.PHONY: maybe-installcheck-target-winsup installcheck-target-winsup
maybe-installcheck-target-winsup:

.PHONY: maybe-mostlyclean-target-winsup mostlyclean-target-winsup
maybe-mostlyclean-target-winsup:

.PHONY: maybe-clean-target-winsup clean-target-winsup
maybe-clean-target-winsup:

.PHONY: maybe-distclean-target-winsup distclean-target-winsup
maybe-distclean-target-winsup:

.PHONY: maybe-maintainer-clean-target-winsup maintainer-clean-target-winsup
maybe-maintainer-clean-target-winsup:


.PHONY: configure-target-libgloss maybe-configure-target-libgloss
maybe-configure-target-libgloss:

.PHONY: all-target-libgloss maybe-all-target-libgloss
maybe-all-target-libgloss:

.PHONY: check-target-libgloss maybe-check-target-libgloss
maybe-check-target-libgloss:

.PHONY: install-target-libgloss maybe-install-target-libgloss
maybe-install-target-libgloss:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libgloss info-target-libgloss
maybe-info-target-libgloss:

.PHONY: maybe-dvi-target-libgloss dvi-target-libgloss
maybe-dvi-target-libgloss:

.PHONY: maybe-TAGS-target-libgloss TAGS-target-libgloss
maybe-TAGS-target-libgloss:

.PHONY: maybe-install-info-target-libgloss install-info-target-libgloss
maybe-install-info-target-libgloss:

.PHONY: maybe-installcheck-target-libgloss installcheck-target-libgloss
maybe-installcheck-target-libgloss:

.PHONY: maybe-mostlyclean-target-libgloss mostlyclean-target-libgloss
maybe-mostlyclean-target-libgloss:

.PHONY: maybe-clean-target-libgloss clean-target-libgloss
maybe-clean-target-libgloss:

.PHONY: maybe-distclean-target-libgloss distclean-target-libgloss
maybe-distclean-target-libgloss:

.PHONY: maybe-maintainer-clean-target-libgloss maintainer-clean-target-libgloss
maybe-maintainer-clean-target-libgloss:


.PHONY: configure-target-libiberty maybe-configure-target-libiberty
maybe-configure-target-libiberty:

.PHONY: all-target-libiberty maybe-all-target-libiberty
maybe-all-target-libiberty:

.PHONY: check-target-libiberty maybe-check-target-libiberty
maybe-check-target-libiberty:

.PHONY: install-target-libiberty maybe-install-target-libiberty
maybe-install-target-libiberty:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libiberty info-target-libiberty
maybe-info-target-libiberty:

.PHONY: maybe-dvi-target-libiberty dvi-target-libiberty
maybe-dvi-target-libiberty:

.PHONY: maybe-TAGS-target-libiberty TAGS-target-libiberty
maybe-TAGS-target-libiberty:

.PHONY: maybe-install-info-target-libiberty install-info-target-libiberty
maybe-install-info-target-libiberty:

.PHONY: maybe-installcheck-target-libiberty installcheck-target-libiberty
maybe-installcheck-target-libiberty:

.PHONY: maybe-mostlyclean-target-libiberty mostlyclean-target-libiberty
maybe-mostlyclean-target-libiberty:

.PHONY: maybe-clean-target-libiberty clean-target-libiberty
maybe-clean-target-libiberty:

.PHONY: maybe-distclean-target-libiberty distclean-target-libiberty
maybe-distclean-target-libiberty:

.PHONY: maybe-maintainer-clean-target-libiberty maintainer-clean-target-libiberty
maybe-maintainer-clean-target-libiberty:


.PHONY: configure-target-gperf maybe-configure-target-gperf
maybe-configure-target-gperf:

.PHONY: all-target-gperf maybe-all-target-gperf
maybe-all-target-gperf:

.PHONY: check-target-gperf maybe-check-target-gperf
maybe-check-target-gperf:

.PHONY: install-target-gperf maybe-install-target-gperf
maybe-install-target-gperf:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-gperf info-target-gperf
maybe-info-target-gperf:

.PHONY: maybe-dvi-target-gperf dvi-target-gperf
maybe-dvi-target-gperf:

.PHONY: maybe-TAGS-target-gperf TAGS-target-gperf
maybe-TAGS-target-gperf:

.PHONY: maybe-install-info-target-gperf install-info-target-gperf
maybe-install-info-target-gperf:

.PHONY: maybe-installcheck-target-gperf installcheck-target-gperf
maybe-installcheck-target-gperf:

.PHONY: maybe-mostlyclean-target-gperf mostlyclean-target-gperf
maybe-mostlyclean-target-gperf:

.PHONY: maybe-clean-target-gperf clean-target-gperf
maybe-clean-target-gperf:

.PHONY: maybe-distclean-target-gperf distclean-target-gperf
maybe-distclean-target-gperf:

.PHONY: maybe-maintainer-clean-target-gperf maintainer-clean-target-gperf
maybe-maintainer-clean-target-gperf:


.PHONY: configure-target-examples maybe-configure-target-examples
maybe-configure-target-examples:

.PHONY: all-target-examples maybe-all-target-examples
maybe-all-target-examples:

.PHONY: check-target-examples maybe-check-target-examples
maybe-check-target-examples:

.PHONY: install-target-examples maybe-install-target-examples
maybe-install-target-examples:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-examples info-target-examples
maybe-info-target-examples:

.PHONY: maybe-dvi-target-examples dvi-target-examples
maybe-dvi-target-examples:

.PHONY: maybe-TAGS-target-examples TAGS-target-examples
maybe-TAGS-target-examples:

.PHONY: maybe-install-info-target-examples install-info-target-examples
maybe-install-info-target-examples:

.PHONY: maybe-installcheck-target-examples installcheck-target-examples
maybe-installcheck-target-examples:

.PHONY: maybe-mostlyclean-target-examples mostlyclean-target-examples
maybe-mostlyclean-target-examples:

.PHONY: maybe-clean-target-examples clean-target-examples
maybe-clean-target-examples:

.PHONY: maybe-distclean-target-examples distclean-target-examples
maybe-distclean-target-examples:

.PHONY: maybe-maintainer-clean-target-examples maintainer-clean-target-examples
maybe-maintainer-clean-target-examples:


.PHONY: configure-target-libffi maybe-configure-target-libffi
maybe-configure-target-libffi:

.PHONY: all-target-libffi maybe-all-target-libffi
maybe-all-target-libffi:

.PHONY: check-target-libffi maybe-check-target-libffi
maybe-check-target-libffi:

.PHONY: install-target-libffi maybe-install-target-libffi
maybe-install-target-libffi:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libffi info-target-libffi
maybe-info-target-libffi:

.PHONY: maybe-dvi-target-libffi dvi-target-libffi
maybe-dvi-target-libffi:

.PHONY: maybe-TAGS-target-libffi TAGS-target-libffi
maybe-TAGS-target-libffi:

.PHONY: maybe-install-info-target-libffi install-info-target-libffi
maybe-install-info-target-libffi:

.PHONY: maybe-installcheck-target-libffi installcheck-target-libffi
maybe-installcheck-target-libffi:

.PHONY: maybe-mostlyclean-target-libffi mostlyclean-target-libffi
maybe-mostlyclean-target-libffi:

.PHONY: maybe-clean-target-libffi clean-target-libffi
maybe-clean-target-libffi:

.PHONY: maybe-distclean-target-libffi distclean-target-libffi
maybe-distclean-target-libffi:

.PHONY: maybe-maintainer-clean-target-libffi maintainer-clean-target-libffi
maybe-maintainer-clean-target-libffi:


.PHONY: configure-target-libjava maybe-configure-target-libjava
maybe-configure-target-libjava:

.PHONY: all-target-libjava maybe-all-target-libjava
maybe-all-target-libjava:

.PHONY: check-target-libjava maybe-check-target-libjava
maybe-check-target-libjava:

.PHONY: install-target-libjava maybe-install-target-libjava
maybe-install-target-libjava:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libjava info-target-libjava
maybe-info-target-libjava:

.PHONY: maybe-dvi-target-libjava dvi-target-libjava
maybe-dvi-target-libjava:

.PHONY: maybe-TAGS-target-libjava TAGS-target-libjava
maybe-TAGS-target-libjava:

.PHONY: maybe-install-info-target-libjava install-info-target-libjava
maybe-install-info-target-libjava:

.PHONY: maybe-installcheck-target-libjava installcheck-target-libjava
maybe-installcheck-target-libjava:

.PHONY: maybe-mostlyclean-target-libjava mostlyclean-target-libjava
maybe-mostlyclean-target-libjava:

.PHONY: maybe-clean-target-libjava clean-target-libjava
maybe-clean-target-libjava:

.PHONY: maybe-distclean-target-libjava distclean-target-libjava
maybe-distclean-target-libjava:

.PHONY: maybe-maintainer-clean-target-libjava maintainer-clean-target-libjava
maybe-maintainer-clean-target-libjava:


.PHONY: configure-target-zlib maybe-configure-target-zlib
maybe-configure-target-zlib:

.PHONY: all-target-zlib maybe-all-target-zlib
maybe-all-target-zlib:

.PHONY: check-target-zlib maybe-check-target-zlib
maybe-check-target-zlib:

.PHONY: install-target-zlib maybe-install-target-zlib
maybe-install-target-zlib:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-zlib info-target-zlib
maybe-info-target-zlib:

.PHONY: maybe-dvi-target-zlib dvi-target-zlib
maybe-dvi-target-zlib:

.PHONY: maybe-TAGS-target-zlib TAGS-target-zlib
maybe-TAGS-target-zlib:

.PHONY: maybe-install-info-target-zlib install-info-target-zlib
maybe-install-info-target-zlib:

.PHONY: maybe-installcheck-target-zlib installcheck-target-zlib
maybe-installcheck-target-zlib:

.PHONY: maybe-mostlyclean-target-zlib mostlyclean-target-zlib
maybe-mostlyclean-target-zlib:

.PHONY: maybe-clean-target-zlib clean-target-zlib
maybe-clean-target-zlib:

.PHONY: maybe-distclean-target-zlib distclean-target-zlib
maybe-distclean-target-zlib:

.PHONY: maybe-maintainer-clean-target-zlib maintainer-clean-target-zlib
maybe-maintainer-clean-target-zlib:


.PHONY: configure-target-boehm-gc maybe-configure-target-boehm-gc
maybe-configure-target-boehm-gc:

.PHONY: all-target-boehm-gc maybe-all-target-boehm-gc
maybe-all-target-boehm-gc:

.PHONY: check-target-boehm-gc maybe-check-target-boehm-gc
maybe-check-target-boehm-gc:

.PHONY: install-target-boehm-gc maybe-install-target-boehm-gc
maybe-install-target-boehm-gc:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-boehm-gc info-target-boehm-gc
maybe-info-target-boehm-gc:

.PHONY: maybe-dvi-target-boehm-gc dvi-target-boehm-gc
maybe-dvi-target-boehm-gc:

.PHONY: maybe-TAGS-target-boehm-gc TAGS-target-boehm-gc
maybe-TAGS-target-boehm-gc:

.PHONY: maybe-install-info-target-boehm-gc install-info-target-boehm-gc
maybe-install-info-target-boehm-gc:

.PHONY: maybe-installcheck-target-boehm-gc installcheck-target-boehm-gc
maybe-installcheck-target-boehm-gc:

.PHONY: maybe-mostlyclean-target-boehm-gc mostlyclean-target-boehm-gc
maybe-mostlyclean-target-boehm-gc:

.PHONY: maybe-clean-target-boehm-gc clean-target-boehm-gc
maybe-clean-target-boehm-gc:

.PHONY: maybe-distclean-target-boehm-gc distclean-target-boehm-gc
maybe-distclean-target-boehm-gc:

.PHONY: maybe-maintainer-clean-target-boehm-gc maintainer-clean-target-boehm-gc
maybe-maintainer-clean-target-boehm-gc:


.PHONY: configure-target-qthreads maybe-configure-target-qthreads
maybe-configure-target-qthreads:

.PHONY: all-target-qthreads maybe-all-target-qthreads
maybe-all-target-qthreads:

.PHONY: check-target-qthreads maybe-check-target-qthreads
maybe-check-target-qthreads:

.PHONY: install-target-qthreads maybe-install-target-qthreads
maybe-install-target-qthreads:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-qthreads info-target-qthreads
maybe-info-target-qthreads:

.PHONY: maybe-dvi-target-qthreads dvi-target-qthreads
maybe-dvi-target-qthreads:

.PHONY: maybe-TAGS-target-qthreads TAGS-target-qthreads
maybe-TAGS-target-qthreads:

.PHONY: maybe-install-info-target-qthreads install-info-target-qthreads
maybe-install-info-target-qthreads:

.PHONY: maybe-installcheck-target-qthreads installcheck-target-qthreads
maybe-installcheck-target-qthreads:

.PHONY: maybe-mostlyclean-target-qthreads mostlyclean-target-qthreads
maybe-mostlyclean-target-qthreads:

.PHONY: maybe-clean-target-qthreads clean-target-qthreads
maybe-clean-target-qthreads:

.PHONY: maybe-distclean-target-qthreads distclean-target-qthreads
maybe-distclean-target-qthreads:

.PHONY: maybe-maintainer-clean-target-qthreads maintainer-clean-target-qthreads
maybe-maintainer-clean-target-qthreads:


.PHONY: configure-target-rda maybe-configure-target-rda
maybe-configure-target-rda:

.PHONY: all-target-rda maybe-all-target-rda
maybe-all-target-rda:

.PHONY: check-target-rda maybe-check-target-rda
maybe-check-target-rda:

.PHONY: install-target-rda maybe-install-target-rda
maybe-install-target-rda:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-rda info-target-rda
maybe-info-target-rda:

.PHONY: maybe-dvi-target-rda dvi-target-rda
maybe-dvi-target-rda:

.PHONY: maybe-TAGS-target-rda TAGS-target-rda
maybe-TAGS-target-rda:

.PHONY: maybe-install-info-target-rda install-info-target-rda
maybe-install-info-target-rda:

.PHONY: maybe-installcheck-target-rda installcheck-target-rda
maybe-installcheck-target-rda:

.PHONY: maybe-mostlyclean-target-rda mostlyclean-target-rda
maybe-mostlyclean-target-rda:

.PHONY: maybe-clean-target-rda clean-target-rda
maybe-clean-target-rda:

.PHONY: maybe-distclean-target-rda distclean-target-rda
maybe-distclean-target-rda:

.PHONY: maybe-maintainer-clean-target-rda maintainer-clean-target-rda
maybe-maintainer-clean-target-rda:


.PHONY: configure-target-libada maybe-configure-target-libada
maybe-configure-target-libada:

.PHONY: all-target-libada maybe-all-target-libada
maybe-all-target-libada:

.PHONY: check-target-libada maybe-check-target-libada
maybe-check-target-libada:

.PHONY: install-target-libada maybe-install-target-libada
maybe-install-target-libada:

# Other targets (info, dvi, etc.)

.PHONY: maybe-info-target-libada info-target-libada
maybe-info-target-libada:

.PHONY: maybe-dvi-target-libada dvi-target-libada
maybe-dvi-target-libada:

.PHONY: maybe-TAGS-target-libada TAGS-target-libada
maybe-TAGS-target-libada:

.PHONY: maybe-install-info-target-libada install-info-target-libada
maybe-install-info-target-libada:

.PHONY: maybe-installcheck-target-libada installcheck-target-libada
maybe-installcheck-target-libada:

.PHONY: maybe-mostlyclean-target-libada mostlyclean-target-libada
maybe-mostlyclean-target-libada:

.PHONY: maybe-clean-target-libada clean-target-libada
maybe-clean-target-libada:

.PHONY: maybe-distclean-target-libada distclean-target-libada
maybe-distclean-target-libada:

.PHONY: maybe-maintainer-clean-target-libada maintainer-clean-target-libada
maybe-maintainer-clean-target-libada:



# ----------
# GCC module
# ----------

# Unfortunately, while gcc _should_ be a host module,
# libgcc is a target module, and gen* programs are
# build modules.  So GCC is a sort of hybrid.

# gcc is the only module which uses GCC_FLAGS_TO_PASS.
# Don't use shared host config.cache, as it will confuse later
# directories; GCC wants slightly different values for some
# precious variables.  *sigh*

# We must skip configuring if toplevel bootstrap is going.
.PHONY: configure-gcc maybe-configure-gcc
maybe-configure-gcc:

# Don't 'make all' in gcc if it's already been made by 'bootstrap'; that
# causes trouble.  This wart will be fixed eventually by moving
# the bootstrap behavior to this file.
.PHONY: all-gcc maybe-all-gcc
maybe-all-gcc:

.PHONY: check-gcc maybe-check-gcc
maybe-check-gcc:

.PHONY: install-gcc maybe-install-gcc
maybe-install-gcc:

# Install the gcc headers files, but not the fixed include files,
# which Cygnus is not allowed to distribute.  This rule is very
# dependent on the workings of the gcc Makefile.in.
.PHONY: gcc-no-fixedincludes
gcc-no-fixedincludes:
	@if [ -f ./gcc/Makefile ]; then \
	  rm -rf gcc/tmp-include; \
	  mv gcc/include gcc/tmp-include 2>/dev/null; \
	  mkdir gcc/include; \
	  cp $(srcdir)/gcc/gsyslimits.h gcc/include/syslimits.h; \
	  touch gcc/stmp-fixinc gcc/include/fixed; \
	  rm -f gcc/stmp-headers gcc/stmp-int-hdrs; \
	  r=`${PWD_COMMAND}`; export r; \
	  s=`cd $(srcdir); ${PWD_COMMAND}` ; export s; \
	  $(SET_LIB_PATH) \
	  $(HOST_EXPORTS) \
	  (cd ./gcc && \
	   $(MAKE) $(GCC_FLAGS_TO_PASS) install); \
	  rm -rf gcc/include; \
	  mv gcc/tmp-include gcc/include 2>/dev/null; \
	else true; fi

# Other targets (dvi, info, etc.)

.PHONY: maybe-info-gcc info-gcc
maybe-info-gcc:


.PHONY: maybe-dvi-gcc dvi-gcc
maybe-dvi-gcc:


.PHONY: maybe-TAGS-gcc TAGS-gcc
maybe-TAGS-gcc:


.PHONY: maybe-install-info-gcc install-info-gcc
maybe-install-info-gcc:


.PHONY: maybe-installcheck-gcc installcheck-gcc
maybe-installcheck-gcc:


.PHONY: maybe-mostlyclean-gcc mostlyclean-gcc
maybe-mostlyclean-gcc:


.PHONY: maybe-clean-gcc clean-gcc
maybe-clean-gcc:


.PHONY: maybe-distclean-gcc distclean-gcc
maybe-distclean-gcc:


.PHONY: maybe-maintainer-clean-gcc maintainer-clean-gcc
maybe-maintainer-clean-gcc:




# --------------------------------------
# Dependencies between different modules
# --------------------------------------

# There are two types of dependencies here: 'hard' dependencies, where one
# module simply won't build without the other; and 'soft' dependencies, where
# if the depended-on module is missing, the depending module will do without
# or find a substitute somewhere (perhaps installed).  Soft dependencies
# are specified by depending on a 'maybe-' target.  If you're not sure,
# it's safer to use a soft dependency.

# Build modules
all-build-bison: maybe-all-build-texinfo
all-build-flex: maybe-all-build-texinfo
all-build-libiberty: maybe-all-build-texinfo
all-build-m4: maybe-all-build-libiberty maybe-all-build-texinfo

# Host modules specific to gcc.
# GCC needs to identify certain tools.
# GCC also needs the information exported by the intl configure script.
configure-gcc: maybe-configure-intl maybe-configure-binutils maybe-configure-gas maybe-configure-ld maybe-configure-bison maybe-configure-flex
all-gcc: maybe-all-libiberty maybe-all-intl maybe-all-texinfo maybe-all-bison maybe-all-byacc maybe-all-flex maybe-all-binutils maybe-all-gas maybe-all-ld maybe-all-zlib maybe-all-libbanshee maybe-all-libcpp
configure-libcpp: maybe-configure-libiberty maybe-configure-intl
all-libcpp: maybe-all-libiberty maybe-all-intl
# This is a slightly kludgy method of getting dependencies on 
# all-build-libiberty correct; it would be better to build it every time.
all-gcc: maybe-all-build-libiberty
all-bootstrap: maybe-all-binutils maybe-all-bison maybe-all-byacc maybe-all-flex maybe-all-gas maybe-all-intl maybe-all-ld maybe-all-libcpp maybe-all-libbanshee maybe-all-libiberty maybe-all-texinfo maybe-all-zlib 

# Host modules specific to gdb.
# GDB needs to know that the simulator is being built.
configure-gdb: maybe-configure-itcl maybe-configure-tcl maybe-configure-tk maybe-configure-sim
GDB_TK = 
all-gdb: maybe-all-libiberty maybe-all-opcodes maybe-all-bfd maybe-all-mmalloc maybe-all-readline maybe-all-bison maybe-all-byacc maybe-all-sim $(gdbnlmrequirements) $(GDB_TK)
install-gdb: maybe-install-tcl maybe-install-tk maybe-install-itcl maybe-install-tix maybe-install-libgui
configure-libgui: maybe-configure-tcl maybe-configure-tk
all-libgui: maybe-all-tcl maybe-all-tk maybe-all-itcl

# Host modules specific to binutils.
configure-bfd: configure-libiberty
all-bfd: maybe-all-libiberty maybe-all-intl
all-binutils: maybe-all-libiberty maybe-all-opcodes maybe-all-bfd maybe-all-flex maybe-all-bison maybe-all-byacc maybe-all-intl
# We put install-opcodes before install-binutils because the installed
# binutils might be on PATH, and they might need the shared opcodes
# library.
install-binutils: maybe-install-opcodes
# libopcodes depends on libbfd
install-opcodes: maybe-install-bfd
all-gas: maybe-all-libiberty maybe-all-opcodes maybe-all-bfd maybe-all-intl
all-gprof: maybe-all-libiberty maybe-all-bfd maybe-all-opcodes maybe-all-intl
all-ld: maybe-all-libiberty maybe-all-bfd maybe-all-opcodes maybe-all-bison maybe-all-byacc maybe-all-flex maybe-all-intl
all-opcodes: maybe-all-bfd maybe-all-libiberty

# Other host modules in the 'src' repository.
all-dejagnu: maybe-all-tcl maybe-all-expect maybe-all-tk
configure-expect: maybe-configure-tcl maybe-configure-tk
all-expect: maybe-all-tcl maybe-all-tk
configure-itcl: maybe-configure-tcl maybe-configure-tk
all-itcl: maybe-all-tcl maybe-all-tk
# We put install-tcl before install-itcl because itcl wants to run a
# program on installation which uses the Tcl libraries.
install-itcl: maybe-install-tcl
all-sid: maybe-all-libiberty maybe-all-bfd maybe-all-opcodes maybe-all-tcl maybe-all-tk
install-sid: maybe-install-tcl maybe-install-tk
all-sim: maybe-all-libiberty maybe-all-bfd maybe-all-opcodes maybe-all-readline maybe-configure-gdb
configure-tk: maybe-configure-tcl
all-tk: maybe-all-tcl
configure-tix: maybe-configure-tcl maybe-configure-tk
all-tix: maybe-all-tcl maybe-all-tk
all-texinfo: maybe-all-libiberty

# Other host modules.  Warning, these are not well tested.
all-autoconf: maybe-all-m4 maybe-all-texinfo
all-automake: maybe-all-m4 maybe-all-texinfo
all-bison: maybe-all-texinfo
all-diff: maybe-all-libiberty
all-fastjar: maybe-all-zlib maybe-all-libiberty
all-fileutils: maybe-all-libiberty
all-flex: maybe-all-libiberty maybe-all-bison maybe-all-byacc
all-gzip: maybe-all-libiberty
all-hello: maybe-all-libiberty
all-m4: maybe-all-libiberty maybe-all-texinfo
all-make: maybe-all-libiberty maybe-all-intl
all-patch: maybe-all-libiberty
all-prms: maybe-all-libiberty
all-recode: maybe-all-libiberty
all-sed: maybe-all-libiberty
all-send-pr: maybe-all-prms
all-tar: maybe-all-libiberty
all-uudecode: maybe-all-libiberty

ALL_GCC = maybe-all-gcc
ALL_GCC_C = $(ALL_GCC) maybe-all-target-newlib maybe-all-target-libgloss
ALL_GCC_CXX = $(ALL_GCC_C) maybe-all-target-libstdc++-v3

# Target modules specific to gcc.
configure-target-boehm-gc: $(ALL_GCC_C) maybe-configure-target-qthreads
configure-target-fastjar: maybe-configure-target-zlib
all-target-fastjar: maybe-all-target-zlib maybe-all-target-libiberty
configure-target-libada: $(ALL_GCC_C)
configure-target-libgfortran: $(ALL_GCC_C)
configure-target-libffi: $(ALL_GCC_C) 
configure-target-libjava: $(ALL_GCC_C) maybe-configure-target-zlib maybe-configure-target-boehm-gc maybe-configure-target-qthreads maybe-configure-target-libffi
all-target-libjava: maybe-all-fastjar maybe-all-target-zlib maybe-all-target-boehm-gc maybe-all-target-qthreads maybe-all-target-libffi
configure-target-libobjc: $(ALL_GCC_C)
all-target-libobjc: maybe-all-target-libiberty
configure-target-libstdc++-v3: $(ALL_GCC_C)
all-target-libstdc++-v3: maybe-all-target-libiberty
configure-target-zlib: $(ALL_GCC_C)

# Target modules in the 'src' repository.
configure-target-examples: $(ALL_GCC_C)
configure-target-libgloss: $(ALL_GCC)
all-target-libgloss: maybe-configure-target-newlib
configure-target-libiberty: $(ALL_GCC)
configure-target-libtermcap: $(ALL_GCC_C)
configure-target-newlib: $(ALL_GCC)
configure-target-rda: $(ALL_GCC_C)
configure-target-winsup: $(ALL_GCC_C)
all-target-winsup: maybe-all-target-libiberty maybe-all-target-libtermcap

# Other target modules.  Warning, these are not well tested.
configure-target-gperf: $(ALL_GCC_CXX)
all-target-gperf: maybe-all-target-libiberty maybe-all-target-libstdc++-v3
configure-target-qthreads: $(ALL_GCC_C)

# Serialization dependencies.  Host configures don't work well in parallel to
# each other, due to contention over config.cache.  Target configures and 
# build configures are similar.

# serdep.tmp

# --------------------------------
# Regenerating top level configury
# --------------------------------

# Multilib.out tells target dirs what multilibs they should build.
# There is really only one copy.  We use the 'timestamp' method to
# work around various timestamp bugs on some systems.
# We use move-if-change so that it's only considered updated when it
# actually changes, because it has to depend on a phony target.
multilib.out: maybe-all-gcc
	@r=`${PWD_COMMAND}`; export r; \
	echo "Checking multilib configuration..."; \
	$(CC_FOR_TARGET) --print-multi-lib > multilib.tmp 2> /dev/null ; \
	$(SHELL) $(srcdir)/move-if-change multilib.tmp multilib.out ; \

# Rebuilding Makefile.in, using autogen.
AUTOGEN = autogen
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.tpl $(srcdir)/Makefile.def
	cd $(srcdir) && $(AUTOGEN) Makefile.def

# Rebuilding Makefile.
Makefile: $(srcdir)/Makefile.in config.status
	CONFIG_FILES=$@ CONFIG_HEADERS= $(SHELL) ./config.status

config.status: configure $(gcc_version_trigger)
	CONFIG_SHELL="$(SHELL)" $(SHELL) ./config.status --recheck

# Rebuilding configure.
AUTOCONF = autoconf
$(srcdir)/configure: # $(srcdir)/configure.in $(srcdir)/config/acx.m4
	cd $(srcdir) && $(AUTOCONF)

# ------------------------------
# Special directives to GNU Make
# ------------------------------

# Don't pass command-line variables to submakes.
.NOEXPORT:
MAKEOVERRIDES=

# end of Makefile.in
