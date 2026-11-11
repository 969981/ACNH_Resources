
void FUN_005e7240(undefined8 param_1,int param_2,ulong param_3,long param_4,ulong param_5,
                 ulong param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  undefined8 *puVar3;
  float fVar4;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ushort *puVar39;
  byte *pbVar40;
  long lVar41;
  ushort *puVar42;
  byte bVar43;
  byte bVar44;
  ushort uVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  float *pfVar49;
  char *pcVar50;
  uint *puVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  byte bVar55;
  byte *pbVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar106;
  undefined1 auVar102 [12];
  undefined1 auVar103 [12];
  undefined1 auVar104 [12];
  undefined1 auVar105 [12];
  int iVar107;
  int iVar108;
  int iVar109;
  float fVar110;
  float fVar111;
  long local_100;
  ulong local_f8;
  long local_f0;
  undefined8 local_e8;
  ushort local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  uint local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  uint local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  uint local_80;
  
  lVar59 = *(long *)(param_4 + 0x18);
  lVar47 = *(long *)(param_4 + 400);
  uVar2 = *(uint *)(lVar59 + 0x48);
  uVar46 = 0;
  if ((param_3 & 1) == 0) {
    uVar46 = 0x80000000;
  }
  local_b8 = 0;
  local_b0 = 0x8000000000000000;
  local_a0 = uVar2;
  if (uVar2 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = FUN_0043c4e0(DAT_04c6f050);
    lVar48 = DAT_04c6f058;
    if (lVar33 != 0) {
      lVar48 = lVar33;
    }
    uVar36 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar48 + 0x10) < uVar36) {
LAB_005e72fc:
      lVar33 = FUN_00439510();
    }
    else {
      lVar33 = *(long *)(lVar48 + 0x18);
      uVar36 = lVar33 + uVar36;
      if (*(ulong *)(lVar48 + 0x20) < uVar36) goto LAB_005e72fc;
      *(ulong *)(lVar48 + 0x18) = uVar36;
    }
  }
  lVar48 = lVar47 + (long)param_2 * 0xa0;
  local_b0._4_4_ = uVar2 | 0x80000000;
  if (uVar2 != 0) {
    local_b0._0_4_ = uVar2;
  }
  local_b8 = lVar33;
  local_a8 = lVar33;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e745c;
      puVar51 = *(uint **)(lVar59 + 0xe8);
      uVar45 = 0;
      uVar60 = 0;
      do {
        if ((*puVar51 & uVar46) != 0) {
          *(ushort *)(lVar33 + (long)(int)uVar60 * 2) = uVar45;
          uVar60 = uVar60 + 1;
        }
        uVar45 = uVar45 + 1;
        puVar51 = puVar51 + 1;
      } while ((int)(uint)uVar45 < (int)uVar2);
LAB_005e7430:
      bVar30 = SBORROW4(uVar2,uVar60);
      bVar31 = (int)(uVar2 - uVar60) < 0;
      bVar32 = uVar2 == uVar60;
      if ((int)uVar2 < (int)uVar60) goto LAB_005e7468;
