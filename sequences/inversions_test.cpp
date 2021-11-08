#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "cert-err58-cpp"
//
// Created by Uwe Hoffmann on 11/7/21.
//

#include <sstream>

#include <gtest/gtest.h>
#include "inversions.h"

// Test cases courtesy of https://github.com/JonSteinn/Kattis-Solutions/blob/5d78ab51f87e2ada9e17a266e797152a67aa1413/src/0-1%20Sequences/Python%203/test.py
// and comby.dev

TEST(InversionsTest, Test_tdXbRfgtfYzdUUr) {
  std::stringstream s;
  s << "0";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_SVgTHdiovdJS_xX) {
  std::stringstream s;
  s << "1";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_NHvdFqcfBfdLkFn) {
  std::stringstream s;
  s << "?";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_pkuHyOfZWboMeSy) {
  std::stringstream s;
  s << "00";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_XMvyDWDyfJvCOUc) {
  std::stringstream s;
  s << "01";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_vp_OnmfRWJtlxYy) {
  std::stringstream s;
  s << "0?";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_gDEOQjkdNRHYMgh) {
  std::stringstream s;
  s << "10";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_enMkVRIKgZEnbcW) {
  std::stringstream s;
  s << "11";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_PzuuwMenmhdtpIk) {
  std::stringstream s;
  s << "1?";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_lvWKwmEcKivEqQO) {
  std::stringstream s;
  s << "?0";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_vyeYEwHNC_fhDCv) {
  std::stringstream s;
  s << "?1";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_vQeDqZaiZgubopn) {
  std::stringstream s;
  s << "??";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_eKBSFxQnDQaJEX_) {
  std::stringstream s;
  s << "000";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_LyTpGRiaJUbb_fG) {
  std::stringstream s;
  s << "001";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_xJDUhSVyUOQYdcx) {
  std::stringstream s;
  s << "00?";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_dGoGaPjUAYobiOF) {
  std::stringstream s;
  s << "010";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_jtGAKIVWMbqtdUN) {
  std::stringstream s;
  s << "011";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_puBecxWlZeqZpTT) {
  std::stringstream s;
  s << "01?";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_jbROLZYeevSxaPu) {
  std::stringstream s;
  s << "0?0";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_mHpWlgFxtvgAXTm) {
  std::stringstream s;
  s << "0?1";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_YWitzxzDzqAtsbh) {
  std::stringstream s;
  s << "0??";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_eBsNDBMzgUOGdjn) {
  std::stringstream s;
  s << "100";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_crnMhnYHmAQgeCA) {
  std::stringstream s;
  s << "101";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_v_i_uPnKPkkPtVl) {
  std::stringstream s;
  s << "10?";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_lmuoPeZAHyxIVjL) {
  std::stringstream s;
  s << "110";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_sPrUUcGQzcbbmHL) {
  std::stringstream s;
  s << "111";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_GHKpLBXDMtXrHsE) {
  std::stringstream s;
  s << "11?";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_OTzDNznEsHJZpSZ) {
  std::stringstream s;
  s << "1?0";
  EXPECT_EQ(4, Inversions(s));
}

TEST(InversionsTest, Test_rqzxxaEKdMKVDeu) {
  std::stringstream s;
  s << "1?1";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_VqkmPGBYWUjoYND) {
  std::stringstream s;
  s << "1??";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_Tsh_xtKrLIJPcoL) {
  std::stringstream s;
  s << "?00";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_YepoDKMWvyrlFXZ) {
  std::stringstream s;
  s << "?01";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_mzcJdioRVTp_ZKL) {
  std::stringstream s;
  s << "?0?";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_TyMgTNQeLAWYyzJ) {
  std::stringstream s;
  s << "?10";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_TkrVXHGl_dJkodb) {
  std::stringstream s;
  s << "?11";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_SXnZOCm_VzyYbUQ) {
  std::stringstream s;
  s << "?1?";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_fYVZrTytVtCEmzr) {
  std::stringstream s;
  s << "??0";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_uldYAdtPpIBfyEg) {
  std::stringstream s;
  s << "??1";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_gWSWOaACBlTBRjr) {
  std::stringstream s;
  s << "???";
  EXPECT_EQ(6, Inversions(s));
}

TEST(InversionsTest, Test_lW_jOaaXnZTkmPG) {
  std::stringstream s;
  s << "????0???";
  EXPECT_EQ(928, Inversions(s));
}

TEST(InversionsTest, Test_pDYvyAoOZEUVdhg) {
  std::stringstream s;
  s << "1???1?11??1011??1?0010";
  EXPECT_EQ(37376, Inversions(s));
}

TEST(InversionsTest, Test_VgFoDrYZWfQQKaW) {
  std::stringstream s;
  s << "000?1?1?1";
  EXPECT_EQ(18, Inversions(s));
}

TEST(InversionsTest, Test_E_SKqpFrbqgtRQF) {
  std::stringstream s;
  s << "?010100110100?1110?010?1?";
  EXPECT_EQ(2240, Inversions(s));
}

TEST(InversionsTest, Test_ScFaRxsKrBoAwVG) {
  std::stringstream s;
  s << "??01?11?0?0??0000???1?1";
  EXPECT_EQ(131584, Inversions(s));
}

TEST(InversionsTest, Test_IITaRFPbLdDTGPO) {
  std::stringstream s;
  s << "00?1?0?1?1?001?";
  EXPECT_EQ(1424, Inversions(s));
}

TEST(InversionsTest, Test_caNJNKTPxnWwCSY) {
  std::stringstream s;
  s << "000011?10?101100?";
  EXPECT_EQ(230, Inversions(s));
}

TEST(InversionsTest, Test_FtUXmAUIXpumCDq) {
  std::stringstream s;
  s << "0?1???01?001011?11?1?0??1??011";
  EXPECT_EQ(370688, Inversions(s));
}

TEST(InversionsTest, Test_uKFqbPfQWmWRrit) {
  std::stringstream s;
  s << "101?00??";
  EXPECT_EQ(78, Inversions(s));
}

TEST(InversionsTest, Test_DjaODwudUgLfHkV) {
  std::stringstream s;
  s << "00011???100??1?";
  EXPECT_EQ(1328, Inversions(s));
}

TEST(InversionsTest, Test_LUq_EJJfMPS_Ddt) {
  std::stringstream s;
  s << "10000101??1000?000??1?00";
  EXPECT_EQ(4400, Inversions(s));
}

TEST(InversionsTest, Test_wcgLxDENFJpPStA) {
  std::stringstream s;
  s << "?0??01111??";
  EXPECT_EQ(272, Inversions(s));
}

TEST(InversionsTest, Test_XaWRLcxIxwWiluG) {
  std::stringstream s;
  s << "100?0010101100011????0???01?101000??100";
  EXPECT_EQ(390656, Inversions(s));
}

TEST(InversionsTest, Test_ahKudVxjnIGvpyh) {
  std::stringstream s;
  s << "1011?01??10???11??00???01";
  EXPECT_EQ(183808, Inversions(s));
}

TEST(InversionsTest, Test_OpOGEbCmqNwXfez) {
  std::stringstream s;
  s << "111?00???1?0??1?1?10???0000110?1?11?011?01?11110";
  EXPECT_EQ(33161216, Inversions(s));
}

TEST(InversionsTest, Test_tUhRlsBTAzfEQcC) {
  std::stringstream s;
  s << "00011110010??11?0110";
  EXPECT_EQ(330, Inversions(s));
}

TEST(InversionsTest, Test_bFkLdqgOBShGeIp) {
  std::stringstream s;
  s << "?0?01???011?1?100100??11?1010011?00??01?1??0?0";
  EXPECT_EQ(36372480, Inversions(s));
}

TEST(InversionsTest, Test_v_pLVmkhQJawdGg) {
  std::stringstream s;
  s << "0001?000?11?0????1?10?10";
  EXPECT_EQ(25856, Inversions(s));
}

TEST(InversionsTest, Test_bhwbRmpQqLesLHA) {
  std::stringstream s;
  s << "0010??11010??0?01?101??0111?1110?001110000?00010";
  EXPECT_EQ(648704, Inversions(s));
}

TEST(InversionsTest, Test_IgAWxctmQVDzAes) {
  std::stringstream s;
  s << "0?1011?111?11011?01?01?0????1010100?1110??";
  EXPECT_EQ(1982464, Inversions(s));
}

TEST(InversionsTest, Test_ZiQmnlorQflUwOR) {
  std::stringstream s;
  s << "??0?1000?0??1?100101110???1000?00?0";
  EXPECT_EQ(655360, Inversions(s));
}

TEST(InversionsTest, Test_YbkiitlKVSJjqBM) {
  std::stringstream s;
  s << "100?";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_zYERiysEmpREYHu) {
  std::stringstream s;
  s << "10?0110?1";
  EXPECT_EQ(33, Inversions(s));
}

TEST(InversionsTest, Test_iB_moCGvPTHuiXG) {
  std::stringstream s;
  s << "01?110111???1100111";
  EXPECT_EQ(552, Inversions(s));
}

TEST(InversionsTest, Test_YETjfwHWRvRofWU) {
  std::stringstream s;
  s << "11?011??10";
  EXPECT_EQ(118, Inversions(s));
}

TEST(InversionsTest, Test_HFu_PjNgmzKnewM) {
  std::stringstream s;
  s << "0011101??011?01?000?1";
  EXPECT_EQ(1888, Inversions(s));
}

TEST(InversionsTest, Test_WCGlFpxjAXXbuL_) {
  std::stringstream s;
  s << "1??11101?000";
  EXPECT_EQ(230, Inversions(s));
}

TEST(InversionsTest, Test_SmQoDwKNUSePzoU) {
  std::stringstream s;
  s << "0?11??10?00????00?";
  EXPECT_EQ(24832, Inversions(s));
}

TEST(InversionsTest, Test_XPx_zGIkLFnMFJG) {
  std::stringstream s;
  s << "0111?1100?111?1?11?01???1???010111?111?0";
  EXPECT_EQ(1495040, Inversions(s));
}

