#ifndef WEB_PAGE_OBJ_H_
#define WEB_PAGE_OBJ_H_

#include "Arduino.h"
#include <String.h>

class web_page_obj {
    public:
        uint16_t wpoIdx;
        uint16_t wpoType;
        String wpoTitle;
        String wpoDesc;
        String wpoURL;

        web_page_obj();
        web_page_obj(uint16_t nIdx, String nTitle, String nDesc, String nURL);
        void wpoRenderHTML(String nCore);
        String wpoRenderContents();

    private:
        String wpoHTML;

        void wpoConstCore();
};

#endif
