
void FUN_005e1ee0(undefined8 param_1,uint param_2,ulong param_3,long param_4,ulong param_5,
                 ulong param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  ushort uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  char *pcVar36;
  long lVar37;
  ushort *puVar38;
  uint *puVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  byte bVar44;
  byte *pbVar45;
  uint uVar46;
  uint uVar47;
  byte *pbVar48;
  byte bVar49;
  uint uVar50;
  long lVar51;
  ulong uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar58 [12];
  float fVar56;
  undefined1 auVar59 [12];
  float fVar68;
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  float fVar67;
  undefined8 uVar57;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar69;
  int iVar70;
  int iVar76;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  float fVar81;
  float fVar82;
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  long local_330;
  ulong uStack_328;
  long local_320;
  undefined8 local_318;
  ushort local_310;
  long local_300;
  undefined8 local_2f8;
  long local_2f0;
  uint local_2e8;
  long local_2e0;
  undefined8 local_2d8;
  long local_2d0;
  uint local_2c8;
  long local_2c0;
  undefined8 local_2b8;
  long local_2b0;
  uint local_2a8;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0 [2];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80 [2];
  
  lVar41 = *(long *)(param_4 + 0x18);
  uVar2 = *(uint *)(lVar41 + 0x48);
  lVar51 = *(long *)(param_4 + 400);
  if ((param_3 & 1) == 0) {
    uVar30 = param_2;
    if (0x1d < (int)param_2) {
      uVar30 = 0x1e;
    }
    uVar30 = 1 << (ulong)(uVar30 & 0x1f);
  }
  else {
    uVar30 = 0;
  }
  local_2e0 = 0;
  local_2d8 = 0x8000000000000000;
  local_2c8 = uVar2;
  if (uVar2 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = FUN_0043c4e0(DAT_04c6f050);
    lVar33 = DAT_04c6f058;
    if (lVar23 != 0) {
      lVar33 = lVar23;
    }
    uVar28 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar33 + 0x10) < uVar28) {
LAB_005e1fc0:
      lVar23 = FUN_00439510();
    }
    else {
      lVar23 = *(long *)(lVar33 + 0x18);
      uVar28 = lVar23 + uVar28;
      if (*(ulong *)(lVar33 + 0x20) < uVar28) goto LAB_005e1fc0;
      *(ulong *)(lVar33 + 0x18) = uVar28;
    }
  }
  lVar33 = lVar51 + (long)(int)param_2 * 0xa0;
  local_2d8._4_4_ = uVar2 | 0x80000000;
  if (uVar2 != 0) {
    local_2d8._0_4_ = uVar2;
  }
  lVar31 = (long)(int)param_2;
  local_2e0 = lVar23;
  local_2d0 = lVar23;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e214c;
      puVar39 = *(uint **)(lVar41 + 0xe8);
      uVar29 = 0;
      uVar47 = 0;
      do {
        uVar46 = uVar47;
        if ((*puVar39 & uVar30) != 0) {
          uVar46 = uVar47 + 1;
          *(ushort *)(lVar23 + (long)(int)uVar47 * 2) = uVar29;
        }
        uVar29 = uVar29 + 1;
        puVar39 = puVar39 + 1;
        uVar47 = uVar46;
      } while ((int)(uint)uVar29 < (int)uVar2);
LAB_005e2120:
      bVar20 = SBORROW4(uVar2,uVar46);
      bVar21 = (int)(uVar2 - uVar46) < 0;
      bVar22 = uVar2 == uVar46;
      if ((int)uVar2 < (int)uVar46) goto LAB_005e2158;
LAB_005e2128:
      if (!bVar22 && bVar21 == bVar20) goto LAB_005e2158;
    }
    else {
      if (0 < (int)uVar2) {
        uVar29 = 0;
        uVar46 = 0;
        pfVar34 = (float *)(*(long *)(lVar41 + 0x40) + 4);
        do {
          if (*pfVar34 != 0.0) {
            *(ushort *)(lVar23 + (long)(int)uVar46 * 2) = uVar29;
            uVar46 = uVar46 + 1;
          }
          uVar29 = uVar29 + 1;
          pfVar34 = pfVar34 + 4;
        } while ((int)(uint)uVar29 < (int)uVar2);
        goto LAB_005e2120;
      }
LAB_005e214c:
      uVar46 = 0;
      bVar20 = false;
      bVar22 = uVar2 == 0;
      bVar21 = false;
      if (-1 < (int)uVar2) goto LAB_005e2128;
LAB_005e2158:
      uVar2 = uVar46;
      local_2d8._0_4_ = uVar46;
    }
  }
  else {
    local_300 = 0;
    local_2f8 = 0x8000000000000000;
    local_2e8 = uVar2;
    if (uVar2 == 0) {
      local_2f8._0_4_ = 0;
      local_2f0 = 0;
    }
    else {
      lVar24 = FUN_0043c4e0(DAT_04c6f050);
      lVar25 = DAT_04c6f058;
      if (lVar24 != 0) {
        lVar25 = lVar24;
      }
      uVar28 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
      if (*(ulong *)(lVar25 + 0x10) < uVar28) {
LAB_005e208c:
        local_2f0 = FUN_00439510();
      }
      else {
        local_2f0 = *(long *)(lVar25 + 0x18);
        uVar28 = local_2f0 + uVar28;
        if (*(ulong *)(lVar25 + 0x20) < uVar28) goto LAB_005e208c;
        *(ulong *)(lVar25 + 0x18) = uVar28;
      }
      if (uVar2 != 0) {
        local_2f8._0_4_ = uVar2;
      }
    }
    lVar25 = local_2f0;
    local_2f8._4_4_ = uVar2 | 0x80000000;
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e2c30;
      pcVar36 = *(char **)(lVar41 + 0x188);
      puVar39 = *(uint **)(lVar41 + 0xe8);
      uVar29 = 0;
      uVar46 = 0;
      uVar47 = 0;
      do {
        uVar50 = uVar47;
        if ((*puVar39 & uVar30) != 0) {
          if (*pcVar36 == '\0') {
            uVar19 = uVar46 + 1;
            lVar24 = lVar23;
            uVar47 = uVar46;
          }
          else {
            uVar50 = uVar47 + 1;
            uVar19 = uVar46;
            lVar24 = local_2f0;
          }
          uVar46 = uVar19;
          *(ushort *)(lVar24 + (long)(int)uVar47 * 2) = uVar29;
        }
        uVar29 = uVar29 + 1;
        puVar39 = puVar39 + 1;
        pcVar36 = pcVar36 + 1;
        uVar47 = uVar50;
      } while ((int)(uint)uVar29 < (int)uVar2);
LAB_005e2c14:
      uVar30 = uVar50;
      uVar47 = uVar50;
      if (uVar2 == uVar50) {
LAB_005e2c20:
        uVar30 = uVar2;
        uVar47 = (uint)local_2f8;
      }
    }
    else {
      if (0 < (int)uVar2) {
        pcVar36 = *(char **)(lVar41 + 0x188);
        uVar29 = 0;
        uVar50 = 0;
        uVar46 = 0;
        pfVar34 = (float *)(*(long *)(lVar41 + 0x40) + 4);
        do {
          if (*pfVar34 != 0.0) {
            if (*pcVar36 == '\0') {
              uVar30 = uVar50;
              uVar47 = uVar46 + 1;
              lVar24 = lVar23;
              uVar50 = uVar46;
            }
            else {
              uVar30 = uVar50 + 1;
              uVar47 = uVar46;
              lVar24 = local_2f0;
            }
            uVar46 = uVar47;
            *(ushort *)(lVar24 + (long)(int)uVar50 * 2) = uVar29;
            uVar50 = uVar30;
          }
          uVar29 = uVar29 + 1;
          pcVar36 = pcVar36 + 1;
          pfVar34 = pfVar34 + 4;
        } while ((int)(uint)uVar29 < (int)uVar2);
        goto LAB_005e2c14;
      }
LAB_005e2c30:
      uVar46 = 0;
      uVar50 = 0;
      uVar30 = uVar50;
      uVar47 = uVar50;
      if (uVar2 == 0) goto LAB_005e2c20;
    }
    local_2f8._0_4_ = uVar47;
    uVar47 = uVar46;
    uVar19 = uVar46;
    if (uVar2 == uVar46) {
      uVar47 = uVar2;
      uVar19 = (uint)local_2d8;
    }
    local_2d8._0_4_ = uVar19;
    local_300 = local_2f0;
    if (uVar50 != 0) {
      local_330 = *(long *)(param_4 + 0x220);
      local_310 = *(ushort *)(lVar41 + 0x1a8);
      uStack_328 = *(ulong *)(param_4 + 0x228);
      local_320 = *(long *)(param_4 + 0x230);
      local_318 = *(undefined8 *)(param_4 + 0x210);
      if (param_7 == 0) {
        local_2c0 = 0;
        local_2b8 = 0x8000000000000000;
        local_2a8 = uVar50;
        lVar27 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar27 != 0) {
          lVar24 = lVar27;
        }
        uVar28 = (ulong)(int)(uVar50 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar24 + 0x10) < uVar28) {
LAB_005e2d5c:
          lVar27 = FUN_00439510(lVar24,uVar28);
        }
        else {
          lVar27 = *(long *)(lVar24 + 0x18);
          if (*(ulong *)(lVar24 + 0x20) < lVar27 + uVar28) goto LAB_005e2d5c;
          *(ulong *)(lVar24 + 0x18) = lVar27 + uVar28;
        }
        local_2b8 = CONCAT44(uVar50,(undefined4)local_2b8) | 0x8000000000000000;
        local_2c0 = lVar27;
        local_2b0 = lVar27;
        lVar35 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar35 != 0) {
          lVar24 = lVar35;
        }
        if (*(ulong *)(lVar24 + 0x10) < uVar28) {
LAB_005e3998:
          lVar35 = FUN_00439510(lVar24,uVar28);
        }
        else {
          lVar35 = *(long *)(lVar24 + 0x18);
          if (*(ulong *)(lVar24 + 0x20) < lVar35 + uVar28) goto LAB_005e3998;
          *(ulong *)(lVar24 + 0x18) = lVar35 + uVar28;
        }
        local_2b8 = CONCAT44(local_2b8._4_4_,uVar50);
        if (0 < (int)uVar50) {
          uVar32 = 0;
          do {
            uVar52 = uVar32 & 0xffff;
            uVar2 = (int)uVar32 + 1;
            uVar32 = (ulong)uVar2;
            lVar42 = uVar52 * 4;
            lVar24 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(lVar25 + uVar52 * 2) * 0x10;
            *(undefined4 *)(lVar27 + lVar42) = *(undefined4 *)(lVar24 + 8);
            *(undefined4 *)(lVar35 + lVar42) = *(undefined4 *)(lVar24 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar50);
        }
        FUN_0060a1c0(param_1,lVar33,&local_300,&local_2c0,param_4,&local_330);
        lVar42 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar42 != 0) {
          lVar24 = lVar42;
        }
        if (((*(ulong *)(lVar24 + 0x10) < uVar28) || (*(long *)(lVar24 + 0x18) != lVar35 + uVar28))
           || (*(long *)(lVar24 + 0x28) == lVar35)) {
          FUN_00439980(lVar24,lVar35,uVar28);
        }
        else {
          *(long *)(lVar24 + 0x18) = lVar35;
        }
        uVar2 = local_2a8;
        local_2b8 = local_2b8 & 0xffffffff00000000;
        lVar35 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar35 != 0) {
          lVar24 = lVar35;
        }
        uVar28 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar24 + 0x10) < uVar28) || (*(long *)(lVar24 + 0x18) != lVar27 + uVar28))
           || (*(long *)(lVar24 + 0x28) == lVar27)) {
          FUN_00439980(lVar24,lVar27);
        }
        else {
          *(long *)(lVar24 + 0x18) = lVar27;
        }
      }
      else {
        lVar27 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar27 != 0) {
          lVar24 = lVar27;
        }
        uVar28 = (ulong)(int)(uVar50 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar24 + 0x10) < uVar28) {
LAB_005e2ce8:
          lVar27 = FUN_00439510(lVar24,uVar28);
        }
        else {
          lVar27 = *(long *)(lVar24 + 0x18);
          if (*(ulong *)(lVar24 + 0x20) < lVar27 + uVar28) goto LAB_005e2ce8;
          *(ulong *)(lVar24 + 0x18) = lVar27 + uVar28;
        }
        lVar35 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar35 != 0) {
          lVar24 = lVar35;
        }
        if (*(ulong *)(lVar24 + 0x10) < uVar28) {
LAB_005e2f3c:
          lVar35 = FUN_00439510(lVar24,uVar28);
        }
        else {
          lVar35 = *(long *)(lVar24 + 0x18);
          if (*(ulong *)(lVar24 + 0x20) < lVar35 + uVar28) goto LAB_005e2f3c;
          *(ulong *)(lVar24 + 0x18) = lVar35 + uVar28;
        }
        if (0 < (int)uVar50) {
          uVar32 = 0;
          do {
            uVar52 = uVar32 & 0xffff;
            uVar2 = (int)uVar32 + 1;
            uVar32 = (ulong)uVar2;
            lVar42 = uVar52 * 4;
            lVar24 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(lVar25 + uVar52 * 2) * 0x10;
            *(undefined4 *)(lVar27 + lVar42) = *(undefined4 *)(lVar24 + 8);
            *(undefined4 *)(lVar35 + lVar42) = *(undefined4 *)(lVar24 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar50);
        }
        uVar26 = FUN_0054ca10(*(undefined8 *)(lVar33 + 0x88),lVar51 + lVar31 * 0xa0 + 0x20,
                              &local_2c0);
        lVar24 = *(long *)(param_4 + 0x18);
        if (param_7 == 2) {
          if (0 < (int)uVar30) {
            lVar42 = 0;
            pcVar36 = (char *)(lVar51 + lVar31 * 0xa0 + 0x9c);
            do {
              uVar32 = (ulong)*(ushort *)(lVar25 + lVar42 * 2);
              if (((*(char *)(local_320 + (uVar32 - local_310)) <= *pcVar36) &&
                  (*(char *)(uStack_328 + (uVar32 - local_310)) == '\0')) &&
                 (uVar52 = (ulong)*(ushort *)(*(long *)(lVar24 + 0x2d0) + uVar32 * 2),
                 uVar52 != 0xffff)) {
                lVar43 = *(long *)(param_4 + 0x20);
                uVar4 = *(undefined4 *)(*(long *)(lVar24 + 0x40) + uVar32 * 0x10 + 8);
                local_80[0] = CONCAT44(uVar4,uVar4);
                lVar40 = *(long *)(lVar24 + 0x290) + uVar52 * 8;
                bVar44 = *(byte *)(lVar40 + 6);
                if (bVar44 != 0) {
                  iVar70 = 0;
                  bVar49 = 0;
                  lVar37 = lVar43;
                  while( true ) {
                    puVar3 = (undefined8 *)(lVar43 + uVar32 * 0x10);
                    uVar79 = puVar3[1];
                    uVar57 = *puVar3;
                    puVar38 = (ushort *)
                              (*(long *)(lVar24 + 0x280) +
                              ((ulong)((uint)*(ushort *)(lVar40 + 2) + (uint)bVar49) & 0xffff) * 6);
                    auVar62 = *(undefined1 (*) [16])(lVar37 + (ulong)*puVar38 * 0x10);
                    auVar71 = *(undefined1 (*) [16])(lVar37 + (ulong)puVar38[1] * 0x10);
                    psVar1 = (short *)(*(long *)(lVar24 + 0x210) + (ulong)puVar38[2] * 4);
                    pbVar45 = (byte *)(psVar1 + 1);
                    if (*pbVar45 != 0) {
                      fVar84 = auVar62._0_4_ - (float)uVar57;
                      fVar89 = (float)((ulong)uVar57 >> 0x20);
                      fVar85 = auVar62._4_4_ - fVar89;
                      fVar86 = auVar62._8_4_ - (float)uVar79;
                      fVar91 = (float)((ulong)uVar79 >> 0x20);
                      fVar87 = auVar62._12_4_ - fVar91;
                      auVar9._4_4_ = fVar85;
                      auVar9._0_4_ = fVar84;
                      auVar9._8_4_ = fVar86;
                      auVar9._12_4_ = fVar87;
                      auVar10._4_4_ = fVar85;
                      auVar10._0_4_ = fVar84;
                      auVar10._8_4_ = fVar86;
                      auVar10._12_4_ = fVar87;
                      auVar62 = NEON_ext(auVar9,auVar10,4,1);
                      fVar88 = auVar71._0_4_ - (float)uVar57;
                      fVar89 = auVar71._4_4_ - fVar89;
                      fVar90 = auVar71._8_4_ - (float)uVar79;
                      fVar91 = auVar71._12_4_ - fVar91;
                      auVar15._4_4_ = fVar89;
                      auVar15._0_4_ = fVar88;
                      auVar15._8_4_ = fVar90;
                      auVar15._12_4_ = fVar91;
                      auVar16._4_4_ = fVar89;
                      auVar16._0_4_ = fVar88;
                      auVar16._8_4_ = fVar90;
                      auVar16._12_4_ = fVar91;
                      auVar71 = NEON_ext(auVar15,auVar16,4,1);
                      auVar80 = NEON_ext(auVar62,auVar62,8,1);
                      auVar83 = NEON_ext(auVar71,auVar71,8,1);
                      uVar77 = NEON_rev64(auVar80._0_8_,4);
                      bVar44 = 0;
                      uVar78 = NEON_rev64(auVar83._0_8_,4);
                      auVar65._0_4_ = fVar84 * auVar71._0_4_ - fVar88 * auVar62._0_4_;
                      auVar65._4_4_ = fVar85 * auVar71._4_4_ - fVar89 * auVar62._4_4_;
                      auVar65._8_4_ = fVar86 * (float)uVar78 - fVar90 * (float)uVar77;
                      auVar65._12_4_ =
                           fVar87 * (float)((ulong)uVar78 >> 0x20) -
                           fVar91 * (float)((ulong)uVar77 >> 0x20);
                      auVar62 = NEON_ext(auVar65,auVar65,4,1);
                      fVar56 = auVar62._0_4_;
                      fVar53 = auVar62._4_4_;
                      while( true ) {
                        pfVar34 = (float *)(*(long *)(lVar24 + 0x200) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 8);
                        fVar55 = *pfVar34;
                        fVar54 = pfVar34[1];
                        local_90 = (float)uVar57 + fVar84 * fVar55 + fVar88 * fVar54;
                        fStack_8c = (float)((ulong)uVar57 >> 0x20) + fVar85 * fVar55 +
                                    fVar89 * fVar54;
                        fStack_88 = (float)uVar79 + fVar86 * fVar55 + fVar90 * fVar54;
                        fStack_84 = (float)((ulong)uVar79 >> 0x20) + fVar87 * fVar55 +
                                    fVar91 * fVar54;
                        FUN_0054c400(uVar26,&local_90,local_80,
                                     (uint)*(ushort *)(lVar40 + 4) + iVar70,local_a0,&local_b0,
                                     &local_b8);
                        fVar55 = (float)local_b8 - (float)local_80[0];
                        fVar54 = (float)((ulong)local_b8 >> 0x20) -
                                 (float)((ulong)local_80[0] >> 0x20);
                        local_b8 = CONCAT44(fVar54,fVar55);
                        if (fVar55 < 0.0) {
                          fVar67 = auVar65._0_4_ * auVar65._0_4_ + fVar56 * fVar56 + fVar53 * fVar53
                          ;
                          fVar68 = auVar65._0_4_ * auVar65._0_4_ + fVar56 * fVar56 + fVar53 * fVar53
                          ;
                          uVar57 = CONCAT44(fVar68,fVar67);
                          uVar79 = NEON_frsqrte(uVar57,4);
                          fVar81 = (float)uVar79;
                          fVar82 = (float)((ulong)uVar79 >> 0x20);
                          uVar79 = NEON_frsqrts(uVar57,CONCAT44(fVar82 * fVar82,fVar81 * fVar81),4);
                          fVar81 = fVar81 * (float)uVar79;
                          fVar82 = fVar82 * (float)((ulong)uVar79 >> 0x20);
                          iVar69 = -(uint)(fVar67 <= 0.0);
                          iVar76 = -(uint)(fVar68 <= 0.0);
                          uVar57 = NEON_frsqrts(uVar57,CONCAT44(fVar82 * fVar82,fVar81 * fVar81),4);
                          fVar81 = (float)uVar57 * fVar81;
                          fVar82 = (float)((ulong)uVar57 >> 0x20) * fVar82;
                          fVar67 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) &
                                                   ~(byte)((uint)iVar69 >> 0x18),
                                                   CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                            ~(byte)((uint)iVar69 >> 0x10),
                                                            CONCAT11((byte)((uint)fVar81 >> 8) &
                                                                     ~(byte)((uint)iVar69 >> 8),
                                                                     SUB41(fVar81,0) & ~(byte)iVar69
                                                                    )));
                          auVar60._0_4_ = fVar56 * fVar67;
                          fVar81 = (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) &
                                                    ~(byte)((uint)iVar76 >> 0x18),
                                                    CONCAT16((byte)((uint)fVar82 >> 0x10) &
                                                             ~(byte)((uint)iVar76 >> 0x10),
                                                             CONCAT15((byte)((uint)fVar82 >> 8) &
                                                                      ~(byte)((uint)iVar76 >> 8),
                                                                      CONCAT14(SUB41(fVar82,0) &
                                                                               ~(byte)iVar76,fVar67)
                                                                     ))) >> 0x20);
                          auVar60._4_4_ = fVar53 * fVar81;
                          auVar60._8_4_ = auVar65._0_4_ * fVar67;
                          fVar81 = auVar65._4_4_ * fVar81;
                          auVar74._0_4_ = local_b0 * auVar60._0_4_;
                          auVar74._4_4_ = fStack_ac * auVar60._4_4_;
                          auVar74._8_4_ = fStack_a8 * auVar60._8_4_;
                          auVar74._12_4_ = fStack_a4 * fVar81;
                          auVar62 = NEON_ext(auVar74,auVar74,8,1);
                          if (auVar74._0_4_ + auVar74._4_4_ + auVar62._0_4_ < 0.0) {
                            auVar60._0_4_ = -auVar60._0_4_;
                            auVar60._4_4_ = -auVar60._4_4_;
                            auVar60._8_4_ = -auVar60._8_4_;
                          }
                          auVar62 = *(undefined1 (*) [16])(lVar43 + uVar32 * 0x10);
                          puVar3 = (undefined8 *)(lVar43 + uVar32 * 0x10);
                          puVar3[1] = CONCAT44(auVar62._12_4_ - fVar54 * fVar81,
                                               auVar62._8_4_ - fVar55 * auVar60._8_4_);
                          *puVar3 = CONCAT44(auVar62._4_4_ - fVar54 * auVar60._4_4_,
                                             auVar62._0_4_ - fVar55 * auVar60._0_4_);
                        }
                        bVar44 = bVar44 + 1;
                        iVar70 = iVar70 + 1;
                        if (*pbVar45 <= bVar44) break;
                        puVar3 = (undefined8 *)(lVar43 + uVar32 * 0x10);
                        uVar79 = puVar3[1];
                        uVar57 = *puVar3;
                      }
                      bVar44 = *(byte *)(lVar40 + 6);
                    }
                    bVar49 = bVar49 + 1;
                    if (bVar44 <= bVar49) break;
                    lVar37 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar42 = lVar42 + 1;
            } while (lVar42 != (int)uVar30);
            if (*(int *)(lVar24 + 0x278) != 0) {
              lVar42 = 0;
              do {
                uVar32 = (ulong)*(ushort *)(lVar25 + lVar42 * 2);
                if (((*(char *)(local_320 + (uVar32 - local_310)) <= *pcVar36) &&
                    (*(char *)(uStack_328 + (uVar32 - local_310)) == '\0')) &&
                   (uVar52 = (ulong)*(ushort *)(*(long *)(lVar24 + 0x2c0) + uVar32 * 2),
                   uVar52 != 0xffff)) {
                  lVar43 = *(long *)(param_4 + 0x20);
                  uVar4 = *(undefined4 *)(*(long *)(lVar24 + 0x40) + uVar32 * 0x10 + 8);
                  local_80[0] = CONCAT44(uVar4,uVar4);
                  lVar40 = *(long *)(lVar24 + 0x270) + uVar52 * 8;
                  bVar44 = *(byte *)(lVar40 + 6);
                  if (bVar44 != 0) {
                    iVar70 = 0;
                    bVar49 = 0;
                    lVar37 = lVar43;
                    while( true ) {
                      puVar3 = (undefined8 *)(lVar43 + uVar32 * 0x10);
                      uVar79 = puVar3[1];
                      uVar57 = *puVar3;
                      puVar38 = (ushort *)
                                (*(long *)(lVar24 + 0x260) +
                                (ulong)(ushort)(*(short *)(lVar40 + 2) + (ushort)bVar49) * 4);
                      auVar62 = *(undefined1 (*) [16])(lVar37 + (ulong)*puVar38 * 0x10);
                      psVar1 = (short *)(*(long *)(lVar24 + 0x1f0) + (ulong)puVar38[1] * 4);
                      pbVar45 = (byte *)(psVar1 + 1);
                      if (*pbVar45 != 0) {
                        fVar89 = (float)uVar57;
                        uVar52 = (ulong)uVar57 >> 0x20;
                        fVar91 = (float)uVar79;
                        uVar17 = (ulong)uVar79 >> 0x20;
                        bVar44 = 0;
                        while( true ) {
                          fVar56 = *(float *)(*(long *)(lVar24 + 0x1e0) +
                                             (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 4);
                          local_90 = (float)uVar57 + (auVar62._0_4_ - fVar89) * fVar56;
                          fStack_8c = (float)((ulong)uVar57 >> 0x20) +
                                      (auVar62._4_4_ - (float)uVar52) * fVar56;
                          fStack_88 = (float)uVar79 + (auVar62._8_4_ - fVar91) * fVar56;
                          fStack_84 = (float)((ulong)uVar79 >> 0x20) +
                                      (auVar62._12_4_ - (float)uVar17) * fVar56;
                          FUN_0054c400(uVar26,&local_90,local_80,
                                       (uint)*(ushort *)(lVar40 + 4) + iVar70,local_a0,&local_b0,
                                       &local_b8);
                          fVar56 = (float)local_b8 - (float)local_80[0];
                          fVar53 = (float)((ulong)local_b8 >> 0x20) -
                                   (float)((ulong)local_80[0] >> 0x20);
                          local_b8 = CONCAT44(fVar53,fVar56);
                          if (fVar56 < 0.0) {
                            auVar71 = *(undefined1 (*) [16])(lVar43 + uVar32 * 0x10);
                            puVar3 = (undefined8 *)(lVar43 + uVar32 * 0x10);
                            puVar3[1] = CONCAT44(auVar71._12_4_ - fVar53 * fStack_a4,
                                                 auVar71._8_4_ - fVar56 * fStack_a8);
                            *puVar3 = CONCAT44(auVar71._4_4_ - fVar53 * fStack_ac,
                                               auVar71._0_4_ - fVar56 * local_b0);
                          }
                          bVar44 = bVar44 + 1;
                          iVar70 = iVar70 + 1;
                          if (*pbVar45 <= bVar44) break;
                          puVar3 = (undefined8 *)(lVar43 + uVar32 * 0x10);
                          uVar79 = puVar3[1];
                          uVar57 = *puVar3;
                        }
                        bVar44 = *(byte *)(lVar40 + 6);
                      }
                      bVar49 = bVar49 + 1;
                      if (bVar44 <= bVar49) break;
                      lVar37 = *(long *)(param_4 + 0x20);
                    }
                  }
                }
                lVar42 = lVar42 + 1;
              } while (lVar42 != (int)uVar30);
            }
          }
        }
        else if (0 < (int)uVar30) {
          lVar42 = 0;
          pcVar36 = (char *)(lVar51 + lVar31 * 0xa0 + 0x9c);
          do {
            uVar32 = (ulong)*(ushort *)(lVar25 + lVar42 * 2);
            if (((*(char *)(local_320 + (uVar32 - local_310)) <= *pcVar36) &&
                (*(char *)(uStack_328 + (uVar32 - local_310)) == '\0')) &&
               (uVar52 = (ulong)*(ushort *)(*(long *)(lVar24 + 0x2b0) + uVar32 * 2),
               uVar52 != 0xffff)) {
              uVar4 = *(undefined4 *)(*(long *)(lVar24 + 0x40) + uVar32 * 0x10 + 8);
              local_80[0] = CONCAT44(uVar4,uVar4);
              lVar40 = *(long *)(lVar24 + 0x250);
              pbVar45 = (byte *)(lVar40 + uVar52 * 6 + 4);
              bVar44 = *pbVar45;
              if (bVar44 != 0) {
                lVar37 = *(long *)(param_4 + 0x20);
                bVar49 = 0;
                lVar43 = lVar37;
                while( true ) {
                  puVar3 = (undefined8 *)(lVar37 + uVar32 * 0x10);
                  uVar79 = puVar3[1];
                  uVar57 = *puVar3;
                  puVar38 = (ushort *)
                            (*(long *)(lVar24 + 0x240) +
                            ((ulong)((uint)*(ushort *)(lVar40 + uVar52 * 6 + 2) + (uint)bVar49) &
                            0xffff) * 6);
                  auVar62 = *(undefined1 (*) [16])(lVar43 + (ulong)*puVar38 * 0x10);
                  auVar71 = *(undefined1 (*) [16])(lVar43 + (ulong)puVar38[1] * 0x10);
                  psVar1 = (short *)(*(long *)(lVar24 + 0x210) + (ulong)puVar38[2] * 4);
                  pbVar48 = (byte *)(psVar1 + 1);
                  if (*pbVar48 != 0) {
                    fVar84 = auVar62._0_4_ - (float)uVar57;
                    fVar89 = (float)((ulong)uVar57 >> 0x20);
                    fVar85 = auVar62._4_4_ - fVar89;
                    fVar86 = auVar62._8_4_ - (float)uVar79;
                    fVar91 = (float)((ulong)uVar79 >> 0x20);
                    fVar87 = auVar62._12_4_ - fVar91;
                    auVar62._4_4_ = fVar85;
                    auVar62._0_4_ = fVar84;
                    auVar62._8_4_ = fVar86;
                    auVar62._12_4_ = fVar87;
                    auVar80._4_4_ = fVar85;
                    auVar80._0_4_ = fVar84;
                    auVar80._8_4_ = fVar86;
                    auVar80._12_4_ = fVar87;
                    auVar62 = NEON_ext(auVar62,auVar80,4,1);
                    fVar88 = auVar71._0_4_ - (float)uVar57;
                    fVar89 = auVar71._4_4_ - fVar89;
                    fVar90 = auVar71._8_4_ - (float)uVar79;
                    fVar91 = auVar71._12_4_ - fVar91;
                    auVar71._4_4_ = fVar89;
                    auVar71._0_4_ = fVar88;
                    auVar71._8_4_ = fVar90;
                    auVar71._12_4_ = fVar91;
                    auVar83._4_4_ = fVar89;
                    auVar83._0_4_ = fVar88;
                    auVar83._8_4_ = fVar90;
                    auVar83._12_4_ = fVar91;
                    auVar71 = NEON_ext(auVar71,auVar83,4,1);
                    auVar80 = NEON_ext(auVar62,auVar62,8,1);
                    auVar83 = NEON_ext(auVar71,auVar71,8,1);
                    uVar77 = NEON_rev64(auVar80._0_8_,4);
                    bVar44 = 0;
                    uVar78 = NEON_rev64(auVar83._0_8_,4);
                    auVar66._0_4_ = fVar84 * auVar71._0_4_ - fVar88 * auVar62._0_4_;
                    auVar66._4_4_ = fVar85 * auVar71._4_4_ - fVar89 * auVar62._4_4_;
                    auVar66._8_4_ = fVar86 * (float)uVar78 - fVar90 * (float)uVar77;
                    auVar66._12_4_ =
                         fVar87 * (float)((ulong)uVar78 >> 0x20) -
                         fVar91 * (float)((ulong)uVar77 >> 0x20);
                    auVar62 = NEON_ext(auVar66,auVar66,4,1);
                    fVar56 = auVar62._0_4_;
                    fVar53 = auVar62._4_4_;
                    while( true ) {
                      pfVar34 = (float *)(*(long *)(lVar24 + 0x200) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 8);
                      fVar55 = *pfVar34;
                      fVar54 = pfVar34[1];
                      local_90 = (float)uVar57 + fVar84 * fVar55 + fVar88 * fVar54;
                      fStack_8c = (float)((ulong)uVar57 >> 0x20) + fVar85 * fVar55 + fVar89 * fVar54
                      ;
                      fStack_88 = (float)uVar79 + fVar86 * fVar55 + fVar90 * fVar54;
                      fStack_84 = (float)((ulong)uVar79 >> 0x20) + fVar87 * fVar55 + fVar91 * fVar54
                      ;
                      FUN_0054c400(uVar26,&local_90,local_80,0xffff,local_a0,&local_b0,&local_b8);
                      fVar55 = (float)local_b8 - (float)local_80[0];
                      fVar54 = (float)((ulong)local_b8 >> 0x20) -
                               (float)((ulong)local_80[0] >> 0x20);
                      local_b8 = CONCAT44(fVar54,fVar55);
                      if (fVar55 < 0.0) {
                        fVar67 = auVar66._0_4_ * auVar66._0_4_ + fVar56 * fVar56 + fVar53 * fVar53;
                        fVar68 = auVar66._0_4_ * auVar66._0_4_ + fVar56 * fVar56 + fVar53 * fVar53;
                        uVar57 = CONCAT44(fVar68,fVar67);
                        uVar79 = NEON_frsqrte(uVar57,4);
                        fVar81 = (float)uVar79;
                        fVar82 = (float)((ulong)uVar79 >> 0x20);
                        uVar79 = NEON_frsqrts(uVar57,CONCAT44(fVar82 * fVar82,fVar81 * fVar81),4);
                        fVar81 = fVar81 * (float)uVar79;
                        fVar82 = fVar82 * (float)((ulong)uVar79 >> 0x20);
                        iVar70 = -(uint)(fVar67 <= 0.0);
                        iVar69 = -(uint)(fVar68 <= 0.0);
                        uVar57 = NEON_frsqrts(uVar57,CONCAT44(fVar82 * fVar82,fVar81 * fVar81),4);
                        fVar81 = (float)uVar57 * fVar81;
                        fVar82 = (float)((ulong)uVar57 >> 0x20) * fVar82;
                        fVar67 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) &
                                                 ~(byte)((uint)iVar70 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                          ~(byte)((uint)iVar70 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar81 >> 8) &
                                                                   ~(byte)((uint)iVar70 >> 8),
                                                                   SUB41(fVar81,0) & ~(byte)iVar70))
                                                );
                        auVar61._0_4_ = fVar56 * fVar67;
                        fVar81 = (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) &
                                                  ~(byte)((uint)iVar69 >> 0x18),
                                                  CONCAT16((byte)((uint)fVar82 >> 0x10) &
                                                           ~(byte)((uint)iVar69 >> 0x10),
                                                           CONCAT15((byte)((uint)fVar82 >> 8) &
                                                                    ~(byte)((uint)iVar69 >> 8),
                                                                    CONCAT14(SUB41(fVar82,0) &
                                                                             ~(byte)iVar69,fVar67)))
                                                 ) >> 0x20);
                        auVar61._4_4_ = fVar53 * fVar81;
                        auVar61._8_4_ = auVar66._0_4_ * fVar67;
                        fVar81 = auVar66._4_4_ * fVar81;
                        auVar75._0_4_ = local_b0 * auVar61._0_4_;
                        auVar75._4_4_ = fStack_ac * auVar61._4_4_;
                        auVar75._8_4_ = fStack_a8 * auVar61._8_4_;
                        auVar75._12_4_ = fStack_a4 * fVar81;
                        auVar62 = NEON_ext(auVar75,auVar75,8,1);
                        if (auVar75._0_4_ + auVar75._4_4_ + auVar62._0_4_ < 0.0) {
                          auVar61._0_4_ = -auVar61._0_4_;
                          auVar61._4_4_ = -auVar61._4_4_;
                          auVar61._8_4_ = -auVar61._8_4_;
                        }
                        auVar62 = *(undefined1 (*) [16])(lVar37 + uVar32 * 0x10);
                        puVar3 = (undefined8 *)(lVar37 + uVar32 * 0x10);
                        puVar3[1] = CONCAT44(auVar62._12_4_ - fVar54 * fVar81,
                                             auVar62._8_4_ - fVar55 * auVar61._8_4_);
                        *puVar3 = CONCAT44(auVar62._4_4_ - fVar54 * auVar61._4_4_,
                                           auVar62._0_4_ - fVar55 * auVar61._0_4_);
                      }
                      bVar44 = bVar44 + 1;
                      if (*pbVar48 <= bVar44) break;
                      puVar3 = (undefined8 *)(lVar37 + uVar32 * 0x10);
                      uVar79 = puVar3[1];
                      uVar57 = *puVar3;
                    }
                    bVar44 = *pbVar45;
                  }
                  bVar49 = bVar49 + 1;
                  if (bVar44 <= bVar49) break;
                  lVar43 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar42 = lVar42 + 1;
          } while (lVar42 != (int)uVar30);
          if (*(int *)(lVar24 + 0x238) != 0) {
            lVar42 = 0;
            do {
              uVar32 = (ulong)*(ushort *)(lVar25 + lVar42 * 2);
              if (((*(char *)(local_320 + (uVar32 - local_310)) <= *pcVar36) &&
                  (*(char *)(uStack_328 + (uVar32 - local_310)) == '\0')) &&
                 (uVar52 = (ulong)*(ushort *)(*(long *)(lVar24 + 0x2a0) + uVar32 * 2),
                 uVar52 != 0xffff)) {
                uVar4 = *(undefined4 *)(*(long *)(lVar24 + 0x40) + uVar32 * 0x10 + 8);
                local_80[0] = CONCAT44(uVar4,uVar4);
                lVar40 = *(long *)(lVar24 + 0x230);
                pbVar45 = (byte *)(lVar40 + uVar52 * 6 + 4);
                bVar44 = *pbVar45;
                if (bVar44 != 0) {
                  lVar37 = *(long *)(param_4 + 0x20);
                  bVar49 = 0;
                  lVar43 = lVar37;
                  while( true ) {
                    puVar3 = (undefined8 *)(lVar37 + uVar32 * 0x10);
                    uVar79 = puVar3[1];
                    uVar57 = *puVar3;
                    puVar38 = (ushort *)
                              (*(long *)(lVar24 + 0x220) +
                              (ulong)(ushort)(*(short *)(lVar40 + uVar52 * 6 + 2) + (ushort)bVar49)
                              * 4);
                    auVar62 = *(undefined1 (*) [16])(lVar43 + (ulong)*puVar38 * 0x10);
                    psVar1 = (short *)(*(long *)(lVar24 + 0x1f0) + (ulong)puVar38[1] * 4);
                    pbVar48 = (byte *)(psVar1 + 1);
                    if (*pbVar48 != 0) {
                      fVar89 = (float)uVar57;
                      uVar17 = (ulong)uVar57 >> 0x20;
                      fVar91 = (float)uVar79;
                      uVar18 = (ulong)uVar79 >> 0x20;
                      bVar44 = 0;
                      while( true ) {
                        fVar56 = *(float *)(*(long *)(lVar24 + 0x1e0) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 4);
                        local_90 = (float)uVar57 + (auVar62._0_4_ - fVar89) * fVar56;
                        fStack_8c = (float)((ulong)uVar57 >> 0x20) +
                                    (auVar62._4_4_ - (float)uVar17) * fVar56;
                        fStack_88 = (float)uVar79 + (auVar62._8_4_ - fVar91) * fVar56;
                        fStack_84 = (float)((ulong)uVar79 >> 0x20) +
                                    (auVar62._12_4_ - (float)uVar18) * fVar56;
                        FUN_0054c400(uVar26,&local_90,local_80,0xffff,local_a0,&local_b0,&local_b8);
                        fVar56 = (float)local_b8 - (float)local_80[0];
                        fVar53 = (float)((ulong)local_b8 >> 0x20) -
                                 (float)((ulong)local_80[0] >> 0x20);
                        local_b8 = CONCAT44(fVar53,fVar56);
                        if (fVar56 < 0.0) {
                          auVar71 = *(undefined1 (*) [16])(lVar37 + uVar32 * 0x10);
                          puVar3 = (undefined8 *)(lVar37 + uVar32 * 0x10);
                          puVar3[1] = CONCAT44(auVar71._12_4_ - fVar53 * fStack_a4,
                                               auVar71._8_4_ - fVar56 * fStack_a8);
                          *puVar3 = CONCAT44(auVar71._4_4_ - fVar53 * fStack_ac,
                                             auVar71._0_4_ - fVar56 * local_b0);
                        }
                        bVar44 = bVar44 + 1;
                        if (*pbVar48 <= bVar44) break;
                        puVar3 = (undefined8 *)(lVar37 + uVar32 * 0x10);
                        uVar79 = puVar3[1];
                        uVar57 = *puVar3;
                      }
                      bVar44 = *pbVar45;
                    }
                    bVar49 = bVar49 + 1;
                    if (bVar44 <= bVar49) break;
                    lVar43 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar42 = lVar42 + 1;
            } while (lVar42 != (int)uVar30);
          }
        }
        lVar42 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar42 != 0) {
          lVar24 = lVar42;
        }
        if (((*(ulong *)(lVar24 + 0x10) < uVar28) || (*(long *)(lVar24 + 0x18) != lVar35 + uVar28))
           || (*(long *)(lVar24 + 0x28) == lVar35)) {
          FUN_00439980(lVar24,lVar35,uVar28);
        }
        else {
          *(long *)(lVar24 + 0x18) = lVar35;
        }
        lVar35 = FUN_0043c4e0(DAT_04c6f050);
        lVar24 = DAT_04c6f058;
        if (lVar35 != 0) {
          lVar24 = lVar35;
        }
        if (((*(ulong *)(lVar24 + 0x10) < uVar28) || (*(long *)(lVar24 + 0x18) != lVar27 + uVar28))
           || (*(long *)(lVar24 + 0x28) == lVar27)) {
          FUN_00439980(lVar24,lVar27,uVar28);
        }
        else {
          *(long *)(lVar24 + 0x18) = lVar27;
        }
      }
    }
    uVar2 = local_2e8;
    local_2f8 = (ulong)local_2f8._4_4_ << 0x20;
    lVar27 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar24 = DAT_04c6f058;
    if (lVar27 != 0) {
      lVar24 = lVar27;
    }
    uVar28 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    uVar2 = uVar47;
    if (((*(ulong *)(lVar24 + 0x10) < uVar28) || (*(long *)(lVar24 + 0x18) != uVar28 + lVar25)) ||
       (*(long *)(lVar24 + 0x28) == lVar25)) {
      FUN_00439980();
    }
    else {
      *(long *)(lVar24 + 0x18) = lVar25;
    }
  }
  if (uVar46 == 0) goto LAB_005e3b30;
  if (param_7 == 0) {
    local_2c0 = 0;
    local_2b8 = 0x8000000000000000;
    local_2a8 = uVar46;
    lVar31 = FUN_0043c4e0(DAT_04c6f050);
    lVar51 = DAT_04c6f058;
    if (lVar31 != 0) {
      lVar51 = lVar31;
    }
    uVar28 = (ulong)(int)(uVar46 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar51 + 0x10) < uVar28) {
LAB_005e222c:
      lVar25 = FUN_00439510(lVar51,uVar28);
    }
    else {
      lVar25 = *(long *)(lVar51 + 0x18);
      if (*(ulong *)(lVar51 + 0x20) < lVar25 + uVar28) goto LAB_005e222c;
      *(ulong *)(lVar51 + 0x18) = lVar25 + uVar28;
    }
    local_2b8 = CONCAT44(uVar46,(undefined4)local_2b8) | 0x8000000000000000;
    local_330 = 0;
    uStack_328 = 0x8000000000000000;
    local_318 = CONCAT44(local_318._4_4_,uVar46);
    local_2c0 = lVar25;
    local_2b0 = lVar25;
    lVar31 = FUN_0043c4e0(DAT_04c6f050);
    lVar51 = DAT_04c6f058;
    if (lVar31 != 0) {
      lVar51 = lVar31;
    }
    if (*(ulong *)(lVar51 + 0x10) < uVar28) {
LAB_005e2de4:
      lVar31 = FUN_00439510(lVar51,uVar28);
    }
    else {
      lVar31 = *(long *)(lVar51 + 0x18);
      if (*(ulong *)(lVar51 + 0x20) < lVar31 + uVar28) goto LAB_005e2de4;
      *(ulong *)(lVar51 + 0x18) = lVar31 + uVar28;
    }
    local_2b8 = CONCAT44(local_2b8._4_4_,uVar46);
    uStack_328 = CONCAT44(uVar46,uVar46) | 0x8000000000000000;
    if (0 < (int)uVar46) {
      uVar28 = 0;
      do {
        uVar32 = uVar28 & 0xffff;
        uVar2 = (int)uVar28 + 1;
        uVar28 = (ulong)uVar2;
        lVar24 = uVar32 * 4;
        lVar51 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(lVar23 + uVar32 * 2) * 0x10;
        *(undefined4 *)(lVar25 + lVar24) = *(undefined4 *)(lVar51 + 8);
        *(undefined4 *)(lVar31 + lVar24) = *(undefined4 *)(lVar51 + 0xc);
      } while ((int)(uVar2 & 0xffff) < (int)uVar46);
    }
    local_330 = lVar31;
    local_320 = lVar31;
    FUN_0060ea20(param_1,lVar33,&local_2e0,&local_2c0,&local_330,param_4);
    iVar70 = (int)local_318;
    uStack_328 = uStack_328 & 0xffffffff00000000;
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar41 = lVar51;
    }
    uVar28 = (ulong)(int)(iVar70 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar41 + 0x10) < uVar28) || (*(long *)(lVar41 + 0x18) != lVar31 + uVar28)) ||
       (*(long *)(lVar41 + 0x28) == lVar31)) {
      FUN_00439980(lVar41,lVar31);
    }
    else {
      *(long *)(lVar41 + 0x18) = lVar31;
    }
    uVar2 = local_2a8;
    local_2b8 = local_2b8 & 0xffffffff00000000;
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar41 = lVar51;
    }
    uVar28 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
    if (((uVar28 <= *(ulong *)(lVar41 + 0x10)) && (*(long *)(lVar41 + 0x18) == lVar25 + uVar28)) &&
       (*(long *)(lVar41 + 0x28) != lVar25)) {
      *(long *)(lVar41 + 0x18) = lVar25;
      goto LAB_005e3b30;
    }
  }
  else {
    lVar25 = FUN_0043c4e0(DAT_04c6f050);
    lVar24 = DAT_04c6f058;
    if (lVar25 != 0) {
      lVar24 = lVar25;
    }
    uVar28 = (ulong)(int)(uVar46 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar24 + 0x10) < uVar28) {
LAB_005e21bc:
      lVar25 = FUN_00439510(lVar24,uVar28);
    }
    else {
      lVar25 = *(long *)(lVar24 + 0x18);
      if (*(ulong *)(lVar24 + 0x20) < lVar25 + uVar28) goto LAB_005e21bc;
      *(ulong *)(lVar24 + 0x18) = lVar25 + uVar28;
    }
    lVar27 = FUN_0043c4e0(DAT_04c6f050);
    lVar24 = DAT_04c6f058;
    if (lVar27 != 0) {
      lVar24 = lVar27;
    }
    if (*(ulong *)(lVar24 + 0x10) < uVar28) {
LAB_005e2270:
      lVar27 = FUN_00439510(lVar24,uVar28);
    }
    else {
      lVar27 = *(long *)(lVar24 + 0x18);
      if (*(ulong *)(lVar24 + 0x20) < lVar27 + uVar28) goto LAB_005e2270;
      *(ulong *)(lVar24 + 0x18) = lVar27 + uVar28;
    }
    if (0 < (int)uVar46) {
      uVar32 = 0;
      do {
        uVar52 = uVar32 & 0xffff;
        uVar30 = (int)uVar32 + 1;
        uVar32 = (ulong)uVar30;
        lVar35 = uVar52 * 4;
        lVar24 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(lVar23 + uVar52 * 2) * 0x10;
        *(undefined4 *)(lVar25 + lVar35) = *(undefined4 *)(lVar24 + 8);
        *(undefined4 *)(lVar27 + lVar35) = *(undefined4 *)(lVar24 + 0xc);
      } while ((int)(uVar30 & 0xffff) < (int)uVar46);
    }
    uVar26 = FUN_0054ca10(*(undefined8 *)(lVar33 + 0x88),lVar51 + lVar31 * 0xa0 + 0x20,&local_2c0);
    lVar41 = *(long *)(param_4 + 0x18);
    if (param_7 == 2) {
      if (0 < (int)uVar2) {
        lVar51 = 0;
        do {
          uVar52 = (ulong)*(ushort *)(lVar23 + lVar51 * 2);
          uVar32 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2d0) + uVar52 * 2);
          if (uVar32 != 0xffff) {
            lVar31 = *(long *)(param_4 + 0x20);
            uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar52 * 0x10 + 8);
            local_a0[0] = CONCAT44(uVar4,uVar4);
            lVar33 = *(long *)(lVar41 + 0x290) + uVar32 * 8;
            bVar44 = *(byte *)(lVar33 + 6);
            if (bVar44 != 0) {
              iVar70 = 0;
              bVar49 = 0;
              lVar24 = lVar31;
              while( true ) {
                puVar3 = (undefined8 *)(lVar31 + uVar52 * 0x10);
                uVar79 = puVar3[1];
                uVar57 = *puVar3;
                puVar38 = (ushort *)
                          (*(long *)(lVar41 + 0x280) +
                          ((ulong)((uint)*(ushort *)(lVar33 + 2) + (uint)bVar49) & 0xffff) * 6);
                auVar62 = *(undefined1 (*) [16])(lVar24 + (ulong)*puVar38 * 0x10);
                auVar71 = *(undefined1 (*) [16])(lVar24 + (ulong)puVar38[1] * 0x10);
                psVar1 = (short *)(*(long *)(lVar41 + 0x210) + (ulong)puVar38[2] * 4);
                pbVar45 = (byte *)(psVar1 + 1);
                if (*pbVar45 != 0) {
                  fVar84 = auVar62._0_4_ - (float)uVar57;
                  fVar89 = (float)((ulong)uVar57 >> 0x20);
                  fVar85 = auVar62._4_4_ - fVar89;
                  fVar86 = auVar62._8_4_ - (float)uVar79;
                  fVar91 = (float)((ulong)uVar79 >> 0x20);
                  fVar87 = auVar62._12_4_ - fVar91;
                  auVar5._4_4_ = fVar85;
                  auVar5._0_4_ = fVar84;
                  auVar5._8_4_ = fVar86;
                  auVar5._12_4_ = fVar87;
                  auVar6._4_4_ = fVar85;
                  auVar6._0_4_ = fVar84;
                  auVar6._8_4_ = fVar86;
                  auVar6._12_4_ = fVar87;
                  auVar62 = NEON_ext(auVar5,auVar6,4,1);
                  fVar88 = auVar71._0_4_ - (float)uVar57;
                  fVar89 = auVar71._4_4_ - fVar89;
                  fVar90 = auVar71._8_4_ - (float)uVar79;
                  fVar91 = auVar71._12_4_ - fVar91;
                  auVar11._4_4_ = fVar89;
                  auVar11._0_4_ = fVar88;
                  auVar11._8_4_ = fVar90;
                  auVar11._12_4_ = fVar91;
                  auVar12._4_4_ = fVar89;
                  auVar12._0_4_ = fVar88;
                  auVar12._8_4_ = fVar90;
                  auVar12._12_4_ = fVar91;
                  auVar71 = NEON_ext(auVar11,auVar12,4,1);
                  auVar80 = NEON_ext(auVar62,auVar62,8,1);
                  auVar83 = NEON_ext(auVar71,auVar71,8,1);
                  uVar77 = NEON_rev64(auVar80._0_8_,4);
                  bVar44 = 0;
                  uVar78 = NEON_rev64(auVar83._0_8_,4);
                  auVar63._0_4_ = fVar84 * auVar71._0_4_ - fVar88 * auVar62._0_4_;
                  auVar63._4_4_ = fVar85 * auVar71._4_4_ - fVar89 * auVar62._4_4_;
                  auVar63._8_4_ = fVar86 * (float)uVar78 - fVar90 * (float)uVar77;
                  auVar63._12_4_ =
                       fVar87 * (float)((ulong)uVar78 >> 0x20) -
                       fVar91 * (float)((ulong)uVar77 >> 0x20);
                  auVar62 = NEON_ext(auVar63,auVar63,4,1);
                  fVar56 = auVar62._0_4_;
                  fVar53 = auVar62._4_4_;
                  while( true ) {
                    pfVar34 = (float *)(*(long *)(lVar41 + 0x200) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 8);
                    fVar55 = *pfVar34;
                    fVar54 = pfVar34[1];
                    local_330 = CONCAT44((float)((ulong)uVar57 >> 0x20) + fVar85 * fVar55 +
                                         fVar89 * fVar54,
                                         (float)uVar57 + fVar84 * fVar55 + fVar88 * fVar54);
                    uStack_328 = CONCAT44((float)((ulong)uVar79 >> 0x20) + fVar87 * fVar55 +
                                          fVar91 * fVar54,
                                          (float)uVar79 + fVar86 * fVar55 + fVar90 * fVar54);
                    FUN_0054c400(uVar26,&local_330,local_a0,(uint)*(ushort *)(lVar33 + 4) + iVar70,
                                 &local_300,&local_90,&local_b0);
                    local_b0 = local_b0 - (float)local_a0[0];
                    fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                    if (local_b0 < 0.0) {
                      fVar55 = auVar63._0_4_ * auVar63._0_4_ + fVar56 * fVar56 + fVar53 * fVar53;
                      fVar67 = auVar63._0_4_ * auVar63._0_4_ + fVar56 * fVar56 + fVar53 * fVar53;
                      uVar57 = CONCAT44(fVar67,fVar55);
                      uVar79 = NEON_frsqrte(uVar57,4);
                      fVar54 = (float)uVar79;
                      fVar81 = (float)((ulong)uVar79 >> 0x20);
                      uVar79 = NEON_frsqrts(uVar57,CONCAT44(fVar81 * fVar81,fVar54 * fVar54),4);
                      fVar54 = fVar54 * (float)uVar79;
                      fVar81 = fVar81 * (float)((ulong)uVar79 >> 0x20);
                      iVar69 = -(uint)(fVar55 <= 0.0);
                      iVar76 = -(uint)(fVar67 <= 0.0);
                      uVar57 = NEON_frsqrts(uVar57,CONCAT44(fVar81 * fVar81,fVar54 * fVar54),4);
                      fVar54 = (float)uVar57 * fVar54;
                      fVar81 = (float)((ulong)uVar57 >> 0x20) * fVar81;
                      fVar55 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) &
                                               ~(byte)((uint)iVar69 >> 0x18),
                                               CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                                        ~(byte)((uint)iVar69 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar54 >> 8) &
                                                                 ~(byte)((uint)iVar69 >> 8),
                                                                 SUB41(fVar54,0) & ~(byte)iVar69)));
                      auVar58._0_4_ = fVar56 * fVar55;
                      fVar54 = (float)(CONCAT17((byte)((uint)fVar81 >> 0x18) &
                                                ~(byte)((uint)iVar76 >> 0x18),
                                                CONCAT16((byte)((uint)fVar81 >> 0x10) &
                                                         ~(byte)((uint)iVar76 >> 0x10),
                                                         CONCAT15((byte)((uint)fVar81 >> 8) &
                                                                  ~(byte)((uint)iVar76 >> 8),
                                                                  CONCAT14(SUB41(fVar81,0) &
                                                                           ~(byte)iVar76,fVar55))))
                                      >> 0x20);
                      auVar58._4_4_ = fVar53 * fVar54;
                      auVar58._8_4_ = auVar63._0_4_ * fVar55;
                      fVar54 = auVar63._4_4_ * fVar54;
                      auVar72._0_4_ = local_90 * auVar58._0_4_;
                      auVar72._4_4_ = fStack_8c * auVar58._4_4_;
                      auVar72._8_4_ = fStack_88 * auVar58._8_4_;
                      auVar72._12_4_ = fStack_84 * fVar54;
                      auVar62 = NEON_ext(auVar72,auVar72,8,1);
                      if (auVar72._0_4_ + auVar72._4_4_ + auVar62._0_4_ < 0.0) {
                        auVar58._0_4_ = -auVar58._0_4_;
                        auVar58._4_4_ = -auVar58._4_4_;
                        auVar58._8_4_ = -auVar58._8_4_;
                      }
                      auVar62 = *(undefined1 (*) [16])(lVar31 + uVar52 * 0x10);
                      puVar3 = (undefined8 *)(lVar31 + uVar52 * 0x10);
                      puVar3[1] = CONCAT44(auVar62._12_4_ - fStack_ac * fVar54,
                                           auVar62._8_4_ - local_b0 * auVar58._8_4_);
                      *puVar3 = CONCAT44(auVar62._4_4_ - fStack_ac * auVar58._4_4_,
                                         auVar62._0_4_ - local_b0 * auVar58._0_4_);
                    }
                    bVar44 = bVar44 + 1;
                    iVar70 = iVar70 + 1;
                    if (*pbVar45 <= bVar44) break;
                    puVar3 = (undefined8 *)(lVar31 + uVar52 * 0x10);
                    uVar79 = puVar3[1];
                    uVar57 = *puVar3;
                  }
                  bVar44 = *(byte *)(lVar33 + 6);
                }
                bVar49 = bVar49 + 1;
                if (bVar44 <= bVar49) break;
                lVar24 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar51 = lVar51 + 1;
        } while (lVar51 != (int)uVar2);
        if (*(int *)(lVar41 + 0x278) != 0) {
          lVar51 = 0;
          do {
            uVar52 = (ulong)*(ushort *)(lVar23 + lVar51 * 2);
            uVar32 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2c0) + uVar52 * 2);
            if (uVar32 != 0xffff) {
              lVar31 = *(long *)(param_4 + 0x20);
              uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar52 * 0x10 + 8);
              local_a0[0] = CONCAT44(uVar4,uVar4);
              lVar33 = *(long *)(lVar41 + 0x270) + uVar32 * 8;
              bVar44 = *(byte *)(lVar33 + 6);
              if (bVar44 != 0) {
                iVar70 = 0;
                bVar49 = 0;
                lVar24 = lVar31;
                while( true ) {
                  puVar3 = (undefined8 *)(lVar31 + uVar52 * 0x10);
                  uVar79 = puVar3[1];
                  uVar57 = *puVar3;
                  puVar38 = (ushort *)
                            (*(long *)(lVar41 + 0x260) +
                            (ulong)(ushort)(*(short *)(lVar33 + 2) + (ushort)bVar49) * 4);
                  auVar62 = *(undefined1 (*) [16])(lVar24 + (ulong)*puVar38 * 0x10);
                  psVar1 = (short *)(*(long *)(lVar41 + 0x1f0) + (ulong)puVar38[1] * 4);
                  pbVar45 = (byte *)(psVar1 + 1);
                  if (*pbVar45 != 0) {
                    fVar89 = (float)uVar57;
                    uVar32 = (ulong)uVar57 >> 0x20;
                    fVar91 = (float)uVar79;
                    uVar17 = (ulong)uVar79 >> 0x20;
                    bVar44 = 0;
                    while( true ) {
                      fVar56 = *(float *)(*(long *)(lVar41 + 0x1e0) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 4);
                      local_330 = CONCAT44((float)((ulong)uVar57 >> 0x20) +
                                           (auVar62._4_4_ - (float)uVar32) * fVar56,
                                           (float)uVar57 + (auVar62._0_4_ - fVar89) * fVar56);
                      uStack_328 = CONCAT44((float)((ulong)uVar79 >> 0x20) +
                                            (auVar62._12_4_ - (float)uVar17) * fVar56,
                                            (float)uVar79 + (auVar62._8_4_ - fVar91) * fVar56);
                      FUN_0054c400(uVar26,&local_330,local_a0,(uint)*(ushort *)(lVar33 + 4) + iVar70
                                   ,&local_300,&local_90,&local_b0);
                      local_b0 = local_b0 - (float)local_a0[0];
                      fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                      if (local_b0 < 0.0) {
                        auVar71 = *(undefined1 (*) [16])(lVar31 + uVar52 * 0x10);
                        puVar3 = (undefined8 *)(lVar31 + uVar52 * 0x10);
                        puVar3[1] = CONCAT44(auVar71._12_4_ - fStack_ac * fStack_84,
                                             auVar71._8_4_ - local_b0 * fStack_88);
                        *puVar3 = CONCAT44(auVar71._4_4_ - fStack_ac * fStack_8c,
                                           auVar71._0_4_ - local_b0 * local_90);
                      }
                      bVar44 = bVar44 + 1;
                      iVar70 = iVar70 + 1;
                      if (*pbVar45 <= bVar44) break;
                      puVar3 = (undefined8 *)(lVar31 + uVar52 * 0x10);
                      uVar79 = puVar3[1];
                      uVar57 = *puVar3;
                    }
                    bVar44 = *(byte *)(lVar33 + 6);
                  }
                  bVar49 = bVar49 + 1;
                  if (bVar44 <= bVar49) break;
                  lVar24 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar51 = lVar51 + 1;
          } while (lVar51 != (int)uVar2);
        }
      }
    }
    else if (0 < (int)uVar2) {
      lVar51 = 0;
      do {
        uVar52 = (ulong)*(ushort *)(lVar23 + lVar51 * 2);
        uVar32 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2b0) + uVar52 * 2);
        if (uVar32 != 0xffff) {
          uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar52 * 0x10 + 8);
          local_a0[0] = CONCAT44(uVar4,uVar4);
          lVar33 = *(long *)(lVar41 + 0x250);
          pbVar45 = (byte *)(lVar33 + uVar32 * 6 + 4);
          bVar44 = *pbVar45;
          if (bVar44 != 0) {
            lVar24 = *(long *)(param_4 + 0x20);
            bVar49 = 0;
            lVar31 = lVar24;
            while( true ) {
              puVar3 = (undefined8 *)(lVar24 + uVar52 * 0x10);
              uVar79 = puVar3[1];
              uVar57 = *puVar3;
              puVar38 = (ushort *)
                        (*(long *)(lVar41 + 0x240) +
                        ((ulong)((uint)*(ushort *)(lVar33 + uVar32 * 6 + 2) + (uint)bVar49) & 0xffff
                        ) * 6);
              auVar62 = *(undefined1 (*) [16])(lVar31 + (ulong)*puVar38 * 0x10);
              auVar71 = *(undefined1 (*) [16])(lVar31 + (ulong)puVar38[1] * 0x10);
              psVar1 = (short *)(*(long *)(lVar41 + 0x210) + (ulong)puVar38[2] * 4);
              pbVar48 = (byte *)(psVar1 + 1);
              if (*pbVar48 != 0) {
                fVar84 = auVar62._0_4_ - (float)uVar57;
                fVar89 = (float)((ulong)uVar57 >> 0x20);
                fVar85 = auVar62._4_4_ - fVar89;
                fVar86 = auVar62._8_4_ - (float)uVar79;
                fVar91 = (float)((ulong)uVar79 >> 0x20);
                fVar87 = auVar62._12_4_ - fVar91;
                auVar7._4_4_ = fVar85;
                auVar7._0_4_ = fVar84;
                auVar7._8_4_ = fVar86;
                auVar7._12_4_ = fVar87;
                auVar8._4_4_ = fVar85;
                auVar8._0_4_ = fVar84;
                auVar8._8_4_ = fVar86;
                auVar8._12_4_ = fVar87;
                auVar62 = NEON_ext(auVar7,auVar8,4,1);
                fVar88 = auVar71._0_4_ - (float)uVar57;
                fVar89 = auVar71._4_4_ - fVar89;
                fVar90 = auVar71._8_4_ - (float)uVar79;
                fVar91 = auVar71._12_4_ - fVar91;
                auVar13._4_4_ = fVar89;
                auVar13._0_4_ = fVar88;
                auVar13._8_4_ = fVar90;
                auVar13._12_4_ = fVar91;
                auVar14._4_4_ = fVar89;
                auVar14._0_4_ = fVar88;
                auVar14._8_4_ = fVar90;
                auVar14._12_4_ = fVar91;
                auVar71 = NEON_ext(auVar13,auVar14,4,1);
                auVar80 = NEON_ext(auVar62,auVar62,8,1);
                auVar83 = NEON_ext(auVar71,auVar71,8,1);
                uVar77 = NEON_rev64(auVar80._0_8_,4);
                bVar44 = 0;
                uVar78 = NEON_rev64(auVar83._0_8_,4);
                auVar64._0_4_ = fVar84 * auVar71._0_4_ - fVar88 * auVar62._0_4_;
                auVar64._4_4_ = fVar85 * auVar71._4_4_ - fVar89 * auVar62._4_4_;
                auVar64._8_4_ = fVar86 * (float)uVar78 - fVar90 * (float)uVar77;
                auVar64._12_4_ =
                     fVar87 * (float)((ulong)uVar78 >> 0x20) -
                     fVar91 * (float)((ulong)uVar77 >> 0x20);
                auVar62 = NEON_ext(auVar64,auVar64,4,1);
                fVar56 = auVar62._0_4_;
                fVar53 = auVar62._4_4_;
                while( true ) {
                  pfVar34 = (float *)(*(long *)(lVar41 + 0x200) +
                                     (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 8);
                  fVar55 = *pfVar34;
                  fVar54 = pfVar34[1];
                  local_330 = CONCAT44((float)((ulong)uVar57 >> 0x20) + fVar85 * fVar55 +
                                       fVar89 * fVar54,
                                       (float)uVar57 + fVar84 * fVar55 + fVar88 * fVar54);
                  uStack_328 = CONCAT44((float)((ulong)uVar79 >> 0x20) + fVar87 * fVar55 +
                                        fVar91 * fVar54,
                                        (float)uVar79 + fVar86 * fVar55 + fVar90 * fVar54);
                  FUN_0054c400(uVar26,&local_330,local_a0,0xffff,&local_300,&local_90,&local_b0);
                  local_b0 = local_b0 - (float)local_a0[0];
                  fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                  if (local_b0 < 0.0) {
                    fVar55 = auVar64._0_4_ * auVar64._0_4_ + fVar56 * fVar56 + fVar53 * fVar53;
                    fVar67 = auVar64._0_4_ * auVar64._0_4_ + fVar56 * fVar56 + fVar53 * fVar53;
                    uVar57 = CONCAT44(fVar67,fVar55);
                    uVar79 = NEON_frsqrte(uVar57,4);
                    fVar54 = (float)uVar79;
                    fVar81 = (float)((ulong)uVar79 >> 0x20);
                    uVar79 = NEON_frsqrts(uVar57,CONCAT44(fVar81 * fVar81,fVar54 * fVar54),4);
                    fVar54 = fVar54 * (float)uVar79;
                    fVar81 = fVar81 * (float)((ulong)uVar79 >> 0x20);
                    iVar70 = -(uint)(fVar55 <= 0.0);
                    iVar69 = -(uint)(fVar67 <= 0.0);
                    uVar57 = NEON_frsqrts(uVar57,CONCAT44(fVar81 * fVar81,fVar54 * fVar54),4);
                    fVar54 = (float)uVar57 * fVar54;
                    fVar81 = (float)((ulong)uVar57 >> 0x20) * fVar81;
                    fVar55 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) &
                                             ~(byte)((uint)iVar70 >> 0x18),
                                             CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                                      ~(byte)((uint)iVar70 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar54 >> 8) &
                                                               ~(byte)((uint)iVar70 >> 8),
                                                               SUB41(fVar54,0) & ~(byte)iVar70)));
                    auVar59._0_4_ = fVar56 * fVar55;
                    fVar54 = (float)(CONCAT17((byte)((uint)fVar81 >> 0x18) &
                                              ~(byte)((uint)iVar69 >> 0x18),
                                              CONCAT16((byte)((uint)fVar81 >> 0x10) &
                                                       ~(byte)((uint)iVar69 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar81 >> 8) &
                                                                ~(byte)((uint)iVar69 >> 8),
                                                                CONCAT14(SUB41(fVar81,0) &
                                                                         ~(byte)iVar69,fVar55)))) >>
                                    0x20);
                    auVar59._4_4_ = fVar53 * fVar54;
                    auVar59._8_4_ = auVar64._0_4_ * fVar55;
                    fVar54 = auVar64._4_4_ * fVar54;
                    auVar73._0_4_ = local_90 * auVar59._0_4_;
                    auVar73._4_4_ = fStack_8c * auVar59._4_4_;
                    auVar73._8_4_ = fStack_88 * auVar59._8_4_;
                    auVar73._12_4_ = fStack_84 * fVar54;
                    auVar62 = NEON_ext(auVar73,auVar73,8,1);
                    if (auVar73._0_4_ + auVar73._4_4_ + auVar62._0_4_ < 0.0) {
                      auVar59._0_4_ = -auVar59._0_4_;
                      auVar59._4_4_ = -auVar59._4_4_;
                      auVar59._8_4_ = -auVar59._8_4_;
                    }
                    auVar62 = *(undefined1 (*) [16])(lVar24 + uVar52 * 0x10);
                    puVar3 = (undefined8 *)(lVar24 + uVar52 * 0x10);
                    puVar3[1] = CONCAT44(auVar62._12_4_ - fStack_ac * fVar54,
                                         auVar62._8_4_ - local_b0 * auVar59._8_4_);
                    *puVar3 = CONCAT44(auVar62._4_4_ - fStack_ac * auVar59._4_4_,
                                       auVar62._0_4_ - local_b0 * auVar59._0_4_);
                  }
                  bVar44 = bVar44 + 1;
                  if (*pbVar48 <= bVar44) break;
                  puVar3 = (undefined8 *)(lVar24 + uVar52 * 0x10);
                  uVar79 = puVar3[1];
                  uVar57 = *puVar3;
                }
                bVar44 = *pbVar45;
              }
              bVar49 = bVar49 + 1;
              if (bVar44 <= bVar49) break;
              lVar31 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar51 = lVar51 + 1;
      } while (lVar51 != (int)uVar2);
      if (*(int *)(lVar41 + 0x238) != 0) {
        lVar51 = 0;
        do {
          uVar52 = (ulong)*(ushort *)(lVar23 + lVar51 * 2);
          uVar32 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2a0) + uVar52 * 2);
          if (uVar32 != 0xffff) {
            uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar52 * 0x10 + 8);
            local_a0[0] = CONCAT44(uVar4,uVar4);
            lVar33 = *(long *)(lVar41 + 0x230);
            pbVar45 = (byte *)(lVar33 + uVar32 * 6 + 4);
            bVar44 = *pbVar45;
            if (bVar44 != 0) {
              lVar24 = *(long *)(param_4 + 0x20);
              bVar49 = 0;
              lVar31 = lVar24;
              while( true ) {
                puVar3 = (undefined8 *)(lVar24 + uVar52 * 0x10);
                uVar79 = puVar3[1];
                uVar57 = *puVar3;
                puVar38 = (ushort *)
                          (*(long *)(lVar41 + 0x220) +
                          (ulong)(ushort)(*(short *)(lVar33 + uVar32 * 6 + 2) + (ushort)bVar49) * 4)
                ;
                auVar62 = *(undefined1 (*) [16])(lVar31 + (ulong)*puVar38 * 0x10);
                psVar1 = (short *)(*(long *)(lVar41 + 0x1f0) + (ulong)puVar38[1] * 4);
                pbVar48 = (byte *)(psVar1 + 1);
                if (*pbVar48 != 0) {
                  fVar89 = (float)uVar57;
                  uVar17 = (ulong)uVar57 >> 0x20;
                  fVar91 = (float)uVar79;
                  uVar18 = (ulong)uVar79 >> 0x20;
                  bVar44 = 0;
                  while( true ) {
                    fVar56 = *(float *)(*(long *)(lVar41 + 0x1e0) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar44) * 4);
                    local_330 = CONCAT44((float)((ulong)uVar57 >> 0x20) +
                                         (auVar62._4_4_ - (float)uVar17) * fVar56,
                                         (float)uVar57 + (auVar62._0_4_ - fVar89) * fVar56);
                    uStack_328 = CONCAT44((float)((ulong)uVar79 >> 0x20) +
                                          (auVar62._12_4_ - (float)uVar18) * fVar56,
                                          (float)uVar79 + (auVar62._8_4_ - fVar91) * fVar56);
                    FUN_0054c400(uVar26,&local_330,local_a0,0xffff,&local_300,&local_90,&local_b0);
                    local_b0 = local_b0 - (float)local_a0[0];
                    fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                    if (local_b0 < 0.0) {
                      auVar71 = *(undefined1 (*) [16])(lVar24 + uVar52 * 0x10);
                      puVar3 = (undefined8 *)(lVar24 + uVar52 * 0x10);
                      puVar3[1] = CONCAT44(auVar71._12_4_ - fStack_ac * fStack_84,
                                           auVar71._8_4_ - local_b0 * fStack_88);
                      *puVar3 = CONCAT44(auVar71._4_4_ - fStack_ac * fStack_8c,
                                         auVar71._0_4_ - local_b0 * local_90);
                    }
                    bVar44 = bVar44 + 1;
                    if (*pbVar48 <= bVar44) break;
                    puVar3 = (undefined8 *)(lVar24 + uVar52 * 0x10);
                    uVar79 = puVar3[1];
                    uVar57 = *puVar3;
                  }
                  bVar44 = *pbVar45;
                }
                bVar49 = bVar49 + 1;
                if (bVar44 <= bVar49) break;
                lVar31 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar51 = lVar51 + 1;
        } while (lVar51 != (int)uVar2);
      }
    }
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar41 = lVar51;
    }
    if (((*(ulong *)(lVar41 + 0x10) < uVar28) || (*(long *)(lVar41 + 0x18) != lVar27 + uVar28)) ||
       (*(long *)(lVar41 + 0x28) == lVar27)) {
      FUN_00439980(lVar41,lVar27,uVar28);
    }
    else {
      *(long *)(lVar41 + 0x18) = lVar27;
    }
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar41 = lVar51;
    }
    if (((uVar28 <= *(ulong *)(lVar41 + 0x10)) && (*(long *)(lVar41 + 0x18) == lVar25 + uVar28)) &&
       (*(long *)(lVar41 + 0x28) != lVar25)) {
      *(long *)(lVar41 + 0x18) = lVar25;
      goto LAB_005e3b30;
    }
  }
  FUN_00439980(lVar41,lVar25,uVar28);
LAB_005e3b30:
  uVar2 = local_2c8;
  local_2d8 = (ulong)local_2d8._4_4_ << 0x20;
  lVar51 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar41 = DAT_04c6f058;
  if (lVar51 != 0) {
    lVar41 = lVar51;
  }
  uVar28 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar41 + 0x10) < uVar28) || (*(long *)(lVar41 + 0x18) != uVar28 + lVar23)) ||
     (*(long *)(lVar41 + 0x28) == lVar23)) {
    FUN_00439980(lVar41,lVar23);
  }
  else {
    *(long *)(lVar41 + 0x18) = lVar23;
  }
  return;
}