TEST(InversionsTest, Test_cKoENtvyycAngSb) {
  std::stringstream s;
  s << "?00111?";
  EXPECT_EQ(11, Inversions(s));
}

TEST(InversionsTest, Test_CwNwbAonwqxusot) {
  std::stringstream s;
  s << "0101?0?01?10";
  EXPECT_EQ(130, Inversions(s));
}

TEST(InversionsTest, Test_uyeOuH_okVcOpAt) {
  std::stringstream s;
  s << "?0010?0?0?10???10?011????000?111???1";
  EXPECT_EQ(7733248, Inversions(s));
}

TEST(InversionsTest, Test_esvELOrUemJQSuR) {
  std::stringstream s;
  s << "00?1011???0?00?1??10110";
  EXPECT_EQ(14336, Inversions(s));
}

TEST(InversionsTest, Test_iJNDNZcOSevNJtD) {
  std::stringstream s;
  s << "1?00?001";
  EXPECT_EQ(33, Inversions(s));
}

TEST(InversionsTest, Test_wXHbaWqpLUUvvZm) {
  std::stringstream s;
  s << "0?110?1?100011011??0?0010111?1??";
  EXPECT_EQ(58112, Inversions(s));
}

TEST(InversionsTest, Test_HvrhDxFAdLGWUKF) {
  std::stringstream s;
  s << "110111?111??1?10??????11?110?1";
  EXPECT_EQ(442368, Inversions(s));
}

TEST(InversionsTest, Test_SWxsRgcUpwfFBWB) {
  std::stringstream s;
  s << "1010??11?1?11?1?0";
  EXPECT_EQ(2032, Inversions(s));
}

TEST(InversionsTest, Test_vEkCksLBiuQrAeC) {
  std::stringstream s;
  s << "?1??001000?00??101?1?10000???1?10?0";
  EXPECT_EQ(1167360, Inversions(s));
}

TEST(InversionsTest, Test_hciqdstFKgeiChE) {
  std::stringstream s;
  s << "11111?1?1?1?1000???0?1011?110?0";
  EXPECT_EQ(155904, Inversions(s));
}

TEST(InversionsTest, Test_BfliMNzysORwuSB) {
  std::stringstream s;
  s << "0??1010?1???11?1?101?001";
  EXPECT_EQ(33280, Inversions(s));
}

TEST(InversionsTest, Test_RZcoQljeWoydcMT) {
  std::stringstream s;
  s << "11?10?0?01??10?110011?1?01?00011?101??100010";
  EXPECT_EQ(1112064, Inversions(s));
}

TEST(InversionsTest, Test_hejvRqdTnCvEHzc) {
  std::stringstream s;
  s << "1?1???11001010??1???11?001??11?0??01?111101";
  EXPECT_EQ(13565952, Inversions(s));
}

TEST(InversionsTest, Test_xfApGOMwpyjqdFK) {
  std::stringstream s;
  s << "??0?10111??1?00???0111?";
  EXPECT_EQ(59648, Inversions(s));
}

TEST(InversionsTest, Test_RruifoXPoFIghN_) {
  std::stringstream s;
  s << "?00???0011101?100?000?10??1?011?001??0010011?11111";
  EXPECT_EQ(3731456, Inversions(s));
}

TEST(InversionsTest, Test_GjofuZpzHKMpl_C) {
  std::stringstream s;
  s << "0111100?01100?01???00?1010?1??100?1?001?101110??01";
  EXPECT_EQ(4894720, Inversions(s));
}

TEST(InversionsTest, Test_ThlsdpmaXYaSuIP) {
  std::stringstream s;
  s << "??1?001?1000?0?101110?0001??0";
  EXPECT_EQ(57088, Inversions(s));
}

TEST(InversionsTest, Test_fQiremUJpJsbOp_) {
  std::stringstream s;
  s << "1??10?001101??1?110?1?0?";
  EXPECT_EQ(36608, Inversions(s));
}

TEST(InversionsTest, Test_MNTxGChCajFxKIT) {
  std::stringstream s;
  s << "010000?0?0??10?1101?0??1?0??01??00?010??0110";
  EXPECT_EQ(13500416, Inversions(s));
}

TEST(InversionsTest, Test_NCScGCRedUWwDCX) {
  std::stringstream s;
  s << "0011100?01?011?1?110??11101?011??0?1000001011";
  EXPECT_EQ(269056, Inversions(s));
}

TEST(InversionsTest, Test_JNqgsBzXMBSNgjJ) {
  std::stringstream s;
  s << "00???11110111?101?0?11?1??0???0?10011?";
  EXPECT_EQ(3026944, Inversions(s));
}

TEST(InversionsTest, Test_AdbuokNYdUaeiNv) {
  std::stringstream s;
  s << "101?0??1?00?0?0?10?0??0111100?1?101??0?11?1";
  EXPECT_EQ(12189696, Inversions(s));
}

TEST(InversionsTest, Test_VXvemQqXoQCLKQv) {
  std::stringstream s;
  s << "??0?";
  EXPECT_EQ(14, Inversions(s));
}

TEST(InversionsTest, Test_ozoaVGLFTIqLBbU) {
  std::stringstream s;
  s << "011011?0?01011?010??1?1??0110?1000";
  EXPECT_EQ(83456, Inversions(s));
}

TEST(InversionsTest, Test_THHSEOSspgElJFr) {
  std::stringstream s;
  s << "?00?1?1?110??1";
  EXPECT_EQ(1040, Inversions(s));
}

TEST(InversionsTest, Test_InDaJJXSiqwtoIm) {
  std::stringstream s;
  s << "1??01100000";
  EXPECT_EQ(93, Inversions(s));
}

TEST(InversionsTest, Test_qMIkSAzmeDQKhUH) {
  std::stringstream s;
  s << "00??";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_HcVvIikobjH_IkI) {
  std::stringstream s;
  s << "1101?00?11?1";
  EXPECT_EQ(122, Inversions(s));
}

TEST(InversionsTest, Test_vuPvSkgzaDBHVJb) {
  std::stringstream s;
  s << "00?110??1?11??11111011111?01??0?000?00011?0?11";
  EXPECT_EQ(2387968, Inversions(s));
}

TEST(InversionsTest, Test_xyMsWJIKCXnTEZi) {
  std::stringstream s;
  s << "111100?11?01????1?1010000???0?0?000??0";
  EXPECT_EQ(4222976, Inversions(s));
}

TEST(InversionsTest, Test_sRBhoYcOUnRWDfA) {
  std::stringstream s;
  s << "0?100101??110?00?100011??001?1";
  EXPECT_EQ(26112, Inversions(s));
}

TEST(InversionsTest, Test_pUgaKpSzSMBUxWX) {
  std::stringstream s;
  s << "001011??0???1";
  EXPECT_EQ(480, Inversions(s));
}

TEST(InversionsTest, Test_nzYIrPtmPKgJtMf) {
  std::stringstream s;
  s << "0?101???0?1?0111";
  EXPECT_EQ(1328, Inversions(s));
}

TEST(InversionsTest, Test_zQvpKnKiYYlchmA) {
  std::stringstream s;
  s << "1?10?1111010?101?0??11????101?1?0111??110";
  EXPECT_EQ(3190784, Inversions(s));
}

TEST(InversionsTest, Test_KUpavdeySvTlqfr) {
  std::stringstream s;
  s << "1?111?1??00??1010?????10";
  EXPECT_EQ(184832, Inversions(s));
}

TEST(InversionsTest, Test_fdJRWYBavrtqDRD) {
  std::stringstream s;
  s << "?0?01?011?010?1?1";
  EXPECT_EQ(1616, Inversions(s));
}

TEST(InversionsTest, Test_UugNLdAjRVJIThg) {
  std::stringstream s;
  s << "11?1??10??010011??";
  EXPECT_EQ(6048, Inversions(s));
}

TEST(InversionsTest, Test_jAeOiEbZWXiVtNv) {
  std::stringstream s;
  s << "?0???111010?0001?0?1011100?00?1???01?00001110";
  EXPECT_EQ(2146304, Inversions(s));
}

TEST(InversionsTest, Test_puKzrWwMQoQtVi_) {
  std::stringstream s;
  s << "0????10?10000010??110?0101?0?1??1100101?110";
  EXPECT_EQ(1523712, Inversions(s));
}

TEST(InversionsTest, Test__nTmfvniuvYQYUD) {
  std::stringstream s;
  s << "1?1010100000?001??1?0?1?0000?100??10??0111";
  EXPECT_EQ(802816, Inversions(s));
}

TEST(InversionsTest, Test_OhFasqAXNNFzfDU) {
  std::stringstream s;
  s << "?11??1?1????1?0??0??0?1110???0?110111100100?01";
  EXPECT_EQ(153747456, Inversions(s));
}

TEST(InversionsTest, Test_uMVPwCHHjxVgzLX) {
  std::stringstream s;
  s << "10?1?0??1????00?0?100??010?001";
  EXPECT_EQ(1032192, Inversions(s));
}

TEST(InversionsTest, Test_iHHEPSsvAGUvuay) {
  std::stringstream s;
  s << "?01??1111?1?000011?10101?1?00?111";
  EXPECT_EQ(65792, Inversions(s));
}

TEST(InversionsTest, Test_SGgoiehyvuFcjmL) {
  std::stringstream s;
  s << "0?1001?11???1?010010";
  EXPECT_EQ(3344, Inversions(s));
}

TEST(InversionsTest, Test_IyBiaHuUZtFLFcP) {
  std::stringstream s;
  s << "??11110001";
  EXPECT_EQ(61, Inversions(s));
}

TEST(InversionsTest, Test_kyDRYLMCLyujYSh) {
  std::stringstream s;
  s << "001?101111100?001?11??010111?000??1??0?100??000";
  EXPECT_EQ(2768896, Inversions(s));
}

