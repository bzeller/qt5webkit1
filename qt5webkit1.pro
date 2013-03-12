include(common-vars.pri)
include(common-project-config.pri)

TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS = \
    src \
    tests

include(common-installs-config.pri)

DISTNAME = $${PROJECT_NAME}-$${PROJECT_VERSION}
dist.commands = "git archive --format=tar --prefix=$${DISTNAME}/ HEAD | bzip2 -9 > $${DISTNAME}.tar.bz2"
QMAKE_EXTRA_TARGETS += dist