LAB_005e7438:
      if (!bVar32 && bVar31 == bVar30) goto LAB_005e7468;
    }
    else {
      if (0 < (int)uVar2) {
        uVar45 = 0;
        uVar60 = 0;
        pfVar49 = (float *)(*(long *)(lVar59 + 0x40) + 4);
        do {
          if (*pfVar49 != 0.0) {
            *(ushort *)(lVar33 + (long)(int)uVar60 * 2) = uVar45;
            uVar60 = uVar60 + 1;
          }
          uVar45 = uVar45 + 1;
          pfVar49 = pfVar49 + 4;
        } while ((int)(uint)uVar45 < (int)uVar2);
        goto LAB_005e7430;
      }
LAB_005e745c:
      uVar60 = 0;
      bVar30 = false;
      bVar32 = uVar2 == 0;
      bVar31 = false;
      if (-1 < (int)uVar2) goto LAB_005e7438;
LAB_005e7468:
      uVar2 = uVar60;
      local_b0._0_4_ = uVar60;
    }
  }
  else {
    local_d8 = 0;
    local_d0 = 0x8000000000000000;
    local_c0 = uVar2;
    if (uVar2 == 0) {
      local_d0._0_4_ = 0;
      local_c8 = 0;
    }
    else {
      lVar34 = FUN_0043c4e0(DAT_04c6f050);
      lVar35 = DAT_04c6f058;
      if (lVar34 != 0) {
        lVar35 = lVar34;
      }
      uVar36 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
      if (*(ulong *)(lVar35 + 0x10) < uVar36) {
LAB_005e73ac:
        local_c8 = FUN_00439510();
      }
      else {
        local_c8 = *(long *)(lVar35 + 0x18);
        uVar36 = local_c8 + uVar36;
        if (*(ulong *)(lVar35 + 0x20) < uVar36) goto LAB_005e73ac;
        *(ulong *)(lVar35 + 0x18) = uVar36;
      }
      if (uVar2 != 0) {
        local_d0._0_4_ = uVar2;
      }
    }
    lVar35 = local_c8;
    local_d0._4_4_ = uVar2 | 0x80000000;
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e7db8;
      pcVar50 = *(char **)(lVar59 + 0x188);
      puVar51 = *(uint **)(lVar59 + 0xe8);
      uVar45 = 0;
      uVar60 = 0;
      uVar62 = 0;
      do {
        uVar61 = uVar62;
        if ((*puVar51 & uVar46) != 0) {
          if (*pcVar50 == '\0') {
            uVar29 = uVar60 + 1;
            lVar34 = lVar33;
            uVar62 = uVar60;
          }
          else {
            uVar61 = uVar62 + 1;
            uVar29 = uVar60;
            lVar34 = local_c8;
          }
          uVar60 = uVar29;
          *(ushort *)(lVar34 + (long)(int)uVar62 * 2) = uVar45;
        }
        uVar45 = uVar45 + 1;
        puVar51 = puVar51 + 1;
        pcVar50 = pcVar50 + 1;
        uVar62 = uVar61;
      } while ((int)(uint)uVar45 < (int)uVar2);
LAB_005e7d9c:
      uVar46 = uVar61;
      uVar62 = uVar61;
      if (uVar2 == uVar61) {
LAB_005e7da8:
        uVar46 = uVar2;
        uVar62 = (uint)local_d0;
      }
    }
    else {
      if (0 < (int)uVar2) {
        pcVar50 = *(char **)(lVar59 + 0x188);
        uVar45 = 0;
        uVar61 = 0;
        uVar60 = 0;
        pfVar49 = (float *)(*(long *)(lVar59 + 0x40) + 4);
        do {
          if (*pfVar49 != 0.0) {
            if (*pcVar50 == '\0') {
              uVar46 = uVar61;
              uVar62 = uVar60 + 1;
              lVar34 = lVar33;
              uVar61 = uVar60;
            }
            else {
              uVar46 = uVar61 + 1;
              uVar62 = uVar60;
              lVar34 = local_c8;
            }
            uVar60 = uVar62;
            *(ushort *)(lVar34 + (long)(int)uVar61 * 2) = uVar45;
            uVar61 = uVar46;
          }
          uVar45 = uVar45 + 1;
          pcVar50 = pcVar50 + 1;
          pfVar49 = pfVar49 + 4;
        } while ((int)(uint)uVar45 < (int)uVar2);
        goto LAB_005e7d9c;
      }
LAB_005e7db8:
      uVar60 = 0;
      uVar61 = 0;
      uVar46 = uVar61;
      uVar62 = uVar61;
      if (uVar2 == 0) goto LAB_005e7da8;
    }
    local_d0._0_4_ = uVar62;
    uVar62 = uVar60;
    uVar29 = uVar60;
    if (uVar2 == uVar60) {
      uVar62 = uVar2;
      uVar29 = (uint)local_b0;
    }
    local_b0._0_4_ = uVar29;
    local_d8 = local_c8;
    if (uVar61 != 0) {
      local_100 = *(long *)(param_4 + 0x220);
      local_e0 = *(ushort *)(lVar59 + 0x1a8);
      local_f8 = *(ulong *)(param_4 + 0x228);
      local_f0 = *(long *)(param_4 + 0x230);
      local_e8 = *(undefined8 *)(param_4 + 0x210);
      if (param_7 == 0) {
        local_98 = 0;
        local_90 = 0x8000000000000000;
        local_80 = uVar61;
        lVar34 = FUN_0043c4e0(DAT_04c6f050);
        lVar47 = DAT_04c6f058;
        if (lVar34 != 0) {
          lVar47 = lVar34;
        }
        uVar36 = (ulong)(int)(uVar61 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar47 + 0x10) < uVar36) {
LAB_005e7ed8:
          lVar34 = FUN_00439510(lVar47,uVar36);
        }
        else {
          lVar34 = *(long *)(lVar47 + 0x18);
          if (*(ulong *)(lVar47 + 0x20) < lVar34 + uVar36) goto LAB_005e7ed8;
          *(ulong *)(lVar47 + 0x18) = lVar34 + uVar36;
        }
        local_90 = CONCAT44(uVar61,(undefined4)local_90) | 0x8000000000000000;
        local_98 = lVar34;
        local_88 = lVar34;
        lVar38 = FUN_0043c4e0(DAT_04c6f050);
        lVar47 = DAT_04c6f058;
        if (lVar38 != 0) {
          lVar47 = lVar38;
        }
        if (*(ulong *)(lVar47 + 0x10) < uVar36) {
LAB_005e89e0:
          lVar38 = FUN_00439510(lVar47,uVar36);
        }
        else {
          lVar38 = *(long *)(lVar47 + 0x18);
          if (*(ulong *)(lVar47 + 0x20) < lVar38 + uVar36) goto LAB_005e89e0;
          *(ulong *)(lVar47 + 0x18) = lVar38 + uVar36;
        }
        local_90 = CONCAT44(local_90._4_4_,uVar61);
        if (0 < (int)uVar61) {
          uVar53 = 0;
          do {
            uVar54 = uVar53 & 0xffff;
            uVar46 = (int)uVar53 + 1;
            uVar53 = (ulong)uVar46;
            lVar37 = uVar54 * 4;
            lVar47 = *(long *)(lVar59 + 0x40) + (ulong)*(ushort *)(lVar35 + uVar54 * 2) * 0x10;
            *(undefined4 *)(lVar34 + lVar37) = *(undefined4 *)(lVar47 + 8);
            *(undefined4 *)(lVar38 + lVar37) = *(undefined4 *)(lVar47 + 0xc);
          } while ((int)(uVar46 & 0xffff) < (int)uVar61);
        }
        FUN_006290f0(param_1,lVar48,&local_d8,&local_98,param_4,&local_100);
        lVar37 = FUN_0043c4e0(DAT_04c6f050);
        lVar47 = DAT_04c6f058;
        if (lVar37 != 0) {
          lVar47 = lVar37;
        }
        if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != lVar38 + uVar36))
           || (*(long *)(lVar47 + 0x28) == lVar38)) {
          FUN_00439980(lVar47,lVar38,uVar36);
        }
        else {
          *(long *)(lVar47 + 0x18) = lVar38;
        }
        uVar46 = local_80;
        local_90 = local_90 & 0xffffffff00000000;
        lVar38 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
        lVar47 = DAT_04c6f058;
        if (lVar38 != 0) {
          lVar47 = lVar38;
        }
        uVar36 = (ulong)(int)(uVar46 * 4 + 0x7f & 0xffffff80);
        if (((uVar36 <= *(ulong *)(lVar47 + 0x10)) && (*(long *)(lVar47 + 0x18) == lVar34 + uVar36))
           && (*(long *)(lVar47 + 0x28) != lVar34)) {
          *(long *)(lVar47 + 0x18) = lVar34;
          goto LAB_005e8b14;
        }
      }
      else {
        lVar34 = FUN_0043c4e0(DAT_04c6f050);
        lVar38 = DAT_04c6f058;
        if (lVar34 != 0) {
          lVar38 = lVar34;
        }
        uVar36 = (ulong)(int)(uVar61 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar38 + 0x10) < uVar36) {
LAB_005e7e6c:
          lVar34 = FUN_00439510();
        }
        else {
          lVar34 = *(long *)(lVar38 + 0x18);
          if (*(ulong *)(lVar38 + 0x20) < lVar34 + uVar36) goto LAB_005e7e6c;
          *(ulong *)(lVar38 + 0x18) = lVar34 + uVar36;
        }
        lVar37 = FUN_0043c4e0(DAT_04c6f050);
        lVar38 = DAT_04c6f058;
        if (lVar37 != 0) {
          lVar38 = lVar37;
        }
        if (*(ulong *)(lVar38 + 0x10) < uVar36) {
LAB_005e80f4:
          lVar37 = FUN_00439510();
        }
        else {
          lVar37 = *(long *)(lVar38 + 0x18);
          if (*(ulong *)(lVar38 + 0x20) < lVar37 + uVar36) goto LAB_005e80f4;
          *(ulong *)(lVar38 + 0x18) = lVar37 + uVar36;
        }
        if (0 < (int)uVar61) {
          uVar53 = 0;
          do {
            uVar54 = uVar53 & 0xffff;
            uVar2 = (int)uVar53 + 1;
            uVar53 = (ulong)uVar2;
            lVar57 = uVar54 * 4;
            lVar38 = *(long *)(lVar59 + 0x40) + (ulong)*(ushort *)(lVar35 + uVar54 * 2) * 0x10;
            *(undefined4 *)(lVar34 + lVar57) = *(undefined4 *)(lVar38 + 8);
            *(undefined4 *)(lVar37 + lVar57) = *(undefined4 *)(lVar38 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar61);
        }
        lVar57 = *(long *)(param_4 + 0x18);
        lVar38 = *(long *)(lVar48 + 0x88);
        if (param_7 == 2) {
          if (0 < (int)uVar46) {
            lVar52 = 0;
            pcVar50 = (char *)(lVar47 + (long)param_2 * 0xa0 + 0x9c);
            do {
              uVar53 = (ulong)*(ushort *)(lVar35 + lVar52 * 2);
              if (((*(char *)(local_f0 + (uVar53 - local_e0)) <= *pcVar50) &&
                  (*(char *)(local_f8 + (uVar53 - local_e0)) == '\0')) &&
                 (uVar54 = (ulong)*(ushort *)(*(long *)(lVar57 + 0x2d0) + uVar53 * 2),
                 uVar54 != 0xffff)) {
                fVar4 = *(float *)(*(long *)(lVar57 + 0x40) + uVar53 * 0x10 + 8);
                lVar47 = *(long *)(lVar57 + 0x290) + uVar54 * 8;
                bVar43 = *(byte *)(lVar47 + 6);
                if (bVar43 != 0) {
                  lVar58 = *(long *)(param_4 + 0x20);
                  puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                  uVar66 = puVar3[1];
                  uVar64 = *puVar3;
                  iVar108 = 0;
                  bVar55 = 0;
                  lVar41 = lVar58;
                  while( true ) {
                    puVar42 = (ushort *)
                              (*(long *)(lVar57 + 0x280) +
                              ((ulong)((uint)*(ushort *)(lVar47 + 2) + (uint)bVar55) & 0xffff) * 6);
                    puVar3 = (undefined8 *)(lVar41 + (ulong)*puVar42 * 0x10);
                    uVar89 = puVar3[1];
                    uVar88 = *puVar3;
                    puVar3 = (undefined8 *)(lVar41 + (ulong)puVar42[1] * 0x10);
                    uVar18 = puVar3[1];
                    uVar17 = *puVar3;
                    psVar1 = (short *)(*(long *)(lVar57 + 0x210) + (ulong)puVar42[2] * 4);
                    pbVar56 = (byte *)(psVar1 + 1);
                    bVar44 = *pbVar56;
                    if (bVar44 != 0) {
                      fVar68 = (float)uVar88 - (float)uVar64;
                      fVar73 = (float)((ulong)uVar64 >> 0x20);
                      fVar69 = (float)((ulong)uVar88 >> 0x20) - fVar73;
                      fVar70 = (float)uVar89 - (float)uVar66;
                      fVar75 = (float)((ulong)uVar66 >> 0x20);
                      fVar71 = (float)((ulong)uVar89 >> 0x20) - fVar75;
                      auVar9._4_4_ = fVar69;
                      auVar9._0_4_ = fVar68;
                      auVar9._8_4_ = fVar70;
                      auVar9._12_4_ = fVar71;
                      auVar10._4_4_ = fVar69;
                      auVar10._0_4_ = fVar68;
                      auVar10._8_4_ = fVar70;
                      auVar10._12_4_ = fVar71;
                      auVar78 = NEON_ext(auVar9,auVar10,4,1);
                      fVar72 = (float)uVar17 - (float)uVar64;
                      fVar73 = (float)((ulong)uVar17 >> 0x20) - fVar73;
                      fVar74 = (float)uVar18 - (float)uVar66;
                      fVar75 = (float)((ulong)uVar18 >> 0x20) - fVar75;
                      auVar15._4_4_ = fVar73;
                      auVar15._0_4_ = fVar72;
                      auVar15._8_4_ = fVar74;
                      auVar15._12_4_ = fVar75;
                      auVar16._4_4_ = fVar73;
                      auVar16._0_4_ = fVar72;
                      auVar16._8_4_ = fVar74;
                      auVar16._12_4_ = fVar75;
                      auVar83 = NEON_ext(auVar15,auVar16,4,1);
                      auVar90 = NEON_ext(auVar78,auVar78,8,1);
                      auVar91 = NEON_ext(auVar83,auVar83,8,1);
                      uVar88 = NEON_rev64(auVar90._0_8_,4);
                      uVar89 = NEON_rev64(auVar91._0_8_,4);
                      bVar43 = 0;
                      auVar86._0_4_ = fVar68 * auVar83._0_4_ - fVar72 * auVar78._0_4_;
                      auVar86._4_4_ = fVar69 * auVar83._4_4_ - fVar73 * auVar78._4_4_;
                      auVar86._8_4_ = fVar70 * (float)uVar89 - fVar74 * (float)uVar88;
                      auVar86._12_4_ =
                           fVar71 * (float)((ulong)uVar89 >> 0x20) -
                           fVar75 * (float)((ulong)uVar88 >> 0x20);
                      auVar78 = NEON_ext(auVar86,auVar86,4,1);
                      fVar76 = auVar78._0_4_;
                      fVar77 = auVar78._4_4_;
                      do {
                        pfVar49 = (float *)(*(long *)(lVar57 + 0x200) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar43) * 8);
                        fVar63 = *pfVar49;
                        fVar96 = pfVar49[1];
                        fVar65 = (float)((ulong)uVar64 >> 0x20);
                        fVar67 = (float)((ulong)uVar66 >> 0x20);
                        puVar3 = (undefined8 *)
                                 (*(long *)(lVar38 + 0x20) +
                                 ((ulong)((uint)*(ushort *)(lVar47 + 4) + iVar108) & 0xffff) * 0x10)
                        ;
                        uVar88 = puVar3[1];
                        fVar99 = (float)uVar88;
                        fVar100 = (float)((ulong)uVar88 >> 0x20);
                        uVar88 = *puVar3;
                        fVar97 = (float)uVar88;
                        fVar98 = (float)((ulong)uVar88 >> 0x20);
                        auVar94._0_4_ = fVar97 * ((float)uVar64 + fVar68 * fVar63 + fVar72 * fVar96)
                        ;
                        auVar94._4_4_ = fVar98 * (fVar65 + fVar69 * fVar63 + fVar73 * fVar96);
                        auVar94._8_4_ = fVar99 * ((float)uVar66 + fVar70 * fVar63 + fVar74 * fVar96)
                        ;
                        auVar94._12_4_ = fVar100 * (fVar67 + fVar71 * fVar63 + fVar75 * fVar96);
                        auVar78 = NEON_ext(auVar94,auVar94,8,1);
                        fVar63 = auVar78._0_4_ + fVar100;
                        fVar96 = (fVar4 + auVar94._0_4_ + auVar94._4_4_ + fVar63) - fVar4;
                        fVar63 = (fVar4 + auVar94._0_4_ + auVar94._4_4_ + fVar63) - fVar4;
                        if (fVar96 < 0.0) {
                          fVar101 = auVar86._0_4_ * auVar86._0_4_ +
                                    fVar76 * fVar76 + fVar77 * fVar77;
                          fVar106 = auVar86._0_4_ * auVar86._0_4_ +
                                    fVar76 * fVar76 + fVar77 * fVar77;
                          uVar88 = CONCAT44(fVar106,fVar101);
                          uVar89 = NEON_frsqrte(uVar88,4);
                          fVar110 = (float)uVar89;
                          fVar111 = (float)((ulong)uVar89 >> 0x20);
                          uVar89 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110)
                                                ,4);
                          fVar110 = fVar110 * (float)uVar89;
                          fVar111 = fVar111 * (float)((ulong)uVar89 >> 0x20);
                          iVar107 = -(uint)(fVar101 <= 0.0);
                          iVar109 = -(uint)(fVar106 <= 0.0);
                          uVar88 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110)
                                                ,4);
                          fVar110 = (float)uVar88 * fVar110;
                          fVar111 = (float)((ulong)uVar88 >> 0x20) * fVar111;
                          fVar101 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                    ~(byte)((uint)iVar107 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                             ~(byte)((uint)iVar107 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar110 >> 8) &
                                                                      ~(byte)((uint)iVar107 >> 8),
                                                                      SUB41(fVar110,0) &
                                                                      ~(byte)iVar107)));
                          auVar104._0_4_ = fVar76 * fVar101;
                          fVar110 = (float)(CONCAT17((byte)((uint)fVar111 >> 0x18) &
                                                     ~(byte)((uint)iVar109 >> 0x18),
                                                     CONCAT16((byte)((uint)fVar111 >> 0x10) &
                                                              ~(byte)((uint)iVar109 >> 0x10),
                                                              CONCAT15((byte)((uint)fVar111 >> 8) &
                                                                       ~(byte)((uint)iVar109 >> 8),
                                                                       CONCAT14(SUB41(fVar111,0) &
                                                                                ~(byte)iVar109,
                                                                                fVar101)))) >> 0x20)
                          ;
                          auVar104._4_4_ = fVar77 * fVar110;
                          auVar104._8_4_ = auVar86._0_4_ * fVar101;
                          fVar110 = auVar86._4_4_ * fVar110;
                          fVar97 = fVar97 * auVar104._0_4_;
                          fVar98 = fVar98 * auVar104._4_4_;
                          fVar99 = fVar99 * auVar104._8_4_;
                          fVar100 = fVar100 * fVar110;
                          auVar23._4_4_ = fVar98;
                          auVar23._0_4_ = fVar97;
                          auVar23._8_4_ = fVar99;
                          auVar23._12_4_ = fVar100;
                          auVar24._4_4_ = fVar98;
                          auVar24._0_4_ = fVar97;
                          auVar24._8_4_ = fVar99;
                          auVar24._12_4_ = fVar100;
                          auVar78 = NEON_ext(auVar23,auVar24,8,1);
                          if (fVar97 + fVar98 + auVar78._0_4_ < 0.0) {
                            auVar104._0_4_ = -auVar104._0_4_;
                            auVar104._4_4_ = -auVar104._4_4_;
                            auVar104._8_4_ = -auVar104._8_4_;
                          }
                          uVar64 = CONCAT44(fVar65 - fVar63 * auVar104._4_4_,
                                            (float)uVar64 - fVar96 * auVar104._0_4_);
                          uVar66 = CONCAT44(fVar67 - fVar63 * fVar110,
                                            (float)uVar66 - fVar96 * auVar104._8_4_);
                          puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                          puVar3[1] = uVar66;
                          *puVar3 = uVar64;
                          bVar44 = *pbVar56;
                        }
                        bVar43 = bVar43 + 1;
                        iVar108 = iVar108 + 1;
                      } while (bVar43 < bVar44);
                      bVar43 = *(byte *)(lVar47 + 6);
                    }
                    bVar55 = bVar55 + 1;
                    if (bVar43 <= bVar55) break;
                    lVar41 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar52 = lVar52 + 1;
            } while (lVar52 != (int)uVar46);
            if (*(int *)(lVar57 + 0x278) != 0) {
              lVar47 = 0;
              do {
                uVar53 = (ulong)*(ushort *)(lVar35 + lVar47 * 2);
                if (((*(char *)(local_f0 + (uVar53 - local_e0)) <= *pcVar50) &&
                    (*(char *)(local_f8 + (uVar53 - local_e0)) == '\0')) &&
                   (uVar54 = (ulong)*(ushort *)(*(long *)(lVar57 + 0x2c0) + uVar53 * 2),
                   uVar54 != 0xffff)) {
                  fVar4 = *(float *)(*(long *)(lVar57 + 0x40) + uVar53 * 0x10 + 8);
                  lVar52 = *(long *)(lVar57 + 0x270) + uVar54 * 8;
                  bVar43 = *(byte *)(lVar52 + 6);
                  if (bVar43 != 0) {
                    lVar58 = *(long *)(param_4 + 0x20);
                    puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                    uVar66 = puVar3[1];
                    uVar64 = *puVar3;
                    iVar108 = 0;
                    bVar55 = 0;
                    lVar41 = lVar58;
                    while( true ) {
                      puVar42 = (ushort *)
                                (*(long *)(lVar57 + 0x260) +
                                (ulong)(ushort)(*(short *)(lVar52 + 2) + (ushort)bVar55) * 4);
                      puVar3 = (undefined8 *)(lVar41 + (ulong)*puVar42 * 0x10);
                      uVar89 = puVar3[1];
                      uVar88 = *puVar3;
                      puVar42 = (ushort *)(*(long *)(lVar57 + 0x1f0) + (ulong)puVar42[1] * 4);
                      puVar39 = puVar42 + 1;
                      bVar44 = (byte)*puVar39;
                      if (bVar44 != 0) {
                        fVar73 = (float)uVar64;
                        uVar54 = (ulong)uVar64 >> 0x20;
                        fVar75 = (float)uVar66;
                        uVar27 = (ulong)uVar66 >> 0x20;
                        bVar43 = 0;
                        do {
                          fVar68 = *(float *)(*(long *)(lVar57 + 0x1e0) +
                                             ((ulong)((uint)*puVar42 + (uint)bVar43) & 0xffff) * 4);
                          fVar69 = (float)((ulong)uVar64 >> 0x20);
                          fVar70 = (float)((ulong)uVar66 >> 0x20);
                          puVar3 = (undefined8 *)
                                   (*(long *)(lVar38 + 0x20) +
                                   ((ulong)((uint)*(ushort *)(lVar52 + 4) + iVar108) & 0xffff) *
                                   0x10);
                          uVar17 = puVar3[1];
                          fVar74 = (float)uVar17;
                          fVar76 = (float)((ulong)uVar17 >> 0x20);
                          uVar17 = *puVar3;
                          fVar71 = (float)uVar17;
                          fVar72 = (float)((ulong)uVar17 >> 0x20);
                          auVar81._0_4_ =
                               fVar71 * ((float)uVar64 + ((float)uVar88 - fVar73) * fVar68);
                          auVar81._4_4_ =
                               fVar72 * (fVar69 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar54) *
                                                  fVar68);
                          auVar81._8_4_ =
                               fVar74 * ((float)uVar66 + ((float)uVar89 - fVar75) * fVar68);
                          auVar81._12_4_ =
                               fVar76 * (fVar70 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar27) *
                                                  fVar68);
                          auVar78 = NEON_ext(auVar81,auVar81,8,1);
                          fVar68 = auVar78._0_4_ + fVar76;
                          fVar77 = (fVar4 + auVar81._0_4_ + auVar81._4_4_ + fVar68) - fVar4;
                          fVar68 = (fVar4 + auVar81._0_4_ + auVar81._4_4_ + fVar68) - fVar4;
                          if (fVar77 < 0.0) {
                            uVar64 = CONCAT44(fVar69 - fVar72 * fVar68,
                                              (float)uVar64 - fVar71 * fVar77);
                            uVar66 = CONCAT44(fVar70 - fVar76 * fVar68,
                                              (float)uVar66 - fVar74 * fVar77);
                            puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                            puVar3[1] = uVar66;
                            *puVar3 = uVar64;
                            bVar44 = (byte)*puVar39;
                          }
                          bVar43 = bVar43 + 1;
                          iVar108 = iVar108 + 1;
                        } while (bVar43 < bVar44);
                        bVar43 = *(byte *)(lVar52 + 6);
                      }
                      bVar55 = bVar55 + 1;
                      if (bVar43 <= bVar55) break;
                      lVar41 = *(long *)(param_4 + 0x20);
                    }
                  }
                }
                lVar47 = lVar47 + 1;
              } while (lVar47 != (int)uVar46);
            }
          }
        }
        else if (0 < (int)uVar46) {
          lVar52 = 0;
          pcVar50 = (char *)(lVar47 + (long)param_2 * 0xa0 + 0x9c);
          do {
            uVar53 = (ulong)*(ushort *)(lVar35 + lVar52 * 2);
            if (((*(char *)(local_f0 + (uVar53 - local_e0)) <= *pcVar50) &&
                (*(char *)(local_f8 + (uVar53 - local_e0)) == '\0')) &&
               (uVar54 = (ulong)*(ushort *)(*(long *)(lVar57 + 0x2b0) + uVar53 * 2),
               uVar54 != 0xffff)) {
              lVar47 = *(long *)(lVar57 + 0x250);
              fVar4 = *(float *)(*(long *)(lVar57 + 0x40) + uVar53 * 0x10 + 8);
              pbVar56 = (byte *)(lVar47 + uVar54 * 6 + 4);
              bVar43 = *pbVar56;
              if (bVar43 != 0) {
                lVar58 = *(long *)(param_4 + 0x20);
                bVar55 = 0;
                puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                uVar66 = puVar3[1];
                uVar64 = *puVar3;
                lVar41 = lVar58;
                while( true ) {
                  puVar42 = (ushort *)
                            (*(long *)(lVar57 + 0x240) +
                            ((ulong)((uint)*(ushort *)(lVar47 + uVar54 * 6 + 2) + (uint)bVar55) &
                            0xffff) * 6);
                  puVar3 = (undefined8 *)(lVar41 + (ulong)*puVar42 * 0x10);
                  uVar89 = puVar3[1];
                  uVar88 = *puVar3;
                  puVar3 = (undefined8 *)(lVar41 + (ulong)puVar42[1] * 0x10);
                  uVar18 = puVar3[1];
                  uVar17 = *puVar3;
                  psVar1 = (short *)(*(long *)(lVar57 + 0x210) + (ulong)puVar42[2] * 4);
                  pbVar40 = (byte *)(psVar1 + 1);
                  bVar44 = *pbVar40;
                  if (bVar44 != 0) {
                    fVar68 = (float)uVar88 - (float)uVar64;
                    fVar73 = (float)((ulong)uVar64 >> 0x20);
                    fVar69 = (float)((ulong)uVar88 >> 0x20) - fVar73;
                    fVar70 = (float)uVar89 - (float)uVar66;
                    fVar75 = (float)((ulong)uVar66 >> 0x20);
                    fVar71 = (float)((ulong)uVar89 >> 0x20) - fVar75;
                    auVar78._4_4_ = fVar69;
                    auVar78._0_4_ = fVar68;
                    auVar78._8_4_ = fVar70;
                    auVar78._12_4_ = fVar71;
                    auVar83._4_4_ = fVar69;
                    auVar83._0_4_ = fVar68;
                    auVar83._8_4_ = fVar70;
                    auVar83._12_4_ = fVar71;
                    auVar78 = NEON_ext(auVar78,auVar83,4,1);
                    fVar72 = (float)uVar17 - (float)uVar64;
                    fVar73 = (float)((ulong)uVar17 >> 0x20) - fVar73;
                    fVar74 = (float)uVar18 - (float)uVar66;
                    fVar75 = (float)((ulong)uVar18 >> 0x20) - fVar75;
                    auVar90._4_4_ = fVar73;
                    auVar90._0_4_ = fVar72;
                    auVar90._8_4_ = fVar74;
                    auVar90._12_4_ = fVar75;
                    auVar91._4_4_ = fVar73;
                    auVar91._0_4_ = fVar72;
                    auVar91._8_4_ = fVar74;
                    auVar91._12_4_ = fVar75;
                    auVar83 = NEON_ext(auVar90,auVar91,4,1);
                    auVar90 = NEON_ext(auVar78,auVar78,8,1);
                    auVar91 = NEON_ext(auVar83,auVar83,8,1);
                    uVar88 = NEON_rev64(auVar90._0_8_,4);
                    uVar89 = NEON_rev64(auVar91._0_8_,4);
                    bVar43 = 0;
                    auVar87._0_4_ = fVar68 * auVar83._0_4_ - fVar72 * auVar78._0_4_;
                    auVar87._4_4_ = fVar69 * auVar83._4_4_ - fVar73 * auVar78._4_4_;
                    auVar87._8_4_ = fVar70 * (float)uVar89 - fVar74 * (float)uVar88;
                    auVar87._12_4_ =
                         fVar71 * (float)((ulong)uVar89 >> 0x20) -
                         fVar75 * (float)((ulong)uVar88 >> 0x20);
                    auVar78 = NEON_ext(auVar87,auVar87,4,1);
                    fVar76 = auVar78._0_4_;
                    fVar77 = auVar78._4_4_;
                    do {
                      pfVar49 = (float *)(*(long *)(lVar57 + 0x200) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar43) * 8);
                      fVar63 = *pfVar49;
                      fVar96 = pfVar49[1];
                      fVar65 = (float)((ulong)uVar64 >> 0x20);
                      fVar67 = (float)((ulong)uVar66 >> 0x20);
                      uVar88 = *(undefined8 *)(*(long *)(lVar38 + 0x20) + 0xffff8);
                      fVar99 = (float)uVar88;
                      fVar100 = (float)((ulong)uVar88 >> 0x20);
                      uVar88 = *(undefined8 *)(*(long *)(lVar38 + 0x20) + 0xffff0);
                      fVar97 = (float)uVar88;
                      fVar98 = (float)((ulong)uVar88 >> 0x20);
                      auVar95._0_4_ = fVar97 * ((float)uVar64 + fVar68 * fVar63 + fVar72 * fVar96);
                      auVar95._4_4_ = fVar98 * (fVar65 + fVar69 * fVar63 + fVar73 * fVar96);
                      auVar95._8_4_ = fVar99 * ((float)uVar66 + fVar70 * fVar63 + fVar74 * fVar96);
                      auVar95._12_4_ = fVar100 * (fVar67 + fVar71 * fVar63 + fVar75 * fVar96);
                      auVar78 = NEON_ext(auVar95,auVar95,8,1);
                      fVar63 = auVar78._0_4_ + fVar100;
                      fVar96 = (fVar4 + auVar95._0_4_ + auVar95._4_4_ + fVar63) - fVar4;
                      fVar63 = (fVar4 + auVar95._0_4_ + auVar95._4_4_ + fVar63) - fVar4;
                      if (fVar96 < 0.0) {
                        fVar101 = auVar87._0_4_ * auVar87._0_4_ + fVar76 * fVar76 + fVar77 * fVar77;
                        fVar106 = auVar87._0_4_ * auVar87._0_4_ + fVar76 * fVar76 + fVar77 * fVar77;
                        uVar88 = CONCAT44(fVar106,fVar101);
                        uVar89 = NEON_frsqrte(uVar88,4);
                        fVar110 = (float)uVar89;
                        fVar111 = (float)((ulong)uVar89 >> 0x20);
                        uVar89 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110),4
                                             );
                        fVar110 = fVar110 * (float)uVar89;
                        fVar111 = fVar111 * (float)((ulong)uVar89 >> 0x20);
                        iVar108 = -(uint)(fVar101 <= 0.0);
                        iVar107 = -(uint)(fVar106 <= 0.0);
                        uVar88 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110),4
                                             );
                        fVar110 = (float)uVar88 * fVar110;
                        fVar111 = (float)((ulong)uVar88 >> 0x20) * fVar111;
                        fVar101 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                  ~(byte)((uint)iVar108 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                           ~(byte)((uint)iVar108 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar110 >> 8) &
                                                                    ~(byte)((uint)iVar108 >> 8),
                                                                    SUB41(fVar110,0) &
                                                                    ~(byte)iVar108)));
                        auVar105._0_4_ = fVar76 * fVar101;
                        fVar110 = (float)(CONCAT17((byte)((uint)fVar111 >> 0x18) &
                                                   ~(byte)((uint)iVar107 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar111 >> 0x10) &
                                                            ~(byte)((uint)iVar107 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar111 >> 8) &
                                                                     ~(byte)((uint)iVar107 >> 8),
                                                                     CONCAT14(SUB41(fVar111,0) &
                                                                              ~(byte)iVar107,fVar101
                                                                             )))) >> 0x20);
                        auVar105._4_4_ = fVar77 * fVar110;
                        auVar105._8_4_ = auVar87._0_4_ * fVar101;
                        fVar110 = auVar87._4_4_ * fVar110;
                        fVar97 = fVar97 * auVar105._0_4_;
                        fVar98 = fVar98 * auVar105._4_4_;
                        fVar99 = fVar99 * auVar105._8_4_;
                        fVar100 = fVar100 * fVar110;
                        auVar25._4_4_ = fVar98;
                        auVar25._0_4_ = fVar97;
                        auVar25._8_4_ = fVar99;
                        auVar25._12_4_ = fVar100;
                        auVar26._4_4_ = fVar98;
                        auVar26._0_4_ = fVar97;
                        auVar26._8_4_ = fVar99;
                        auVar26._12_4_ = fVar100;
                        auVar78 = NEON_ext(auVar25,auVar26,8,1);
                        if (fVar97 + fVar98 + auVar78._0_4_ < 0.0) {
                          auVar105._0_4_ = -auVar105._0_4_;
                          auVar105._4_4_ = -auVar105._4_4_;
                          auVar105._8_4_ = -auVar105._8_4_;
                        }
                        uVar64 = CONCAT44(fVar65 - fVar63 * auVar105._4_4_,
                                          (float)uVar64 - fVar96 * auVar105._0_4_);
                        uVar66 = CONCAT44(fVar67 - fVar63 * fVar110,
                                          (float)uVar66 - fVar96 * auVar105._8_4_);
                        puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                        puVar3[1] = uVar66;
                        *puVar3 = uVar64;
                        bVar44 = *pbVar40;
                      }
                      bVar43 = bVar43 + 1;
                    } while (bVar43 < bVar44);
                    bVar43 = *pbVar56;
                  }
                  bVar55 = bVar55 + 1;
                  if (bVar43 <= bVar55) break;
                  lVar41 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar52 = lVar52 + 1;
          } while (lVar52 != (int)uVar46);
          if (*(int *)(lVar57 + 0x238) != 0) {
            lVar47 = 0;
            do {
              uVar53 = (ulong)*(ushort *)(lVar35 + lVar47 * 2);
              if (((*(char *)(local_f0 + (uVar53 - local_e0)) <= *pcVar50) &&
                  (*(char *)(local_f8 + (uVar53 - local_e0)) == '\0')) &&
                 (uVar54 = (ulong)*(ushort *)(*(long *)(lVar57 + 0x2a0) + uVar53 * 2),
                 uVar54 != 0xffff)) {
                lVar52 = *(long *)(lVar57 + 0x230);
                fVar4 = *(float *)(*(long *)(lVar57 + 0x40) + uVar53 * 0x10 + 8);
                pbVar56 = (byte *)(lVar52 + uVar54 * 6 + 4);
                bVar43 = *pbVar56;
                if (bVar43 != 0) {
                  lVar58 = *(long *)(param_4 + 0x20);
                  bVar55 = 0;
                  puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                  uVar66 = puVar3[1];
                  uVar64 = *puVar3;
                  lVar41 = lVar58;
                  while( true ) {
                    puVar42 = (ushort *)
                              (*(long *)(lVar57 + 0x220) +
                              (ulong)(ushort)(*(short *)(lVar52 + uVar54 * 6 + 2) + (ushort)bVar55)
                              * 4);
                    puVar3 = (undefined8 *)(lVar41 + (ulong)*puVar42 * 0x10);
                    uVar89 = puVar3[1];
                    uVar88 = *puVar3;
                    puVar42 = (ushort *)(*(long *)(lVar57 + 0x1f0) + (ulong)puVar42[1] * 4);
                    puVar39 = puVar42 + 1;
                    bVar44 = (byte)*puVar39;
                    if (bVar44 != 0) {
                      fVar73 = (float)uVar64;
                      uVar27 = (ulong)uVar64 >> 0x20;
                      fVar75 = (float)uVar66;
                      uVar28 = (ulong)uVar66 >> 0x20;
                      bVar43 = 0;
                      do {
                        fVar68 = *(float *)(*(long *)(lVar57 + 0x1e0) +
                                           ((ulong)((uint)*puVar42 + (uint)bVar43) & 0xffff) * 4);
                        fVar69 = (float)((ulong)uVar64 >> 0x20);
                        fVar70 = (float)((ulong)uVar66 >> 0x20);
                        uVar17 = *(undefined8 *)(*(long *)(lVar38 + 0x20) + 0xffff8);
                        fVar74 = (float)uVar17;
                        fVar76 = (float)((ulong)uVar17 >> 0x20);
                        uVar17 = *(undefined8 *)(*(long *)(lVar38 + 0x20) + 0xffff0);
                        fVar71 = (float)uVar17;
                        fVar72 = (float)((ulong)uVar17 >> 0x20);
                        auVar82._0_4_ = fVar71 * ((float)uVar64 + ((float)uVar88 - fVar73) * fVar68)
                        ;
                        auVar82._4_4_ =
                             fVar72 * (fVar69 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar27) *
                                                fVar68);
                        auVar82._8_4_ = fVar74 * ((float)uVar66 + ((float)uVar89 - fVar75) * fVar68)
                        ;
                        auVar82._12_4_ =
                             fVar76 * (fVar70 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar28) *
                                                fVar68);
                        auVar78 = NEON_ext(auVar82,auVar82,8,1);
                        fVar68 = auVar78._0_4_ + fVar76;
                        fVar77 = (fVar4 + auVar82._0_4_ + auVar82._4_4_ + fVar68) - fVar4;
                        fVar68 = (fVar4 + auVar82._0_4_ + auVar82._4_4_ + fVar68) - fVar4;
                        if (fVar77 < 0.0) {
                          uVar64 = CONCAT44(fVar69 - fVar72 * fVar68,(float)uVar64 - fVar71 * fVar77
                                           );
                          uVar66 = CONCAT44(fVar70 - fVar76 * fVar68,(float)uVar66 - fVar74 * fVar77
                                           );
                          puVar3 = (undefined8 *)(lVar58 + uVar53 * 0x10);
                          puVar3[1] = uVar66;
                          *puVar3 = uVar64;
                          bVar44 = (byte)*puVar39;
                        }
                        bVar43 = bVar43 + 1;
                      } while (bVar43 < bVar44);
                      bVar43 = *pbVar56;
                    }
                    bVar55 = bVar55 + 1;
                    if (bVar43 <= bVar55) break;
                    lVar41 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar47 = lVar47 + 1;
            } while (lVar47 != (int)uVar46);
          }
        }
        lVar38 = FUN_0043c4e0(DAT_04c6f050);
        lVar47 = DAT_04c6f058;
        if (lVar38 != 0) {
          lVar47 = lVar38;
        }
        if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != lVar37 + uVar36))
           || (*(long *)(lVar47 + 0x28) == lVar37)) {
          FUN_00439980(lVar47,lVar37,uVar36);
        }
        else {
          *(long *)(lVar47 + 0x18) = lVar37;
        }
        lVar38 = FUN_0043c4e0(DAT_04c6f050);
        lVar47 = DAT_04c6f058;
        if (lVar38 != 0) {
          lVar47 = lVar38;
        }
        if (((uVar36 <= *(ulong *)(lVar47 + 0x10)) && (*(long *)(lVar47 + 0x18) == lVar34 + uVar36))
           && (*(long *)(lVar47 + 0x28) != lVar34)) {
          *(long *)(lVar47 + 0x18) = lVar34;
          goto LAB_005e8b14;
        }
      }
      FUN_00439980(lVar47,lVar34,uVar36);
    }