TEST(InversionsTest, Test_KkOtUuYCOqawIJw) {
  std::stringstream s;
  s << "???1";
  EXPECT_EQ(6, Inversions(s));
}

TEST(InversionsTest, Test_zRyshnBgdFAokII) {
  std::stringstream s;
  s << "0101??010?00?11?1?0001?";
  EXPECT_EQ(8096, Inversions(s));
}

TEST(InversionsTest, Test_aLgRkNvQBzXFqCw) {
  std::stringstream s;
  s << "?1??0?0?0";
  EXPECT_EQ(432, Inversions(s));
}

TEST(InversionsTest, Test_aAxtChMZRsoBxfr) {
  std::stringstream s;
  s << "10000?0?1??0??0?00?11?????0?01??10";
  EXPECT_EQ(7536640, Inversions(s));
}

TEST(InversionsTest, Test_EPVmoWjwTvzynwj) {
  std::stringstream s;
  s << "10?0??110?0?11??010?";
  EXPECT_EQ(12672, Inversions(s));
}

TEST(InversionsTest, Test_FRMxBE_CH_TEOAt) {
  std::stringstream s;
  s << "01????01?100??0?10??100011?1?1011110?001000?1?11?0";
  EXPECT_EQ(19431424, Inversions(s));
}

TEST(InversionsTest, Test_iVhYoTvOcqCNSMA) {
  std::stringstream s;
  s << "0000??01?0000?1?1?";
  EXPECT_EQ(1168, Inversions(s));
}

TEST(InversionsTest, Test_hnCYadUdqKwAGyP) {
  std::stringstream s;
  s << "000?011?100";
  EXPECT_EQ(39, Inversions(s));
}

TEST(InversionsTest, Test_LbTpbqQVmfopVev) {
  std::stringstream s;
  s << "?1110?10?0001111?0?0110?00110100?010?0100011?01??1";
  EXPECT_EQ(679424, Inversions(s));
}

TEST(InversionsTest, Test_skuRjHKYWwuWoab) {
  std::stringstream s;
  s << "01?0?010?00?11000??1?01110";
  EXPECT_EQ(8480, Inversions(s));
}

TEST(InversionsTest, Test_Y_RIiBVmiLOpswp) {
  std::stringstream s;
  s << "10011?11001?1";
  EXPECT_EQ(71, Inversions(s));
}

TEST(InversionsTest, Test_cPxTddHqdEJzBPV) {
  std::stringstream s;
  s << "1?110?01?11?10?1100?10?0?1100100?1110110???1?11";
  EXPECT_EQ(2150400, Inversions(s));
}

TEST(InversionsTest, Test_SdjX_MKtRCbYHtN) {
  std::stringstream s;
  s << "01111?111??10?0001100110100?1?110?0?";
  EXPECT_EQ(50048, Inversions(s));
}

TEST(InversionsTest, Test_jNUbRppd_fh_xXI) {
  std::stringstream s;
  s << "1?0?01??1?11?111?01???10??11?01?101100111001?0";
  EXPECT_EQ(9117696, Inversions(s));
}

TEST(InversionsTest, Test_cORcVZQBUNnqxsZ) {
  std::stringstream s;
  s << "0??001?01??0";
  EXPECT_EQ(448, Inversions(s));
}

TEST(InversionsTest, Test_yPykFOQtiraNoWc) {
  std::stringstream s;
  s << "11?1?00011110???10001010?00?1111?0";
  EXPECT_EQ(40064, Inversions(s));
}

TEST(InversionsTest, Test__FxAzVjXPvIBqjk) {
  std::stringstream s;
  s << "???1???1?10???1?010011101111???0";
  EXPECT_EQ(1953792, Inversions(s));
}

TEST(InversionsTest, Test_FInJWMgzvr_YLsP) {
  std::stringstream s;
  s << "10001????00";
  EXPECT_EQ(264, Inversions(s));
}

TEST(InversionsTest, Test_xwrdkQGybwscovd) {
  std::stringstream s;
  s << "??0?01?01?0?100?0?10001111?010?";
  EXPECT_EQ(106240, Inversions(s));
}

TEST(InversionsTest, Test_KMWtfOoBYhhkFqU) {
  std::stringstream s;
  s << "0?11?010???101??110";
  EXPECT_EQ(5088, Inversions(s));
}

TEST(InversionsTest, Test_ZreBRtXiRegCTzr) {
  std::stringstream s;
  s << "?1??1011?0?11?0?01?101??1??1";
  EXPECT_EQ(368640, Inversions(s));
}

TEST(InversionsTest, Test_QyfVYNPubarXUnF) {
  std::stringstream s;
  s << "100?00";
  EXPECT_EQ(11, Inversions(s));
}

TEST(InversionsTest, Test_RpDVgzYppTxegHC) {
  std::stringstream s;
  s << "?10?010?11?01?11";
  EXPECT_EQ(672, Inversions(s));
}

TEST(InversionsTest, Test_ieeNboLQFHOxzYo) {
  std::stringstream s;
  s << "10100?0??01?????0";
  EXPECT_EQ(9088, Inversions(s));
}

TEST(InversionsTest, Test_WRGvLcmspTaZgQW) {
  std::stringstream s;
  s << "?0?00??0110?0??0??11110??0?";
  EXPECT_EQ(290816, Inversions(s));
}

TEST(InversionsTest, Test_gCFrTHcTNLwkaof) {
  std::stringstream s;
  s << "0??10?001010??0101110010100?11?01?10?010?01??1?1";
  EXPECT_EQ(1978368, Inversions(s));
}

TEST(InversionsTest, Test_wondOsIeIrvqJEM) {
  std::stringstream s;
  s << "?1000?0?000111111?01??0?1";
  EXPECT_EQ(7136, Inversions(s));
}

TEST(InversionsTest, Test_nGcvVdJhxE_zjdg) {
  std::stringstream s;
  s << "?010010?0011??10?0010?1?101?";
  EXPECT_EQ(20352, Inversions(s));
}

TEST(InversionsTest, Test_odNjxJQPUMbfrLK) {
  std::stringstream s;
  s << "0????0?0??01?1?001111?0?1111?0?01?10??1?1101?0?00";
  EXPECT_EQ(148504576, Inversions(s));
}

TEST(InversionsTest, Test_CgkSngufQBszplJ) {
  std::stringstream s;
  s << "?0?0011?010??11???1?????011";
  EXPECT_EQ(565248, Inversions(s));
}

TEST(InversionsTest, Test_DYvlweLSj_WgDYW) {
  std::stringstream s;
  s << "??00000?11?0?0001110??011??0110?0";
  EXPECT_EQ(109824, Inversions(s));
}

TEST(InversionsTest, Test_fxkDHcrXiOWylVB) {
  std::stringstream s;
  s << "01?1011?1??1?11?00?";
  EXPECT_EQ(6176, Inversions(s));
}

TEST(InversionsTest, Test_sQdPdVuoiqEPVjS) {
  std::stringstream s;
  s << "0???0??00??0?110??010100?0?0?110";
  EXPECT_EQ(888832, Inversions(s));
}

TEST(InversionsTest, Test_eyTwIaDKLVtfSVk) {
  std::stringstream s;
  s << "?0?01???001????0?01????101????10001101011011";
  EXPECT_EQ(50790400, Inversions(s));
}

TEST(InversionsTest, Test_SUrISUPSUQNcruz) {
  std::stringstream s;
  s << "1?11???100?10???1?011?0010";
  EXPECT_EQ(105216, Inversions(s));
}

TEST(InversionsTest, Test_XrtZXVUHSoNVhtZ) {
  std::stringstream s;
  s << "1??1";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_wutIFyOpwlsiAPd) {
  std::stringstream s;
  s << "00??";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_PAl_RMfJsGFtBCc) {
  std::stringstream s;
  s << "??11";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_cLATTphYyifIhhW) {
  std::stringstream s;
  s << "??11";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_DgVrfPEjtzkD_nT) {
  std::stringstream s;
  s << "110?01";
  EXPECT_EQ(11, Inversions(s));
}

TEST(InversionsTest, Test_AxaDOhSOcCZClGw) {
  std::stringstream s;
  s << "1?1?0";
  EXPECT_EQ(19, Inversions(s));
}

TEST(InversionsTest, Test__WPkacTuxOeaSxp) {
  std::stringstream s;
  s << "???110";
  EXPECT_EQ(34, Inversions(s));
}

TEST(InversionsTest, Test_OZJNSGnJTZjmHgz) {
  std::stringstream s;
  s << "0101";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_SAVmH_m_KenbIYb) {
  std::stringstream s;
  s << "??1?11";
  EXPECT_EQ(10, Inversions(s));
}

TEST(InversionsTest, Test_TVsjprqwvwcoTun) {
  std::stringstream s;
  s << "?1101";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_nAVNmeWvxPOAQgF) {
  std::stringstream s;
  s << "10110";
  EXPECT_EQ(4, Inversions(s));
}

TEST(InversionsTest, Test_CgKRpPGtcXMegrR) {
  std::stringstream s;
  s << "00?10";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_MyncAseDycOMGUX) {
  std::stringstream s;
  s << "10111";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_ruZvwjMSzPrifOL) {
  std::stringstream s;
  s << "001?";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_PAaMUaPVRcApYHN) {
  std::stringstream s;
  s << "1?11";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_jnjBoGiwkzeKXdW) {
  std::stringstream s;
  s << "??10";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_AoAVgqSOmrmmHNO) {
  std::stringstream s;
  s << "?111?";
  EXPECT_EQ(7, Inversions(s));
}

TEST(InversionsTest, Test_x_saJVNYOipUvhk) {
  std::stringstream s;
  s << "???0";
  EXPECT_EQ(18, Inversions(s));
}

TEST(InversionsTest, Test_vpNilojEOmrPMHC) {
  std::stringstream s;
  s << "00?1?";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_WqbAuNvfFFeXrUf) {
  std::stringstream s;
  s << "?1?011";
  EXPECT_EQ(11, Inversions(s));
}

