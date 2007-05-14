#if USE_GCONF
#include <gconf/gconf-client.h>

#define PREF_CITY_LAT 		MINBAR_PREFDIR "/city/lat"
#define PREF_CITY_LON  		MINBAR_PREFDIR "/city/lon"
#define PREF_CITY_NAME 		MINBAR_PREFDIR "/city/name"
#define PREF_CITY_HEIGHT	MINBAR_PREFDIR "/city/height"
#define PREF_CITY_CORRECTION  	MINBAR_PREFDIR "/prefs/correction"
#define PREF_PREF_PLAY  	MINBAR_PREFDIR "/prefs/play"
#define PREF_PREF_NOTIF  	MINBAR_PREFDIR "/prefs/notif"
#define PREF_PREF_NOTIF_TIME 	MINBAR_PREFDIR "/prefs/notiftime"
#define PREF_PREF_METHOD 	MINBAR_PREFDIR "/prefs/method"
#define PREF_PREF_HIDDEN 	MINBAR_PREFDIR "/prefs/starthidden"
#define PREF_PREF_CLOSES 	MINBAR_PREFDIR "/prefs/closes"
#define PREF_ATHAN_NORMAL 	MINBAR_PREFDIR "/athan/normal"
#define PREF_ATHAN_SUBH 	MINBAR_PREFDIR "/athan/subh"

#else
#include <glib.h>

#endif
