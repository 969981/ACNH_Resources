
void FUN_005e5640(undefined8 param_1,uint param_2,ulong param_3,long param_4,ulong param_5,
                 ulong param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ushort *puVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  ushort *puVar37;
  byte *pbVar38;
  long lVar39;
  byte bVar40;
  byte bVar41;
  ushort uVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  float *pfVar47;
  long lVar48;
  char *pcVar49;
  long lVar50;
  uint *puVar51;
  long lVar52;
  ulong uVar53;
  byte bVar54;
  ulong uVar55;
  byte *pbVar56;
  long lVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar83;
  undefined1 auVar82 [16];
  float fVar84;
  float fVar87;
  undefined8 uVar85;
  float fVar88;
  undefined1 auVar86 [16];
  float fVar89;
  float fVar90;
  float fVar92;
  float fVar93;
  undefined8 uVar91;
  float fVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  byte bVar104;
  undefined1 uVar105;
  float fVar106;
  int iVar107;
  int iVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  long local_300;
  undefined8 uStack_2f8;
  long local_2f0;
  undefined8 local_2e8;
  ushort local_2e0;
  long local_2d0;
  undefined8 local_2c8;
  long local_2c0;
  uint local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  long local_2a0;
  uint local_298;
  long local_290;
  undefined8 local_288;
  long local_280;
  uint local_278;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar52 = *(long *)(param_4 + 0x18);
  uVar2 = *(uint *)(lVar52 + 0x48);
  lVar44 = *(long *)(param_4 + 400);
  if ((param_3 & 1) == 0) {
    uVar43 = param_2;
    if (0x1d < (int)param_2) {
      uVar43 = 0x1e;
    }
    uVar43 = 1 << (ulong)(uVar43 & 0x1f);
  }
  else {
    uVar43 = 0;
  }
  local_2b0 = 0;
  local_2a8 = 0x8000000000000000;
  local_298 = uVar2;
  if (uVar2 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = FUN_0043c4e0(DAT_04c6f050);
    lVar45 = DAT_04c6f058;
    if (lVar30 != 0) {
      lVar45 = lVar30;
    }
    uVar36 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar45 + 0x10) < uVar36) {
LAB_005e5718:
      lVar30 = FUN_00439510();
    }
    else {
      lVar30 = *(long *)(lVar45 + 0x18);
      uVar36 = lVar30 + uVar36;
      if (*(ulong *)(lVar45 + 0x20) < uVar36) goto LAB_005e5718;
      *(ulong *)(lVar45 + 0x18) = uVar36;
    }
  }
  lVar45 = lVar44 + (long)(int)param_2 * 0xa0;
  local_2a8._4_4_ = uVar2 | 0x80000000;
  if (uVar2 != 0) {
    local_2a8._0_4_ = uVar2;
  }
  lVar46 = (long)(int)param_2;
  local_2b0 = lVar30;
  local_2a0 = lVar30;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e5884;
      puVar51 = *(uint **)(lVar52 + 0xe8);
      uVar42 = 0;
      uVar60 = 0;
      do {
        if ((*puVar51 & uVar43) != 0) {
          *(ushort *)(lVar30 + (long)(int)uVar60 * 2) = uVar42;
          uVar60 = uVar60 + 1;
        }
        uVar42 = uVar42 + 1;
        puVar51 = puVar51 + 1;
      } while ((int)(uint)uVar42 < (int)uVar2);
LAB_005e5858:
      bVar27 = SBORROW4(uVar2,uVar60);
      bVar28 = (int)(uVar2 - uVar60) < 0;
      bVar29 = uVar2 == uVar60;
      if ((int)uVar2 < (int)uVar60) goto LAB_005e5890;
