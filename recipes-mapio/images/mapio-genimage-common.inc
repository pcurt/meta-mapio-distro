DESCRIPTION = "MAPIO genimage base"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/files/common-licenses/GPL-2.0-only;md5=801f80980d171dd6425610833a22dbe6"

SRC_URI += "file://genimage.config"

inherit mapio-genimage-${SOC_FAMILY}