TEST(InversionsTest, Test_cYvWwVAjQkozxO_) {
  std::stringstream s;
  s << "111100";
  EXPECT_EQ(8, Inversions(s));
}

TEST(InversionsTest, Test_WgRAXSwsqnqCTds) {
  std::stringstream s;
  s << "00??00";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_ZrCaXvTWtTyOpqn) {
  std::stringstream s;
  s << "01001";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_wBrErhFgYgFmCsC) {
  std::stringstream s;
  s << "00??0";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_CUIIOBEuDRzMHBK) {
  std::stringstream s;
  s << "?101?0";
  EXPECT_EQ(23, Inversions(s));
}

TEST(InversionsTest, Test_txytvuGbqvalJL_) {
  std::stringstream s;
  s << "11?1";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_kGMOiujVQZmuSZX) {
  std::stringstream s;
  s << "?10?";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test__HnEPrOeiIvNdjQ) {
  std::stringstream s;
  s << "010??";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_hiOEtyyWsJkuZsT) {
  std::stringstream s;
  s << "?00101";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_BmPagMtrXygbCQy) {
  std::stringstream s;
  s << "00100?";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_mksDmUtI_Gl_nkt) {
  std::stringstream s;
  s << "1011";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_mQDxSNndIdmklXF) {
  std::stringstream s;
  s << "10111?";
  EXPECT_EQ(6, Inversions(s));
}

TEST(InversionsTest, Test_GPWaBsnGfnKpTkv) {
  std::stringstream s;
  s << "?00?1";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_b_rqShcsnLBUHhK) {
  std::stringstream s;
  s << "00?1";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_NgiXnioIjjpoYEo) {
  std::stringstream s;
  s << "1?0110";
  EXPECT_EQ(11, Inversions(s));
}

TEST(InversionsTest, Test_kaWRsLINfVWhLGk) {
  std::stringstream s;
  s << "11?11?";
  EXPECT_EQ(13, Inversions(s));
}

TEST(InversionsTest, Test_swuxEqpfHxcsZkZ) {
  std::stringstream s;
  s << "01?01";
  EXPECT_EQ(4, Inversions(s));
}

TEST(InversionsTest, Test_NxztlKtipaNkNyy) {
  std::stringstream s;
  s << "?1110";
  EXPECT_EQ(7, Inversions(s));
}

TEST(InversionsTest, Test_gcbKNOonAChCi_y) {
  std::stringstream s;
  s << "??00";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_njEaurUcnrOWFmZ) {
  std::stringstream s;
  s << "1?10??";
  EXPECT_EQ(46, Inversions(s));
}

TEST(InversionsTest, Test_dcRnlCTAINMNCsO) {
  std::stringstream s;
  s << "?01?1";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_omXoKGacvuGtpPs) {
  std::stringstream s;
  s << "1111?";
  EXPECT_EQ(4, Inversions(s));
}

TEST(InversionsTest, Test__xpAVtvhWfpKOKa) {
  std::stringstream s;
  s << "0011?0";
  EXPECT_EQ(7, Inversions(s));
}

TEST(InversionsTest, Test_gJtKapBFzHOsiUG) {
  std::stringstream s;
  s << "?0??";
  EXPECT_EQ(10, Inversions(s));
}

TEST(InversionsTest, Test_PnowQzg_nGMeMGr) {
  std::stringstream s;
  s << "0???";
  EXPECT_EQ(6, Inversions(s));
}

TEST(InversionsTest, Test_kKUhYJYgkhSRkls) {
  std::stringstream s;
  s << "10?1";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_aRLoXDyLaPsKMqF) {
  std::stringstream s;
  s << "0000?";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_ViSplxcZbyCoSLk) {
  std::stringstream s;
  s << "01?0?";
  EXPECT_EQ(11, Inversions(s));
}

TEST(InversionsTest, Test_RvCJudBWzCMatqm) {
  std::stringstream s;
  s << "0000";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_gXaazTnOzdtwdYJ) {
  std::stringstream s;
  s << "01?010";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_whJUfrdEchXdQKm) {
  std::stringstream s;
  s << "1??101";
  EXPECT_EQ(17, Inversions(s));
}

TEST(InversionsTest, Test_EakAUYHEze_tmEo) {
  std::stringstream s;
  s << "0?0?";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_sFLGjspUtDnMxdr) {
  std::stringstream s;
  s << "?1??";
  EXPECT_EQ(14, Inversions(s));
}

TEST(InversionsTest, Test_vDRmBXODasByQkN) {
  std::stringstream s;
  s << "?10?";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_KpCzjxPuooaLdAl) {
  std::stringstream s;
  s << "1?01";
  EXPECT_EQ(4, Inversions(s));
}

TEST(InversionsTest, Test_otbktJfSTgdWhcf) {
  std::stringstream s;
  s << "?1?00?";
  EXPECT_EQ(46, Inversions(s));
}

TEST(InversionsTest, Test_vwPNJsUMZboOEjb) {
  std::stringstream s;
  s << "010?1";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_opMQboUuUnMLpVV) {
  std::stringstream s;
  s << "0?0??0";
  EXPECT_EQ(22, Inversions(s));
}

TEST(InversionsTest, Test_jjliFNJInqeztzm) {
  std::stringstream s;
  s << "??111";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_LuMBkMGKlmbwkuw) {
  std::stringstream s;
  s << "00?11?";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_UXLhslznNGoSzsN) {
  std::stringstream s;
  s << "01011";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_ahEnCaIeEigZNpm) {
  std::stringstream s;
  s << "1???";
  EXPECT_EQ(18, Inversions(s));
}

TEST(InversionsTest, Test_iakAxjPoQgnfcWL) {
  std::stringstream s;
  s << "01101";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_MAvAMOcWdRAoqmN) {
  std::stringstream s;
  s << "?1?1";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_lCRgFULnBLyaebk) {
  std::stringstream s;
  s << "100?0";
  EXPECT_EQ(8, Inversions(s));
}

TEST(InversionsTest, Test_zIlBlOTrhyydQdG) {
  std::stringstream s;
  s << "0?0??";
  EXPECT_EQ(10, Inversions(s));
}

TEST(InversionsTest, Test_TiEjBlOAPkzsvWU) {
  std::stringstream s;
  s << "0?100";
  EXPECT_EQ(6, Inversions(s));
}

TEST(InversionsTest, Test_QdUfGmqQujyMfMM) {
  std::stringstream s;
  s << "??0?0";
  EXPECT_EQ(26, Inversions(s));
}

TEST(InversionsTest, Test_KQaPAFWmVDHsihI) {
  std::stringstream s;
  s << "?10110";
  EXPECT_EQ(10, Inversions(s));
}

TEST(InversionsTest, Test_WroHnTovlQDFkaD) {
  std::stringstream s;
  s << "?011";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_G_CRYzFMKXGzzgM) {
  std::stringstream s;
  s << "00???0";
  EXPECT_EQ(18, Inversions(s));
}

TEST(InversionsTest, Test_wfFKZifyexOZ_Vu) {
  std::stringstream s;
  s << "0110";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_TobrqDbUhmDKobD) {
  std::stringstream s;
  s << "??00";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_KDHRIMVVWUurbon) {
  std::stringstream s;
  s << "0?00";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_OyJhYOANmGxKvyh) {
  std::stringstream s;
  s << "11111";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_UgQr_ohJcoBGchx) {
  std::stringstream s;
  s << "0110";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_ZaEBcSwplOuJuSu) {
  std::stringstream s;
  s << "?01?";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_rlTBkXiVvDWuU_b) {
  std::stringstream s;
  s << "001?00";
  EXPECT_EQ(7, Inversions(s));
}

TEST(InversionsTest, Test_jRaOPUkMXSwUPsE) {
  std::stringstream s;
  s << "?01?0";
  EXPECT_EQ(13, Inversions(s));
}

TEST(InversionsTest, Test_tLysVuAYQCUVbzC) {
  std::stringstream s;
  s << "01??1";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_htRtwmRTkKAjUGK) {
  std::stringstream s;
  s << "00?11";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_KqpFKnastVcDLkA) {
  std::stringstream s;
  s << "10?1";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_RYLRODKMAIrT_Zk) {
  std::stringstream s;
  s << "1010";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_iBrlwJVeF_TaJmv) {
  std::stringstream s;
  s << "11010?";
  EXPECT_EQ(13, Inversions(s));
}

TEST(InversionsTest, Test_objS_OOEumXZbRU) {
  std::stringstream s;
  s << "?011";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_WGqBmB_HtHFcTbV) {
  std::stringstream s;
  s << "1???";
  EXPECT_EQ(18, Inversions(s));
}

TEST(InversionsTest, Test_m_PVGcedeWyEnXE) {
  std::stringstream s;
  s << "0001";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_bfCULxPXkwrhGEu) {
  std::stringstream s;
  s << "?101";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_frxaTPuqsCliNAD) {
  std::stringstream s;
  s << "00?1";
  EXPECT_EQ(0, Inversions(s));
}

TEST(InversionsTest, Test_PrSyvauRuZTAdOM) {
  std::stringstream s;
  s << "1?1110";
  EXPECT_EQ(10, Inversions(s));
}

TEST(InversionsTest, Test_qayCubuIZqvX_tc) {
  std::stringstream s;
  s << "??0100";
  EXPECT_EQ(21, Inversions(s));
}

TEST(InversionsTest, Test_ONHNuDdrlbGMsfD) {
  std::stringstream s;
  s << "1?1000";
  EXPECT_EQ(16, Inversions(s));
}

TEST(InversionsTest, Test_De_MoeZObDtOwrf) {
  std::stringstream s;
  s << "0101";
  EXPECT_EQ(1, Inversions(s));
}

TEST(InversionsTest, Test_mNwPMmXzFyKtRhD) {
  std::stringstream s;
  s << "010?1";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_AWTYAYqLhKhmwfM) {
  std::stringstream s;
  s << "?0?1?1";
  EXPECT_EQ(14, Inversions(s));
}