LAB_005e5860:
      if (!bVar29 && bVar28 == bVar27) goto LAB_005e5890;
    }
    else {
      if (0 < (int)uVar2) {
        uVar42 = 0;
        uVar60 = 0;
        pfVar47 = (float *)(*(long *)(lVar52 + 0x40) + 4);
        do {
          if (*pfVar47 != 0.0) {
            *(ushort *)(lVar30 + (long)(int)uVar60 * 2) = uVar42;
            uVar60 = uVar60 + 1;
          }
          uVar42 = uVar42 + 1;
          pfVar47 = pfVar47 + 4;
        } while ((int)(uint)uVar42 < (int)uVar2);
        goto LAB_005e5858;
      }
LAB_005e5884:
      uVar60 = 0;
      bVar27 = false;
      bVar29 = uVar2 == 0;
      bVar28 = false;
      if (-1 < (int)uVar2) goto LAB_005e5860;
LAB_005e5890:
      uVar2 = uVar60;
      local_2a8._0_4_ = uVar60;
    }
  }
  else {
    local_2d0 = 0;
    local_2c8 = 0x8000000000000000;
    local_2b8 = uVar2;
    if (uVar2 == 0) {
      local_2c8._0_4_ = 0;
      local_2c0 = 0;
    }
    else {
      lVar31 = FUN_0043c4e0(DAT_04c6f050);
      lVar32 = DAT_04c6f058;
      if (lVar31 != 0) {
        lVar32 = lVar31;
      }
      uVar36 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
      if (*(ulong *)(lVar32 + 0x10) < uVar36) {
LAB_005e57d4:
        local_2c0 = FUN_00439510();
      }
      else {
        local_2c0 = *(long *)(lVar32 + 0x18);
        uVar36 = local_2c0 + uVar36;
        if (*(ulong *)(lVar32 + 0x20) < uVar36) goto LAB_005e57d4;
        *(ulong *)(lVar32 + 0x18) = uVar36;
      }
      if (uVar2 != 0) {
        local_2c8._0_4_ = uVar2;
      }
    }
    lVar32 = local_2c0;
    local_2c8._4_4_ = uVar2 | 0x80000000;
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e62cc;
      pcVar49 = *(char **)(lVar52 + 0x188);
      puVar51 = *(uint **)(lVar52 + 0xe8);
      uVar42 = 0;
      uVar60 = 0;
      uVar59 = 0;
      do {
        uVar58 = uVar59;
        if ((*puVar51 & uVar43) != 0) {
          if (*pcVar49 == '\0') {
            uVar26 = uVar60 + 1;
            lVar31 = lVar30;
            uVar59 = uVar60;
          }
          else {
            uVar58 = uVar59 + 1;
            uVar26 = uVar60;
            lVar31 = local_2c0;
          }
          uVar60 = uVar26;
          *(ushort *)(lVar31 + (long)(int)uVar59 * 2) = uVar42;
        }
        uVar42 = uVar42 + 1;
        puVar51 = puVar51 + 1;
        pcVar49 = pcVar49 + 1;
        uVar59 = uVar58;
      } while ((int)(uint)uVar42 < (int)uVar2);
LAB_005e62b0:
      uVar43 = uVar58;
      uVar59 = uVar58;
      if (uVar2 == uVar58) {
LAB_005e62bc:
        uVar43 = uVar2;
        uVar59 = (uint)local_2c8;
      }
    }
    else {
      if (0 < (int)uVar2) {
        pcVar49 = *(char **)(lVar52 + 0x188);
        uVar42 = 0;
        uVar58 = 0;
        uVar60 = 0;
        pfVar47 = (float *)(*(long *)(lVar52 + 0x40) + 4);
        do {
          if (*pfVar47 != 0.0) {
            if (*pcVar49 == '\0') {
              uVar43 = uVar58;
              uVar59 = uVar60 + 1;
              lVar31 = lVar30;
              uVar58 = uVar60;
            }
            else {
              uVar43 = uVar58 + 1;
              uVar59 = uVar60;
              lVar31 = local_2c0;
            }
            uVar60 = uVar59;
            *(ushort *)(lVar31 + (long)(int)uVar58 * 2) = uVar42;
            uVar58 = uVar43;
          }
          uVar42 = uVar42 + 1;
          pcVar49 = pcVar49 + 1;
          pfVar47 = pfVar47 + 4;
        } while ((int)(uint)uVar42 < (int)uVar2);
        goto LAB_005e62b0;
      }
LAB_005e62cc:
      uVar60 = 0;
      uVar58 = 0;
      uVar43 = uVar58;
      uVar59 = uVar58;
      if (uVar2 == 0) goto LAB_005e62bc;
    }
    local_2c8._0_4_ = uVar59;
    uVar59 = uVar60;
    uVar26 = uVar60;
    if (uVar2 == uVar60) {
      uVar59 = uVar2;
      uVar26 = (uint)local_2a8;
    }
    local_2a8._0_4_ = uVar26;
    local_2d0 = local_2c0;
    if (uVar58 != 0) {
      local_300 = *(long *)(param_4 + 0x220);
      local_2e0 = *(ushort *)(lVar52 + 0x1a8);
      uStack_2f8 = *(ulong *)(param_4 + 0x228);
      local_2f0 = *(long *)(param_4 + 0x230);
      local_2e8 = *(undefined8 *)(param_4 + 0x210);
      if (param_7 == 0) {
        local_290 = 0;
        local_288 = 0x8000000000000000;
        local_278 = uVar58;
        lVar35 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar35 != 0) {
          lVar31 = lVar35;
        }
        uVar36 = (ulong)(int)(uVar58 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar31 + 0x10) < uVar36) {
LAB_005e63ec:
          lVar35 = FUN_00439510(lVar31,uVar36);
        }
        else {
          lVar35 = *(long *)(lVar31 + 0x18);
          if (*(ulong *)(lVar31 + 0x20) < lVar35 + uVar36) goto LAB_005e63ec;
          *(ulong *)(lVar31 + 0x18) = lVar35 + uVar36;
        }
        local_288 = CONCAT44(uVar58,(undefined4)local_288) | 0x8000000000000000;
        local_290 = lVar35;
        local_280 = lVar35;
        lVar48 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar48 != 0) {
          lVar31 = lVar48;
        }
        if (*(ulong *)(lVar31 + 0x10) < uVar36) {
LAB_005e6fc0:
          lVar48 = FUN_00439510(lVar31,uVar36);
        }
        else {
          lVar48 = *(long *)(lVar31 + 0x18);
          if (*(ulong *)(lVar31 + 0x20) < lVar48 + uVar36) goto LAB_005e6fc0;
          *(ulong *)(lVar31 + 0x18) = lVar48 + uVar36;
        }
        local_288 = CONCAT44(local_288._4_4_,uVar58);
        if (0 < (int)uVar58) {
          uVar53 = 0;
          do {
            uVar55 = uVar53 & 0xffff;
            uVar2 = (int)uVar53 + 1;
            uVar53 = (ulong)uVar2;
            lVar50 = uVar55 * 4;
            lVar31 = *(long *)(lVar52 + 0x40) + (ulong)*(ushort *)(lVar32 + uVar55 * 2) * 0x10;
            *(undefined4 *)(lVar35 + lVar50) = *(undefined4 *)(lVar31 + 8);
            *(undefined4 *)(lVar48 + lVar50) = *(undefined4 *)(lVar31 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar58);
        }
        FUN_0061f130(param_1,lVar45,&local_2d0,&local_290,param_4,&local_300);
        lVar50 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar50 != 0) {
          lVar31 = lVar50;
        }
        if (((*(ulong *)(lVar31 + 0x10) < uVar36) || (*(long *)(lVar31 + 0x18) != lVar48 + uVar36))
           || (*(long *)(lVar31 + 0x28) == lVar48)) {
          FUN_00439980(lVar31,lVar48,uVar36);
        }
        else {
          *(long *)(lVar31 + 0x18) = lVar48;
        }
        uVar2 = local_278;
        local_288 = local_288 & 0xffffffff00000000;
        lVar48 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
        lVar31 = DAT_04c6f058;
        if (lVar48 != 0) {
          lVar31 = lVar48;
        }
        uVar36 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar31 + 0x10) < uVar36) || (*(long *)(lVar31 + 0x18) != lVar35 + uVar36))
           || (*(long *)(lVar31 + 0x28) == lVar35)) {
          FUN_00439980(lVar31,lVar35);
        }
        else {
          *(long *)(lVar31 + 0x18) = lVar35;
        }
      }
      else {
        lVar35 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar35 != 0) {
          lVar31 = lVar35;
        }
        uVar36 = (ulong)(int)(uVar58 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar31 + 0x10) < uVar36) {
LAB_005e6380:
          lVar35 = FUN_00439510(lVar31,uVar36);
        }
        else {
          lVar35 = *(long *)(lVar31 + 0x18);
          if (*(ulong *)(lVar31 + 0x20) < lVar35 + uVar36) goto LAB_005e6380;
          *(ulong *)(lVar31 + 0x18) = lVar35 + uVar36;
        }
        lVar48 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar48 != 0) {
          lVar31 = lVar48;
        }
        if (*(ulong *)(lVar31 + 0x10) < uVar36) {
LAB_005e65dc:
          lVar48 = FUN_00439510(lVar31,uVar36);
        }
        else {
          lVar48 = *(long *)(lVar31 + 0x18);
          if (*(ulong *)(lVar31 + 0x20) < lVar48 + uVar36) goto LAB_005e65dc;
          *(ulong *)(lVar31 + 0x18) = lVar48 + uVar36;
        }
        if (0 < (int)uVar58) {
          uVar53 = 0;
          do {
            uVar55 = uVar53 & 0xffff;
            uVar2 = (int)uVar53 + 1;
            uVar53 = (ulong)uVar2;
            lVar50 = uVar55 * 4;
            lVar31 = *(long *)(lVar52 + 0x40) + (ulong)*(ushort *)(lVar32 + uVar55 * 2) * 0x10;
            *(undefined4 *)(lVar35 + lVar50) = *(undefined4 *)(lVar31 + 8);
            *(undefined4 *)(lVar48 + lVar50) = *(undefined4 *)(lVar31 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar58);
        }
        lVar31 = lVar44 + lVar46 * 0xa0;
        lVar50 = *(long *)(lVar45 + 0x88);
        auVar73 = *(undefined1 (*) [16])(lVar31 + 0x50);
        fVar61 = (float)*(undefined8 *)(lVar50 + 0x20);
        fVar70 = (float)((ulong)*(undefined8 *)(lVar50 + 0x20) >> 0x20);
        fVar72 = (float)*(undefined8 *)(lVar50 + 0x28);
        local_90 = CONCAT44(auVar73._4_4_ +
                            (float)((ulong)*(undefined8 *)(lVar31 + 0x40) >> 0x20) * fVar72 +
                            (float)((ulong)*(undefined8 *)(lVar31 + 0x20) >> 0x20) * fVar61 +
                            (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20) * fVar70,
                            auVar73._0_4_ +
                            (float)*(undefined8 *)(lVar31 + 0x40) * fVar72 +
                            (float)*(undefined8 *)(lVar31 + 0x20) * fVar61 +
                            (float)*(undefined8 *)(lVar31 + 0x30) * fVar70);
        uStack_88 = CONCAT44(*(undefined4 *)(lVar50 + 0x2c),
                             auVar73._8_4_ +
                             (float)*(undefined8 *)(lVar31 + 0x48) * fVar72 +
                             (float)*(undefined8 *)(lVar31 + 0x28) * fVar61 +
                             (float)*(undefined8 *)(lVar31 + 0x38) * fVar70);
        FUN_0053da70(&local_290,&local_90);
        lVar31 = *(long *)(param_4 + 0x18);
        if (param_7 == 2) {
          if (0 < (int)uVar43) {
            lVar50 = 0;
            pcVar49 = (char *)(lVar44 + lVar46 * 0xa0 + 0x9c);
            do {
              uVar53 = (ulong)*(ushort *)(lVar32 + lVar50 * 2);
              if (((*(char *)(local_2f0 + (uVar53 - local_2e0)) <= *pcVar49) &&
                  (*(char *)(uStack_2f8 + (uVar53 - local_2e0)) == '\0')) &&
                 (uVar55 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2d0) + uVar53 * 2),
                 uVar55 != 0xffff)) {
                fVar61 = *(float *)(*(long *)(lVar31 + 0x40) + uVar53 * 0x10 + 8);
                lVar39 = *(long *)(lVar31 + 0x290) + uVar55 * 8;
                pbVar56 = (byte *)(lVar39 + 6);
                bVar40 = *pbVar56;
                if (bVar40 != 0) {
                  lVar57 = *(long *)(param_4 + 0x20);
                  puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                  uVar63 = puVar3[1];
                  uVar62 = *puVar3;
                  bVar54 = 0;
                  lVar34 = lVar57;
                  while( true ) {
                    puVar37 = (ushort *)
                              (*(long *)(lVar31 + 0x280) +
                              ((ulong)((uint)*(ushort *)(lVar39 + 2) + (uint)bVar54) & 0xffff) * 6);
                    puVar3 = (undefined8 *)(lVar34 + (ulong)*puVar37 * 0x10);
                    uVar81 = puVar3[1];
                    uVar80 = *puVar3;
                    puVar3 = (undefined8 *)(lVar34 + (ulong)puVar37[1] * 0x10);
                    uVar85 = puVar3[1];
                    uVar91 = *puVar3;
                    psVar1 = (short *)(*(long *)(lVar31 + 0x210) + (ulong)puVar37[2] * 4);
                    pbVar38 = (byte *)(psVar1 + 1);
                    bVar41 = *pbVar38;
                    if (bVar41 != 0) {
                      fVar65 = (float)uVar80 - (float)uVar62;
                      fVar70 = (float)((ulong)uVar62 >> 0x20);
                      fVar66 = (float)((ulong)uVar80 >> 0x20) - fVar70;
                      fVar67 = (float)uVar81 - (float)uVar63;
                      fVar72 = (float)((ulong)uVar63 >> 0x20);
                      fVar68 = (float)((ulong)uVar81 >> 0x20) - fVar72;
                      auVar8._4_4_ = fVar66;
                      auVar8._0_4_ = fVar65;
                      auVar8._8_4_ = fVar67;
                      auVar8._12_4_ = fVar68;
                      auVar9._4_4_ = fVar66;
                      auVar9._0_4_ = fVar65;
                      auVar9._8_4_ = fVar67;
                      auVar9._12_4_ = fVar68;
                      auVar73 = NEON_ext(auVar8,auVar9,4,1);
                      fVar69 = (float)uVar91 - (float)uVar62;
                      fVar70 = (float)((ulong)uVar91 >> 0x20) - fVar70;
                      fVar71 = (float)uVar85 - (float)uVar63;
                      fVar72 = (float)((ulong)uVar85 >> 0x20) - fVar72;
                      auVar14._4_4_ = fVar70;
                      auVar14._0_4_ = fVar69;
                      auVar14._8_4_ = fVar71;
                      auVar14._12_4_ = fVar72;
                      auVar15._4_4_ = fVar70;
                      auVar15._0_4_ = fVar69;
                      auVar15._8_4_ = fVar71;
                      auVar15._12_4_ = fVar72;
                      auVar74 = NEON_ext(auVar14,auVar15,4,1);
                      auVar82 = NEON_ext(auVar73,auVar73,8,1);
                      auVar86 = NEON_ext(auVar74,auVar74,8,1);
                      uVar80 = NEON_rev64(auVar82._0_8_,4);
                      uVar81 = NEON_rev64(auVar86._0_8_,4);
                      bVar40 = 0;
                      auVar77._0_4_ = fVar65 * auVar74._0_4_ - fVar69 * auVar73._0_4_;
                      auVar77._4_4_ = fVar66 * auVar74._4_4_ - fVar70 * auVar73._4_4_;
                      auVar77._8_4_ = fVar67 * (float)uVar81 - fVar71 * (float)uVar80;
                      auVar77._12_4_ =
                           fVar68 * (float)((ulong)uVar81 >> 0x20) -
                           fVar72 * (float)((ulong)uVar80 >> 0x20);
                      auVar73 = NEON_ext(auVar77,auVar77,4,1);
                      fVar79 = auVar73._0_4_;
                      fVar83 = auVar73._4_4_;
                      do {
                        pfVar47 = (float *)(*(long *)(lVar31 + 0x200) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                        fVar106 = *pfVar47;
                        fVar89 = pfVar47[1];
                        fVar88 = (float)((ulong)uVar62 >> 0x20);
                        fVar64 = (float)((ulong)uVar63 >> 0x20);
                        fVar90 = ((float)uVar62 + fVar65 * fVar106 + fVar69 * fVar89) - local_270;
                        fVar92 = (fVar88 + fVar66 * fVar106 + fVar70 * fVar89) - fStack_26c;
                        fVar94 = ((float)uVar63 + fVar67 * fVar106 + fVar71 * fVar89) - fStack_268;
                        fVar84 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                        fVar87 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                        uVar80 = CONCAT44(fVar87,fVar84);
                        uVar81 = NEON_frsqrte(uVar80,4);
                        fVar109 = (float)uVar81;
                        fVar111 = (float)((ulong)uVar81 >> 0x20);
                        uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4
                                             );
                        fVar109 = fVar109 * (float)uVar81;
                        fVar111 = fVar111 * (float)((ulong)uVar81 >> 0x20);
                        uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4
                                             );
                        iVar107 = -(uint)(fVar84 <= 0.0);
                        iVar108 = -(uint)(fVar87 <= 0.0);
                        fVar109 = (float)uVar80 * fVar109;
                        fVar111 = (float)((ulong)uVar80 >> 0x20) * fVar111;
                        bVar95 = SUB41(fVar109,0) & ~(byte)iVar107;
                        bVar96 = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar107 >> 8);
                        bVar97 = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar107 >> 0x10);
                        bVar98 = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18);
                        bVar99 = SUB41(fVar111,0) & ~(byte)iVar108;
                        bVar100 = (byte)((uint)fVar111 >> 8) & ~(byte)((uint)iVar108 >> 8);
                        bVar102 = (byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
                        bVar104 = (byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
                        fVar84 = (fVar84 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,
                                                  bVar95))) - fStack_264) - fVar61;
                        fVar87 = (fVar87 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100
                                                  ,bVar99))) - fStack_264) - fVar61;
                        if (fVar84 < 0.0) {
                          fVar109 = (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,bVar95)))
                          ;
                          fVar111 = auVar77._0_4_ * auVar77._0_4_ +
                                    fVar79 * fVar79 + fVar83 * fVar83;
                          fVar93 = auVar77._0_4_ * auVar77._0_4_ + fVar79 * fVar79 + fVar83 * fVar83
                          ;
                          uVar80 = CONCAT44(fVar93,fVar111);
                          uVar81 = NEON_frsqrte(uVar80,4);
                          fVar110 = (float)uVar81;
                          fVar112 = (float)((ulong)uVar81 >> 0x20);
                          uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110)
                                                ,4);
                          fVar110 = fVar110 * (float)uVar81;
                          fVar112 = fVar112 * (float)((ulong)uVar81 >> 0x20);
                          iVar107 = -(uint)(fVar111 <= 0.0);
                          iVar108 = -(uint)(fVar93 <= 0.0);
                          uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110)
                                                ,4);
                          fVar110 = (float)uVar80 * fVar110;
                          fVar112 = (float)((ulong)uVar80 >> 0x20) * fVar112;
                          fVar111 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                    ~(byte)((uint)iVar107 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                             ~(byte)((uint)iVar107 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar110 >> 8) &
                                                                      ~(byte)((uint)iVar107 >> 8),
                                                                      SUB41(fVar110,0) &
                                                                      ~(byte)iVar107)));
                          fVar93 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                                    ~(byte)((uint)iVar108 >> 0x18),
                                                    CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                             ~(byte)((uint)iVar108 >> 0x10),
                                                             CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                      ~(byte)((uint)iVar108 >> 8),
                                                                      CONCAT14(SUB41(fVar112,0) &
                                                                               ~(byte)iVar108,
                                                                               fVar111)))) >> 0x20);
                          fVar110 = fVar79 * fVar111;
                          fVar112 = fVar83 * fVar93;
                          fVar111 = auVar77._0_4_ * fVar111;
                          fVar93 = auVar77._4_4_ * fVar93;
                          fVar90 = fVar90 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,
                                                  bVar95))) * fVar110;
                          fVar92 = fVar92 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(
                                                  bVar100,bVar99))) * fVar112;
                          uVar101 = (undefined1)((uint)fVar92 >> 8);
                          uVar103 = (undefined1)((uint)fVar92 >> 0x10);
                          uVar105 = (undefined1)((uint)fVar92 >> 0x18);
                          fVar94 = fVar94 * fVar109 * fVar111;
                          fVar106 = ((fVar64 + fVar68 * fVar106 + fVar72 * fVar89) - fStack_264) *
                                    (float)(CONCAT17(bVar104,CONCAT16(bVar102,CONCAT15(bVar100,
                                                  CONCAT14(bVar99,fVar109)))) >> 0x20) * fVar93;
                          auVar20[4] = SUB41(fVar92,0);
                          auVar20._0_4_ = fVar90;
                          auVar20[5] = uVar101;
                          auVar20[6] = uVar103;
                          auVar20[7] = uVar105;
                          auVar20._8_4_ = fVar94;
                          auVar20._12_4_ = fVar106;
                          auVar21[4] = SUB41(fVar92,0);
                          auVar21._0_4_ = fVar90;
                          auVar21[5] = uVar101;
                          auVar21[6] = uVar103;
                          auVar21[7] = uVar105;
                          auVar21._8_4_ = fVar94;
                          auVar21._12_4_ = fVar106;
                          auVar73 = NEON_ext(auVar20,auVar21,8,1);
                          if (fVar90 + fVar92 + auVar73._0_4_ < 0.0) {
                            fVar110 = -fVar110;
                            fVar112 = -fVar112;
                            fVar111 = -fVar111;
                          }
                          uVar62 = CONCAT44(fVar88 - fVar87 * fVar112,
                                            (float)uVar62 - fVar84 * fVar110);
                          uVar63 = CONCAT44(fVar64 - fVar87 * fVar93,
                                            (float)uVar63 - fVar84 * fVar111);
                          puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                          puVar3[1] = uVar63;
                          *puVar3 = uVar62;
                          bVar41 = *pbVar38;
                        }
                        bVar40 = bVar40 + 1;
                      } while (bVar40 < bVar41);
                      bVar40 = *pbVar56;
                    }
                    bVar54 = bVar54 + 1;
                    if (bVar40 <= bVar54) break;
                    lVar34 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar50 = lVar50 + 1;
            } while (lVar50 != (int)uVar43);
            if (*(int *)(lVar31 + 0x278) != 0) {
              lVar50 = 0;
              do {
                uVar53 = (ulong)*(ushort *)(lVar32 + lVar50 * 2);
                if (((*(char *)(local_2f0 + (uVar53 - local_2e0)) <= *pcVar49) &&
                    (*(char *)(uStack_2f8 + (uVar53 - local_2e0)) == '\0')) &&
                   (uVar55 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2c0) + uVar53 * 2),
                   uVar55 != 0xffff)) {
                  fVar61 = *(float *)(*(long *)(lVar31 + 0x40) + uVar53 * 0x10 + 8);
                  lVar39 = *(long *)(lVar31 + 0x270) + uVar55 * 8;
                  pbVar56 = (byte *)(lVar39 + 6);
                  bVar40 = *pbVar56;
                  if (bVar40 != 0) {
                    lVar57 = *(long *)(param_4 + 0x20);
                    puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                    uVar63 = puVar3[1];
                    uVar62 = *puVar3;
                    bVar54 = 0;
                    lVar34 = lVar57;
                    while( true ) {
                      puVar37 = (ushort *)
                                (*(long *)(lVar31 + 0x260) +
                                (ulong)(ushort)(*(short *)(lVar39 + 2) + (ushort)bVar54) * 4);
                      puVar3 = (undefined8 *)(lVar34 + (ulong)*puVar37 * 0x10);
                      uVar81 = puVar3[1];
                      uVar80 = *puVar3;
                      puVar37 = (ushort *)(*(long *)(lVar31 + 0x1f0) + (ulong)puVar37[1] * 4);
                      puVar33 = puVar37 + 1;
                      bVar41 = (byte)*puVar33;
                      if (bVar41 != 0) {
                        fVar70 = (float)uVar62;
                        uVar55 = (ulong)uVar62 >> 0x20;
                        fVar72 = (float)uVar63;
                        uVar24 = (ulong)uVar63 >> 0x20;
                        bVar40 = 0;
                        do {
                          fVar67 = *(float *)(*(long *)(lVar31 + 0x1e0) +
                                             ((ulong)((uint)*puVar37 + (uint)bVar40) & 0xffff) * 4);
                          fVar65 = (float)((ulong)uVar62 >> 0x20);
                          fVar66 = (float)((ulong)uVar63 >> 0x20);
                          fVar68 = ((float)uVar62 + ((float)uVar80 - fVar70) * fVar67) - local_270;
                          fVar69 = (fVar65 + ((float)((ulong)uVar80 >> 0x20) - (float)uVar55) *
                                             fVar67) - fStack_26c;
                          fVar71 = ((float)uVar63 + ((float)uVar81 - fVar72) * fVar67) - fStack_268;
                          fVar79 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                          fVar83 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                          uVar91 = CONCAT44(fVar83,fVar79);
                          uVar85 = NEON_frsqrte(uVar91,4);
                          fVar106 = (float)uVar85;
                          fVar88 = (float)((ulong)uVar85 >> 0x20);
                          uVar85 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4
                                               );
                          fVar106 = fVar106 * (float)uVar85;
                          fVar88 = fVar88 * (float)((ulong)uVar85 >> 0x20);
                          uVar91 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4
                                               );
                          iVar107 = -(uint)(fVar79 <= 0.0);
                          iVar108 = -(uint)(fVar83 <= 0.0);
                          fVar106 = (float)uVar91 * fVar106;
                          fVar88 = (float)((ulong)uVar91 >> 0x20) * fVar88;
                          fVar106 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) &
                                                    ~(byte)((uint)iVar107 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                             ~(byte)((uint)iVar107 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar106 >> 8) &
                                                                      ~(byte)((uint)iVar107 >> 8),
                                                                      SUB41(fVar106,0) &
                                                                      ~(byte)iVar107)));
                          fVar88 = (float)(CONCAT17((byte)((uint)fVar88 >> 0x18) &
                                                    ~(byte)((uint)iVar108 >> 0x18),
                                                    CONCAT16((byte)((uint)fVar88 >> 0x10) &
                                                             ~(byte)((uint)iVar108 >> 0x10),
                                                             CONCAT15((byte)((uint)fVar88 >> 8) &
                                                                      ~(byte)((uint)iVar108 >> 8),
                                                                      CONCAT14(SUB41(fVar88,0) &
                                                                               ~(byte)iVar108,
                                                                               fVar106)))) >> 0x20);
                          fVar79 = (fVar79 * fVar106 - fStack_264) - fVar61;
                          fVar83 = (fVar83 * fVar88 - fStack_264) - fVar61;
                          if (fVar79 < 0.0) {
                            uVar62 = CONCAT44(fVar65 - fVar69 * fVar88 * fVar83,
                                              (float)uVar62 - fVar68 * fVar106 * fVar79);
                            uVar63 = CONCAT44(fVar66 - ((fVar66 + ((float)((ulong)uVar81 >> 0x20) -
                                                                  (float)uVar24) * fVar67) -
                                                       fStack_264) * fVar88 * fVar83,
                                              (float)uVar63 - fVar71 * fVar106 * fVar79);
                            puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                            puVar3[1] = uVar63;
                            *puVar3 = uVar62;
                            bVar41 = (byte)*puVar33;
                          }
                          bVar40 = bVar40 + 1;
                        } while (bVar40 < bVar41);
                        bVar40 = *pbVar56;
                      }
                      bVar54 = bVar54 + 1;
                      if (bVar40 <= bVar54) break;
                      lVar34 = *(long *)(param_4 + 0x20);
                    }
                  }
                }
                lVar50 = lVar50 + 1;
              } while (lVar50 != (int)uVar43);
            }
          }
        }
        else if (0 < (int)uVar43) {
          lVar50 = 0;
          pcVar49 = (char *)(lVar44 + lVar46 * 0xa0 + 0x9c);
          do {
            uVar53 = (ulong)*(ushort *)(lVar32 + lVar50 * 2);
            if (((*(char *)(local_2f0 + (uVar53 - local_2e0)) <= *pcVar49) &&
                (*(char *)(uStack_2f8 + (uVar53 - local_2e0)) == '\0')) &&
               (uVar55 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2b0) + uVar53 * 2),
               uVar55 != 0xffff)) {
              lVar39 = *(long *)(lVar31 + 0x250);
              fVar61 = *(float *)(*(long *)(lVar31 + 0x40) + uVar53 * 0x10 + 8);
              pbVar56 = (byte *)(lVar39 + uVar55 * 6 + 4);
              bVar40 = *pbVar56;
              if (bVar40 != 0) {
                lVar57 = *(long *)(param_4 + 0x20);
                bVar54 = 0;
                puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                uVar63 = puVar3[1];
                uVar62 = *puVar3;
                lVar34 = lVar57;
                while( true ) {
                  puVar37 = (ushort *)
                            (*(long *)(lVar31 + 0x240) +
                            ((ulong)((uint)*(ushort *)(lVar39 + uVar55 * 6 + 2) + (uint)bVar54) &
                            0xffff) * 6);
                  puVar3 = (undefined8 *)(lVar34 + (ulong)*puVar37 * 0x10);
                  uVar81 = puVar3[1];
                  uVar80 = *puVar3;
                  puVar3 = (undefined8 *)(lVar34 + (ulong)puVar37[1] * 0x10);
                  uVar85 = puVar3[1];
                  uVar91 = *puVar3;
                  psVar1 = (short *)(*(long *)(lVar31 + 0x210) + (ulong)puVar37[2] * 4);
                  pbVar38 = (byte *)(psVar1 + 1);
                  bVar41 = *pbVar38;
                  if (bVar41 != 0) {
                    fVar65 = (float)uVar80 - (float)uVar62;
                    fVar70 = (float)((ulong)uVar62 >> 0x20);
                    fVar66 = (float)((ulong)uVar80 >> 0x20) - fVar70;
                    fVar67 = (float)uVar81 - (float)uVar63;
                    fVar72 = (float)((ulong)uVar63 >> 0x20);
                    fVar68 = (float)((ulong)uVar81 >> 0x20) - fVar72;
                    auVar73._4_4_ = fVar66;
                    auVar73._0_4_ = fVar65;
                    auVar73._8_4_ = fVar67;
                    auVar73._12_4_ = fVar68;
                    auVar74._4_4_ = fVar66;
                    auVar74._0_4_ = fVar65;
                    auVar74._8_4_ = fVar67;
                    auVar74._12_4_ = fVar68;
                    auVar73 = NEON_ext(auVar73,auVar74,4,1);
                    fVar69 = (float)uVar91 - (float)uVar62;
                    fVar70 = (float)((ulong)uVar91 >> 0x20) - fVar70;
                    fVar71 = (float)uVar85 - (float)uVar63;
                    fVar72 = (float)((ulong)uVar85 >> 0x20) - fVar72;
                    auVar82._4_4_ = fVar70;
                    auVar82._0_4_ = fVar69;
                    auVar82._8_4_ = fVar71;
                    auVar82._12_4_ = fVar72;
                    auVar86._4_4_ = fVar70;
                    auVar86._0_4_ = fVar69;
                    auVar86._8_4_ = fVar71;
                    auVar86._12_4_ = fVar72;
                    auVar74 = NEON_ext(auVar82,auVar86,4,1);
                    auVar82 = NEON_ext(auVar73,auVar73,8,1);
                    auVar86 = NEON_ext(auVar74,auVar74,8,1);
                    uVar80 = NEON_rev64(auVar82._0_8_,4);
                    uVar81 = NEON_rev64(auVar86._0_8_,4);
                    bVar40 = 0;
                    auVar78._0_4_ = fVar65 * auVar74._0_4_ - fVar69 * auVar73._0_4_;
                    auVar78._4_4_ = fVar66 * auVar74._4_4_ - fVar70 * auVar73._4_4_;
                    auVar78._8_4_ = fVar67 * (float)uVar81 - fVar71 * (float)uVar80;
                    auVar78._12_4_ =
                         fVar68 * (float)((ulong)uVar81 >> 0x20) -
                         fVar72 * (float)((ulong)uVar80 >> 0x20);
                    auVar73 = NEON_ext(auVar78,auVar78,4,1);
                    fVar79 = auVar73._0_4_;
                    fVar83 = auVar73._4_4_;
                    do {
                      pfVar47 = (float *)(*(long *)(lVar31 + 0x200) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                      fVar106 = *pfVar47;
                      fVar89 = pfVar47[1];
                      fVar88 = (float)((ulong)uVar62 >> 0x20);
                      fVar64 = (float)((ulong)uVar63 >> 0x20);
                      fVar90 = ((float)uVar62 + fVar65 * fVar106 + fVar69 * fVar89) - local_270;
                      fVar92 = (fVar88 + fVar66 * fVar106 + fVar70 * fVar89) - fStack_26c;
                      fVar94 = ((float)uVar63 + fVar67 * fVar106 + fVar71 * fVar89) - fStack_268;
                      fVar84 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                      fVar87 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                      uVar80 = CONCAT44(fVar87,fVar84);
                      uVar81 = NEON_frsqrte(uVar80,4);
                      fVar109 = (float)uVar81;
                      fVar111 = (float)((ulong)uVar81 >> 0x20);
                      uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4);
                      fVar109 = fVar109 * (float)uVar81;
                      fVar111 = fVar111 * (float)((ulong)uVar81 >> 0x20);
                      uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4);
                      iVar107 = -(uint)(fVar84 <= 0.0);
                      iVar108 = -(uint)(fVar87 <= 0.0);
                      fVar109 = (float)uVar80 * fVar109;
                      fVar111 = (float)((ulong)uVar80 >> 0x20) * fVar111;
                      bVar95 = SUB41(fVar109,0) & ~(byte)iVar107;
                      bVar96 = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar107 >> 8);
                      bVar97 = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar107 >> 0x10);
                      bVar98 = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18);
                      bVar99 = SUB41(fVar111,0) & ~(byte)iVar108;
                      bVar100 = (byte)((uint)fVar111 >> 8) & ~(byte)((uint)iVar108 >> 8);
                      bVar102 = (byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
                      bVar104 = (byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
                      fVar84 = (fVar84 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,
                                                  bVar95))) - fStack_264) - fVar61;
                      fVar87 = (fVar87 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100,
                                                  bVar99))) - fStack_264) - fVar61;
                      if (fVar84 < 0.0) {
                        fVar109 = (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,bVar95)));
                        fVar111 = auVar78._0_4_ * auVar78._0_4_ + fVar79 * fVar79 + fVar83 * fVar83;
                        fVar93 = auVar78._0_4_ * auVar78._0_4_ + fVar79 * fVar79 + fVar83 * fVar83;
                        uVar80 = CONCAT44(fVar93,fVar111);
                        uVar81 = NEON_frsqrte(uVar80,4);
                        fVar110 = (float)uVar81;
                        fVar112 = (float)((ulong)uVar81 >> 0x20);
                        uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110),4
                                             );
                        fVar110 = fVar110 * (float)uVar81;
                        fVar112 = fVar112 * (float)((ulong)uVar81 >> 0x20);
                        iVar107 = -(uint)(fVar111 <= 0.0);
                        iVar108 = -(uint)(fVar93 <= 0.0);
                        uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110),4
                                             );
                        fVar110 = (float)uVar80 * fVar110;
                        fVar112 = (float)((ulong)uVar80 >> 0x20) * fVar112;
                        fVar111 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                  ~(byte)((uint)iVar107 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                           ~(byte)((uint)iVar107 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar110 >> 8) &
                                                                    ~(byte)((uint)iVar107 >> 8),
                                                                    SUB41(fVar110,0) &
                                                                    ~(byte)iVar107)));
                        fVar93 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                                  ~(byte)((uint)iVar108 >> 0x18),
                                                  CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                           ~(byte)((uint)iVar108 >> 0x10),
                                                           CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                    ~(byte)((uint)iVar108 >> 8),
                                                                    CONCAT14(SUB41(fVar112,0) &
                                                                             ~(byte)iVar108,fVar111)
                                                                   ))) >> 0x20);
                        fVar110 = fVar79 * fVar111;
                        fVar112 = fVar83 * fVar93;
                        fVar111 = auVar78._0_4_ * fVar111;
                        fVar93 = auVar78._4_4_ * fVar93;
                        fVar90 = fVar90 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,
                                                  bVar95))) * fVar110;
                        fVar92 = fVar92 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100,
                                                  bVar99))) * fVar112;
                        uVar101 = (undefined1)((uint)fVar92 >> 8);
                        uVar103 = (undefined1)((uint)fVar92 >> 0x10);
                        uVar105 = (undefined1)((uint)fVar92 >> 0x18);
                        fVar94 = fVar94 * fVar109 * fVar111;
                        fVar106 = ((fVar64 + fVar68 * fVar106 + fVar72 * fVar89) - fStack_264) *
                                  (float)(CONCAT17(bVar104,CONCAT16(bVar102,CONCAT15(bVar100,
                                                  CONCAT14(bVar99,fVar109)))) >> 0x20) * fVar93;
                        auVar22[4] = SUB41(fVar92,0);
                        auVar22._0_4_ = fVar90;
                        auVar22[5] = uVar101;
                        auVar22[6] = uVar103;
                        auVar22[7] = uVar105;
                        auVar22._8_4_ = fVar94;
                        auVar22._12_4_ = fVar106;
                        auVar23[4] = SUB41(fVar92,0);
                        auVar23._0_4_ = fVar90;
                        auVar23[5] = uVar101;
                        auVar23[6] = uVar103;
                        auVar23[7] = uVar105;
                        auVar23._8_4_ = fVar94;
                        auVar23._12_4_ = fVar106;
                        auVar73 = NEON_ext(auVar22,auVar23,8,1);
                        if (fVar90 + fVar92 + auVar73._0_4_ < 0.0) {
                          fVar110 = -fVar110;
                          fVar112 = -fVar112;
                          fVar111 = -fVar111;
                        }
                        uVar62 = CONCAT44(fVar88 - fVar87 * fVar112,(float)uVar62 - fVar84 * fVar110
                                         );
                        uVar63 = CONCAT44(fVar64 - fVar87 * fVar93,(float)uVar63 - fVar84 * fVar111)
                        ;
                        puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                        puVar3[1] = uVar63;
                        *puVar3 = uVar62;
                        bVar41 = *pbVar38;
                      }
                      bVar40 = bVar40 + 1;
                    } while (bVar40 < bVar41);
                    bVar40 = *pbVar56;
                  }
                  bVar54 = bVar54 + 1;
                  if (bVar40 <= bVar54) break;
                  lVar34 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar50 = lVar50 + 1;
          } while (lVar50 != (int)uVar43);
          if (*(int *)(lVar31 + 0x238) != 0) {
            lVar50 = 0;
            do {
              uVar53 = (ulong)*(ushort *)(lVar32 + lVar50 * 2);
              if (((*(char *)(local_2f0 + (uVar53 - local_2e0)) <= *pcVar49) &&
                  (*(char *)(uStack_2f8 + (uVar53 - local_2e0)) == '\0')) &&
                 (uVar55 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2a0) + uVar53 * 2),
                 uVar55 != 0xffff)) {
                lVar39 = *(long *)(lVar31 + 0x230);
                fVar61 = *(float *)(*(long *)(lVar31 + 0x40) + uVar53 * 0x10 + 8);
                pbVar56 = (byte *)(lVar39 + uVar55 * 6 + 4);
                bVar40 = *pbVar56;
                if (bVar40 != 0) {
                  lVar57 = *(long *)(param_4 + 0x20);
                  bVar54 = 0;
                  puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                  uVar63 = puVar3[1];
                  uVar62 = *puVar3;
                  lVar34 = lVar57;
                  while( true ) {
                    puVar37 = (ushort *)
                              (*(long *)(lVar31 + 0x220) +
                              (ulong)(ushort)(*(short *)(lVar39 + uVar55 * 6 + 2) + (ushort)bVar54)
                              * 4);
                    puVar3 = (undefined8 *)(lVar34 + (ulong)*puVar37 * 0x10);
                    uVar81 = puVar3[1];
                    uVar80 = *puVar3;
                    puVar37 = (ushort *)(*(long *)(lVar31 + 0x1f0) + (ulong)puVar37[1] * 4);
                    puVar33 = puVar37 + 1;
                    bVar41 = (byte)*puVar33;
                    if (bVar41 != 0) {
                      fVar70 = (float)uVar62;
                      uVar24 = (ulong)uVar62 >> 0x20;
                      fVar72 = (float)uVar63;
                      uVar25 = (ulong)uVar63 >> 0x20;
                      bVar40 = 0;
                      do {
                        fVar67 = *(float *)(*(long *)(lVar31 + 0x1e0) +
                                           ((ulong)((uint)*puVar37 + (uint)bVar40) & 0xffff) * 4);
                        fVar65 = (float)((ulong)uVar62 >> 0x20);
                        fVar66 = (float)((ulong)uVar63 >> 0x20);
                        fVar68 = ((float)uVar62 + ((float)uVar80 - fVar70) * fVar67) - local_270;
                        fVar69 = (fVar65 + ((float)((ulong)uVar80 >> 0x20) - (float)uVar24) * fVar67
                                 ) - fStack_26c;
                        fVar71 = ((float)uVar63 + ((float)uVar81 - fVar72) * fVar67) - fStack_268;
                        fVar79 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                        fVar83 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                        uVar91 = CONCAT44(fVar83,fVar79);
                        uVar85 = NEON_frsqrte(uVar91,4);
                        fVar106 = (float)uVar85;
                        fVar88 = (float)((ulong)uVar85 >> 0x20);
                        uVar85 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4);
                        fVar106 = fVar106 * (float)uVar85;
                        fVar88 = fVar88 * (float)((ulong)uVar85 >> 0x20);
                        uVar91 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4);
                        iVar107 = -(uint)(fVar79 <= 0.0);
                        iVar108 = -(uint)(fVar83 <= 0.0);
                        fVar106 = (float)uVar91 * fVar106;
                        fVar88 = (float)((ulong)uVar91 >> 0x20) * fVar88;
                        fVar106 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) &
                                                  ~(byte)((uint)iVar107 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                           ~(byte)((uint)iVar107 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar106 >> 8) &
                                                                    ~(byte)((uint)iVar107 >> 8),
                                                                    SUB41(fVar106,0) &
                                                                    ~(byte)iVar107)));
                        fVar88 = (float)(CONCAT17((byte)((uint)fVar88 >> 0x18) &
                                                  ~(byte)((uint)iVar108 >> 0x18),
                                                  CONCAT16((byte)((uint)fVar88 >> 0x10) &
                                                           ~(byte)((uint)iVar108 >> 0x10),
                                                           CONCAT15((byte)((uint)fVar88 >> 8) &
                                                                    ~(byte)((uint)iVar108 >> 8),
                                                                    CONCAT14(SUB41(fVar88,0) &
                                                                             ~(byte)iVar108,fVar106)
                                                                   ))) >> 0x20);
                        fVar79 = (fVar79 * fVar106 - fStack_264) - fVar61;
                        fVar83 = (fVar83 * fVar88 - fStack_264) - fVar61;
                        if (fVar79 < 0.0) {
                          uVar62 = CONCAT44(fVar65 - fVar69 * fVar88 * fVar83,
                                            (float)uVar62 - fVar68 * fVar106 * fVar79);
                          uVar63 = CONCAT44(fVar66 - ((fVar66 + ((float)((ulong)uVar81 >> 0x20) -
                                                                (float)uVar25) * fVar67) -
                                                     fStack_264) * fVar88 * fVar83,
                                            (float)uVar63 - fVar71 * fVar106 * fVar79);
                          puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                          puVar3[1] = uVar63;
                          *puVar3 = uVar62;
                          bVar41 = (byte)*puVar33;
                        }
                        bVar40 = bVar40 + 1;
                      } while (bVar40 < bVar41);
                      bVar40 = *pbVar56;
                    }
                    bVar54 = bVar54 + 1;
                    if (bVar40 <= bVar54) break;
                    lVar34 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar50 = lVar50 + 1;
            } while (lVar50 != (int)uVar43);
          }
        }
        lVar50 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar50 != 0) {
          lVar31 = lVar50;
        }
        if (((*(ulong *)(lVar31 + 0x10) < uVar36) || (*(long *)(lVar31 + 0x18) != lVar48 + uVar36))
           || (*(long *)(lVar31 + 0x28) == lVar48)) {
          FUN_00439980(lVar31,lVar48,uVar36);
        }
        else {
          *(long *)(lVar31 + 0x18) = lVar48;
        }
        lVar48 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar48 != 0) {
          lVar31 = lVar48;
        }
        if (((*(ulong *)(lVar31 + 0x10) < uVar36) || (*(long *)(lVar31 + 0x18) != lVar35 + uVar36))
           || (*(long *)(lVar31 + 0x28) == lVar35)) {
          FUN_00439980(lVar31,lVar35,uVar36);
        }
        else {
          *(long *)(lVar31 + 0x18) = lVar35;
        }
      }
    }
    uVar2 = local_2b8;
    local_2c8 = (ulong)local_2c8._4_4_ << 0x20;
    lVar35 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar31 = DAT_04c6f058;
    if (lVar35 != 0) {
      lVar31 = lVar35;
    }
    uVar36 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    uVar2 = uVar59;
    if (((*(ulong *)(lVar31 + 0x10) < uVar36) || (*(long *)(lVar31 + 0x18) != uVar36 + lVar32)) ||
       (*(long *)(lVar31 + 0x28) == lVar32)) {
      FUN_00439980(lVar31,lVar32);
    }
    else {
      *(long *)(lVar31 + 0x18) = lVar32;
    }
  }
  if (uVar60 == 0) goto LAB_005e7150;
  if (param_7 == 0) {
    local_290 = 0;
    local_288 = 0x8000000000000000;
    local_278 = uVar60;
    lVar46 = FUN_0043c4e0(DAT_04c6f050);
    lVar44 = DAT_04c6f058;
    if (lVar46 != 0) {
      lVar44 = lVar46;
    }
    uVar36 = (ulong)(int)(uVar60 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar44 + 0x10) < uVar36) {
LAB_005e5960:
      lVar32 = FUN_00439510(lVar44,uVar36);
    }
    else {
      lVar32 = *(long *)(lVar44 + 0x18);
      if (*(ulong *)(lVar44 + 0x20) < lVar32 + uVar36) goto LAB_005e5960;
      *(ulong *)(lVar44 + 0x18) = lVar32 + uVar36;
    }
    local_288 = CONCAT44(uVar60,(undefined4)local_288) | 0x8000000000000000;
    local_300 = 0;
    uStack_2f8 = 0x8000000000000000;
    local_2e8 = CONCAT44(local_2e8._4_4_,uVar60);
    local_290 = lVar32;
    local_280 = lVar32;
    lVar46 = FUN_0043c4e0(DAT_04c6f050);
    lVar44 = DAT_04c6f058;
    if (lVar46 != 0) {
      lVar44 = lVar46;
    }
    if (*(ulong *)(lVar44 + 0x10) < uVar36) {
LAB_005e6474:
      lVar46 = FUN_00439510(lVar44,uVar36);
    }
    else {
      lVar46 = *(long *)(lVar44 + 0x18);
      if (*(ulong *)(lVar44 + 0x20) < lVar46 + uVar36) goto LAB_005e6474;
      *(ulong *)(lVar44 + 0x18) = lVar46 + uVar36;
    }
    local_288 = CONCAT44(local_288._4_4_,uVar60);
    uStack_2f8 = CONCAT44(uVar60,uVar60) | 0x8000000000000000;
    if (0 < (int)uVar60) {
      uVar36 = 0;
      do {
        uVar53 = uVar36 & 0xffff;
        uVar2 = (int)uVar36 + 1;
        uVar36 = (ulong)uVar2;
        lVar31 = uVar53 * 4;
        lVar44 = *(long *)(lVar52 + 0x40) + (ulong)*(ushort *)(lVar30 + uVar53 * 2) * 0x10;
        *(undefined4 *)(lVar32 + lVar31) = *(undefined4 *)(lVar44 + 8);
        *(undefined4 *)(lVar46 + lVar31) = *(undefined4 *)(lVar44 + 0xc);
      } while ((int)(uVar2 & 0xffff) < (int)uVar60);
    }
    local_300 = lVar46;
    local_2f0 = lVar46;
    FUN_00623290(param_1,lVar45,&local_2b0,&local_290,&local_300,param_4);
    iVar107 = (int)local_2e8;
    uStack_2f8 = uStack_2f8 & 0xffffffff00000000;
    lVar52 = FUN_0043c4e0(DAT_04c6f050);
    lVar44 = DAT_04c6f058;
    if (lVar52 != 0) {
      lVar44 = lVar52;
    }
    uVar36 = (ulong)(int)(iVar107 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar44 + 0x10) < uVar36) || (*(long *)(lVar44 + 0x18) != lVar46 + uVar36)) ||
       (*(long *)(lVar44 + 0x28) == lVar46)) {
      FUN_00439980(lVar44,lVar46);
    }
    else {
      *(long *)(lVar44 + 0x18) = lVar46;
    }
    uVar2 = local_278;
    local_288 = local_288 & 0xffffffff00000000;
    lVar52 = FUN_0043c4e0(DAT_04c6f050);
    lVar44 = DAT_04c6f058;
    if (lVar52 != 0) {
      lVar44 = lVar52;
    }
    uVar36 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
    if (((uVar36 <= *(ulong *)(lVar44 + 0x10)) && (*(long *)(lVar44 + 0x18) == lVar32 + uVar36)) &&
       (*(long *)(lVar44 + 0x28) != lVar32)) {
      *(long *)(lVar44 + 0x18) = lVar32;
      goto LAB_005e7150;
    }
  }
  else {
    lVar32 = FUN_0043c4e0(DAT_04c6f050);
    lVar31 = DAT_04c6f058;
    if (lVar32 != 0) {
      lVar31 = lVar32;
    }
    uVar36 = (ulong)(int)(uVar60 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar31 + 0x10) < uVar36) {
LAB_005e58f4:
      lVar32 = FUN_00439510(lVar31,uVar36);
    }
    else {
      lVar32 = *(long *)(lVar31 + 0x18);
      if (*(ulong *)(lVar31 + 0x20) < lVar32 + uVar36) goto LAB_005e58f4;
      *(ulong *)(lVar31 + 0x18) = lVar32 + uVar36;
    }
    lVar35 = FUN_0043c4e0(DAT_04c6f050);
    lVar31 = DAT_04c6f058;
    if (lVar35 != 0) {
      lVar31 = lVar35;
    }
    if (*(ulong *)(lVar31 + 0x10) < uVar36) {
LAB_005e59a4:
      lVar35 = FUN_00439510(lVar31,uVar36);
    }
    else {
      lVar35 = *(long *)(lVar31 + 0x18);
      if (*(ulong *)(lVar31 + 0x20) < lVar35 + uVar36) goto LAB_005e59a4;
      *(ulong *)(lVar31 + 0x18) = lVar35 + uVar36;
    }
    if (0 < (int)uVar60) {
      uVar53 = 0;
      do {
        uVar55 = uVar53 & 0xffff;
        uVar43 = (int)uVar53 + 1;
        uVar53 = (ulong)uVar43;
        lVar48 = uVar55 * 4;
        lVar31 = *(long *)(lVar52 + 0x40) + (ulong)*(ushort *)(lVar30 + uVar55 * 2) * 0x10;
        *(undefined4 *)(lVar32 + lVar48) = *(undefined4 *)(lVar31 + 8);
        *(undefined4 *)(lVar35 + lVar48) = *(undefined4 *)(lVar31 + 0xc);
      } while ((int)(uVar43 & 0xffff) < (int)uVar60);
    }
    lVar44 = lVar44 + lVar46 * 0xa0;
    lVar52 = *(long *)(lVar45 + 0x88);
    auVar73 = *(undefined1 (*) [16])(lVar44 + 0x50);
    fVar61 = (float)*(undefined8 *)(lVar52 + 0x20);
    fVar70 = (float)((ulong)*(undefined8 *)(lVar52 + 0x20) >> 0x20);
    fVar72 = (float)*(undefined8 *)(lVar52 + 0x28);
    local_300 = CONCAT44(auVar73._4_4_ +
                         (float)((ulong)*(undefined8 *)(lVar44 + 0x40) >> 0x20) * fVar72 +
                         (float)((ulong)*(undefined8 *)(lVar44 + 0x20) >> 0x20) * fVar61 +
                         (float)((ulong)*(undefined8 *)(lVar44 + 0x30) >> 0x20) * fVar70,
                         auVar73._0_4_ +
                         (float)*(undefined8 *)(lVar44 + 0x40) * fVar72 +
                         (float)*(undefined8 *)(lVar44 + 0x20) * fVar61 +
                         (float)*(undefined8 *)(lVar44 + 0x30) * fVar70);
    uStack_2f8 = CONCAT44(*(undefined4 *)(lVar52 + 0x2c),
                          auVar73._8_4_ +
                          (float)*(undefined8 *)(lVar44 + 0x48) * fVar72 +
                          (float)*(undefined8 *)(lVar44 + 0x28) * fVar61 +
                          (float)*(undefined8 *)(lVar44 + 0x38) * fVar70);
    FUN_0053da70(&local_290,&local_300);
    lVar44 = *(long *)(param_4 + 0x18);
    if (param_7 == 2) {
      if (0 < (int)uVar2) {
        lVar52 = 0;
        do {
          uVar53 = (ulong)*(ushort *)(lVar30 + lVar52 * 2);
          uVar55 = (ulong)*(ushort *)(*(long *)(lVar44 + 0x2d0) + uVar53 * 2);
          if (uVar55 != 0xffff) {
            fVar61 = *(float *)(*(long *)(lVar44 + 0x40) + uVar53 * 0x10 + 8);
            lVar45 = *(long *)(lVar44 + 0x290) + uVar55 * 8;
            pbVar56 = (byte *)(lVar45 + 6);
            bVar40 = *pbVar56;
            if (bVar40 != 0) {
              lVar31 = *(long *)(param_4 + 0x20);
              puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
              uVar63 = puVar3[1];
              uVar62 = *puVar3;
              bVar54 = 0;
              lVar46 = lVar31;
              while( true ) {
                puVar37 = (ushort *)
                          (*(long *)(lVar44 + 0x280) +
                          ((ulong)((uint)*(ushort *)(lVar45 + 2) + (uint)bVar54) & 0xffff) * 6);
                puVar3 = (undefined8 *)(lVar46 + (ulong)*puVar37 * 0x10);
                uVar81 = puVar3[1];
                uVar80 = *puVar3;
                puVar3 = (undefined8 *)(lVar46 + (ulong)puVar37[1] * 0x10);
                uVar85 = puVar3[1];
                uVar91 = *puVar3;
                psVar1 = (short *)(*(long *)(lVar44 + 0x210) + (ulong)puVar37[2] * 4);
                pbVar38 = (byte *)(psVar1 + 1);
                bVar41 = *pbVar38;
                if (bVar41 != 0) {
                  fVar65 = (float)uVar80 - (float)uVar62;
                  fVar70 = (float)((ulong)uVar62 >> 0x20);
                  fVar66 = (float)((ulong)uVar80 >> 0x20) - fVar70;
                  fVar67 = (float)uVar81 - (float)uVar63;
                  fVar72 = (float)((ulong)uVar63 >> 0x20);
                  fVar68 = (float)((ulong)uVar81 >> 0x20) - fVar72;
                  auVar4._4_4_ = fVar66;
                  auVar4._0_4_ = fVar65;
                  auVar4._8_4_ = fVar67;
                  auVar4._12_4_ = fVar68;
                  auVar5._4_4_ = fVar66;
                  auVar5._0_4_ = fVar65;
                  auVar5._8_4_ = fVar67;
                  auVar5._12_4_ = fVar68;
                  auVar73 = NEON_ext(auVar4,auVar5,4,1);
                  fVar69 = (float)uVar91 - (float)uVar62;
                  fVar70 = (float)((ulong)uVar91 >> 0x20) - fVar70;
                  fVar71 = (float)uVar85 - (float)uVar63;
                  fVar72 = (float)((ulong)uVar85 >> 0x20) - fVar72;
                  auVar10._4_4_ = fVar70;
                  auVar10._0_4_ = fVar69;
                  auVar10._8_4_ = fVar71;
                  auVar10._12_4_ = fVar72;
                  auVar11._4_4_ = fVar70;
                  auVar11._0_4_ = fVar69;
                  auVar11._8_4_ = fVar71;
                  auVar11._12_4_ = fVar72;
                  auVar74 = NEON_ext(auVar10,auVar11,4,1);
                  auVar82 = NEON_ext(auVar73,auVar73,8,1);
                  auVar86 = NEON_ext(auVar74,auVar74,8,1);
                  uVar80 = NEON_rev64(auVar82._0_8_,4);
                  uVar81 = NEON_rev64(auVar86._0_8_,4);
                  bVar40 = 0;
                  auVar75._0_4_ = fVar65 * auVar74._0_4_ - fVar69 * auVar73._0_4_;
                  auVar75._4_4_ = fVar66 * auVar74._4_4_ - fVar70 * auVar73._4_4_;
                  auVar75._8_4_ = fVar67 * (float)uVar81 - fVar71 * (float)uVar80;
                  auVar75._12_4_ =
                       fVar68 * (float)((ulong)uVar81 >> 0x20) -
                       fVar72 * (float)((ulong)uVar80 >> 0x20);
                  auVar73 = NEON_ext(auVar75,auVar75,4,1);
                  fVar79 = auVar73._0_4_;
                  fVar83 = auVar73._4_4_;
                  do {
                    pfVar47 = (float *)(*(long *)(lVar44 + 0x200) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                    fVar106 = *pfVar47;
                    fVar89 = pfVar47[1];
                    fVar88 = (float)((ulong)uVar62 >> 0x20);
                    fVar64 = (float)((ulong)uVar63 >> 0x20);
                    fVar90 = ((float)uVar62 + fVar65 * fVar106 + fVar69 * fVar89) - local_270;
                    fVar92 = (fVar88 + fVar66 * fVar106 + fVar70 * fVar89) - fStack_26c;
                    fVar94 = ((float)uVar63 + fVar67 * fVar106 + fVar71 * fVar89) - fStack_268;
                    fVar84 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                    fVar87 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                    uVar80 = CONCAT44(fVar87,fVar84);
                    uVar81 = NEON_frsqrte(uVar80,4);
                    fVar109 = (float)uVar81;
                    fVar111 = (float)((ulong)uVar81 >> 0x20);
                    uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4);
                    fVar109 = fVar109 * (float)uVar81;
                    fVar111 = fVar111 * (float)((ulong)uVar81 >> 0x20);
                    uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4);
                    iVar107 = -(uint)(fVar84 <= 0.0);
                    iVar108 = -(uint)(fVar87 <= 0.0);
                    fVar109 = (float)uVar80 * fVar109;
                    fVar111 = (float)((ulong)uVar80 >> 0x20) * fVar111;
                    bVar95 = SUB41(fVar109,0) & ~(byte)iVar107;
                    bVar96 = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar107 >> 8);
                    bVar97 = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar107 >> 0x10);
                    bVar98 = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18);
                    bVar99 = SUB41(fVar111,0) & ~(byte)iVar108;
                    bVar100 = (byte)((uint)fVar111 >> 8) & ~(byte)((uint)iVar108 >> 8);
                    bVar102 = (byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
                    bVar104 = (byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
                    fVar84 = (fVar84 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,bVar95
                                                                                      ))) -
                             fStack_264) - fVar61;
                    fVar87 = (fVar87 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100,
                                                  bVar99))) - fStack_264) - fVar61;
                    if (fVar84 < 0.0) {
                      fVar109 = (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,bVar95)));
                      fVar111 = auVar75._0_4_ * auVar75._0_4_ + fVar79 * fVar79 + fVar83 * fVar83;
                      fVar93 = auVar75._0_4_ * auVar75._0_4_ + fVar79 * fVar79 + fVar83 * fVar83;
                      uVar80 = CONCAT44(fVar93,fVar111);
                      uVar81 = NEON_frsqrte(uVar80,4);
                      fVar110 = (float)uVar81;
                      fVar112 = (float)((ulong)uVar81 >> 0x20);
                      uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110),4);
                      fVar110 = fVar110 * (float)uVar81;
                      fVar112 = fVar112 * (float)((ulong)uVar81 >> 0x20);
                      iVar107 = -(uint)(fVar111 <= 0.0);
                      iVar108 = -(uint)(fVar93 <= 0.0);
                      uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110),4);
                      fVar110 = (float)uVar80 * fVar110;
                      fVar112 = (float)((ulong)uVar80 >> 0x20) * fVar112;
                      fVar111 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                ~(byte)((uint)iVar107 >> 0x18),
                                                CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                         ~(byte)((uint)iVar107 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar110 >> 8) &
                                                                  ~(byte)((uint)iVar107 >> 8),
                                                                  SUB41(fVar110,0) & ~(byte)iVar107)
                                                        ));
                      fVar93 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                                ~(byte)((uint)iVar108 >> 0x18),
                                                CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                         ~(byte)((uint)iVar108 >> 0x10),
                                                         CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                  ~(byte)((uint)iVar108 >> 8),
                                                                  CONCAT14(SUB41(fVar112,0) &
                                                                           ~(byte)iVar108,fVar111)))
                                               ) >> 0x20);
                      fVar110 = fVar79 * fVar111;
                      fVar112 = fVar83 * fVar93;
                      fVar111 = auVar75._0_4_ * fVar111;
                      fVar93 = auVar75._4_4_ * fVar93;
                      fVar90 = fVar90 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,
                                                  bVar95))) * fVar110;
                      fVar92 = fVar92 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100,
                                                  bVar99))) * fVar112;
                      uVar101 = (undefined1)((uint)fVar92 >> 8);
                      uVar103 = (undefined1)((uint)fVar92 >> 0x10);
                      uVar105 = (undefined1)((uint)fVar92 >> 0x18);
                      fVar94 = fVar94 * fVar109 * fVar111;
                      fVar106 = ((fVar64 + fVar68 * fVar106 + fVar72 * fVar89) - fStack_264) *
                                (float)(CONCAT17(bVar104,CONCAT16(bVar102,CONCAT15(bVar100,CONCAT14(
                                                  bVar99,fVar109)))) >> 0x20) * fVar93;
                      auVar16[4] = SUB41(fVar92,0);
                      auVar16._0_4_ = fVar90;
                      auVar16[5] = uVar101;
                      auVar16[6] = uVar103;
                      auVar16[7] = uVar105;
                      auVar16._8_4_ = fVar94;
                      auVar16._12_4_ = fVar106;
                      auVar17[4] = SUB41(fVar92,0);
                      auVar17._0_4_ = fVar90;
                      auVar17[5] = uVar101;
                      auVar17[6] = uVar103;
                      auVar17[7] = uVar105;
                      auVar17._8_4_ = fVar94;
                      auVar17._12_4_ = fVar106;
                      auVar73 = NEON_ext(auVar16,auVar17,8,1);
                      if (fVar90 + fVar92 + auVar73._0_4_ < 0.0) {
                        fVar110 = -fVar110;
                        fVar112 = -fVar112;
                        fVar111 = -fVar111;
                      }
                      uVar62 = CONCAT44(fVar88 - fVar87 * fVar112,(float)uVar62 - fVar84 * fVar110);
                      uVar63 = CONCAT44(fVar64 - fVar87 * fVar93,(float)uVar63 - fVar84 * fVar111);
                      puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
                      puVar3[1] = uVar63;
                      *puVar3 = uVar62;
                      bVar41 = *pbVar38;
                    }
                    bVar40 = bVar40 + 1;
                  } while (bVar40 < bVar41);
                  bVar40 = *pbVar56;
                }
                bVar54 = bVar54 + 1;
                if (bVar40 <= bVar54) break;
                lVar46 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 != (int)uVar2);
        if (*(int *)(lVar44 + 0x278) != 0) {
          lVar52 = 0;
          do {
            uVar53 = (ulong)*(ushort *)(lVar30 + lVar52 * 2);
            uVar55 = (ulong)*(ushort *)(*(long *)(lVar44 + 0x2c0) + uVar53 * 2);
            if (uVar55 != 0xffff) {
              fVar61 = *(float *)(*(long *)(lVar44 + 0x40) + uVar53 * 0x10 + 8);
              lVar45 = *(long *)(lVar44 + 0x270) + uVar55 * 8;
              pbVar56 = (byte *)(lVar45 + 6);
              bVar40 = *pbVar56;
              if (bVar40 != 0) {
                lVar31 = *(long *)(param_4 + 0x20);
                puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
                uVar63 = puVar3[1];
                uVar62 = *puVar3;
                bVar54 = 0;
                lVar46 = lVar31;
                while( true ) {
                  puVar37 = (ushort *)
                            (*(long *)(lVar44 + 0x260) +
                            (ulong)(ushort)(*(short *)(lVar45 + 2) + (ushort)bVar54) * 4);
                  puVar3 = (undefined8 *)(lVar46 + (ulong)*puVar37 * 0x10);
                  uVar81 = puVar3[1];
                  uVar80 = *puVar3;
                  puVar37 = (ushort *)(*(long *)(lVar44 + 0x1f0) + (ulong)puVar37[1] * 4);
                  puVar33 = puVar37 + 1;
                  bVar41 = (byte)*puVar33;
                  if (bVar41 != 0) {
                    fVar70 = (float)uVar62;
                    uVar55 = (ulong)uVar62 >> 0x20;
                    fVar72 = (float)uVar63;
                    uVar24 = (ulong)uVar63 >> 0x20;
                    bVar40 = 0;
                    do {
                      fVar67 = *(float *)(*(long *)(lVar44 + 0x1e0) +
                                         ((ulong)((uint)*puVar37 + (uint)bVar40) & 0xffff) * 4);
                      fVar65 = (float)((ulong)uVar62 >> 0x20);
                      fVar66 = (float)((ulong)uVar63 >> 0x20);
                      fVar68 = ((float)uVar62 + ((float)uVar80 - fVar70) * fVar67) - local_270;
                      fVar69 = (fVar65 + ((float)((ulong)uVar80 >> 0x20) - (float)uVar55) * fVar67)
                               - fStack_26c;
                      fVar71 = ((float)uVar63 + ((float)uVar81 - fVar72) * fVar67) - fStack_268;
                      fVar79 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                      fVar83 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                      uVar91 = CONCAT44(fVar83,fVar79);
                      uVar85 = NEON_frsqrte(uVar91,4);
                      fVar106 = (float)uVar85;
                      fVar88 = (float)((ulong)uVar85 >> 0x20);
                      uVar85 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4);
                      fVar106 = fVar106 * (float)uVar85;
                      fVar88 = fVar88 * (float)((ulong)uVar85 >> 0x20);
                      uVar91 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4);
                      iVar107 = -(uint)(fVar79 <= 0.0);
                      iVar108 = -(uint)(fVar83 <= 0.0);
                      fVar106 = (float)uVar91 * fVar106;
                      fVar88 = (float)((ulong)uVar91 >> 0x20) * fVar88;
                      fVar106 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) &
                                                ~(byte)((uint)iVar107 >> 0x18),
                                                CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                         ~(byte)((uint)iVar107 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar106 >> 8) &
                                                                  ~(byte)((uint)iVar107 >> 8),
                                                                  SUB41(fVar106,0) & ~(byte)iVar107)
                                                        ));
                      fVar88 = (float)(CONCAT17((byte)((uint)fVar88 >> 0x18) &
                                                ~(byte)((uint)iVar108 >> 0x18),
                                                CONCAT16((byte)((uint)fVar88 >> 0x10) &
                                                         ~(byte)((uint)iVar108 >> 0x10),
                                                         CONCAT15((byte)((uint)fVar88 >> 8) &
                                                                  ~(byte)((uint)iVar108 >> 8),
                                                                  CONCAT14(SUB41(fVar88,0) &
                                                                           ~(byte)iVar108,fVar106)))
                                               ) >> 0x20);
                      fVar79 = (fVar79 * fVar106 - fStack_264) - fVar61;
                      fVar83 = (fVar83 * fVar88 - fStack_264) - fVar61;
                      if (fVar79 < 0.0) {
                        uVar62 = CONCAT44(fVar65 - fVar69 * fVar88 * fVar83,
                                          (float)uVar62 - fVar68 * fVar106 * fVar79);
                        uVar63 = CONCAT44(fVar66 - ((fVar66 + ((float)((ulong)uVar81 >> 0x20) -
                                                              (float)uVar24) * fVar67) - fStack_264)
                                                   * fVar88 * fVar83,
                                          (float)uVar63 - fVar71 * fVar106 * fVar79);
                        puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
                        puVar3[1] = uVar63;
                        *puVar3 = uVar62;
                        bVar41 = (byte)*puVar33;
                      }
                      bVar40 = bVar40 + 1;
                    } while (bVar40 < bVar41);
                    bVar40 = *pbVar56;
                  }
                  bVar54 = bVar54 + 1;
                  if (bVar40 <= bVar54) break;
                  lVar46 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar52 = lVar52 + 1;
          } while (lVar52 != (int)uVar2);
        }
      }
    }
    else if (0 < (int)uVar2) {
      lVar52 = 0;
      do {
        uVar53 = (ulong)*(ushort *)(lVar30 + lVar52 * 2);
        uVar55 = (ulong)*(ushort *)(*(long *)(lVar44 + 0x2b0) + uVar53 * 2);
        if (uVar55 != 0xffff) {
          lVar45 = *(long *)(lVar44 + 0x250);
          fVar61 = *(float *)(*(long *)(lVar44 + 0x40) + uVar53 * 0x10 + 8);
          pbVar56 = (byte *)(lVar45 + uVar55 * 6 + 4);
          bVar40 = *pbVar56;
          if (bVar40 != 0) {
            lVar31 = *(long *)(param_4 + 0x20);
            bVar54 = 0;
            puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
            uVar63 = puVar3[1];
            uVar62 = *puVar3;
            lVar46 = lVar31;
            while( true ) {
              puVar37 = (ushort *)
                        (*(long *)(lVar44 + 0x240) +
                        ((ulong)((uint)*(ushort *)(lVar45 + uVar55 * 6 + 2) + (uint)bVar54) & 0xffff
                        ) * 6);
              puVar3 = (undefined8 *)(lVar46 + (ulong)*puVar37 * 0x10);
              uVar81 = puVar3[1];
              uVar80 = *puVar3;
              puVar3 = (undefined8 *)(lVar46 + (ulong)puVar37[1] * 0x10);
              uVar85 = puVar3[1];
              uVar91 = *puVar3;
              psVar1 = (short *)(*(long *)(lVar44 + 0x210) + (ulong)puVar37[2] * 4);
              pbVar38 = (byte *)(psVar1 + 1);
              bVar41 = *pbVar38;
              if (bVar41 != 0) {
                fVar65 = (float)uVar80 - (float)uVar62;
                fVar70 = (float)((ulong)uVar62 >> 0x20);
                fVar66 = (float)((ulong)uVar80 >> 0x20) - fVar70;
                fVar67 = (float)uVar81 - (float)uVar63;
                fVar72 = (float)((ulong)uVar63 >> 0x20);
                fVar68 = (float)((ulong)uVar81 >> 0x20) - fVar72;
                auVar6._4_4_ = fVar66;
                auVar6._0_4_ = fVar65;
                auVar6._8_4_ = fVar67;
                auVar6._12_4_ = fVar68;
                auVar7._4_4_ = fVar66;
                auVar7._0_4_ = fVar65;
                auVar7._8_4_ = fVar67;
                auVar7._12_4_ = fVar68;
                auVar73 = NEON_ext(auVar6,auVar7,4,1);
                fVar69 = (float)uVar91 - (float)uVar62;
                fVar70 = (float)((ulong)uVar91 >> 0x20) - fVar70;
                fVar71 = (float)uVar85 - (float)uVar63;
                fVar72 = (float)((ulong)uVar85 >> 0x20) - fVar72;
                auVar12._4_4_ = fVar70;
                auVar12._0_4_ = fVar69;
                auVar12._8_4_ = fVar71;
                auVar12._12_4_ = fVar72;
                auVar13._4_4_ = fVar70;
                auVar13._0_4_ = fVar69;
                auVar13._8_4_ = fVar71;
                auVar13._12_4_ = fVar72;
                auVar74 = NEON_ext(auVar12,auVar13,4,1);
                auVar82 = NEON_ext(auVar73,auVar73,8,1);
                auVar86 = NEON_ext(auVar74,auVar74,8,1);
                uVar80 = NEON_rev64(auVar82._0_8_,4);
                uVar81 = NEON_rev64(auVar86._0_8_,4);
                bVar40 = 0;
                auVar76._0_4_ = fVar65 * auVar74._0_4_ - fVar69 * auVar73._0_4_;
                auVar76._4_4_ = fVar66 * auVar74._4_4_ - fVar70 * auVar73._4_4_;
                auVar76._8_4_ = fVar67 * (float)uVar81 - fVar71 * (float)uVar80;
                auVar76._12_4_ =
                     fVar68 * (float)((ulong)uVar81 >> 0x20) -
                     fVar72 * (float)((ulong)uVar80 >> 0x20);
                auVar73 = NEON_ext(auVar76,auVar76,4,1);
                fVar79 = auVar73._0_4_;
                fVar83 = auVar73._4_4_;
                do {
                  pfVar47 = (float *)(*(long *)(lVar44 + 0x200) +
                                     (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                  fVar106 = *pfVar47;
                  fVar89 = pfVar47[1];
                  fVar88 = (float)((ulong)uVar62 >> 0x20);
                  fVar64 = (float)((ulong)uVar63 >> 0x20);
                  fVar90 = ((float)uVar62 + fVar65 * fVar106 + fVar69 * fVar89) - local_270;
                  fVar92 = (fVar88 + fVar66 * fVar106 + fVar70 * fVar89) - fStack_26c;
                  fVar94 = ((float)uVar63 + fVar67 * fVar106 + fVar71 * fVar89) - fStack_268;
                  fVar84 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                  fVar87 = fVar90 * fVar90 + fVar92 * fVar92 + fVar94 * fVar94;
                  uVar80 = CONCAT44(fVar87,fVar84);
                  uVar81 = NEON_frsqrte(uVar80,4);
                  fVar109 = (float)uVar81;
                  fVar111 = (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4);
                  fVar109 = fVar109 * (float)uVar81;
                  fVar111 = fVar111 * (float)((ulong)uVar81 >> 0x20);
                  uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar111 * fVar111,fVar109 * fVar109),4);
                  iVar107 = -(uint)(fVar84 <= 0.0);
                  iVar108 = -(uint)(fVar87 <= 0.0);
                  fVar109 = (float)uVar80 * fVar109;
                  fVar111 = (float)((ulong)uVar80 >> 0x20) * fVar111;
                  bVar95 = SUB41(fVar109,0) & ~(byte)iVar107;
                  bVar96 = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar107 >> 8);
                  bVar97 = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar107 >> 0x10);
                  bVar98 = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar107 >> 0x18);
                  bVar99 = SUB41(fVar111,0) & ~(byte)iVar108;
                  bVar100 = (byte)((uint)fVar111 >> 8) & ~(byte)((uint)iVar108 >> 8);
                  bVar102 = (byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
                  bVar104 = (byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
                  fVar84 = (fVar84 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,bVar95))
                                                    ) - fStack_264) - fVar61;
                  fVar87 = (fVar87 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100,
                                                  bVar99))) - fStack_264) - fVar61;
                  if (fVar84 < 0.0) {
                    fVar109 = (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,bVar95)));
                    fVar111 = auVar76._0_4_ * auVar76._0_4_ + fVar79 * fVar79 + fVar83 * fVar83;
                    fVar93 = auVar76._0_4_ * auVar76._0_4_ + fVar79 * fVar79 + fVar83 * fVar83;
                    uVar80 = CONCAT44(fVar93,fVar111);
                    uVar81 = NEON_frsqrte(uVar80,4);
                    fVar110 = (float)uVar81;
                    fVar112 = (float)((ulong)uVar81 >> 0x20);
                    uVar81 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110),4);
                    fVar110 = fVar110 * (float)uVar81;
                    fVar112 = fVar112 * (float)((ulong)uVar81 >> 0x20);
                    iVar107 = -(uint)(fVar111 <= 0.0);
                    iVar108 = -(uint)(fVar93 <= 0.0);
                    uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar112 * fVar112,fVar110 * fVar110),4);
                    fVar110 = (float)uVar80 * fVar110;
                    fVar112 = (float)((ulong)uVar80 >> 0x20) * fVar112;
                    fVar111 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                              ~(byte)((uint)iVar107 >> 0x18),
                                              CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                       ~(byte)((uint)iVar107 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar110 >> 8) &
                                                                ~(byte)((uint)iVar107 >> 8),
                                                                SUB41(fVar110,0) & ~(byte)iVar107)))
                    ;
                    fVar93 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                              ~(byte)((uint)iVar108 >> 0x18),
                                              CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                       ~(byte)((uint)iVar108 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                ~(byte)((uint)iVar108 >> 8),
                                                                CONCAT14(SUB41(fVar112,0) &
                                                                         ~(byte)iVar108,fVar111))))
                                    >> 0x20);
                    fVar110 = fVar79 * fVar111;
                    fVar112 = fVar83 * fVar93;
                    fVar111 = auVar76._0_4_ * fVar111;
                    fVar93 = auVar76._4_4_ * fVar93;
                    fVar90 = fVar90 * (float)CONCAT13(bVar98,CONCAT12(bVar97,CONCAT11(bVar96,bVar95)
                                                                     )) * fVar110;
                    fVar92 = fVar92 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100,
                                                  bVar99))) * fVar112;
                    uVar101 = (undefined1)((uint)fVar92 >> 8);
                    uVar103 = (undefined1)((uint)fVar92 >> 0x10);
                    uVar105 = (undefined1)((uint)fVar92 >> 0x18);
                    fVar94 = fVar94 * fVar109 * fVar111;
                    fVar106 = ((fVar64 + fVar68 * fVar106 + fVar72 * fVar89) - fStack_264) *
                              (float)(CONCAT17(bVar104,CONCAT16(bVar102,CONCAT15(bVar100,CONCAT14(
                                                  bVar99,fVar109)))) >> 0x20) * fVar93;
                    auVar18[4] = SUB41(fVar92,0);
                    auVar18._0_4_ = fVar90;
                    auVar18[5] = uVar101;
                    auVar18[6] = uVar103;
                    auVar18[7] = uVar105;
                    auVar18._8_4_ = fVar94;
                    auVar18._12_4_ = fVar106;
                    auVar19[4] = SUB41(fVar92,0);
                    auVar19._0_4_ = fVar90;
                    auVar19[5] = uVar101;
                    auVar19[6] = uVar103;
                    auVar19[7] = uVar105;
                    auVar19._8_4_ = fVar94;
                    auVar19._12_4_ = fVar106;
                    auVar73 = NEON_ext(auVar18,auVar19,8,1);
                    if (fVar90 + fVar92 + auVar73._0_4_ < 0.0) {
                      fVar110 = -fVar110;
                      fVar112 = -fVar112;
                      fVar111 = -fVar111;
                    }
                    uVar62 = CONCAT44(fVar88 - fVar87 * fVar112,(float)uVar62 - fVar84 * fVar110);
                    uVar63 = CONCAT44(fVar64 - fVar87 * fVar93,(float)uVar63 - fVar84 * fVar111);
                    puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
                    puVar3[1] = uVar63;
                    *puVar3 = uVar62;
                    bVar41 = *pbVar38;
                  }
                  bVar40 = bVar40 + 1;
                } while (bVar40 < bVar41);
                bVar40 = *pbVar56;
              }
              bVar54 = bVar54 + 1;
              if (bVar40 <= bVar54) break;
              lVar46 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar52 = lVar52 + 1;
      } while (lVar52 != (int)uVar2);
      if (*(int *)(lVar44 + 0x238) != 0) {
        lVar52 = 0;
        do {
          uVar53 = (ulong)*(ushort *)(lVar30 + lVar52 * 2);
          uVar55 = (ulong)*(ushort *)(*(long *)(lVar44 + 0x2a0) + uVar53 * 2);
          if (uVar55 != 0xffff) {
            lVar45 = *(long *)(lVar44 + 0x230);
            fVar61 = *(float *)(*(long *)(lVar44 + 0x40) + uVar53 * 0x10 + 8);
            pbVar56 = (byte *)(lVar45 + uVar55 * 6 + 4);
            bVar40 = *pbVar56;
            if (bVar40 != 0) {
              lVar31 = *(long *)(param_4 + 0x20);
              bVar54 = 0;
              puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
              uVar63 = puVar3[1];
              uVar62 = *puVar3;
              lVar46 = lVar31;
              while( true ) {
                puVar37 = (ushort *)
                          (*(long *)(lVar44 + 0x220) +
                          (ulong)(ushort)(*(short *)(lVar45 + uVar55 * 6 + 2) + (ushort)bVar54) * 4)
                ;
                puVar3 = (undefined8 *)(lVar46 + (ulong)*puVar37 * 0x10);
                uVar81 = puVar3[1];
                uVar80 = *puVar3;
                puVar37 = (ushort *)(*(long *)(lVar44 + 0x1f0) + (ulong)puVar37[1] * 4);
                puVar33 = puVar37 + 1;
                bVar41 = (byte)*puVar33;
                if (bVar41 != 0) {
                  fVar70 = (float)uVar62;
                  uVar24 = (ulong)uVar62 >> 0x20;
                  fVar72 = (float)uVar63;
                  uVar25 = (ulong)uVar63 >> 0x20;
                  bVar40 = 0;
                  do {
                    fVar67 = *(float *)(*(long *)(lVar44 + 0x1e0) +
                                       ((ulong)((uint)*puVar37 + (uint)bVar40) & 0xffff) * 4);
                    fVar65 = (float)((ulong)uVar62 >> 0x20);
                    fVar66 = (float)((ulong)uVar63 >> 0x20);
                    fVar68 = ((float)uVar62 + ((float)uVar80 - fVar70) * fVar67) - local_270;
                    fVar69 = (fVar65 + ((float)((ulong)uVar80 >> 0x20) - (float)uVar24) * fVar67) -
                             fStack_26c;
                    fVar71 = ((float)uVar63 + ((float)uVar81 - fVar72) * fVar67) - fStack_268;
                    fVar79 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                    fVar83 = fVar68 * fVar68 + fVar69 * fVar69 + fVar71 * fVar71;
                    uVar91 = CONCAT44(fVar83,fVar79);
                    uVar85 = NEON_frsqrte(uVar91,4);
                    fVar106 = (float)uVar85;
                    fVar88 = (float)((ulong)uVar85 >> 0x20);
                    uVar85 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4);
                    fVar106 = fVar106 * (float)uVar85;
                    fVar88 = fVar88 * (float)((ulong)uVar85 >> 0x20);
                    uVar91 = NEON_frsqrts(uVar91,CONCAT44(fVar88 * fVar88,fVar106 * fVar106),4);
                    iVar107 = -(uint)(fVar79 <= 0.0);
                    iVar108 = -(uint)(fVar83 <= 0.0);
                    fVar106 = (float)uVar91 * fVar106;
                    fVar88 = (float)((ulong)uVar91 >> 0x20) * fVar88;
                    fVar106 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) &
                                              ~(byte)((uint)iVar107 >> 0x18),
                                              CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                                       ~(byte)((uint)iVar107 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar106 >> 8) &
                                                                ~(byte)((uint)iVar107 >> 8),
                                                                SUB41(fVar106,0) & ~(byte)iVar107)))
                    ;
                    fVar88 = (float)(CONCAT17((byte)((uint)fVar88 >> 0x18) &
                                              ~(byte)((uint)iVar108 >> 0x18),
                                              CONCAT16((byte)((uint)fVar88 >> 0x10) &
                                                       ~(byte)((uint)iVar108 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar88 >> 8) &
                                                                ~(byte)((uint)iVar108 >> 8),
                                                                CONCAT14(SUB41(fVar88,0) &
                                                                         ~(byte)iVar108,fVar106))))
                                    >> 0x20);
                    fVar79 = (fVar79 * fVar106 - fStack_264) - fVar61;
                    fVar83 = (fVar83 * fVar88 - fStack_264) - fVar61;
                    if (fVar79 < 0.0) {
                      uVar62 = CONCAT44(fVar65 - fVar69 * fVar88 * fVar83,
                                        (float)uVar62 - fVar68 * fVar106 * fVar79);
                      uVar63 = CONCAT44(fVar66 - ((fVar66 + ((float)((ulong)uVar81 >> 0x20) -
                                                            (float)uVar25) * fVar67) - fStack_264) *
                                                 fVar88 * fVar83,
                                        (float)uVar63 - fVar71 * fVar106 * fVar79);
                      puVar3 = (undefined8 *)(lVar31 + uVar53 * 0x10);
                      puVar3[1] = uVar63;
                      *puVar3 = uVar62;
                      bVar41 = (byte)*puVar33;
                    }
                    bVar40 = bVar40 + 1;
                  } while (bVar40 < bVar41);
                  bVar40 = *pbVar56;
                }
                bVar54 = bVar54 + 1;
                if (bVar40 <= bVar54) break;
                lVar46 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 != (int)uVar2);
      }
    }
    lVar52 = FUN_0043c4e0(DAT_04c6f050);
    lVar44 = DAT_04c6f058;
    if (lVar52 != 0) {
      lVar44 = lVar52;
    }
    if (((*(ulong *)(lVar44 + 0x10) < uVar36) || (*(long *)(lVar44 + 0x18) != lVar35 + uVar36)) ||
       (*(long *)(lVar44 + 0x28) == lVar35)) {
      FUN_00439980(lVar44,lVar35,uVar36);
    }
    else {
      *(long *)(lVar44 + 0x18) = lVar35;
    }
    lVar52 = FUN_0043c4e0(DAT_04c6f050);
    lVar44 = DAT_04c6f058;
    if (lVar52 != 0) {
      lVar44 = lVar52;
    }
    if (((uVar36 <= *(ulong *)(lVar44 + 0x10)) && (*(long *)(lVar44 + 0x18) == lVar32 + uVar36)) &&
       (*(long *)(lVar44 + 0x28) != lVar32)) {
      *(long *)(lVar44 + 0x18) = lVar32;
      goto LAB_005e7150;
    }
  }
  FUN_00439980(lVar44,lVar32,uVar36);
LAB_005e7150:
  uVar2 = local_298;
  local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
  lVar52 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar44 = DAT_04c6f058;
  if (lVar52 != 0) {
    lVar44 = lVar52;
  }
  uVar36 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar44 + 0x10) < uVar36) || (*(long *)(lVar44 + 0x18) != uVar36 + lVar30)) ||
     (*(long *)(lVar44 + 0x28) == lVar30)) {
    FUN_00439980();
  }
  else {
    *(long *)(lVar44 + 0x18) = lVar30;
  }
  return;
}

