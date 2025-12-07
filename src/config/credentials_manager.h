<<<<<<< HEAD
=======

>>>>>>> origin/main
#ifndef CREDENTIALS_MANAGER_H
#define CREDENTIALS_MANAGER_H

#include <Arduino.h>
<<<<<<< HEAD
=======
#include "../mode_config.h"

#if MODE_PRODUCTION
>>>>>>> origin/main

// Dynamic credentials structure
struct DynamicCredentials {
    String wifi_ssid;
    String wifi_password;
    String admin_password_hash;  // SHA-256 hex string
    String vps_auth_token;
<<<<<<< HEAD
    String vps_url;             // VPS URL
=======
    String vps_url;             // 🆕 NEW: VPS URL
>>>>>>> origin/main
    String device_id;
    bool loaded_from_fram;
};

// Global dynamic credentials
extern DynamicCredentials dynamicCredentials;

// Credentials management functions
bool initCredentialsManager();
bool loadCredentialsFromFRAM();
bool areCredentialsLoaded();
void fallbackToHardcodedCredentials();

// Accessor functions for compatibility with existing code
const char* getWiFiSSID();
const char* getWiFiPassword();
const char* getAdminPasswordHash();
const char* getVPSAuthToken();
<<<<<<< HEAD
const char* getVPSURL();
const char* getDeviceID();

#endif
=======
const char* getVPSURL();        // 🆕 NEW
const char* getDeviceID();

#else
// Production mode disabled - empty functions
inline bool initCredentialsManager() { return false; }
inline bool loadCredentialsFromFRAM() { return false; }
inline bool areCredentialsLoaded() { return false; }
inline void fallbackToHardcodedCredentials() {}
#endif

#endif
>>>>>>> origin/main