TEST(InversionsTest, Test_hNIGdPDGMWUkbJw) {
  std::stringstream s;
  s << "?01?1";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_VBaBXjZDfGXkYCp) {
  std::stringstream s;
  s << "00?0?1";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_txJXtCBdDpsBgee) {
  std::stringstream s;
  s << "??101?";
  EXPECT_EQ(30, Inversions(s));
}

TEST(InversionsTest, Test_LLaYgHagVPOnFYE) {
  std::stringstream s;
  s << "1?10";
  EXPECT_EQ(6, Inversions(s));
}

TEST(InversionsTest, Test_AddUgdiTAXzdbDh) {
  std::stringstream s;
  s << "0??0";
  EXPECT_EQ(5, Inversions(s));
}

TEST(InversionsTest, Test_lIhxGyedGOArTRD) {
  std::stringstream s;
  s << "??10??1001";
  EXPECT_EQ(200, Inversions(s));
}

TEST(InversionsTest, Test_bLTtAVtBszgVpeR) {
  std::stringstream s;
  s << "1??0000?01?0110";
  EXPECT_EQ(392, Inversions(s));
}

TEST(InversionsTest, Test_rqJmUZBOlpnCDzT) {
  std::stringstream s;
  s << "11001?001101";
  EXPECT_EQ(36, Inversions(s));
}

TEST(InversionsTest, Test_iJqlDdgoTmCednp) {
  std::stringstream s;
  s << "0???0011101?";
  EXPECT_EQ(176, Inversions(s));
}

TEST(InversionsTest, Test_VjdSbqLbkpdvppE) {
  std::stringstream s;
  s << "0?1101??0";
  EXPECT_EQ(86, Inversions(s));
}

TEST(InversionsTest, Test_cRTMSdgFmmcjHpM) {
  std::stringstream s;
  s << "??111011?01111";
  EXPECT_EQ(110, Inversions(s));
}

TEST(InversionsTest, Test_cYgiqohURpYmwPj) {
  std::stringstream s;
  s << "0??110111110?";
  EXPECT_EQ(122, Inversions(s));
}

TEST(InversionsTest, Test_yNKKJeOmFCHDjku) {
  std::stringstream s;
  s << "011011010?";
  EXPECT_EQ(27, Inversions(s));
}

TEST(InversionsTest, Test_SpAy_RWbHjmVxet) {
  std::stringstream s;
  s << "1?0?001?01???0";
  EXPECT_EQ(1616, Inversions(s));
}

TEST(InversionsTest, Test_vefPIWBTDrDwq_l) {
  std::stringstream s;
  s << "011101?011001";
  EXPECT_EQ(45, Inversions(s));
}

TEST(InversionsTest, Test__scBERhGwQLfrND) {
  std::stringstream s;
  s << "110?0???";
  EXPECT_EQ(160, Inversions(s));
}

TEST(InversionsTest, Test_otXQSBxSovbSXdr) {
  std::stringstream s;
  s << "11?1111";
  EXPECT_EQ(2, Inversions(s));
}

TEST(InversionsTest, Test_QWHDMK_FxsRyeQx) {
  std::stringstream s;
  s << "00100000???1?0";
  EXPECT_EQ(208, Inversions(s));
}

TEST(InversionsTest, Test_VGNlwiRdQRJRnEK) {
  std::stringstream s;
  s << "0?10??????111";
  EXPECT_EQ(1248, Inversions(s));
}

TEST(InversionsTest, Test_JpQCFyLKwbbdnmO) {
  std::stringstream s;
  s << "?00?0??";
  EXPECT_EQ(56, Inversions(s));
}

TEST(InversionsTest, Test_fdElGLHqUQNOMNP) {
  std::stringstream s;
  s << "?11?0???010";
  EXPECT_EQ(624, Inversions(s));
}

TEST(InversionsTest, Test_UCIZThWTbWocKAw) {
  std::stringstream s;
  s << "1?0?01??1";
  EXPECT_EQ(128, Inversions(s));
}

TEST(InversionsTest, Test_iRItrZhJQImPwqq) {
  std::stringstream s;
  s << "111????10";
  EXPECT_EQ(216, Inversions(s));
}

TEST(InversionsTest, Test_mi_uXYvCUxUToNx) {
  std::stringstream s;
  s << "??0?0?0??0010";
  EXPECT_EQ(1168, Inversions(s));
}

TEST(InversionsTest, Test_iztuOGpeCezvEtD) {
  std::stringstream s;
  s << "0?10?01?0?101?";
  EXPECT_EQ(608, Inversions(s));
}

TEST(InversionsTest, Test__xaUuqIUZaOhQFx) {
  std::stringstream s;
  s << "10110?11100?";
  EXPECT_EQ(87, Inversions(s));
}

TEST(InversionsTest, Test_FGsZfxAVAfBFyIl) {
  std::stringstream s;
  s << "00?00???";
  EXPECT_EQ(40, Inversions(s));
}

TEST(InversionsTest, Test_wepaFwgcyOVeJtw) {
  std::stringstream s;
  s << "10?1???00?1000";
  EXPECT_EQ(1040, Inversions(s));
}

TEST(InversionsTest, Test_WwhsQAgEPnNEpsg) {
  std::stringstream s;
  s << "1?1???0";
  EXPECT_EQ(144, Inversions(s));
}

TEST(InversionsTest, Test_OEGhUTtnxPqqiov) {
  std::stringstream s;
  s << "1?111100?";
  EXPECT_EQ(57, Inversions(s));
}

TEST(InversionsTest, Test_VBTEtMwHvbcoZpi) {
  std::stringstream s;
  s << "0?01011??1??";
  EXPECT_EQ(368, Inversions(s));
}

TEST(InversionsTest, Test_ODhUDhwrpVRkVvh) {
  std::stringstream s;
  s << "?1??0?10?100";
  EXPECT_EQ(720, Inversions(s));
}

TEST(InversionsTest, Test_NrwDOGwaUJSSnkj) {
  std::stringstream s;
  s << "?11?0101111";
  EXPECT_EQ(33, Inversions(s));
}

TEST(InversionsTest, Test_QHg_tnwGfeRHnYI) {
  std::stringstream s;
  s << "0?1001?";
  EXPECT_EQ(17, Inversions(s));
}

TEST(InversionsTest, Test_ExLxLjtUXDIaSqQ) {
  std::stringstream s;
  s << "?001?00011";
  EXPECT_EQ(31, Inversions(s));
}

TEST(InversionsTest, Test_cnlMtBxDVEBnqnw) {
  std::stringstream s;
  s << "00??0011??0?0";
  EXPECT_EQ(512, Inversions(s));
}

TEST(InversionsTest, Test_wuwTIKwexKQUMnO) {
  std::stringstream s;
  s << "?1010000";
  EXPECT_EQ(23, Inversions(s));
}

TEST(InversionsTest, Test_MOurMeA_FWUkdpe) {
  std::stringstream s;
  s << "1??111?0?001";
  EXPECT_EQ(384, Inversions(s));
}

TEST(InversionsTest, Test_ihXtVYVbbxP_LBp) {
  std::stringstream s;
  s << "01010110";
  EXPECT_EQ(7, Inversions(s));
}

TEST(InversionsTest, Test_UQARWlyDlOrZNGo) {
  std::stringstream s;
  s << "01110??0???0?";
  EXPECT_EQ(1616, Inversions(s));
}

TEST(InversionsTest, Test_BEcjiCRGWWInMwh) {
  std::stringstream s;
  s << "?0110?11";
  EXPECT_EQ(17, Inversions(s));
}

TEST(InversionsTest, Test__zwVxvYFFKliVL_) {
  std::stringstream s;
  s << "??0010??10?";
  EXPECT_EQ(400, Inversions(s));
}

TEST(InversionsTest, Test_QOzwjZpXehtSVkD) {
  std::stringstream s;
  s << "0000?10";
  EXPECT_EQ(3, Inversions(s));
}

TEST(InversionsTest, Test_yFjcYOVuUpGwmeB) {
  std::stringstream s;
  s << "10?10001?0??0";
  EXPECT_EQ(384, Inversions(s));
}

TEST(InversionsTest, Test_TwtBmbCfhzTwSll) {
  std::stringstream s;
  s << "?011?1011";
  EXPECT_EQ(23, Inversions(s));
}

TEST(InversionsTest, Test_ocuCpwGPZwEEGGt) {
  std::stringstream s;
  s << "0?0???101?11110";
  EXPECT_EQ(496, Inversions(s));
}

TEST(InversionsTest, Test_Awjvei_VzEliWeq) {
  std::stringstream s;
  s << "10?01?1";
  EXPECT_EQ(17, Inversions(s));
}

TEST(InversionsTest, Test_IhUvxF_wYxFCYCm) {
  std::stringstream s;
  s << "?0111000";
  EXPECT_EQ(22, Inversions(s));
}

TEST(InversionsTest, Test_PpmVJXtliQAhVJP) {
  std::stringstream s;
  s << "11?11?1??";
  EXPECT_EQ(152, Inversions(s));
}

TEST(InversionsTest, Test_WdwrrEPgEWjWULD) {
  std::stringstream s;
  s << "?001?0??10?0?";
  EXPECT_EQ(1200, Inversions(s));
}

TEST(InversionsTest, Test_phiggfThXo_xiSI) {
  std::stringstream s;
  s << "1????100";
  EXPECT_EQ(184, Inversions(s));
}

TEST(InversionsTest, Test_TTqXWWhzFDLA_Pu) {
  std::stringstream s;
  s << "111??10";
  EXPECT_EQ(33, Inversions(s));
}

TEST(InversionsTest, Test_QvqgStkLaZlbabQ) {
  std::stringstream s;
  s << "010?010110";
  EXPECT_EQ(20, Inversions(s));
}

TEST(InversionsTest, Test_mWJxPvptrIUCcnQ) {
  std::stringstream s;
  s << "?1??0010?0?1";
  EXPECT_EQ(576, Inversions(s));
}

