# emul32 library
if HAVE_EMUL32

emul32libdir = $(EMUL32LIBDIR)

emul32lib_LTLIBRARIES = \
	liblsi-intercept.la

liblsi_intercept_la_SOURCES = \
	../intercept.c

liblsi_intercept_la_CFLAGS = \
	$(AM_CFLAGS) \
	-fvisibility=hidden \
	-m32
endif
# End emul32 library