LAB_005e8b14:
    uVar46 = local_c0;
    local_d0 = (ulong)local_d0._4_4_ << 0x20;
    lVar34 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar47 = DAT_04c6f058;
    if (lVar34 != 0) {
      lVar47 = lVar34;
    }
    uVar36 = (ulong)(int)(uVar46 * 2 + 0x7f & 0xffffff80);
    uVar2 = uVar62;
    if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != uVar36 + lVar35)) ||
       (*(long *)(lVar47 + 0x28) == lVar35)) {
      FUN_00439980(lVar47,lVar35);
    }
    else {
      *(long *)(lVar47 + 0x18) = lVar35;
    }
  }
  if (uVar60 == 0) goto LAB_005e8b7c;
  if (param_7 == 0) {
    local_100 = 0;
    local_f8 = 0x8000000000000000;
    uVar36 = (ulong)local_e8 >> 0x20;
    local_e8 = CONCAT44((int)uVar36,uVar60);
    lVar35 = FUN_0043c4e0(DAT_04c6f050);
    lVar47 = DAT_04c6f058;
    if (lVar35 != 0) {
      lVar47 = lVar35;
    }
    uVar36 = (ulong)(int)(uVar60 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar47 + 0x10) < uVar36) {
LAB_005e753c:
      lVar35 = FUN_00439510(lVar47,uVar36);
    }
    else {
      lVar35 = *(long *)(lVar47 + 0x18);
      if (*(ulong *)(lVar47 + 0x20) < lVar35 + uVar36) goto LAB_005e753c;
      *(ulong *)(lVar47 + 0x18) = lVar35 + uVar36;
    }
    local_f8 = CONCAT44(uVar60,(undefined4)local_f8) | 0x8000000000000000;
    local_98 = 0;
    local_90 = 0x8000000000000000;
    local_100 = lVar35;
    local_f0 = lVar35;
    local_80 = uVar60;
    lVar34 = FUN_0043c4e0(DAT_04c6f050);
    lVar47 = DAT_04c6f058;
    if (lVar34 != 0) {
      lVar47 = lVar34;
    }
    if (*(ulong *)(lVar47 + 0x10) < uVar36) {
LAB_005e7f70:
      lVar34 = FUN_00439510(lVar47,uVar36);
    }
    else {
      lVar34 = *(long *)(lVar47 + 0x18);
      if (*(ulong *)(lVar47 + 0x20) < lVar34 + uVar36) goto LAB_005e7f70;
      *(ulong *)(lVar47 + 0x18) = lVar34 + uVar36;
    }
    local_f8 = CONCAT44(local_f8._4_4_,uVar60);
    local_90 = CONCAT44(uVar60,uVar60) | 0x8000000000000000;
    if (0 < (int)uVar60) {
      uVar36 = 0;
      do {
        uVar53 = uVar36 & 0xffff;
        uVar46 = (int)uVar36 + 1;
        uVar36 = (ulong)uVar46;
        lVar38 = uVar53 * 4;
        lVar47 = *(long *)(lVar59 + 0x40) + (ulong)*(ushort *)(lVar33 + uVar53 * 2) * 0x10;
        *(undefined4 *)(lVar35 + lVar38) = *(undefined4 *)(lVar47 + 8);
        *(undefined4 *)(lVar34 + lVar38) = *(undefined4 *)(lVar47 + 0xc);
      } while ((int)(uVar46 & 0xffff) < (int)uVar60);
    }
    local_98 = lVar34;
    local_88 = lVar34;
    FUN_0062cde0(param_1,lVar48,&local_b8,&local_100,&local_98,param_4);
    uVar46 = local_80;
    local_90 = local_90 & 0xffffffff00000000;
    lVar59 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar47 = DAT_04c6f058;
    if (lVar59 != 0) {
      lVar47 = lVar59;
    }
    uVar36 = (ulong)(int)(uVar46 * 4 + 0x7f & 0xffffff80);
    if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != lVar34 + uVar36)) ||
       (*(long *)(lVar47 + 0x28) == lVar34)) {
      FUN_00439980(lVar47,lVar34);
    }
    else {
      *(long *)(lVar47 + 0x18) = lVar34;
    }
    local_f8 = local_f8 & 0xffffffff00000000;
    iVar108 = (int)local_e8;
    lVar59 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar47 = DAT_04c6f058;
    if (lVar59 != 0) {
      lVar47 = lVar59;
    }
    uVar36 = (ulong)(int)(iVar108 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != lVar35 + uVar36)) ||
       (*(long *)(lVar47 + 0x28) == lVar35)) {
      FUN_00439980(lVar47,lVar35);
    }
    else {
      *(long *)(lVar47 + 0x18) = lVar35;
    }
    goto LAB_005e8b7c;
  }
  lVar35 = FUN_0043c4e0(DAT_04c6f050);
  lVar47 = DAT_04c6f058;
  if (lVar35 != 0) {
    lVar47 = lVar35;
  }
  uVar36 = (ulong)(int)(uVar60 * 4 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar47 + 0x10) < uVar36) {
LAB_005e74d0:
    lVar35 = FUN_00439510(lVar47,uVar36);
  }
  else {
    lVar35 = *(long *)(lVar47 + 0x18);
    if (*(ulong *)(lVar47 + 0x20) < lVar35 + uVar36) goto LAB_005e74d0;
    *(ulong *)(lVar47 + 0x18) = lVar35 + uVar36;
  }
  lVar34 = FUN_0043c4e0(DAT_04c6f050);
  lVar47 = DAT_04c6f058;
  if (lVar34 != 0) {
    lVar47 = lVar34;
  }
  if (*(ulong *)(lVar47 + 0x10) < uVar36) {
LAB_005e7584:
    lVar34 = FUN_00439510(lVar47,uVar36);
  }
  else {
    lVar34 = *(long *)(lVar47 + 0x18);
    if (*(ulong *)(lVar47 + 0x20) < lVar34 + uVar36) goto LAB_005e7584;
    *(ulong *)(lVar47 + 0x18) = lVar34 + uVar36;
  }
  if (0 < (int)uVar60) {
    uVar53 = 0;
    do {
      uVar54 = uVar53 & 0xffff;
      uVar46 = (int)uVar53 + 1;
      uVar53 = (ulong)uVar46;
      lVar38 = uVar54 * 4;
      lVar47 = *(long *)(lVar59 + 0x40) + (ulong)*(ushort *)(lVar33 + uVar54 * 2) * 0x10;
      *(undefined4 *)(lVar35 + lVar38) = *(undefined4 *)(lVar47 + 8);
      *(undefined4 *)(lVar34 + lVar38) = *(undefined4 *)(lVar47 + 0xc);
    } while ((int)(uVar46 & 0xffff) < (int)uVar60);
  }
  lVar47 = *(long *)(lVar48 + 0x88);
  lVar59 = *(long *)(param_4 + 0x18);
  if (param_7 == 2) {
    if (0 < (int)uVar2) {
      lVar48 = 0;
      do {
        uVar53 = (ulong)*(ushort *)(lVar33 + lVar48 * 2);
        uVar54 = (ulong)*(ushort *)(*(long *)(lVar59 + 0x2d0) + uVar53 * 2);
        if (uVar54 != 0xffff) {
          fVar4 = *(float *)(*(long *)(lVar59 + 0x40) + uVar53 * 0x10 + 8);
          lVar38 = *(long *)(lVar59 + 0x290) + uVar54 * 8;
          bVar43 = *(byte *)(lVar38 + 6);
          if (bVar43 != 0) {
            lVar57 = *(long *)(param_4 + 0x20);
            puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
            uVar66 = puVar3[1];
            uVar64 = *puVar3;
            iVar108 = 0;
            bVar55 = 0;
            lVar37 = lVar57;
            while( true ) {
              puVar42 = (ushort *)
                        (*(long *)(lVar59 + 0x280) +
                        ((ulong)((uint)*(ushort *)(lVar38 + 2) + (uint)bVar55) & 0xffff) * 6);
              puVar3 = (undefined8 *)(lVar37 + (ulong)*puVar42 * 0x10);
              uVar89 = puVar3[1];
              uVar88 = *puVar3;
              puVar3 = (undefined8 *)(lVar37 + (ulong)puVar42[1] * 0x10);
              uVar18 = puVar3[1];
              uVar17 = *puVar3;
              psVar1 = (short *)(*(long *)(lVar59 + 0x210) + (ulong)puVar42[2] * 4);
              pbVar56 = (byte *)(psVar1 + 1);
              bVar44 = *pbVar56;
              if (bVar44 != 0) {
                fVar68 = (float)uVar88 - (float)uVar64;
                fVar73 = (float)((ulong)uVar64 >> 0x20);
                fVar69 = (float)((ulong)uVar88 >> 0x20) - fVar73;
                fVar70 = (float)uVar89 - (float)uVar66;
                fVar75 = (float)((ulong)uVar66 >> 0x20);
                fVar71 = (float)((ulong)uVar89 >> 0x20) - fVar75;
                auVar5._4_4_ = fVar69;
                auVar5._0_4_ = fVar68;
                auVar5._8_4_ = fVar70;
                auVar5._12_4_ = fVar71;
                auVar6._4_4_ = fVar69;
                auVar6._0_4_ = fVar68;
                auVar6._8_4_ = fVar70;
                auVar6._12_4_ = fVar71;
                auVar78 = NEON_ext(auVar5,auVar6,4,1);
                fVar72 = (float)uVar17 - (float)uVar64;
                fVar73 = (float)((ulong)uVar17 >> 0x20) - fVar73;
                fVar74 = (float)uVar18 - (float)uVar66;
                fVar75 = (float)((ulong)uVar18 >> 0x20) - fVar75;
                auVar11._4_4_ = fVar73;
                auVar11._0_4_ = fVar72;
                auVar11._8_4_ = fVar74;
                auVar11._12_4_ = fVar75;
                auVar12._4_4_ = fVar73;
                auVar12._0_4_ = fVar72;
                auVar12._8_4_ = fVar74;
                auVar12._12_4_ = fVar75;
                auVar83 = NEON_ext(auVar11,auVar12,4,1);
                auVar90 = NEON_ext(auVar78,auVar78,8,1);
                auVar91 = NEON_ext(auVar83,auVar83,8,1);
                uVar88 = NEON_rev64(auVar90._0_8_,4);
                uVar89 = NEON_rev64(auVar91._0_8_,4);
                bVar43 = 0;
                auVar84._0_4_ = fVar68 * auVar83._0_4_ - fVar72 * auVar78._0_4_;
                auVar84._4_4_ = fVar69 * auVar83._4_4_ - fVar73 * auVar78._4_4_;
                auVar84._8_4_ = fVar70 * (float)uVar89 - fVar74 * (float)uVar88;
                auVar84._12_4_ =
                     fVar71 * (float)((ulong)uVar89 >> 0x20) -
                     fVar75 * (float)((ulong)uVar88 >> 0x20);
                auVar78 = NEON_ext(auVar84,auVar84,4,1);
                fVar76 = auVar78._0_4_;
                fVar77 = auVar78._4_4_;
                do {
                  pfVar49 = (float *)(*(long *)(lVar59 + 0x200) +
                                     (ulong)(ushort)(*psVar1 + (ushort)bVar43) * 8);
                  fVar63 = *pfVar49;
                  fVar96 = pfVar49[1];
                  fVar65 = (float)((ulong)uVar64 >> 0x20);
                  fVar67 = (float)((ulong)uVar66 >> 0x20);
                  puVar3 = (undefined8 *)
                           (*(long *)(lVar47 + 0x20) +
                           ((ulong)((uint)*(ushort *)(lVar38 + 4) + iVar108) & 0xffff) * 0x10);
                  uVar88 = puVar3[1];
                  fVar99 = (float)uVar88;
                  fVar100 = (float)((ulong)uVar88 >> 0x20);
                  uVar88 = *puVar3;
                  fVar97 = (float)uVar88;
                  fVar98 = (float)((ulong)uVar88 >> 0x20);
                  auVar92._0_4_ = fVar97 * ((float)uVar64 + fVar68 * fVar63 + fVar72 * fVar96);
                  auVar92._4_4_ = fVar98 * (fVar65 + fVar69 * fVar63 + fVar73 * fVar96);
                  auVar92._8_4_ = fVar99 * ((float)uVar66 + fVar70 * fVar63 + fVar74 * fVar96);
                  auVar92._12_4_ = fVar100 * (fVar67 + fVar71 * fVar63 + fVar75 * fVar96);
                  auVar78 = NEON_ext(auVar92,auVar92,8,1);
                  fVar63 = auVar78._0_4_ + fVar100;
                  fVar96 = (fVar4 + auVar92._0_4_ + auVar92._4_4_ + fVar63) - fVar4;
                  fVar63 = (fVar4 + auVar92._0_4_ + auVar92._4_4_ + fVar63) - fVar4;
                  if (fVar96 < 0.0) {
                    fVar101 = auVar84._0_4_ * auVar84._0_4_ + fVar76 * fVar76 + fVar77 * fVar77;
                    fVar106 = auVar84._0_4_ * auVar84._0_4_ + fVar76 * fVar76 + fVar77 * fVar77;
                    uVar88 = CONCAT44(fVar106,fVar101);
                    uVar89 = NEON_frsqrte(uVar88,4);
                    fVar110 = (float)uVar89;
                    fVar111 = (float)((ulong)uVar89 >> 0x20);
                    uVar89 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110),4);
                    fVar110 = fVar110 * (float)uVar89;
                    fVar111 = fVar111 * (float)((ulong)uVar89 >> 0x20);
                    iVar107 = -(uint)(fVar101 <= 0.0);
                    iVar109 = -(uint)(fVar106 <= 0.0);
                    uVar88 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110),4);
                    fVar110 = (float)uVar88 * fVar110;
                    fVar111 = (float)((ulong)uVar88 >> 0x20) * fVar111;
                    fVar101 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                              ~(byte)((uint)iVar107 >> 0x18),
                                              CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                       ~(byte)((uint)iVar107 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar110 >> 8) &
                                                                ~(byte)((uint)iVar107 >> 8),
                                                                SUB41(fVar110,0) & ~(byte)iVar107)))
                    ;
                    auVar102._0_4_ = fVar76 * fVar101;
                    fVar110 = (float)(CONCAT17((byte)((uint)fVar111 >> 0x18) &
                                               ~(byte)((uint)iVar109 >> 0x18),
                                               CONCAT16((byte)((uint)fVar111 >> 0x10) &
                                                        ~(byte)((uint)iVar109 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar111 >> 8) &
                                                                 ~(byte)((uint)iVar109 >> 8),
                                                                 CONCAT14(SUB41(fVar111,0) &
                                                                          ~(byte)iVar109,fVar101))))
                                     >> 0x20);
                    auVar102._4_4_ = fVar77 * fVar110;
                    auVar102._8_4_ = auVar84._0_4_ * fVar101;
                    fVar110 = auVar84._4_4_ * fVar110;
                    fVar97 = fVar97 * auVar102._0_4_;
                    fVar98 = fVar98 * auVar102._4_4_;
                    fVar99 = fVar99 * auVar102._8_4_;
                    fVar100 = fVar100 * fVar110;
                    auVar19._4_4_ = fVar98;
                    auVar19._0_4_ = fVar97;
                    auVar19._8_4_ = fVar99;
                    auVar19._12_4_ = fVar100;
                    auVar20._4_4_ = fVar98;
                    auVar20._0_4_ = fVar97;
                    auVar20._8_4_ = fVar99;
                    auVar20._12_4_ = fVar100;
                    auVar78 = NEON_ext(auVar19,auVar20,8,1);
                    if (fVar97 + fVar98 + auVar78._0_4_ < 0.0) {
                      auVar102._0_4_ = -auVar102._0_4_;
                      auVar102._4_4_ = -auVar102._4_4_;
                      auVar102._8_4_ = -auVar102._8_4_;
                    }
                    uVar64 = CONCAT44(fVar65 - fVar63 * auVar102._4_4_,
                                      (float)uVar64 - fVar96 * auVar102._0_4_);
                    uVar66 = CONCAT44(fVar67 - fVar63 * fVar110,
                                      (float)uVar66 - fVar96 * auVar102._8_4_);
                    puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                    puVar3[1] = uVar66;
                    *puVar3 = uVar64;
                    bVar44 = *pbVar56;
                  }
                  bVar43 = bVar43 + 1;
                  iVar108 = iVar108 + 1;
                } while (bVar43 < bVar44);
                bVar43 = *(byte *)(lVar38 + 6);
              }
              bVar55 = bVar55 + 1;
              if (bVar43 <= bVar55) break;
              lVar37 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar48 = lVar48 + 1;
      } while (lVar48 != (int)uVar2);
      if (*(int *)(lVar59 + 0x278) != 0) {
        lVar48 = 0;
        do {
          uVar53 = (ulong)*(ushort *)(lVar33 + lVar48 * 2);
          uVar54 = (ulong)*(ushort *)(*(long *)(lVar59 + 0x2c0) + uVar53 * 2);
          if (uVar54 != 0xffff) {
            fVar4 = *(float *)(*(long *)(lVar59 + 0x40) + uVar53 * 0x10 + 8);
            lVar38 = *(long *)(lVar59 + 0x270) + uVar54 * 8;
            bVar43 = *(byte *)(lVar38 + 6);
            if (bVar43 != 0) {
              lVar57 = *(long *)(param_4 + 0x20);
              puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
              uVar66 = puVar3[1];
              uVar64 = *puVar3;
              iVar108 = 0;
              bVar55 = 0;
              lVar37 = lVar57;
              while( true ) {
                puVar42 = (ushort *)
                          (*(long *)(lVar59 + 0x260) +
                          (ulong)(ushort)(*(short *)(lVar38 + 2) + (ushort)bVar55) * 4);
                puVar3 = (undefined8 *)(lVar37 + (ulong)*puVar42 * 0x10);
                uVar89 = puVar3[1];
                uVar88 = *puVar3;
                puVar42 = (ushort *)(*(long *)(lVar59 + 0x1f0) + (ulong)puVar42[1] * 4);
                puVar39 = puVar42 + 1;
                bVar44 = (byte)*puVar39;
                if (bVar44 != 0) {
                  fVar73 = (float)uVar64;
                  uVar54 = (ulong)uVar64 >> 0x20;
                  fVar75 = (float)uVar66;
                  uVar27 = (ulong)uVar66 >> 0x20;
                  bVar43 = 0;
                  do {
                    fVar68 = *(float *)(*(long *)(lVar59 + 0x1e0) +
                                       ((ulong)((uint)*puVar42 + (uint)bVar43) & 0xffff) * 4);
                    fVar69 = (float)((ulong)uVar64 >> 0x20);
                    fVar70 = (float)((ulong)uVar66 >> 0x20);
                    puVar3 = (undefined8 *)
                             (*(long *)(lVar47 + 0x20) +
                             ((ulong)((uint)*(ushort *)(lVar38 + 4) + iVar108) & 0xffff) * 0x10);
                    uVar17 = puVar3[1];
                    fVar74 = (float)uVar17;
                    fVar76 = (float)((ulong)uVar17 >> 0x20);
                    uVar17 = *puVar3;
                    fVar71 = (float)uVar17;
                    fVar72 = (float)((ulong)uVar17 >> 0x20);
                    auVar79._0_4_ = fVar71 * ((float)uVar64 + ((float)uVar88 - fVar73) * fVar68);
                    auVar79._4_4_ =
                         fVar72 * (fVar69 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar54) *
                                            fVar68);
                    auVar79._8_4_ = fVar74 * ((float)uVar66 + ((float)uVar89 - fVar75) * fVar68);
                    auVar79._12_4_ =
                         fVar76 * (fVar70 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar27) *
                                            fVar68);
                    auVar78 = NEON_ext(auVar79,auVar79,8,1);
                    fVar68 = auVar78._0_4_ + fVar76;
                    fVar77 = (fVar4 + auVar79._0_4_ + auVar79._4_4_ + fVar68) - fVar4;
                    fVar68 = (fVar4 + auVar79._0_4_ + auVar79._4_4_ + fVar68) - fVar4;
                    if (fVar77 < 0.0) {
                      uVar64 = CONCAT44(fVar69 - fVar72 * fVar68,(float)uVar64 - fVar71 * fVar77);
                      uVar66 = CONCAT44(fVar70 - fVar76 * fVar68,(float)uVar66 - fVar74 * fVar77);
                      puVar3 = (undefined8 *)(lVar57 + uVar53 * 0x10);
                      puVar3[1] = uVar66;
                      *puVar3 = uVar64;
                      bVar44 = (byte)*puVar39;
                    }
                    bVar43 = bVar43 + 1;
                    iVar108 = iVar108 + 1;
                  } while (bVar43 < bVar44);
                  bVar43 = *(byte *)(lVar38 + 6);
                }
                bVar55 = bVar55 + 1;
                if (bVar43 <= bVar55) break;
                lVar37 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar48 = lVar48 + 1;
        } while (lVar48 != (int)uVar2);
      }
    }
  }
  else if (0 < (int)uVar2) {
    lVar48 = 0;
    do {
      uVar54 = (ulong)*(ushort *)(lVar33 + lVar48 * 2);
      uVar53 = (ulong)*(ushort *)(*(long *)(lVar59 + 0x2b0) + uVar54 * 2);
      if (uVar53 != 0xffff) {
        lVar38 = *(long *)(lVar59 + 0x250);
        fVar4 = *(float *)(*(long *)(lVar59 + 0x40) + uVar54 * 0x10 + 8);
        pbVar56 = (byte *)(lVar38 + uVar53 * 6 + 4);
        bVar43 = *pbVar56;
        if (bVar43 != 0) {
          lVar57 = *(long *)(param_4 + 0x20);
          bVar55 = 0;
          puVar3 = (undefined8 *)(lVar57 + uVar54 * 0x10);
          uVar66 = puVar3[1];
          uVar64 = *puVar3;
          lVar37 = lVar57;
          while( true ) {
            puVar42 = (ushort *)
                      (*(long *)(lVar59 + 0x240) +
                      ((ulong)((uint)*(ushort *)(lVar38 + uVar53 * 6 + 2) + (uint)bVar55) & 0xffff)
                      * 6);
            puVar3 = (undefined8 *)(lVar37 + (ulong)*puVar42 * 0x10);
            uVar89 = puVar3[1];
            uVar88 = *puVar3;
            puVar3 = (undefined8 *)(lVar37 + (ulong)puVar42[1] * 0x10);
            uVar18 = puVar3[1];
            uVar17 = *puVar3;
            psVar1 = (short *)(*(long *)(lVar59 + 0x210) + (ulong)puVar42[2] * 4);
            pbVar40 = (byte *)(psVar1 + 1);
            bVar44 = *pbVar40;
            if (bVar44 != 0) {
              fVar68 = (float)uVar88 - (float)uVar64;
              fVar73 = (float)((ulong)uVar64 >> 0x20);
              fVar69 = (float)((ulong)uVar88 >> 0x20) - fVar73;
              fVar70 = (float)uVar89 - (float)uVar66;
              fVar75 = (float)((ulong)uVar66 >> 0x20);
              fVar71 = (float)((ulong)uVar89 >> 0x20) - fVar75;
              auVar7._4_4_ = fVar69;
              auVar7._0_4_ = fVar68;
              auVar7._8_4_ = fVar70;
              auVar7._12_4_ = fVar71;
              auVar8._4_4_ = fVar69;
              auVar8._0_4_ = fVar68;
              auVar8._8_4_ = fVar70;
              auVar8._12_4_ = fVar71;
              auVar78 = NEON_ext(auVar7,auVar8,4,1);
              fVar72 = (float)uVar17 - (float)uVar64;
              fVar73 = (float)((ulong)uVar17 >> 0x20) - fVar73;
              fVar74 = (float)uVar18 - (float)uVar66;
              fVar75 = (float)((ulong)uVar18 >> 0x20) - fVar75;
              auVar13._4_4_ = fVar73;
              auVar13._0_4_ = fVar72;
              auVar13._8_4_ = fVar74;
              auVar13._12_4_ = fVar75;
              auVar14._4_4_ = fVar73;
              auVar14._0_4_ = fVar72;
              auVar14._8_4_ = fVar74;
              auVar14._12_4_ = fVar75;
              auVar83 = NEON_ext(auVar13,auVar14,4,1);
              auVar90 = NEON_ext(auVar78,auVar78,8,1);
              auVar91 = NEON_ext(auVar83,auVar83,8,1);
              uVar88 = NEON_rev64(auVar90._0_8_,4);
              uVar89 = NEON_rev64(auVar91._0_8_,4);
              bVar43 = 0;
              auVar85._0_4_ = fVar68 * auVar83._0_4_ - fVar72 * auVar78._0_4_;
              auVar85._4_4_ = fVar69 * auVar83._4_4_ - fVar73 * auVar78._4_4_;
              auVar85._8_4_ = fVar70 * (float)uVar89 - fVar74 * (float)uVar88;
              auVar85._12_4_ =
                   fVar71 * (float)((ulong)uVar89 >> 0x20) - fVar75 * (float)((ulong)uVar88 >> 0x20)
              ;
              auVar78 = NEON_ext(auVar85,auVar85,4,1);
              fVar76 = auVar78._0_4_;
              fVar77 = auVar78._4_4_;
              do {
                pfVar49 = (float *)(*(long *)(lVar59 + 0x200) +
                                   (ulong)(ushort)(*psVar1 + (ushort)bVar43) * 8);
                fVar63 = *pfVar49;
                fVar96 = pfVar49[1];
                fVar65 = (float)((ulong)uVar64 >> 0x20);
                fVar67 = (float)((ulong)uVar66 >> 0x20);
                uVar88 = *(undefined8 *)(*(long *)(lVar47 + 0x20) + 0xffff8);
                fVar99 = (float)uVar88;
                fVar100 = (float)((ulong)uVar88 >> 0x20);
                uVar88 = *(undefined8 *)(*(long *)(lVar47 + 0x20) + 0xffff0);
                fVar97 = (float)uVar88;
                fVar98 = (float)((ulong)uVar88 >> 0x20);
                auVar93._0_4_ = fVar97 * ((float)uVar64 + fVar68 * fVar63 + fVar72 * fVar96);
                auVar93._4_4_ = fVar98 * (fVar65 + fVar69 * fVar63 + fVar73 * fVar96);
                auVar93._8_4_ = fVar99 * ((float)uVar66 + fVar70 * fVar63 + fVar74 * fVar96);
                auVar93._12_4_ = fVar100 * (fVar67 + fVar71 * fVar63 + fVar75 * fVar96);
                auVar78 = NEON_ext(auVar93,auVar93,8,1);
                fVar63 = auVar78._0_4_ + fVar100;
                fVar96 = (fVar4 + auVar93._0_4_ + auVar93._4_4_ + fVar63) - fVar4;
                fVar63 = (fVar4 + auVar93._0_4_ + auVar93._4_4_ + fVar63) - fVar4;
                if (fVar96 < 0.0) {
                  fVar101 = auVar85._0_4_ * auVar85._0_4_ + fVar76 * fVar76 + fVar77 * fVar77;
                  fVar106 = auVar85._0_4_ * auVar85._0_4_ + fVar76 * fVar76 + fVar77 * fVar77;
                  uVar88 = CONCAT44(fVar106,fVar101);
                  uVar89 = NEON_frsqrte(uVar88,4);
                  fVar110 = (float)uVar89;
                  fVar111 = (float)((ulong)uVar89 >> 0x20);
                  uVar89 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110),4);
                  fVar110 = fVar110 * (float)uVar89;
                  fVar111 = fVar111 * (float)((ulong)uVar89 >> 0x20);
                  iVar108 = -(uint)(fVar101 <= 0.0);
                  iVar107 = -(uint)(fVar106 <= 0.0);
                  uVar88 = NEON_frsqrts(uVar88,CONCAT44(fVar111 * fVar111,fVar110 * fVar110),4);
                  fVar110 = (float)uVar88 * fVar110;
                  fVar111 = (float)((ulong)uVar88 >> 0x20) * fVar111;
                  fVar101 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                            ~(byte)((uint)iVar108 >> 0x18),
                                            CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                                     ~(byte)((uint)iVar108 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar110 >> 8) &
                                                              ~(byte)((uint)iVar108 >> 8),
                                                              SUB41(fVar110,0) & ~(byte)iVar108)));
                  auVar103._0_4_ = fVar76 * fVar101;
                  fVar110 = (float)(CONCAT17((byte)((uint)fVar111 >> 0x18) &
                                             ~(byte)((uint)iVar107 >> 0x18),
                                             CONCAT16((byte)((uint)fVar111 >> 0x10) &
                                                      ~(byte)((uint)iVar107 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar111 >> 8) &
                                                               ~(byte)((uint)iVar107 >> 8),
                                                               CONCAT14(SUB41(fVar111,0) &
                                                                        ~(byte)iVar107,fVar101))))
                                   >> 0x20);
                  auVar103._4_4_ = fVar77 * fVar110;
                  auVar103._8_4_ = auVar85._0_4_ * fVar101;
                  fVar110 = auVar85._4_4_ * fVar110;
                  fVar97 = fVar97 * auVar103._0_4_;
                  fVar98 = fVar98 * auVar103._4_4_;
                  fVar99 = fVar99 * auVar103._8_4_;
                  fVar100 = fVar100 * fVar110;
                  auVar21._4_4_ = fVar98;
                  auVar21._0_4_ = fVar97;
                  auVar21._8_4_ = fVar99;
                  auVar21._12_4_ = fVar100;
                  auVar22._4_4_ = fVar98;
                  auVar22._0_4_ = fVar97;
                  auVar22._8_4_ = fVar99;
                  auVar22._12_4_ = fVar100;
                  auVar78 = NEON_ext(auVar21,auVar22,8,1);
                  if (fVar97 + fVar98 + auVar78._0_4_ < 0.0) {
                    auVar103._0_4_ = -auVar103._0_4_;
                    auVar103._4_4_ = -auVar103._4_4_;
                    auVar103._8_4_ = -auVar103._8_4_;
                  }
                  uVar64 = CONCAT44(fVar65 - fVar63 * auVar103._4_4_,
                                    (float)uVar64 - fVar96 * auVar103._0_4_);
                  uVar66 = CONCAT44(fVar67 - fVar63 * fVar110,
                                    (float)uVar66 - fVar96 * auVar103._8_4_);
                  puVar3 = (undefined8 *)(lVar57 + uVar54 * 0x10);
                  puVar3[1] = uVar66;
                  *puVar3 = uVar64;
                  bVar44 = *pbVar40;
                }
                bVar43 = bVar43 + 1;
              } while (bVar43 < bVar44);
              bVar43 = *pbVar56;
            }
            bVar55 = bVar55 + 1;
            if (bVar43 <= bVar55) break;
            lVar37 = *(long *)(param_4 + 0x20);
          }
        }
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 != (int)uVar2);
    if (*(int *)(lVar59 + 0x238) != 0) {
      lVar48 = 0;
      do {
        uVar54 = (ulong)*(ushort *)(lVar33 + lVar48 * 2);
        uVar53 = (ulong)*(ushort *)(*(long *)(lVar59 + 0x2a0) + uVar54 * 2);
        if (uVar53 != 0xffff) {
          lVar38 = *(long *)(lVar59 + 0x230);
          fVar4 = *(float *)(*(long *)(lVar59 + 0x40) + uVar54 * 0x10 + 8);
          pbVar56 = (byte *)(lVar38 + uVar53 * 6 + 4);
          bVar43 = *pbVar56;
          if (bVar43 != 0) {
            lVar57 = *(long *)(param_4 + 0x20);
            bVar55 = 0;
            puVar3 = (undefined8 *)(lVar57 + uVar54 * 0x10);
            uVar66 = puVar3[1];
            uVar64 = *puVar3;
            lVar37 = lVar57;
            while( true ) {
              puVar42 = (ushort *)
                        (*(long *)(lVar59 + 0x220) +
                        (ulong)(ushort)(*(short *)(lVar38 + uVar53 * 6 + 2) + (ushort)bVar55) * 4);
              puVar3 = (undefined8 *)(lVar37 + (ulong)*puVar42 * 0x10);
              uVar89 = puVar3[1];
              uVar88 = *puVar3;
              puVar42 = (ushort *)(*(long *)(lVar59 + 0x1f0) + (ulong)puVar42[1] * 4);
              puVar39 = puVar42 + 1;
              bVar44 = (byte)*puVar39;
              if (bVar44 != 0) {
                fVar73 = (float)uVar64;
                uVar27 = (ulong)uVar64 >> 0x20;
                fVar75 = (float)uVar66;
                uVar28 = (ulong)uVar66 >> 0x20;
                bVar43 = 0;
                do {
                  fVar68 = *(float *)(*(long *)(lVar59 + 0x1e0) +
                                     ((ulong)((uint)*puVar42 + (uint)bVar43) & 0xffff) * 4);
                  fVar69 = (float)((ulong)uVar64 >> 0x20);
                  fVar70 = (float)((ulong)uVar66 >> 0x20);
                  uVar17 = *(undefined8 *)(*(long *)(lVar47 + 0x20) + 0xffff8);
                  fVar74 = (float)uVar17;
                  fVar76 = (float)((ulong)uVar17 >> 0x20);
                  uVar17 = *(undefined8 *)(*(long *)(lVar47 + 0x20) + 0xffff0);
                  fVar71 = (float)uVar17;
                  fVar72 = (float)((ulong)uVar17 >> 0x20);
                  auVar80._0_4_ = fVar71 * ((float)uVar64 + ((float)uVar88 - fVar73) * fVar68);
                  auVar80._4_4_ =
                       fVar72 * (fVar69 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar27) * fVar68)
                  ;
                  auVar80._8_4_ = fVar74 * ((float)uVar66 + ((float)uVar89 - fVar75) * fVar68);
                  auVar80._12_4_ =
                       fVar76 * (fVar70 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar28) * fVar68)
                  ;
                  auVar78 = NEON_ext(auVar80,auVar80,8,1);
                  fVar68 = auVar78._0_4_ + fVar76;
                  fVar77 = (fVar4 + auVar80._0_4_ + auVar80._4_4_ + fVar68) - fVar4;
                  fVar68 = (fVar4 + auVar80._0_4_ + auVar80._4_4_ + fVar68) - fVar4;
                  if (fVar77 < 0.0) {
                    uVar64 = CONCAT44(fVar69 - fVar72 * fVar68,(float)uVar64 - fVar71 * fVar77);
                    uVar66 = CONCAT44(fVar70 - fVar76 * fVar68,(float)uVar66 - fVar74 * fVar77);
                    puVar3 = (undefined8 *)(lVar57 + uVar54 * 0x10);
                    puVar3[1] = uVar66;
                    *puVar3 = uVar64;
                    bVar44 = (byte)*puVar39;
                  }
                  bVar43 = bVar43 + 1;
                } while (bVar43 < bVar44);
                bVar43 = *pbVar56;
              }
              bVar55 = bVar55 + 1;
              if (bVar43 <= bVar55) break;
              lVar37 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar48 = lVar48 + 1;
      } while (lVar48 != (int)uVar2);
    }
  }
  lVar59 = FUN_0043c4e0(DAT_04c6f050);
  lVar47 = DAT_04c6f058;
  if (lVar59 != 0) {
    lVar47 = lVar59;
  }
  if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != lVar34 + uVar36)) ||
     (*(long *)(lVar47 + 0x28) == lVar34)) {
    FUN_00439980(lVar47,lVar34,uVar36);
  }
  else {
    *(long *)(lVar47 + 0x18) = lVar34;
  }
  lVar59 = FUN_0043c4e0(DAT_04c6f050);
  lVar47 = DAT_04c6f058;
  if (lVar59 != 0) {
    lVar47 = lVar59;
  }
  if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != lVar35 + uVar36)) ||
     (*(long *)(lVar47 + 0x28) == lVar35)) {
    FUN_00439980(lVar47,lVar35,uVar36);
  }
  else {
    *(long *)(lVar47 + 0x18) = lVar35;
  }
LAB_005e8b7c:
  uVar46 = local_a0;
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  lVar59 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar47 = DAT_04c6f058;
  if (lVar59 != 0) {
    lVar47 = lVar59;
  }
  uVar36 = (ulong)(int)(uVar46 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar47 + 0x10) < uVar36) || (*(long *)(lVar47 + 0x18) != uVar36 + lVar33)) ||
     (*(long *)(lVar47 + 0x28) == lVar33)) {
    FUN_00439980(lVar47,lVar33);
  }
  else {
    *(long *)(lVar47 + 0x18) = lVar33;
  }
  return;
}