TEST(InversionsTest, Test__osZvEeMZkDNCjV) {
  std::stringstream s;
  s << "101???????";
  EXPECT_EQ(1696, Inversions(s));
}

TEST(InversionsTest, Test_TKtRgABOuwNcUZU) {
  std::stringstream s;
  s << "01?11??0";
  EXPECT_EQ(70, Inversions(s));
}

TEST(InversionsTest, Test_lvQuaFUirLtVsDV) {
  std::stringstream s;
  s << "11100?1000";
  EXPECT_EQ(42, Inversions(s));
}

TEST(InversionsTest, Test_exUPeaHFiCj_kq_) {
  std::stringstream s;
  s << "1?0?0??10";
  EXPECT_EQ(176, Inversions(s));
}

TEST(InversionsTest, Test_bpgSlWEQZzmsAUl) {
  std::stringstream s;
  s << "11?11??111";
  EXPECT_EQ(46, Inversions(s));
}

TEST(InversionsTest, Test_zwhSZxbnFKvosFg) {
  std::stringstream s;
  s << "0??0?10000??0";
  EXPECT_EQ(576, Inversions(s));
}

TEST(InversionsTest, Test_qRFGKRhpnk_KRgk) {
  std::stringstream s;
  s << "0?0???0";
  EXPECT_EQ(64, Inversions(s));
}

TEST(InversionsTest, Test_GBHsdWXukqCorgu) {
  std::stringstream s;
  s << "?11?11000?0";
  EXPECT_EQ(194, Inversions(s));
}

TEST(InversionsTest, Test_tysBlbHFHafDBQb) {
  std::stringstream s;
  s << "111?1?1?10?00?";
  EXPECT_EQ(1216, Inversions(s));
}

TEST(InversionsTest, Test_PhiuwAABcIYhPtw) {
  std::stringstream s;
  s << "0?011?1?010";
  EXPECT_EQ(110, Inversions(s));
}

TEST(InversionsTest, Test_zkUiauuYhZSasLR) {
  std::stringstream s;
  s << "0?10??0?0010?10";
  EXPECT_EQ(784, Inversions(s));
}

TEST(InversionsTest, Test_dtAZOATpvLzsZpF) {
  std::stringstream s;
  s << "?0?1??0";
  EXPECT_EQ(96, Inversions(s));
}

TEST(InversionsTest, Test_UBMqQfsWVzguBMx) {
  std::stringstream s;
  s << "00?11??1??10001";
  EXPECT_EQ(864, Inversions(s));
}

TEST(InversionsTest, Test_EYLDiIAonxkvnQY) {
  std::stringstream s;
  s << "1?01?10001100?";
  EXPECT_EQ(242, Inversions(s));
}

TEST(InversionsTest, Test_KKBXsdPdLhpJFgy) {
  std::stringstream s;
  s << "10?1110?10?";
  EXPECT_EQ(138, Inversions(s));
}

TEST(InversionsTest, Test_ZsTFvlYCfAfbKgy) {
  std::stringstream s;
  s << "1?0?1??111??1?0";
  EXPECT_EQ(3488, Inversions(s));
}

TEST(InversionsTest, Test_wHAsyrnuTZc_ztM) {
  std::stringstream s;
  s << "001??0?1100???";
  EXPECT_EQ(1328, Inversions(s));
}

TEST(InversionsTest, Test_jERnzMsFbkJzvRK) {
  std::stringstream s;
  s << "001??10";
  EXPECT_EQ(17, Inversions(s));
}

TEST(InversionsTest, Test_zOMoZLFqPCejvzj) {
  std::stringstream s;
  s << "?111000";
  EXPECT_EQ(21, Inversions(s));
}

TEST(InversionsTest, Test_rQaxxWwWapScUTg) {
  std::stringstream s;
  s << "10101?10110001";
  EXPECT_EQ(57, Inversions(s));
}

TEST(InversionsTest, Test_iLDItDqApyJUByn) {
  std::stringstream s;
  s << "?1?01?100";
  EXPECT_EQ(106, Inversions(s));
}

TEST(InversionsTest, Test_RwPiHLPUCYtrzaF) {
  std::stringstream s;
  s << "01010010";
  EXPECT_EQ(8, Inversions(s));
}

TEST(InversionsTest, Test_DsTDVlKAmjWMdUD) {
  std::stringstream s;
  s << "?0000100?100111";
  EXPECT_EQ(47, Inversions(s));
}

TEST(InversionsTest, Test_sGVTonMbLWCUiNf) {
  std::stringstream s;
  s << "?10?110011";
  EXPECT_EQ(41, Inversions(s));
}

TEST(InversionsTest, Test_bWMfnXopTttmdlz) {
  std::stringstream s;
  s << "00?1?000?1";
  EXPECT_EQ(62, Inversions(s));
}

TEST(InversionsTest, Test_EQLMlqfKhGLoODz) {
  std::stringstream s;
  s << "0???1011100";
  EXPECT_EQ(114, Inversions(s));
}

TEST(InversionsTest, Test_iCoMqgzyAKcqTAM) {
  std::stringstream s;
  s << "101????00?000?1";
  EXPECT_EQ(2064, Inversions(s));
}

TEST(InversionsTest, Test_uNqnMGGHVmKggxi) {
  std::stringstream s;
  s << "01111?001?";
  EXPECT_EQ(55, Inversions(s));
}

TEST(InversionsTest, Test_cgKjao_NSSfHXml) {
  std::stringstream s;
  s << "000?0011??00??";
  EXPECT_EQ(464, Inversions(s));
}

TEST(InversionsTest, Test_WIYFvDdjJNzu_DV) {
  std::stringstream s;
  s << "1?1?00001";
  EXPECT_EQ(55, Inversions(s));
}

TEST(InversionsTest, Test_muyNuJKLFPVKBPc) {
  std::stringstream s;
  s << "???000?00?";
  EXPECT_EQ(352, Inversions(s));
}

TEST(InversionsTest, Test_RpfculOwyGBxcyB) {
  std::stringstream s;
  s << "1?00?1001";
  EXPECT_EQ(41, Inversions(s));
}

TEST(InversionsTest, Test_TYkgQg_KrqKAJTD) {
  std::stringstream s;
  s << "0110?111010100?";
  EXPECT_EQ(135, Inversions(s));
}

TEST(InversionsTest, Test_PawHVVPyleYYDrJ) {
  std::stringstream s;
  s << "0?1001?0?";
  EXPECT_EQ(70, Inversions(s));
}

TEST(InversionsTest, Test_lbAGWcpfnSmkzog) {
  std::stringstream s;
  s << "111100???1?";
  EXPECT_EQ(288, Inversions(s));
}

TEST(InversionsTest, Test_WthqZUTnUAmv_zM) {
  std::stringstream s;
  s << "110?000";
  EXPECT_EQ(21, Inversions(s));
}

TEST(InversionsTest, Test_xdRojLfMpkfsKCS) {
  std::stringstream s;
  s << "0110??0110?";
  EXPECT_EQ(118, Inversions(s));
}

TEST(InversionsTest, Test_HEbCMPB_EmqJabZ) {
  std::stringstream s;
  s << "?11?110?";
  EXPECT_EQ(70, Inversions(s));
}

TEST(InversionsTest, Test_lETWsOcFNhECQuf) {
  std::stringstream s;
  s << "11101?1010100";
  EXPECT_EQ(64, Inversions(s));
}

TEST(InversionsTest, Test_poCvKYvLqV_GfNH) {
  std::stringstream s;
  s << "?0?0?11?001001";
  EXPECT_EQ(352, Inversions(s));
}

TEST(InversionsTest, Test_ZEMgSUQdyMWxetT) {
  std::stringstream s;
  s << "??0?00?11101";
  EXPECT_EQ(168, Inversions(s));
}

TEST(InversionsTest, Test_EAXJUORnsYopEXV) {
  std::stringstream s;
  s << "00000111?10";
  EXPECT_EQ(12, Inversions(s));
}

TEST(InversionsTest, Test_HI_FMMdjbAuRcWi) {
  std::stringstream s;
  s << "?0011111??10010";
  EXPECT_EQ(242, Inversions(s));
}

TEST(InversionsTest, Test_LrhfnBHIXzLCzuZ) {
  std::stringstream s;
  s << "???000101";
  EXPECT_EQ(62, Inversions(s));
}

TEST(InversionsTest, Test_nkiAyeImYZBqm_r) {
  std::stringstream s;
  s << "0011000010?0";
  EXPECT_EQ(32, Inversions(s));
}

TEST(InversionsTest, Test_cwZCTvvtoBIyCyK) {
  std::stringstream s;
  s << "???11??";
  EXPECT_EQ(144, Inversions(s));
}

TEST(InversionsTest, Test_FOsEmXRZByCseej) {
  std::stringstream s;
  s << "1001??00";
  EXPECT_EQ(41, Inversions(s));
}

TEST(InversionsTest, Test_saVdIsRyylG_Ybp) {
  std::stringstream s;
  s << "00100?00?";
  EXPECT_EQ(25, Inversions(s));
}

TEST(InversionsTest, Test_soxLejqiNkQBhAs) {
  std::stringstream s;
  s << "1011???";
  EXPECT_EQ(50, Inversions(s));
}

TEST(InversionsTest, Test_GOlgTGJBkYmUqRq) {
  std::stringstream s;
  s << "1?101?0?1001000";
  EXPECT_EQ(330, Inversions(s));
}

TEST(InversionsTest, Test_kALQsiQVfYbAtUW) {
  std::stringstream s;
  s << "??0010000";
  EXPECT_EQ(41, Inversions(s));
}

TEST(InversionsTest, Test_wvpdjDlWXCOJmvv) {
  std::stringstream s;
  s << "00100?01110?1";
  EXPECT_EQ(43, Inversions(s));
}

