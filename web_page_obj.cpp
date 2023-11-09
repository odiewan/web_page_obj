#include "web_page_obj.h"

//=================================================================================================
web_page_obj::web_page_obj() {
    wpoConstCore();

}

//=================================================================================================
web_page_obj::web_page_obj(uint16_t nIdx, String nTitle, String nDesc, String nURL) {
    wpoConstCore();
    wpoIdx = nIdx;
    wpoTitle = nTitle;
    wpoDesc = nDesc;
    wpoURL = nURL;
}

//=================================================================================================
void web_page_obj::wpoRenderHTML(String nCore) {

}

//=================================================================================================
String web_page_obj::wpoRenderContents() {
    return "";
}

//=================================================================================================
void web_page_obj::wpoConstCore() {
    wpoIdx = 0;
    wpoType = 0;
    wpoTitle = "Default title";
    wpoDesc = "Default desc";
    wpoURL = "def_url";
    wpoHTML =   "<div class='container'>";
    wpoHTML += "</div>";
    wpoHTML += "<div class='container'>";
    wpoHTML += "</div>";
}