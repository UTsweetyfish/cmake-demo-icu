#include <iostream>
#include <unicode/locid.h>
#include <unicode/unistr.h>

using namespace icu;

void test() {
    // Define the system locale and ICU locale
    std::string s1 = "en_US";
    std::string s2 = "fr_FR";
    
    Locale systemLocale(s1.c_str());
    Locale IcuLocale(s2.c_str());
    UnicodeString localeHex(s2.c_str());
    
    // Get the display language in ICU locale
    UnicodeString displayLanguageIcu;
    IcuLocale.getDisplayLanguage(systemLocale, displayLanguageIcu);
    
    // Convert the display language to UTF-8 string
    std::string displayLanguageUtf8;
    displayLanguageIcu.toUTF8String(displayLanguageUtf8);
    
    // Get the display country in ICU locale
    UnicodeString displayCountryIcu;
    IcuLocale.getDisplayCountry(systemLocale, displayCountryIcu);
    
    // Convert the display country to UTF-8 string
    std::string displayCountryUtf8;
    displayCountryIcu.toUTF8String(displayCountryUtf8);
    
    // Output the results
    std::cout << "Display Language in ICU Locale: " << displayLanguageUtf8 << std::endl;
    std::cout << "Display Country in ICU Locale: " << displayCountryUtf8 << std::endl;
    
    return;
}