TEST(InversionsTest, Test_KcopinN_HOwOlDS) {
  std::stringstream s;
  s << "011101?0";
  EXPECT_EQ(19, Inversions(s));
}

TEST(InversionsTest, Test_xlGjszLvopNfjMM) {
  std::stringstream s;
  s << "0?1?0??0??0?0";
  EXPECT_EQ(2784, Inversions(s));
}

TEST(InversionsTest, Test_SlpSqHxNWUmYEaf) {
  std::stringstream s;
  s << "1????1101?";
  EXPECT_EQ(368, Inversions(s));
}

TEST(InversionsTest, Test_IkwfkDQxVFm_DRR) {
  std::stringstream s;
  s << "?001?1011?";
  EXPECT_EQ(58, Inversions(s));
}

TEST(InversionsTest, Test_eUiUHFbxZRKolkb) {
  std::stringstream s;
  s << "?0??0?010111??1";
  EXPECT_EQ(944, Inversions(s));
}

TEST(InversionsTest, Test_QQUzqsdEiezWwag) {
  std::stringstream s;
  s << "0111?1?0";
  EXPECT_EQ(35, Inversions(s));
}

TEST(InversionsTest, Test_PzutFLvscMYnEJo) {
  std::stringstream s;
  s << "1?100110?";
  EXPECT_EQ(49, Inversions(s));
}

TEST(InversionsTest, Test_koLEegbbUS_uslt) {
  std::stringstream s;
  s << "10?10??1?0?";
  EXPECT_EQ(528, Inversions(s));
}

TEST(InversionsTest, Test_pGvYdGPLkYgAJyp) {
  std::stringstream s;
  s << "0?1??1000";
  EXPECT_EQ(98, Inversions(s));
}

TEST(InversionsTest, Test_keTJUraRoJSrnzx) {
  std::stringstream s;
  s << "1?0????";
  EXPECT_EQ(208, Inversions(s));
}

TEST(InversionsTest, Test_zjOBIpeK_lnKpGD) {
  std::stringstream s;
  s << "?11?10?011???11";
  EXPECT_EQ(1424, Inversions(s));
}

TEST(InversionsTest, Test_BfZkgxWZPvpnTPW) {
  std::stringstream s;
  s << "010?1??10??0";
  EXPECT_EQ(608, Inversions(s));
}

TEST(InversionsTest, Test_uOVWKjBtAtUFQzU) {
  std::stringstream s;
  s << "?10?001?0?11???";
  EXPECT_EQ(2912, Inversions(s));
}

TEST(InversionsTest, Test_qbcaAFNoDcXBrre) {
  std::stringstream s;
  s << "??1??011";
  EXPECT_EQ(88, Inversions(s));
}

TEST(InversionsTest, Test_VkyMXYeTIfUbwEJ) {
  std::stringstream s;
  s << "1??0???";
  EXPECT_EQ(224, Inversions(s));
}

TEST(InversionsTest, Test_kwfpbIdSCzPkJEo) {
  std::stringstream s;
  s << "???110110";
  EXPECT_EQ(78, Inversions(s));
}

TEST(InversionsTest, Test_GgPKIFPClxumPvG) {
  std::stringstream s;
  s << "100?0?010?1";
  EXPECT_EQ(90, Inversions(s));
}

TEST(InversionsTest, Test_rUmeHnkzjKQKqHW) {
  std::stringstream s;
  s << "?0??0??11";
  EXPECT_EQ(144, Inversions(s));
}

TEST(InversionsTest, Test_mWGrnbmfGSSusvO) {
  std::stringstream s;
  s << "?10?1?1110";
  EXPECT_EQ(82, Inversions(s));
}

TEST(InversionsTest, Test_rAARjRejiElIBqE) {
  std::stringstream s;
  s << "11?00?1?1??0";
  EXPECT_EQ(688, Inversions(s));
}

TEST(InversionsTest, Test_ovbMMVuoyAVzMgI) {
  std::stringstream s;
  s << "??01001";
  EXPECT_EQ(21, Inversions(s));
}

TEST(InversionsTest, Test_cUkAiZXBxxjme_e) {
  std::stringstream s;
  s << "?11???00?1";
  EXPECT_EQ(464, Inversions(s));
}

TEST(InversionsTest, Test_eXOd_EDDxGyVfjJ) {
  std::stringstream s;
  s << "01?00110";
  EXPECT_EQ(14, Inversions(s));
}

TEST(InversionsTest, Test_TfhtDgfFLM_OWeh) {
  std::stringstream s;
  s << "0??1?0110?00?";
  EXPECT_EQ(736, Inversions(s));
}

TEST(InversionsTest, Test_SmyGFAnsAdtzeAs) {
  std::stringstream s;
  s << "00001001??001?1";
  EXPECT_EQ(98, Inversions(s));
}

TEST(InversionsTest, Test_PWTpKuCrHLmTNfk) {
  std::stringstream s;
  s << "100??0?10?000";
  EXPECT_EQ(376, Inversions(s));
}

TEST(InversionsTest, Test__HoEMuVFXXCCbae) {
  std::stringstream s;
  s << "???00?0010?01?";
  EXPECT_EQ(1200, Inversions(s));
}

TEST(InversionsTest, Test_xlMwGJnRyWGDEFN) {
  std::stringstream s;
  s << "11?11?1111??101";
  EXPECT_EQ(376, Inversions(s));
}

TEST(InversionsTest, Test_nuBzxiFtMIl_PxG) {
  std::stringstream s;
  s << "01?1?0111001?";
  EXPECT_EQ(162, Inversions(s));
}

TEST(InversionsTest, Test_etAlkLLagDwwCjZ) {
  std::stringstream s;
  s << "?111??1??0";
  EXPECT_EQ(512, Inversions(s));
}

TEST(InversionsTest, Test_nxZoDrZSZROwExO) {
  std::stringstream s;
  s << "?01??11?00100";
  EXPECT_EQ(424, Inversions(s));
}

TEST(InversionsTest, Test_uQsLcPYXbwUoXJr) {
  std::stringstream s;
  s << "000010101?01?01";
  EXPECT_EQ(61, Inversions(s));
}

TEST(InversionsTest, Test_JiKEbXdLSywHOZg) {
  std::stringstream s;
  s << "11?0110000?1?1";
  EXPECT_EQ(214, Inversions(s));
}

TEST(InversionsTest, Test_ZdkwCqJZEleS_C_) {
  std::stringstream s;
  s << "1?0?0?1001?";
  EXPECT_EQ(240, Inversions(s));
}

TEST(InversionsTest, Test_eqUwSkAKikBef_L) {
  std::stringstream s;
  s << "0?1?0?0?11?0?1";
  EXPECT_EQ(1168, Inversions(s));
}

TEST(InversionsTest, Test_nEvcxQOYOtpbpaJ) {
  std::stringstream s;
  s << "??1??0?000100";
  EXPECT_EQ(848, Inversions(s));
}

TEST(InversionsTest, Test_Q_xGmunYxJmnnof) {
  std::stringstream s;
  s << "110??10?01?00?0";
  EXPECT_EQ(1248, Inversions(s));
}

TEST(InversionsTest, Test_udRRljN_RaEJPuz) {
  std::stringstream s;
  s << "1100??1??0?1";
  EXPECT_EQ(576, Inversions(s));
}

TEST(InversionsTest, Test_opQcGolEAKQxNeN) {
  std::stringstream s;
  s << "000101??";
  EXPECT_EQ(13, Inversions(s));
}

TEST(InversionsTest, Test_hrRzRlyjwxBnSnu) {
  std::stringstream s;
  s << "?000?10?1???";
  EXPECT_EQ(688, Inversions(s));
}

TEST(InversionsTest, Test_cnMutPKGZbqTgqm) {
  std::stringstream s;
  s << "0?1?0??100?";
  EXPECT_EQ(480, Inversions(s));
}

TEST(InversionsTest, Test_gVPGExHc_WclHGZ) {
  std::stringstream s;
  s << "1111001?010?";
  EXPECT_EQ(103, Inversions(s));
}

TEST(InversionsTest, Test_tmuGqPbMRnBblrF) {
  std::stringstream s;
  s << "?1101?0?";
  EXPECT_EQ(82, Inversions(s));
}

TEST(InversionsTest, Test_bZTDdteQYCMLxIk) {
  std::stringstream s;
  s << "1000???110??1?";
  EXPECT_EQ(1136, Inversions(s));
}

TEST(InversionsTest, Test_rxReqfrCSXFvwVB) {
  std::stringstream s;
  s << "?0100?100010?00";
  EXPECT_EQ(226, Inversions(s));
}

TEST(InversionsTest, Test_MAIvrwHuw_kdUEp) {
  std::stringstream s;
  s << "?10?010";
  EXPECT_EQ(29, Inversions(s));
}

TEST(InversionsTest, Test_VHjTqWfpXNYQDzA) {
  std::stringstream s;
  s << "0100?000?11";
  EXPECT_EQ(31, Inversions(s));
}

TEST(InversionsTest, Test_CYkfSXMaPAKffTB) {
  std::stringstream s;
  s << "0?0?1?0001";
  EXPECT_EQ(74, Inversions(s));
}

TEST(InversionsTest, Test_vVOWkUVxgPkVxij) {
  std::stringstream s;
  s << "?000111?10110";
  EXPECT_EQ(61, Inversions(s));
}

TEST(InversionsTest, Test_MYRmXpgkhPnAjGU) {
  std::stringstream s;
  s << "??01?001?1";
  EXPECT_EQ(144, Inversions(s));
}

TEST(InversionsTest, Test_GrMpssStHMejCIH) {
  std::stringstream s;
  s << "10???0?11??0";
  EXPECT_EQ(1168, Inversions(s));
}

TEST(InversionsTest, Test_EGxNNbjRGWNtxtH) {
  std::stringstream s;
  s << "01?100111??0?0";
  EXPECT_EQ(448, Inversions(s));
}

TEST(InversionsTest, Test_ewwCnfjQIGDZaPM) {
  std::stringstream s;
  s << "0110?0110?0000";
  EXPECT_EQ(129, Inversions(s));
}

