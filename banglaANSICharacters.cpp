const char *banglaCharacters[] = {
    // Digits (0-9)
    "\u09E6", // ০
    "\u09E7", // ১
    "\u09E8", // ২
    "\u09E9", // ৩
    "\u09EA", // ৪
    "\u09EB", // ৫
    "\u09EC", // ৬
    "\u09ED", // ৭
    "\u09EE", // ৮
    "\u09EF", // ৯

    // Independent vowels (10-20)
    "\u0985", // অ
    "\u0986", // আ
    "\u0987", // ই
    "\u0988", // ঈ
    "\u0989", // উ
    "\u098A", // ঊ
    "\u098B", // ঋ
    "\u098F", // এ
    "\u0990", // ঐ
    "\u0993", // ও
    "\u0994", // ঔ

    // Consonants (21-63)
    "\u0995", // ক
    "\u0996", // খ
    "\u0997", // গ
    "\u0998", // ঘ
    "\u0999", // ঙ

    "\u099A", // চ
    "\u099B", // ছ
    "\u099C", // জ
    "\u099D", // ঝ
    "\u099E", // ঞ

    "\u099F", // ট
    "\u09A0", // ঠ
    "\u09A1", // ড
    "\u09A2", // ঢ
    "\u09A3", // ণ

    "\u09A4", // ত

    "[",
    "\u0965", // ॥
    "]",
    "\u09CD\u09AC", // হসন্ত ব

    "\u09A5", // থ
    "\u09A6", // দ
    "\u09A7", // ধ
    "\u09A8", // ন

    "\u09AA", // প
    "\u09AB", // ফ
    "\u09AC", // ব
    "\u09AD", // ভ
    "\u09AE", // ম

    "\u09AF", // য
    "\u09B0", // র
    "\u09B2", // ল
    "\u09B6", // শ
    "\u09B7", // ষ

    "\u09B8", // স
    "\u09B9", // হ
    "\u09DC", // ড়
    "\u09DD", // ঢ়
    "\u09DF", // য়
    "\u09CE", // ৎ
    "\u0982", // ং
    "\u0983", // ঃ
    "\u0981", // ঁ

    // Other (64-72)
    "\u09BE", // া
    "\u09BF", // ি
    "\u09C0", // ী
    "\u09C1", // ু
    "\u09C1", // ু
    "{",
    "\u0964", // ।
    "}",
    "\u09C2", // ূ

    //Non-ASCII (73-)
    "\u09CD\u09AC",             // ্‌ ব
    "\u09CD\u09AD",             //্‌ ভ
    "\u09CD\u09AD\u09CD\u09B0", // ্‌ ভ  ্‌ র
    "\u09AE",                   // ম
    "\u09CD\u09AE",             // ্‌ ম
    "\u09CD\u09AC",             // ্‌ ব
    "\u09CD\u09AE",             // ্‌ ম
    "\u09CD\u09AF",             // ্য
    "\u09B0\u09CD",             // রেফ
    "\u09CD\u09B0",             // র-ফলা

    "\u09CD\u09B0",                   // র-ফলা
    "\u09CD\u09B2",                   // ল-ফলা
    "",                               //
    "\u09B7",                         // ষ
    "\u09B8",                         // স
    "\u0995\u09CD\u0995",             // ক্ক
    "\u0995\u09CD\u099F",             // ক্ট
    "\u0995\u09CD\u09B7\u09CD\u09AE", // ক্ষ্ম
    "\u0995\u09CD\u09A4",             // ক্ত
    "\u0995\u09CD\u09AE",             // ক্ম

    "\u0995\u09CD\u09B0", // ক্র
    "\u0995\u09CD\u09B7", // ক্ষ
    "\u0995\u09CD\u09B8", // ক্স
    "\u0997\u09C1",       // গু
    "\u0997\u09CD\u0997", // গ্গ
    "\u0997\u09CD\u09A6", // গ্দ
    "\u0997\u09CD\u09A7", // গ্ধ
    "\u0999\u09CD\u0995", // ঙ্ক
    "\u0999\u09CD\u0997", // ঙ্গ
    "\u099C\u09CD\u099C", // জ্জ

    "\u09CD\u09A4\u09CD\u09B0", // ্‌ত্র
    "\u099C\u09CD\u099D",       // জ্ঝ
    "\u099C\u09CD\u099E",       // জ্ঞ
    "\u099E\u09CD\u099A",       // ঞ্চ
    "\u099E\u09CD\u099B",       // ঞ্ছ
    "\u099E\u09CD\u099C",       // ঞ্জ
    "\u099E\u09CD\u099D",       // ঞ্ঝ
    "\u099F\u09CD\u099F",       // ট্ট
    "\u09A1\u09CD\u09A1",       // ড্ড
    "\u09A3\u09CD\u099F",       // ণ্ট

    "\u09A3\u09CD\u09A0", // ণ্ঠ
    "\u09B5",             // ঵
    "\u09A4\u09CD\u09A4", // ত্ত
    "\u09A4\u09CD\u09A5", // ত্থ
    "\u09CD\u09A4",       // ্‌ ত
    "\u09A4\u09CD\u09B0", // ত্র
    "\u09A6\u09CD\u09A6", // দ্দ
    "\u09A3\u09CD\u09A1", // ণ্ড
    "\u002D",             // -
    "\u201C",             // “

    "\u201D",             // ”
    "\u2018",             // ‘
    "\u2019",             // ’
    "\u09CD\u09B0",       // ্‌র
    "\u09A6\u09CD\u09A7", // দ্ধ
    "\u09A6\u09CD\u09AC", // দ্ব
    "\u09A6\u09CD\u09AE", // দ্ম
    "\u09A8\u09CD\u09A0", // ন্ঠ
    "\u09A8\u09CD\u09A1", // ন্ড
    "\u09A8\u09CD\u09A7", // ন্ধ

    "\u09A8\u09CD\u09B8", // ন্স
    "\u09AA\u09CD\u099F", // প্ট
    "\u09AA\u09CD\u09A4", // প্ত
    "\u09AA\u09CD\u09AA", // প্প
    "\u09AA\u09CD\u09B8", // প্স
    "\u09AC\u09CD\u099C", // ব্জ
    "\u09AC\u09CD\u09A6", // ব্দ
    "\u09AC\u09CD\u09A7", // ব্ধ
    "\u09AD\u09CD\u09B0", // ভ্র
    "\u09C1",             // ু

    "\u09AE\u09CD\u09AB", // ম্ফ
    "\u09A3\u09CD\u099F", // ণ্ট
    "\u09B2\u09CD\u0995", // ল্ক
    "\u09B2\u09CD\u0997", // ল্গ
    "\u09B2\u09CD\u099F", // ল্ট
    "\u09B2\u09CD\u09A1", // ল্ড
    "\u09B2\u09CD\u09AA", // ল্প
    "\u09B2\u09CD\u09AB", // ল্ফ
    "\u09B6\u09C1",       // শু
    "\u09B6\u09CD\u099A", // শ্চ

    "\u09B6\u09CD\u099B", // শ্ছ
    "\u09B7\u09CD\u09A3", // ষ্ণ
    "\u09B7\u09CD\u099F", // ষ্ট
    "\u09B7\u09CD\u09A0", // ষ্ঠ
    "\u09B7\u09CD\u09AB", // ষ্ফ
    "\u09B8\u09CD\u0996", // স্খ
    "\u09B8\u09CD\u099F", // স্ট
    "\u09CD\u09B2",       // ্‌ল
    "\u09B8\u09CD\u09AB", // স্ফ
    "\u09CD\u09AA",       // ্‌প

    "\u09B9\u09C1",             // হু
    "\u09B9\u09C3",             // হৃ
    "\u09B9\u09CD\u09A8",       // হ্ন
    "\u09B9\u09CD\u09AE",       // হ্ম
    "\u0995\u09CD\u09B7",       // ক্ষ
    "\u09CD\u0995\u09CD\u09B0", // ্‌ক্র
    "\u09CD\u09A8",             //্‌ন
    "\u09CC",                       // leter
    "\u09A8",                   // ন
    "\u09CD\u09AC",             // ্‌ব

    "\u09C2",       // ূ
    "\u09C8",       // ৈ
    "\u09A6\u09CD", // দ্
    "\u09C1",       // ু
    "\u09DC",       // ড়
    "", "", "",
    "\u09CD\u09A4\u09C1", //  ্‌তু
    "\u09CD\u09A5",       // ্‌থ
    "\u09C2",             // ূ
    "",

    "\u09B5", // ঴
    "\u099A", // চ
    "\u09C3", // ৃ
    "",
    "\u09C7", // ে
    "\u09C7", // ে
    "\u0999", // ঙ
    "", "", "",
    "\u09C3", // ৃ
    "", "", "", "", "", "", "", "", "",

    "\u09C8",
    "", "", "", "", "", "", "", "",
    "\u09CD\u0995", // ্‌ক
    "\u09A8\u09CD"  // ন্‌
};