--- lib/include/vmware/tools/log.h.orig	2014-11-07 12:41:57.111095753 +0100
+++ lib/include/vmware/tools/log.h	2014-11-07 12:42:24.867212316 +0100
@@ -134,8 +134,9 @@
  *******************************************************************************
  */
 
+#ifndef g_info
 #define g_info(fmt, ...) g_log(G_LOG_DOMAIN, G_LOG_LEVEL_INFO, fmt, ## __VA_ARGS__)
-
+#endif
 
 /*
  *******************************************************************************
