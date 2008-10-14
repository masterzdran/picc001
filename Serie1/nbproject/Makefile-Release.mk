#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/Release/MinGW-Windows

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/echoPlus.o \
	${OBJECTDIR}/verifyUnsignedTypes.o \
	${OBJECTDIR}/norepspaces.o \
	${OBJECTDIR}/reverse.o \
	${OBJECTDIR}/reset_bits.o \
	${OBJECTDIR}/distance_zeros.o \
	${OBJECTDIR}/verifyMultipleDistanceZeros.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS} dist/Release/MinGW-Windows/serie1.exe

dist/Release/MinGW-Windows/serie1.exe: ${OBJECTFILES}
	${MKDIR} -p dist/Release/MinGW-Windows
	${LINK.c} -o dist/Release/MinGW-Windows/serie1 ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/echoPlus.o: echoPlus.c 
	${MKDIR} -p ${OBJECTDIR}
	$(COMPILE.c) -O2 -o ${OBJECTDIR}/echoPlus.o echoPlus.c

${OBJECTDIR}/verifyUnsignedTypes.o: verifyUnsignedTypes.c 
	${MKDIR} -p ${OBJECTDIR}
	$(COMPILE.c) -O2 -o ${OBJECTDIR}/verifyUnsignedTypes.o verifyUnsignedTypes.c

${OBJECTDIR}/norepspaces.o: norepspaces.c 
	${MKDIR} -p ${OBJECTDIR}
	$(COMPILE.c) -O2 -o ${OBJECTDIR}/norepspaces.o norepspaces.c

${OBJECTDIR}/reverse.o: reverse.c 
	${MKDIR} -p ${OBJECTDIR}
	$(COMPILE.c) -O2 -o ${OBJECTDIR}/reverse.o reverse.c

${OBJECTDIR}/reset_bits.o: reset_bits.c 
	${MKDIR} -p ${OBJECTDIR}
	$(COMPILE.c) -O2 -o ${OBJECTDIR}/reset_bits.o reset_bits.c

${OBJECTDIR}/distance_zeros.o: distance_zeros.c 
	${MKDIR} -p ${OBJECTDIR}
	$(COMPILE.c) -O2 -o ${OBJECTDIR}/distance_zeros.o distance_zeros.c

${OBJECTDIR}/verifyMultipleDistanceZeros.o: verifyMultipleDistanceZeros.c 
	${MKDIR} -p ${OBJECTDIR}
	$(COMPILE.c) -O2 -o ${OBJECTDIR}/verifyMultipleDistanceZeros.o verifyMultipleDistanceZeros.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf:
	${RM} -r build/Release
	${RM} dist/Release/MinGW-Windows/serie1.exe

# Subprojects
.clean-subprojects:
