
undefined8 FUN_0203d3e0(long param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong *__src;
  ulong *puVar11;
  undefined *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_288;
  char *pcStack_280;
  undefined *local_278;
  undefined1 *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 local_244;
  undefined *local_238;
  char *pcStack_230;
  undefined4 local_228;
  char local_224 [8];
  char local_21c [8];
  undefined2 local_214;
  undefined1 local_212;
  undefined1 local_1a5;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined8 local_198;
  undefined *local_190;
  char *pcStack_188;
  undefined *local_180;
  char *local_178;
  float local_16c;
  undefined4 uStack_168;
  float local_164;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined *local_130;
  ulong *local_128;
  int local_120;
  ulong local_11c;
  char acStack_114 [8];
  char local_10c [8];
  char acStack_104 [8];
  char local_fc [8];
  undefined1 local_f4;
  undefined1 local_9d;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  
  puVar10 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x756a8ab7) {
    lVar8 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar8 == 0) {
      fVar14 = 25.0;
      fVar13 = 0.0;
      fVar15 = 40.0;
    }
    else {
      fVar15 = *(float *)(lVar8 + 0xd74) + 0.0;
      fVar13 = *(float *)(lVar8 + 0xd78) + 0.0;
      fVar14 = *(float *)(lVar8 + 0xd7c) + -15.0;
    }
    uVar6 = FUN_0273f0a0(&DAT_053cb3e8);
    if ((uVar6 & 1) == 0) goto LAB_0203d6d8;
    local_158 = CONCAT44(fVar13,fVar15);
    local_128 = &local_11c;
    local_9d = 0;
    local_160 = 0xa00000000;
    local_120 = 0x80;
    local_130 = PTR_DAT_04bb2d88 + 0x10;
    local_90 = 0;
    local_14c = 0x3f800000;
    uStack_144 = 0;
    local_94 = 0;
    local_13c = 0;
    local_f4 = 0;
    local_98 = 7;
    local_fc[0] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x20];
    local_fc[1] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x21];
    local_fc[2] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x22];
    local_fc[3] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x23];
    local_fc[4] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x24];
    local_fc[5] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x25];
    local_fc[6] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x26];
    local_fc[7] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x27];
    local_11c._0_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0];
    local_11c._1_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[1];
    local_11c._2_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[2];
    local_11c._3_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[3];
    local_11c._4_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[4];
    local_11c._5_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[5];
    local_11c._6_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[6];
    local_11c._7_1_ = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[7];
    acStack_114[0] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[8];
    acStack_114[1] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[9];
    acStack_114[2] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[10];
    acStack_114[3] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0xb];
    acStack_114[4] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0xc];
    acStack_114[5] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0xd];
    acStack_114[6] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0xe];
    acStack_114[7] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0xf];
    local_10c[0] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x10];
    local_10c[1] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x11];
    local_10c[2] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x12];
    local_10c[3] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x13];
    local_10c[4] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x14];
    local_10c[5] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x15];
    local_10c[6] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x16];
    local_10c[7] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x17];
    acStack_104[0] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x18];
    acStack_104[1] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x19];
    acStack_104[2] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x1a];
    acStack_104[3] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x1b];
    acStack_104[4] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x1c];
    acStack_104[5] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x1d];
    acStack_104[6] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x1e];
    acStack_104[7] = s_sza_AIC_Demo_DMF_Demo_PublicAnno_040e526b[0x1f];
    local_150 = fVar14;
    FUN_0203e0f0(param_1 + 0x11058,&local_160);
LAB_0203d8c0:
    uVar7 = 1;
    *(undefined1 *)(*(long *)PTR_DAT_04bb3968 + 0x3429) = 1;
  }
  else {
    uVar6 = FUN_0273f0a0(&DAT_053cb3f8);
    iVar2 = *(int *)(puVar10 + 0x38);
    uVar5 = FUN_029342d0();
    puVar12 = PTR_DAT_04bb2020;
    iVar3 = *(int *)(puVar10 + 0x38);
    if (iVar3 == 0x43080996) {
LAB_0203d4c4:
      if ((uVar5 & 1) != 0) {
LAB_0203d4c8:
        uStack_168 = 0;
        lVar8 = *(long *)PTR_DAT_04bb5c90;
        local_11c = local_11c & 0xffffffffffffff00;
        local_13c = 0;
        local_180 = PTR_DAT_04bb2020 + 0x10;
        local_178 = "rco/AIC:Demo/DMF:Demo_PublicAnnouncement";
        local_190 = PTR_DAT_04bb2020 + 0x10;
        pcStack_188 = "rco/AIC:Normal/AIF:AI_NPC_Rco_PublicAnnouncement";
        fVar14 = ((float)*(int *)(lVar8 + 0x80) * 5.0 + (float)*(int *)(lVar8 + 0x90) * 5.0 + 5.0) *
                 0.5;
        fVar13 = ((float)*(int *)(lVar8 + 0x84) * 5.0 + (float)*(int *)(lVar8 + 0x94) * 5.0 + 5.0) *
                 0.5 + -5.0;
        local_16c = fVar14;
        local_158 = (ulong)(uint)fVar14;
        local_120 = 0x80;
        local_14c = 0x3f800000;
        uStack_144 = 0;
        local_9d = 0;
        local_98 = 7;
        local_90 = 0;
        local_94 = 0;
        local_160 = 0xa00000000;
        puVar10 = PTR_DAT_04bb2d88 + 0x10;
        ppuVar1 = &local_190;
        if (iVar2 != 0x43080996) {
          ppuVar1 = &local_180;
        }
        local_164 = fVar13;
        local_150 = fVar13;
        local_130 = puVar10;
        local_128 = &local_11c;
        (**(code **)(*ppuVar1 + 0x18))(ppuVar1);
        puVar11 = (ulong *)ppuVar1[1];
        if (&local_11c != puVar11) {
          (**(code **)(*ppuVar1 + 0x18))(ppuVar1);
          puVar12 = PTR_DAT_04bb2020;
          puVar9 = ppuVar1[1];
          lVar8 = 0;
          do {
            if (puVar9[lVar8] == '\0') goto LAB_0203d6ec;
            if (puVar9[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_0203d6ec;
            }
            if (puVar9[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_0203d6ec;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_0203d6ec:
          iVar3 = (int)lVar8;
          if (local_120 <= (int)lVar8) {
            iVar3 = local_120 + -1;
          }
          memcpy(&local_11c,puVar11,(long)iVar3);
          *(undefined1 *)((long)&local_11c + (long)iVar3) = 0;
        }
        FUN_0203e0f0(param_1 + 0x11058,&local_160);
        local_1a5 = 0;
        local_228 = 0x80;
        uStack_260 = CONCAT44(uStack_168,local_16c);
        local_254 = 0x3f800000;
        pcStack_230 = local_224;
        local_268 = 0x9300000000;
        local_1a0 = 7;
        local_258 = local_164;
        local_198 = 0;
        local_19c = 0;
        local_24c = 0;
        local_244 = 0;
        local_21c[0] = s_PublicAnnouncement_0407cc61[8];
        local_21c[1] = s_PublicAnnouncement_0407cc61[9];
        local_21c[2] = s_PublicAnnouncement_0407cc61[10];
        local_21c[3] = s_PublicAnnouncement_0407cc61[0xb];
        local_21c[4] = s_PublicAnnouncement_0407cc61[0xc];
        local_21c[5] = s_PublicAnnouncement_0407cc61[0xd];
        local_21c[6] = s_PublicAnnouncement_0407cc61[0xe];
        local_21c[7] = s_PublicAnnouncement_0407cc61[0xf];
        local_224[0] = s_PublicAnnouncement_0407cc61[0];
        local_224[1] = s_PublicAnnouncement_0407cc61[1];
        local_224[2] = s_PublicAnnouncement_0407cc61[2];
        local_224[3] = s_PublicAnnouncement_0407cc61[3];
        local_224[4] = s_PublicAnnouncement_0407cc61[4];
        local_224[5] = s_PublicAnnouncement_0407cc61[5];
        local_224[6] = s_PublicAnnouncement_0407cc61[6];
        local_224[7] = s_PublicAnnouncement_0407cc61[7];
        local_214 = 0x746e;
        local_212 = 0;
        local_238 = puVar10;
        FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_268,0,0);
        puVar11 = local_128;
        if ((uVar6 & 1) != 0) {
          local_278 = puVar12 + 0x10;
          local_270 = &DAT_0406d5e7;
          local_288 = puVar12 + 0x10;
          pcStack_280 = "sza/AIC:Normal/AIF:AI_NPC_Rco_PublicAnnouncement";
          ppuVar1 = &local_288;
          if (iVar2 != 0x43080996) {
            ppuVar1 = &local_278;
          }
          (**(code **)(*ppuVar1 + 0x18))(ppuVar1);
          __src = (ulong *)ppuVar1[1];
          if (puVar11 != __src) {
            (**(code **)(*ppuVar1 + 0x18))(ppuVar1);
            puVar10 = ppuVar1[1];
            lVar8 = 0;
            do {
              if (puVar10[lVar8] == '\0') goto LAB_0203d870;
              if (puVar10[lVar8 + 1] == '\0') {
                lVar8 = lVar8 + 1;
                goto LAB_0203d870;
              }
              if (puVar10[lVar8 + 2] == '\0') {
                lVar8 = lVar8 + 2;
                goto LAB_0203d870;
              }
              lVar8 = lVar8 + 3;
            } while (lVar8 != 0x80001);
            lVar8 = 0;
LAB_0203d870:
            iVar3 = (int)lVar8;
            if (local_120 <= (int)lVar8) {
              iVar3 = local_120 + -1;
            }
            memcpy(puVar11,__src,(long)iVar3);
            *(undefined1 *)((long)puVar11 + (long)iVar3) = 0;
          }
          local_158 = (ulong)(uint)(fVar14 + -50.0);
          local_150 = fVar13;
          FUN_0203e0f0(param_1 + 0x11058,&local_160);
        }
        if (iVar2 != 0x43080996) {
          FUN_02044554(&local_16c);
        }
        goto LAB_0203d8c0;
      }
    }
    else if ((iVar3 == 0x6622bd46) && (*(long *)PTR_DAT_04bb6270 != 0)) {
      bVar4 = *(byte *)(*(long *)PTR_DAT_04bb6270 + 0x780);
      if ((bVar4 & 1) != 0) goto LAB_0203d4c4;
      if ((uVar5 & (bVar4 & 8) >> 3) == 0) goto LAB_0203d6d8;
      goto LAB_0203d4c8;
    }
LAB_0203d6d8:
    uVar7 = 0;
  }
  return uVar7;
}