TEST(InversionsTest, Test_MWyztCWaNiXzLQq) {
  std::stringstream s;
  s << "0010?011?0?001";
  EXPECT_EQ(158, Inversions(s));
}

TEST(InversionsTest, Test_PsOmjsNyxHWNaQP) {
  std::stringstream s;
  s << "0100??0??001?1?";
  EXPECT_EQ(1168, Inversions(s));
}

TEST(InversionsTest, Test_PQyYqqbRqrEIDLq) {
  std::stringstream s;
  s << "1?00?1010??1";
  EXPECT_EQ(248, Inversions(s));
}

TEST(InversionsTest, Test_utJftgccjCjdkzG) {
  std::stringstream s;
  s << "111?1??110111??";
  EXPECT_EQ(784, Inversions(s));
}

TEST(InversionsTest, Test_Jk_tqksARmjPHlj) {
  std::stringstream s;
  s << "1???1?0110000?0";
  EXPECT_EQ(1328, Inversions(s));
}

TEST(InversionsTest, Test_YFvXJuIDipUrRuT) {
  std::stringstream s;
  s << "1101?101";
  EXPECT_EQ(16, Inversions(s));
}

TEST(InversionsTest, Test_FlsHqBhtIEzKffV) {
  std::stringstream s;
  s << "?111000?1101";
  EXPECT_EQ(73, Inversions(s));
}

TEST(InversionsTest, Test_oMQQmaicLVSDnPw) {
  std::stringstream s;
  s << "10??101?111";
  EXPECT_EQ(58, Inversions(s));
}

TEST(InversionsTest, Test_ihhXdMMVJobrpRE) {
  std::stringstream s;
  s << "0?1???10?1?00?0";
  EXPECT_EQ(4256, Inversions(s));
}

TEST(InversionsTest, Test_WCqhuccuqyVTRgH) {
  std::stringstream s;
  s << "?0100000?0?110?";
  EXPECT_EQ(296, Inversions(s));
}

TEST(InversionsTest, Test_sjmpX_PZUiNZbTT) {
  std::stringstream s;
  s << "011010?0?0010?";
  EXPECT_EQ(218, Inversions(s));
}

TEST(InversionsTest, Test_AdmHLUeq_SldUYC) {
  std::stringstream s;
  s << "1????00000??011";
  EXPECT_EQ(1648, Inversions(s));
}

TEST(InversionsTest, Test_GazMkYJwaPKw_DY) {
  std::stringstream s;
  s << "0110100?0?1";
  EXPECT_EQ(59, Inversions(s));
}

TEST(InversionsTest, Test_aqnEbafTUDMVikS) {
  std::stringstream s;
  s << "010???1111?101";
  EXPECT_EQ(232, Inversions(s));
}

TEST(InversionsTest, Test_XIHHruKBNqwDZyz) {
  std::stringstream s;
  s << "0?11?1?0?1";
  EXPECT_EQ(160, Inversions(s));
}

TEST(InversionsTest, Test_FDaYShGtbLnbVcG) {
  std::stringstream s;
  s << "1101?1??11";
  EXPECT_EQ(66, Inversions(s));
}

TEST(InversionsTest, Test_VvPAf_MERlSeGZY) {
  std::stringstream s;
  s << "10?1100?010?11?";
  EXPECT_EQ(408, Inversions(s));
}

TEST(InversionsTest, Test_IiYLAslkhiX_NYP) {
  std::stringstream s;
  s << "1?10????10?110?";
  EXPECT_EQ(3808, Inversions(s));
}

TEST(InversionsTest, Test_Kp_vndYeWNHJK_y) {
  std::stringstream s;
  s << "110010?110??0";
  EXPECT_EQ(210, Inversions(s));
}

TEST(InversionsTest, Test__kJgkblNbHUPUPc) {
  std::stringstream s;
  s << "1??001?";
  EXPECT_EQ(54, Inversions(s));
}

TEST(InversionsTest, Test_TZoaVYwzUoJxxYS) {
  std::stringstream s;
  s << "?10?000";
  EXPECT_EQ(33, Inversions(s));
}

TEST(InversionsTest, Test_azawqWWUdnmmspH) {
  std::stringstream s;
  s << "0??101??0";
  EXPECT_EQ(152, Inversions(s));
}

TEST(InversionsTest, Test_miHaAukPoOotgXr) {
  std::stringstream s;
  s << "???0??00?011";
  EXPECT_EQ(848, Inversions(s));
}

TEST(InversionsTest, Test_QZpSjLSuILy_qdr) {
  std::stringstream s;
  s << "1111011?1";
  EXPECT_EQ(14, Inversions(s));
}

TEST(InversionsTest, Test_JdQytrlLHwNyXWf) {
  std::stringstream s;
  s << "1?1?0?11?011100";
  EXPECT_EQ(528, Inversions(s));
}

TEST(InversionsTest, Test_ckAxTylmJEvQTtC) {
  std::stringstream s;
  s << "00?10?11";
  EXPECT_EQ(9, Inversions(s));
}

TEST(InversionsTest, Test_gLcALOtlNHczJlD) {
  std::stringstream s;
  s << "100001?01?";
  EXPECT_EQ(37, Inversions(s));
}

TEST(InversionsTest, Test_OaiFTzGWw_shVbi) {
  std::stringstream s;
  s << "0100?0?01001";
  EXPECT_EQ(51, Inversions(s));
}

TEST(InversionsTest, Test_BjOuqbTEwdUZXSO) {
  std::stringstream s;
  s << "00??01111000?0";
  EXPECT_EQ(194, Inversions(s));
}

TEST(InversionsTest, Test_ktli_DWbSPkVIus) {
  std::stringstream s;
  s << "111?00000?0000?";
  EXPECT_EQ(310, Inversions(s));
}

TEST(InversionsTest, Test_NxtMzN_mbZyuB_P) {
  std::stringstream s;
  s << "0?000?0??0?01?";
  EXPECT_EQ(720, Inversions(s));
}

TEST(InversionsTest, Test_PAvXGCwPuLkuVQw) {
  std::stringstream s;
  s << "01?0111001?10?1";
  EXPECT_EQ(194, Inversions(s));
}

TEST(InversionsTest, Test_eLDCmAHzCxazAqJ) {
  std::stringstream s;
  s << "111???00?";
  EXPECT_EQ(264, Inversions(s));
}

TEST(InversionsTest, Test_ilhrpdpdnhoGwph) {
  std::stringstream s;
  s << "01100?1";
  EXPECT_EQ(10, Inversions(s));
}

TEST(InversionsTest, Test_ZxPtXYHkHzdfYiS) {
  std::stringstream s;
  s << "01??0????11?0?";
  EXPECT_EQ(5504, Inversions(s));
}

TEST(InversionsTest, Test_UkteBJuWRqruCHa) {
  std::stringstream s;
  s << "111??00";
  EXPECT_EQ(45, Inversions(s));
}

TEST(InversionsTest, Test_tmisRdNGdYVEKns) {
  std::stringstream s;
  s << "11?????";
  EXPECT_EQ(240, Inversions(s));
}

TEST(InversionsTest, Test_zWHefnGKbmWNQhb) {
  std::stringstream s;
  s << "?0?011????";
  EXPECT_EQ(592, Inversions(s));
}

TEST(InversionsTest, Test_QhjvJnKhCFfHrgN) {
  std::stringstream s;
  s << "?101?01??0000";
  EXPECT_EQ(480, Inversions(s));
}

TEST(InversionsTest, Test_waxzjlJvAfskPTh) {
  std::stringstream s;
  s << "?1?1??1?11?";
  EXPECT_EQ(656, Inversions(s));
}

TEST(InversionsTest, Test_V_BWRhcONbMUHYl) {
  std::stringstream s;
  s << "0000?1110100";
  EXPECT_EQ(25, Inversions(s));
}

TEST(InversionsTest, Test_hxSGXHmjpxQqUsx) {
  std::stringstream s;
  s << "?1??1?0???";
  EXPECT_EQ(1824, Inversions(s));
}

TEST(InversionsTest, Test_ogZRjEvDdhJIAoV) {
  std::stringstream s;
  s << "10?111101??011";
  EXPECT_EQ(170, Inversions(s));
}

TEST(InversionsTest, Test_rNtokXXUpnBezFS) {
  std::stringstream s;
  s << "010?010?";
  EXPECT_EQ(27, Inversions(s));
}

TEST(InversionsTest, Test_fyWsnfGqbklGksB) {
  std::stringstream s;
  s << "0101???101";
  EXPECT_EQ(74, Inversions(s));
}

TEST(InversionsTest, Test_lAnxLKXJBbPtPiu) {
  std::stringstream s;
  s << "00000011?100010";
  EXPECT_EQ(32, Inversions(s));
}

TEST(InversionsTest, Test_ErmUEaBOfXkIvRY) {
  std::stringstream s;
  s << "?01?01011?1001?0?1??10?11??101000?0000?1001001?111?11?0?10??1011?";
  EXPECT_EQ(259129344, Inversions(s));
}

TEST(InversionsTest, Test_uxsUjaYKWiwYwIo) {
  std::stringstream s;
  s << "1?10?100110??1101?11?1111??1111011??01?0010??0??011?1011?1?0";
  EXPECT_EQ(121307136, Inversions(s));
}

TEST(InversionsTest, Test_G_DHAqNDZinZZsT) {
  std::stringstream s;
  s << "00110110?011?01??0?0110?1?00111??00??110??1110?01?1110?0?00010?0?0";
  EXPECT_EQ(313917440, Inversions(s));
}

TEST(InversionsTest, Test_hsXctVAhFRXPCEm) {
  std::stringstream s;
  s << "101010?1?1?111?101010?1?0?11?1011?1?0101??101?0?1?0?010???1?11?00?";
  EXPECT_EQ(505048050, Inversions(s));
}


#pragma clang diagnostic pop