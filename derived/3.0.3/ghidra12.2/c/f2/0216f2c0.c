
void _INIT_5620(void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  
  DAT_053f7018 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053f701c);
  DAT_053f7028 = 0x8004ef;
  DAT_053f7030 = nn::os::GetSystemTick();
  DAT_053f7038 = 0;
  DAT_053f7040 = 0;
  DAT_053f7048 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  DAT_053f7058 = "jaJP_V1AM_STD001.vtam";
  DAT_053f7068 = "jaJP_langDic_40c_R4.dicL";
  DAT_053f7078 = &DAT_04062db7;
  DAT_053f7050 = puVar2;
  DAT_053f7060 = puVar2;
  DAT_053f7070 = puVar2;
  DAT_053f7080 = FUN_006bd550(&DAT_04062db7,0);
  DAT_053f7090 = "enUS_V1AM_STD001.vtam";
  DAT_053f70a0 = "enUS_langDic.dicL";
  DAT_053f70b0 = &DAT_040dabbb;
  DAT_053f7088 = puVar2;
  DAT_053f7098 = puVar2;
  DAT_053f70a8 = puVar2;
  DAT_053f70b8 = FUN_006bd550(&DAT_040dabbb,0);
  DAT_053f70c8 = "esUS_V1AM_STD001.vtam";
  DAT_053f70d8 = "esUS_langDic.dicL";
  DAT_053f70e8 = &DAT_04087be3;
  DAT_053f70c0 = puVar2;
  DAT_053f70d0 = puVar2;
  DAT_053f70e0 = puVar2;
  DAT_053f70f0 = FUN_006bd550(&DAT_04087be3,0);
  DAT_053f7100 = "frCA_V1AM_STD001.vtam";
  DAT_053f7110 = "frCA_langDic.dicL";
  DAT_053f7120 = &DAT_040cabae;
  DAT_053f70f8 = puVar2;
  DAT_053f7108 = puVar2;
  DAT_053f7118 = puVar2;
  DAT_053f7128 = FUN_006bd550(&DAT_040cabae,0);
  DAT_053f7138 = "enUK_V1AM_STD001.vtam";
  DAT_053f7148 = "enUK_langDic.dicL";
  DAT_053f7158 = &DAT_040c0a56;
  DAT_053f7130 = puVar2;
  DAT_053f7140 = puVar2;
  DAT_053f7150 = puVar2;
  DAT_053f7160 = FUN_006bd550(&DAT_040c0a56,0);
  DAT_053f7170 = "esES_V1AM_STD001.vtam";
  DAT_053f7180 = "esES_langDic.dicL";
  DAT_053f7190 = &DAT_0408d1e9;
  DAT_053f7168 = puVar2;
  DAT_053f7178 = puVar2;
  DAT_053f7188 = puVar2;
  DAT_053f7198 = FUN_006bd550(&DAT_0408d1e9,0);
  DAT_053f71a8 = "frFR_V1AM_STD001.vtam";
  DAT_053f71b8 = "frFR_langDic_R2.dicL";
  DAT_053f71c8 = &DAT_040926fb;
  DAT_053f71a0 = puVar2;
  DAT_053f71b0 = puVar2;
  DAT_053f71c0 = puVar2;
  DAT_053f71d0 = FUN_006bd550(&DAT_040926fb,0);
  DAT_053f71e0 = "deDE_V1AM_STD002.vtam";
  DAT_053f71f0 = "deDE_langDic.dicL";
  DAT_053f7200 = &DAT_040bb9fd;
  DAT_053f71d8 = puVar2;
  DAT_053f71e8 = puVar2;
  DAT_053f71f8 = puVar2;
  DAT_053f7208 = FUN_006bd550(&DAT_040bb9fd,0);
  DAT_053f7218 = "itIT_V1AM_STD001.vtam";
  DAT_053f7228 = "itIT_langDic_R2.dicL";
  DAT_053f7238 = &DAT_04087bfa;
  DAT_053f7210 = puVar2;
  DAT_053f7220 = puVar2;
  DAT_053f7230 = puVar2;
  DAT_053f7240 = FUN_006bd550(&DAT_04087bfa,0);
  DAT_053f7260 = "nlNL_langDic_R2.dicL";
  DAT_053f7250 = "nlNL_V1AM_STD002.vtam";
  DAT_053f7270 = &DAT_040fa64d;
  DAT_053f7248 = puVar2;
  DAT_053f7258 = puVar2;
  DAT_053f7268 = puVar2;
  DAT_053f7278 = FUN_006bd550(&DAT_040fa64d,0);
  DAT_053f7288 = "ruRU_V1AM_STD002.vtam";
  DAT_053f7298 = "ruRU_langDic.dicL";
  DAT_053f72a8 = &DAT_040dfe68;
  DAT_053f7280 = puVar2;
  DAT_053f7290 = puVar2;
  DAT_053f72a0 = puVar2;
  DAT_053f72b0 = FUN_006bd550(&DAT_040dfe68,0);
  DAT_053f72c0 = "koKR_V1AM_STD002.vtam";
  DAT_053f72d0 = "koKR_langDic_R2.dicL";
  DAT_053f72e0 = &DAT_040822d3;
  DAT_053f72b8 = puVar2;
  DAT_053f72c8 = puVar2;
  DAT_053f72d8 = puVar2;
  DAT_053f72e8 = FUN_006bd550(&DAT_040822d3,0);
  DAT_053f72f8 = "zhCN_V1AM_STD002.vtam";
  DAT_053f7308 = "zhCN_langDic.dicL";
  DAT_053f7318 = &DAT_040dabd6;
  DAT_053f72f0 = puVar2;
  DAT_053f7300 = puVar2;
  DAT_053f7310 = puVar2;
  DAT_053f7320 = FUN_006bd550(&DAT_040dabd6,0);
  DAT_053f7330 = "zhCN_V1AM_STD002.vtam";
  DAT_053f7340 = "zhCN_langDic.dicL";
  DAT_053f7350 = &DAT_0406d829;
  DAT_053f7328 = puVar2;
  DAT_053f7338 = puVar2;
  DAT_053f7348 = puVar2;
  DAT_053f7358 = FUN_006bd550(&DAT_0406d829,0);
  DAT_053f7360 = &PTR_LAB_04a757f8;
  DAT_053f7368 = 0xe;
  DAT_053f7370 = &DAT_053f7050;
  FUN_006bd550("invalid_name",0);
  puVar7 = DAT_053f7370;
  uVar9 = 7;
  do {
    uVar12 = uVar9 - 1;
    uVar13 = puVar7[uVar12 * 7 + 1];
    uVar14 = puVar7[uVar12 * 7 + 3];
    uVar15 = puVar7[uVar12 * 7 + 5];
    uVar3 = *(uint *)(puVar7 + uVar12 * 7 + 6);
    uVar6 = uVar9;
    if ((int)uVar9 < 8) {
      do {
        uVar4 = (uVar6 & 0xffffffff) << 1;
        uVar17 = -((uVar6 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | uVar4;
        iVar11 = (int)uVar6;
        if (iVar11 < 7) {
          uVar16 = (uint)uVar4;
          uVar17 = (ulong)(uVar16 | *(uint *)(puVar7 + uVar17 * 7 + -1) <
                                    *(uint *)(puVar7 + (long)(int)uVar16 * 7 + 6));
        }
        iVar5 = (int)uVar17;
        lVar8 = (long)iVar5 + -1;
        if (*(uint *)(puVar7 + lVar8 * 7 + 6) <= uVar3) break;
        puVar7[(long)iVar11 * 7 + -6] = puVar7[lVar8 * 7 + 1];
        puVar7[(long)iVar11 * 7 + -4] = puVar7[lVar8 * 7 + 3];
        puVar7[(long)iVar11 * 7 + -2] = puVar7[lVar8 * 7 + 5];
        *(uint *)(puVar7 + (long)iVar11 * 7 + -1) = *(uint *)(puVar7 + lVar8 * 7 + 6);
        iVar11 = iVar5;
        uVar6 = uVar17;
      } while (iVar5 < 8);
    }
    else {
      iVar11 = (int)uVar9;
    }
    puVar7[(long)iVar11 * 7 + -6] = uVar13;
    puVar7[(long)iVar11 * 7 + -4] = uVar14;
    puVar7[(long)iVar11 * 7 + -2] = uVar15;
    *(uint *)(puVar7 + (long)iVar11 * 7 + -1) = uVar3;
    bVar1 = 1 < uVar9;
    uVar9 = uVar12;
  } while (bVar1);
  lVar8 = 0xe;
  do {
    lVar10 = lVar8 + -1;
    iVar11 = (int)lVar8;
    uVar13 = puVar7[lVar10 * 7 + 1];
    puVar7[lVar10 * 7 + 1] = puVar7[1];
    uVar14 = puVar7[lVar10 * 7 + 3];
    uVar15 = puVar7[lVar10 * 7 + 5];
    uVar3 = *(uint *)(puVar7 + lVar10 * 7 + 6);
    puVar7[lVar10 * 7 + 3] = puVar7[3];
    puVar7[lVar10 * 7 + 5] = puVar7[5];
    *(undefined4 *)(puVar7 + lVar10 * 7 + 6) = *(undefined4 *)(puVar7 + 6);
    if (iVar11 < 3) {
      uVar16 = 1;
    }
    else {
      uVar19 = 2;
      uVar18 = 1;
      do {
        if ((int)uVar19 < (int)lVar10) {
          uVar16 = uVar19 | *(uint *)(puVar7 + (long)(int)uVar19 * 7 + -1) <
                            *(uint *)(puVar7 + (long)(int)uVar19 * 7 + 6);
        }
        else {
          uVar16 = uVar19;
        }
        lVar8 = (long)(int)uVar16 + -1;
        if (*(uint *)(puVar7 + lVar8 * 7 + 6) <= uVar3) {
          uVar16 = uVar18;
          break;
        }
        puVar7[(long)(int)uVar18 * 7 + -6] = puVar7[lVar8 * 7 + 1];
        puVar7[(long)(int)uVar18 * 7 + -4] = puVar7[lVar8 * 7 + 3];
        puVar7[(long)(int)uVar18 * 7 + -2] = puVar7[lVar8 * 7 + 5];
        *(uint *)(puVar7 + (long)(int)uVar18 * 7 + -1) = *(uint *)(puVar7 + lVar8 * 7 + 6);
        uVar19 = uVar16 * 2;
        uVar18 = uVar16;
      } while ((int)uVar19 < iVar11);
    }
    puVar7[(long)(int)uVar16 * 7 + -6] = uVar13;
    puVar7[(long)(int)uVar16 * 7 + -4] = uVar14;
    puVar7[(long)(int)uVar16 * 7 + -2] = uVar15;
    *(uint *)(puVar7 + (long)(int)uVar16 * 7 + -1) = uVar3;
    lVar8 = lVar10;
    if (iVar11 < 3) {
      DAT_053f7413 = 0;
      DAT_053f7390 = 0x80;
      DAT_053f7388 = &DAT_053f7394;
      DAT_053f7398 = 0;
      DAT_053f7378 = &PTR_FUN_04a75818;
      DAT_053f7380 = PTR_DAT_04bb2d88 + 0x10;
      DAT_053f7394 = 0xa0d09;
      return;
    }
  } while( true );
}

