//
// AUTOMATICALLLY GENERATED by gentables
//
#ifdef ENCODING_EU

static const uint8_t iso8859_7_f_0[] = {
  0xa0, 0x00, 0x00, 0xa3, 0x00, 0x00, 0xa6, 0xa7, 0xa8, 0xa9, 0x00, 0xab, 0xac, 0xad, 0x00, 0x00,
  0xb0, 0xb1, 0xb2, 0xb3, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0xbb, 0x00, 0xbd
};
static const uint8_t iso8859_7_f_768[] = {
  0xb4, 0xb5, 0xb6, 0x00, 0xb8, 0xb9, 0xba, 0x00, 0xbc, 0x00, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3,
  0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0x00, 0xd3,
  0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3,
  0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3,
  0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe
};

struct rxvt_codeset_conv_iso8859_7 : rxvt_codeset_conv {
  uint32_t from_unicode (unicode_t unicode) const {
    if (unicode <= 0x009f) return unicode;
    if (unicode == 0x2015) return 0x00af;
    if (unicode == 0x2018) return 0x00a1;
    if (unicode == 0x2019) return 0x00a2;
    if (0x00a0 <= unicode && unicode <= 0x00bd)
      return iso8859_7_f_0[unicode - 0x00a0] == 0 ? NOCHAR : iso8859_7_f_0[unicode - 0x00a0];
    if (0x0384 <= unicode && unicode <= 0x03ce)
      return iso8859_7_f_768[unicode - 0x0384] == 0 ? NOCHAR : iso8859_7_f_768[unicode - 0x0384];
    return NOCHAR;
  }
} rxvt_codeset_conv_iso8859_7;

#else

#define rxvt_codeset_conv_iso8859_7 rxvt_codeset_conv_unknown

#endif
