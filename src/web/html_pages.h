<<<<<<< HEAD
=======

>>>>>>> origin/main
#ifndef HTML_PAGES_H
#define HTML_PAGES_H

#include <Arduino.h>
<<<<<<< HEAD

String getDashboardHTML();
String getLoginHTML();

#endif
=======
#include "../mode_config.h"

#if ENABLE_WEB_SERVER
    String getDashboardHTML();
    String getLoginHTML();
#endif

#endif
>>>>>>> origin/main
