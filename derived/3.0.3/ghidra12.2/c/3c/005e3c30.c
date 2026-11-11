
void FUN_005e3c30(undefined8 param_1,uint param_2,ulong param_3,long param_4,ulong param_5,
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
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ushort *puVar29;
  byte *pbVar30;
  long lVar31;
  long lVar32;
  byte bVar33;
  byte bVar34;
  ulong uVar35;
  ushort uVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  float *pfVar41;
  long lVar42;
  char *pcVar43;
  long lVar44;
  uint *puVar45;
  long lVar46;
  ulong uVar47;
  byte bVar48;
  ulong uVar49;
  byte *pbVar50;
  long lVar51;
  ushort *puVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  undefined8 uVar64;
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  float fVar101;
  undefined1 auVar97 [12];
  undefined1 auVar98 [12];
  undefined1 auVar99 [12];
  undefined1 auVar100 [12];
  int iVar102;
  int iVar103;
  float fVar104;
  float fVar105;
  long local_300;
  ulong uStack_2f8;
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
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar46 = *(long *)(param_4 + 0x18);
  uVar2 = *(uint *)(lVar46 + 0x48);
  lVar38 = *(long *)(param_4 + 400);
  if ((param_3 & 1) == 0) {
    uVar37 = param_2;
    if (0x1d < (int)param_2) {
      uVar37 = 0x1e;
    }
    uVar37 = 1 << (ulong)(uVar37 & 0x1f);
  }
  else {
    uVar37 = 0;
  }
  local_2b0 = 0;
  local_2a8 = 0x8000000000000000;
  local_298 = uVar2;
  if (uVar2 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = FUN_0043c4e0(DAT_04c6f050);
    lVar39 = DAT_04c6f058;
    if (lVar26 != 0) {
      lVar39 = lVar26;
    }
    uVar35 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar39 + 0x10) < uVar35) {
LAB_005e3d08:
      lVar26 = FUN_00439510();
    }
    else {
      lVar26 = *(long *)(lVar39 + 0x18);
      uVar35 = lVar26 + uVar35;
      if (*(ulong *)(lVar39 + 0x20) < uVar35) goto LAB_005e3d08;
      *(ulong *)(lVar39 + 0x18) = uVar35;
    }
  }
  lVar39 = lVar38 + (long)(int)param_2 * 0xa0;
  local_2a8._4_4_ = uVar2 | 0x80000000;
  if (uVar2 != 0) {
    local_2a8._0_4_ = uVar2;
  }
  lVar40 = (long)(int)param_2;
  local_2b0 = lVar26;
  local_2a0 = lVar26;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e3e74;
      puVar45 = *(uint **)(lVar46 + 0xe8);
      uVar36 = 0;
      uVar56 = 0;
      do {
        if ((*puVar45 & uVar37) != 0) {
          *(ushort *)(lVar26 + (long)(int)uVar56 * 2) = uVar36;
          uVar56 = uVar56 + 1;
        }
        uVar36 = uVar36 + 1;
        puVar45 = puVar45 + 1;
      } while ((int)(uint)uVar36 < (int)uVar2);
LAB_005e3e48:
      bVar23 = SBORROW4(uVar2,uVar56);
      bVar24 = (int)(uVar2 - uVar56) < 0;
      bVar25 = uVar2 == uVar56;
      if ((int)uVar2 < (int)uVar56) goto LAB_005e3e80;
LAB_005e3e50:
      if (!bVar25 && bVar24 == bVar23) goto LAB_005e3e80;
    }
    else {
      if (0 < (int)uVar2) {
        uVar36 = 0;
        uVar56 = 0;
        pfVar41 = (float *)(*(long *)(lVar46 + 0x40) + 4);
        do {
          if (*pfVar41 != 0.0) {
            *(ushort *)(lVar26 + (long)(int)uVar56 * 2) = uVar36;
            uVar56 = uVar56 + 1;
          }
          uVar36 = uVar36 + 1;
          pfVar41 = pfVar41 + 4;
        } while ((int)(uint)uVar36 < (int)uVar2);
        goto LAB_005e3e48;
      }
LAB_005e3e74:
      uVar56 = 0;
      bVar23 = false;
      bVar25 = uVar2 == 0;
      bVar24 = false;
      if (-1 < (int)uVar2) goto LAB_005e3e50;
LAB_005e3e80:
      uVar2 = uVar56;
      local_2a8._0_4_ = uVar56;
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
      lVar27 = FUN_0043c4e0(DAT_04c6f050);
      lVar28 = DAT_04c6f058;
      if (lVar27 != 0) {
        lVar28 = lVar27;
      }
      uVar35 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
      if (*(ulong *)(lVar28 + 0x10) < uVar35) {
LAB_005e3dc4:
        local_2c0 = FUN_00439510();
      }
      else {
        local_2c0 = *(long *)(lVar28 + 0x18);
        uVar35 = local_2c0 + uVar35;
        if (*(ulong *)(lVar28 + 0x20) < uVar35) goto LAB_005e3dc4;
        *(ulong *)(lVar28 + 0x18) = uVar35;
      }
      if (uVar2 != 0) {
        local_2c8._0_4_ = uVar2;
      }
    }
    lVar28 = local_2c0;
    local_2c8._4_4_ = uVar2 | 0x80000000;
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005e47c8;
      pcVar43 = *(char **)(lVar46 + 0x188);
      puVar45 = *(uint **)(lVar46 + 0xe8);
      uVar36 = 0;
      uVar56 = 0;
      uVar55 = 0;
      do {
        uVar54 = uVar55;
        if ((*puVar45 & uVar37) != 0) {
          if (*pcVar43 == '\0') {
            uVar22 = uVar56 + 1;
            lVar27 = lVar26;
            uVar55 = uVar56;
          }
          else {
            uVar54 = uVar55 + 1;
            uVar22 = uVar56;
            lVar27 = local_2c0;
          }
          uVar56 = uVar22;
          *(ushort *)(lVar27 + (long)(int)uVar55 * 2) = uVar36;
        }
        uVar36 = uVar36 + 1;
        puVar45 = puVar45 + 1;
        pcVar43 = pcVar43 + 1;
        uVar55 = uVar54;
      } while ((int)(uint)uVar36 < (int)uVar2);
LAB_005e47ac:
      uVar37 = uVar54;
      uVar55 = uVar54;
      if (uVar2 == uVar54) {
LAB_005e47b8:
        uVar37 = uVar2;
        uVar55 = (uint)local_2c8;
      }
    }
    else {
      if (0 < (int)uVar2) {
        pcVar43 = *(char **)(lVar46 + 0x188);
        uVar36 = 0;
        uVar54 = 0;
        uVar56 = 0;
        pfVar41 = (float *)(*(long *)(lVar46 + 0x40) + 4);
        do {
          if (*pfVar41 != 0.0) {
            if (*pcVar43 == '\0') {
              uVar37 = uVar54;
              uVar55 = uVar56 + 1;
              lVar27 = lVar26;
              uVar54 = uVar56;
            }
            else {
              uVar37 = uVar54 + 1;
              uVar55 = uVar56;
              lVar27 = local_2c0;
            }
            uVar56 = uVar55;
            *(ushort *)(lVar27 + (long)(int)uVar54 * 2) = uVar36;
            uVar54 = uVar37;
          }
          uVar36 = uVar36 + 1;
          pcVar43 = pcVar43 + 1;
          pfVar41 = pfVar41 + 4;
        } while ((int)(uint)uVar36 < (int)uVar2);
        goto LAB_005e47ac;
      }
LAB_005e47c8:
      uVar56 = 0;
      uVar54 = 0;
      uVar37 = uVar54;
      uVar55 = uVar54;
      if (uVar2 == 0) goto LAB_005e47b8;
    }
    local_2c8._0_4_ = uVar55;
    uVar55 = uVar56;
    uVar22 = uVar56;
    if (uVar2 == uVar56) {
      uVar55 = uVar2;
      uVar22 = (uint)local_2a8;
    }
    local_2a8._0_4_ = uVar22;
    local_2d0 = local_2c0;
    if (uVar54 != 0) {
      local_300 = *(long *)(param_4 + 0x220);
      local_2e0 = *(ushort *)(lVar46 + 0x1a8);
      uStack_2f8 = *(ulong *)(param_4 + 0x228);
      local_2f0 = *(long *)(param_4 + 0x230);
      local_2e8 = *(undefined8 *)(param_4 + 0x210);
      if (param_7 == 0) {
        local_290 = 0;
        local_288 = 0x8000000000000000;
        local_278 = uVar54;
        lVar32 = FUN_0043c4e0(DAT_04c6f050);
        lVar27 = DAT_04c6f058;
        if (lVar32 != 0) {
          lVar27 = lVar32;
        }
        uVar35 = (ulong)(int)(uVar54 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar27 + 0x10) < uVar35) {
LAB_005e48e8:
          lVar32 = FUN_00439510(lVar27,uVar35);
        }
        else {
          lVar32 = *(long *)(lVar27 + 0x18);
          if (*(ulong *)(lVar27 + 0x20) < lVar32 + uVar35) goto LAB_005e48e8;
          *(ulong *)(lVar27 + 0x18) = lVar32 + uVar35;
        }
        local_288 = CONCAT44(uVar54,(undefined4)local_288) | 0x8000000000000000;
        local_290 = lVar32;
        local_280 = lVar32;
        lVar42 = FUN_0043c4e0(DAT_04c6f050);
        lVar27 = DAT_04c6f058;
        if (lVar42 != 0) {
          lVar27 = lVar42;
        }
        if (*(ulong *)(lVar27 + 0x10) < uVar35) {
LAB_005e53c8:
          lVar42 = FUN_00439510(lVar27,uVar35);
        }
        else {
          lVar42 = *(long *)(lVar27 + 0x18);
          if (*(ulong *)(lVar27 + 0x20) < lVar42 + uVar35) goto LAB_005e53c8;
          *(ulong *)(lVar27 + 0x18) = lVar42 + uVar35;
        }
        local_288 = CONCAT44(local_288._4_4_,uVar54);
        if (0 < (int)uVar54) {
          uVar47 = 0;
          do {
            uVar49 = uVar47 & 0xffff;
            uVar2 = (int)uVar47 + 1;
            uVar47 = (ulong)uVar2;
            lVar44 = uVar49 * 4;
            lVar27 = *(long *)(lVar46 + 0x40) + (ulong)*(ushort *)(lVar28 + uVar49 * 2) * 0x10;
            *(undefined4 *)(lVar32 + lVar44) = *(undefined4 *)(lVar27 + 8);
            *(undefined4 *)(lVar42 + lVar44) = *(undefined4 *)(lVar27 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar54);
        }
        FUN_00614d50(param_1,lVar39,&local_2d0,&local_290,param_4,&local_300);
        lVar44 = FUN_0043c4e0(DAT_04c6f050);
        lVar27 = DAT_04c6f058;
        if (lVar44 != 0) {
          lVar27 = lVar44;
        }
        if (((*(ulong *)(lVar27 + 0x10) < uVar35) || (*(long *)(lVar27 + 0x18) != lVar42 + uVar35))
           || (*(long *)(lVar27 + 0x28) == lVar42)) {
          FUN_00439980(lVar27,lVar42,uVar35);
        }
        else {
          *(long *)(lVar27 + 0x18) = lVar42;
        }
        uVar2 = local_278;
        local_288 = local_288 & 0xffffffff00000000;
        lVar42 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
        lVar27 = DAT_04c6f058;
        if (lVar42 != 0) {
          lVar27 = lVar42;
        }
        uVar35 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar27 + 0x10) < uVar35) || (*(long *)(lVar27 + 0x18) != lVar32 + uVar35))
           || (*(long *)(lVar27 + 0x28) == lVar32)) {
          FUN_00439980(lVar27,lVar32);
        }
        else {
          *(long *)(lVar27 + 0x18) = lVar32;
        }
      }
      else {
        lVar32 = FUN_0043c4e0(DAT_04c6f050);
        lVar27 = DAT_04c6f058;
        if (lVar32 != 0) {
          lVar27 = lVar32;
        }
        uVar35 = (ulong)(int)(uVar54 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar27 + 0x10) < uVar35) {
LAB_005e487c:
          lVar32 = FUN_00439510(lVar27,uVar35);
        }
        else {
          lVar32 = *(long *)(lVar27 + 0x18);
          if (*(ulong *)(lVar27 + 0x20) < lVar32 + uVar35) goto LAB_005e487c;
          *(ulong *)(lVar27 + 0x18) = lVar32 + uVar35;
        }
        lVar42 = FUN_0043c4e0(DAT_04c6f050);
        lVar27 = DAT_04c6f058;
        if (lVar42 != 0) {
          lVar27 = lVar42;
        }
        if (*(ulong *)(lVar27 + 0x10) < uVar35) {
LAB_005e4ad8:
          lVar42 = FUN_00439510(lVar27,uVar35);
        }
        else {
          lVar42 = *(long *)(lVar27 + 0x18);
          if (*(ulong *)(lVar27 + 0x20) < lVar42 + uVar35) goto LAB_005e4ad8;
          *(ulong *)(lVar27 + 0x18) = lVar42 + uVar35;
        }
        if (0 < (int)uVar54) {
          uVar47 = 0;
          do {
            uVar49 = uVar47 & 0xffff;
            uVar2 = (int)uVar47 + 1;
            uVar47 = (ulong)uVar2;
            lVar44 = uVar49 * 4;
            lVar27 = *(long *)(lVar46 + 0x40) + (ulong)*(ushort *)(lVar28 + uVar49 * 2) * 0x10;
            *(undefined4 *)(lVar32 + lVar44) = *(undefined4 *)(lVar27 + 8);
            *(undefined4 *)(lVar42 + lVar44) = *(undefined4 *)(lVar27 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar54);
        }
        lVar44 = lVar38 + lVar40 * 0xa0;
        lVar27 = *(long *)(lVar39 + 0x88);
        uVar64 = *(undefined8 *)(lVar27 + 0x28);
        fVar61 = (float)uVar64;
        uVar62 = *(undefined8 *)(lVar27 + 0x20);
        fVar71 = (float)uVar62;
        fVar67 = (float)((ulong)uVar62 >> 0x20);
        fVar58 = (float)*(undefined8 *)(lVar44 + 0x40) * fVar61 +
                 (float)*(undefined8 *)(lVar44 + 0x20) * fVar71 +
                 (float)*(undefined8 *)(lVar44 + 0x30) * fVar67;
        fVar59 = (float)((ulong)*(undefined8 *)(lVar44 + 0x40) >> 0x20) * fVar61 +
                 (float)((ulong)*(undefined8 *)(lVar44 + 0x20) >> 0x20) * fVar71 +
                 (float)((ulong)*(undefined8 *)(lVar44 + 0x30) >> 0x20) * fVar67;
        local_90 = CONCAT44(fVar59,fVar58);
        fVar60 = (float)*(undefined8 *)(lVar44 + 0x48) * fVar61 +
                 (float)*(undefined8 *)(lVar44 + 0x28) * fVar71 +
                 (float)*(undefined8 *)(lVar44 + 0x38) * fVar67;
        fVar58 = *(float *)(lVar44 + 0x50) * fVar58;
        fVar59 = *(float *)(lVar44 + 0x54) * fVar59;
        fVar69 = *(float *)(lVar44 + 0x58) * fVar60;
        fVar71 = *(float *)(lVar44 + 0x5c) *
                 ((float)((ulong)*(undefined8 *)(lVar44 + 0x48) >> 0x20) * fVar61 +
                 (float)((ulong)*(undefined8 *)(lVar44 + 0x28) >> 0x20) * fVar71 +
                 (float)((ulong)*(undefined8 *)(lVar44 + 0x38) >> 0x20) * fVar67);
        auVar73._4_4_ = fVar59;
        auVar73._0_4_ = fVar58;
        auVar73._8_4_ = fVar69;
        auVar73._12_4_ = fVar71;
        auVar78._4_4_ = fVar59;
        auVar78._0_4_ = fVar58;
        auVar78._8_4_ = fVar69;
        auVar78._12_4_ = fVar71;
        auVar73 = NEON_ext(auVar73,auVar78,8,1);
        uStack_88 = CONCAT44((float)((ulong)uVar64 >> 0x20) - (fVar58 + fVar59 + auVar73._0_4_),
                             fVar60);
        FUN_0053da30(&local_290,&local_90);
        lVar27 = *(long *)(param_4 + 0x18);
        fVar58 = (float)local_270;
        fVar59 = (float)((ulong)local_270 >> 0x20);
        fVar60 = (float)uStack_268;
        fVar71 = (float)((ulong)uStack_268 >> 0x20);
        if (param_7 == 2) {
          if (0 < (int)uVar37) {
            lVar44 = 0;
            pcVar43 = (char *)(lVar38 + lVar40 * 0xa0 + 0x9c);
            do {
              uVar47 = (ulong)*(ushort *)(lVar28 + lVar44 * 2);
              if (((*(char *)(local_2f0 + (uVar47 - local_2e0)) <= *pcVar43) &&
                  (*(char *)(uStack_2f8 + (uVar47 - local_2e0)) == '\0')) &&
                 (uVar49 = (ulong)*(ushort *)(*(long *)(lVar27 + 0x2d0) + uVar47 * 2),
                 uVar49 != 0xffff)) {
                fVar67 = *(float *)(*(long *)(lVar27 + 0x40) + uVar47 * 0x10 + 8);
                lVar31 = *(long *)(lVar27 + 0x290) + uVar49 * 8;
                pbVar50 = (byte *)(lVar31 + 6);
                bVar33 = *pbVar50;
                if (bVar33 != 0) {
                  lVar51 = *(long *)(param_4 + 0x20);
                  puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                  uVar64 = puVar3[1];
                  uVar62 = *puVar3;
                  bVar48 = 0;
                  lVar53 = lVar51;
                  while( true ) {
                    puVar29 = (ushort *)
                              (*(long *)(lVar27 + 0x280) +
                              ((ulong)((uint)*(ushort *)(lVar31 + 2) + (uint)bVar48) & 0xffff) * 6);
                    puVar3 = (undefined8 *)(lVar53 + (ulong)*puVar29 * 0x10);
                    uVar88 = puVar3[1];
                    uVar87 = *puVar3;
                    auVar73 = *(undefined1 (*) [16])(lVar53 + (ulong)puVar29[1] * 0x10);
                    psVar1 = (short *)(*(long *)(lVar27 + 0x210) + (ulong)puVar29[2] * 4);
                    pbVar30 = (byte *)(psVar1 + 1);
                    bVar34 = *pbVar30;
                    if (bVar34 != 0) {
                      fVar66 = (float)uVar87 - (float)uVar62;
                      fVar61 = (float)((ulong)uVar62 >> 0x20);
                      fVar68 = (float)((ulong)uVar87 >> 0x20) - fVar61;
                      fVar70 = (float)uVar88 - (float)uVar64;
                      fVar69 = (float)((ulong)uVar64 >> 0x20);
                      fVar72 = (float)((ulong)uVar88 >> 0x20) - fVar69;
                      auVar10._4_4_ = fVar68;
                      auVar10._0_4_ = fVar66;
                      auVar10._8_4_ = fVar70;
                      auVar10._12_4_ = fVar72;
                      auVar11._4_4_ = fVar68;
                      auVar11._0_4_ = fVar66;
                      auVar11._8_4_ = fVar70;
                      auVar11._12_4_ = fVar72;
                      auVar78 = NEON_ext(auVar10,auVar11,4,1);
                      auVar76._0_4_ = auVar73._0_4_ - (float)uVar62;
                      auVar76._4_4_ = auVar73._4_4_ - fVar61;
                      auVar76._8_4_ = auVar73._8_4_ - (float)uVar64;
                      auVar76._12_4_ = auVar73._12_4_ - fVar69;
                      auVar73 = NEON_ext(auVar76,auVar76,4,1);
                      auVar89 = NEON_ext(auVar78,auVar78,8,1);
                      auVar90 = NEON_ext(auVar73,auVar73,8,1);
                      uVar87 = NEON_rev64(auVar89._0_8_,4);
                      uVar88 = NEON_rev64(auVar90._0_8_,4);
                      bVar33 = 0;
                      auVar85._0_4_ = fVar66 * auVar73._0_4_ - auVar76._0_4_ * auVar78._0_4_;
                      auVar85._4_4_ = fVar68 * auVar73._4_4_ - auVar76._4_4_ * auVar78._4_4_;
                      auVar85._8_4_ = fVar70 * (float)uVar88 - auVar76._8_4_ * (float)uVar87;
                      auVar85._12_4_ =
                           fVar72 * (float)((ulong)uVar88 >> 0x20) -
                           auVar76._12_4_ * (float)((ulong)uVar87 >> 0x20);
                      auVar73 = NEON_ext(auVar85,auVar85,4,1);
                      fVar61 = auVar73._0_4_;
                      fVar69 = auVar73._4_4_;
                      do {
                        pfVar41 = (float *)(*(long *)(lVar27 + 0x200) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar33) * 8);
                        fVar57 = *pfVar41;
                        fVar95 = pfVar41[1];
                        fVar63 = (float)((ulong)uVar62 >> 0x20);
                        fVar65 = (float)((ulong)uVar64 >> 0x20);
                        auVar93._0_4_ =
                             fVar58 * ((float)uVar62 + fVar66 * fVar57 + auVar76._0_4_ * fVar95);
                        auVar93._4_4_ = fVar59 * (fVar63 + fVar68 * fVar57 + auVar76._4_4_ * fVar95)
                        ;
                        auVar93._8_4_ =
                             fVar60 * ((float)uVar64 + fVar70 * fVar57 + auVar76._8_4_ * fVar95);
                        auVar93._12_4_ =
                             fVar71 * (fVar65 + fVar72 * fVar57 + auVar76._12_4_ * fVar95);
                        auVar73 = NEON_ext(auVar93,auVar93,8,1);
                        fVar57 = auVar73._0_4_ + fVar71;
                        fVar95 = (auVar93._0_4_ + auVar93._4_4_ + fVar57) - fVar67;
                        fVar57 = (auVar93._0_4_ + auVar93._4_4_ + fVar57) - fVar67;
                        if (fVar95 < 0.0) {
                          fVar96 = auVar85._0_4_ * auVar85._0_4_ + fVar61 * fVar61 + fVar69 * fVar69
                          ;
                          fVar101 = auVar85._0_4_ * auVar85._0_4_ +
                                    fVar61 * fVar61 + fVar69 * fVar69;
                          uVar87 = CONCAT44(fVar101,fVar96);
                          uVar88 = NEON_frsqrte(uVar87,4);
                          fVar104 = (float)uVar88;
                          fVar105 = (float)((ulong)uVar88 >> 0x20);
                          uVar88 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104)
                                                ,4);
                          fVar104 = fVar104 * (float)uVar88;
                          fVar105 = fVar105 * (float)((ulong)uVar88 >> 0x20);
                          iVar102 = -(uint)(fVar96 <= 0.0);
                          iVar103 = -(uint)(fVar101 <= 0.0);
                          uVar87 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104)
                                                ,4);
                          fVar104 = (float)uVar87 * fVar104;
                          fVar105 = (float)((ulong)uVar87 >> 0x20) * fVar105;
                          fVar96 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                                   ~(byte)((uint)iVar102 >> 0x18),
                                                   CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                            ~(byte)((uint)iVar102 >> 0x10),
                                                            CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                     ~(byte)((uint)iVar102 >> 8),
                                                                     SUB41(fVar104,0) &
                                                                     ~(byte)iVar102)));
                          auVar99._0_4_ = fVar61 * fVar96;
                          fVar105 = (float)(CONCAT17((byte)((uint)fVar105 >> 0x18) &
                                                     ~(byte)((uint)iVar103 >> 0x18),
                                                     CONCAT16((byte)((uint)fVar105 >> 0x10) &
                                                              ~(byte)((uint)iVar103 >> 0x10),
                                                              CONCAT15((byte)((uint)fVar105 >> 8) &
                                                                       ~(byte)((uint)iVar103 >> 8),
                                                                       CONCAT14(SUB41(fVar105,0) &
                                                                                ~(byte)iVar103,
                                                                                fVar96)))) >> 0x20);
                          auVar99._4_4_ = fVar69 * fVar105;
                          auVar99._8_4_ = auVar85._0_4_ * fVar96;
                          fVar105 = auVar85._4_4_ * fVar105;
                          fVar96 = fVar58 * auVar99._0_4_;
                          fVar104 = fVar59 * auVar99._4_4_;
                          fVar101 = fVar71 * fVar105;
                          auVar16._4_4_ = fVar104;
                          auVar16._0_4_ = fVar96;
                          auVar16._8_4_ = fVar60 * auVar99._8_4_;
                          auVar16._12_4_ = fVar101;
                          auVar17._4_4_ = fVar104;
                          auVar17._0_4_ = fVar96;
                          auVar17._8_4_ = fVar60 * auVar99._8_4_;
                          auVar17._12_4_ = fVar101;
                          auVar73 = NEON_ext(auVar16,auVar17,8,1);
                          if (fVar96 + fVar104 + auVar73._0_4_ < 0.0) {
                            auVar99._0_4_ = -auVar99._0_4_;
                            auVar99._4_4_ = -auVar99._4_4_;
                            auVar99._8_4_ = -auVar99._8_4_;
                          }
                          uVar62 = CONCAT44(fVar63 - fVar57 * auVar99._4_4_,
                                            (float)uVar62 - fVar95 * auVar99._0_4_);
                          uVar64 = CONCAT44(fVar65 - fVar57 * fVar105,
                                            (float)uVar64 - fVar95 * auVar99._8_4_);
                          puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                          puVar3[1] = uVar64;
                          *puVar3 = uVar62;
                          bVar34 = *pbVar30;
                        }
                        bVar33 = bVar33 + 1;
                      } while (bVar33 < bVar34);
                      bVar33 = *pbVar50;
                    }
                    bVar48 = bVar48 + 1;
                    if (bVar33 <= bVar48) break;
                    lVar53 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar44 = lVar44 + 1;
            } while (lVar44 != (int)uVar37);
            if (*(int *)(lVar27 + 0x278) != 0) {
              lVar44 = 0;
              do {
                uVar47 = (ulong)*(ushort *)(lVar28 + lVar44 * 2);
                if (((*(char *)(local_2f0 + (uVar47 - local_2e0)) <= *pcVar43) &&
                    (*(char *)(uStack_2f8 + (uVar47 - local_2e0)) == '\0')) &&
                   (uVar49 = (ulong)*(ushort *)(*(long *)(lVar27 + 0x2c0) + uVar47 * 2),
                   uVar49 != 0xffff)) {
                  fVar67 = *(float *)(*(long *)(lVar27 + 0x40) + uVar47 * 0x10 + 8);
                  lVar31 = *(long *)(lVar27 + 0x270) + uVar49 * 8;
                  pbVar50 = (byte *)(lVar31 + 6);
                  bVar33 = *pbVar50;
                  if (bVar33 != 0) {
                    lVar51 = *(long *)(param_4 + 0x20);
                    puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                    uVar64 = puVar3[1];
                    uVar62 = *puVar3;
                    bVar48 = 0;
                    lVar53 = lVar51;
                    while( true ) {
                      puVar29 = (ushort *)
                                (*(long *)(lVar27 + 0x260) +
                                (ulong)(ushort)(*(short *)(lVar31 + 2) + (ushort)bVar48) * 4);
                      puVar3 = (undefined8 *)(lVar53 + (ulong)*puVar29 * 0x10);
                      uVar88 = puVar3[1];
                      uVar87 = *puVar3;
                      puVar29 = (ushort *)(*(long *)(lVar27 + 0x1f0) + (ulong)puVar29[1] * 4);
                      puVar52 = puVar29 + 1;
                      bVar34 = (byte)*puVar52;
                      if (bVar34 != 0) {
                        fVar61 = (float)uVar62;
                        uVar49 = (ulong)uVar62 >> 0x20;
                        fVar69 = (float)uVar64;
                        uVar20 = (ulong)uVar64 >> 0x20;
                        bVar33 = 0;
                        do {
                          fVar66 = *(float *)(*(long *)(lVar27 + 0x1e0) +
                                             ((ulong)((uint)*puVar29 + (uint)bVar33) & 0xffff) * 4);
                          fVar68 = (float)((ulong)uVar62 >> 0x20);
                          fVar70 = (float)((ulong)uVar64 >> 0x20);
                          auVar81._0_4_ =
                               fVar58 * ((float)uVar62 + ((float)uVar87 - fVar61) * fVar66);
                          auVar81._4_4_ =
                               fVar59 * (fVar68 + ((float)((ulong)uVar87 >> 0x20) - (float)uVar49) *
                                                  fVar66);
                          auVar81._8_4_ =
                               fVar60 * ((float)uVar64 + ((float)uVar88 - fVar69) * fVar66);
                          auVar81._12_4_ =
                               fVar71 * (fVar70 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar20) *
                                                  fVar66);
                          auVar73 = NEON_ext(auVar81,auVar81,8,1);
                          fVar66 = auVar73._0_4_ + fVar71;
                          fVar72 = (auVar81._0_4_ + auVar81._4_4_ + fVar66) - fVar67;
                          fVar66 = (auVar81._0_4_ + auVar81._4_4_ + fVar66) - fVar67;
                          if (fVar72 < 0.0) {
                            uVar62 = CONCAT44(fVar68 - fVar59 * fVar66,
                                              (float)uVar62 - fVar58 * fVar72);
                            uVar64 = CONCAT44(fVar70 - fVar71 * fVar66,
                                              (float)uVar64 - fVar60 * fVar72);
                            puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                            puVar3[1] = uVar64;
                            *puVar3 = uVar62;
                            bVar34 = (byte)*puVar52;
                          }
                          bVar33 = bVar33 + 1;
                        } while (bVar33 < bVar34);
                        bVar33 = *pbVar50;
                      }
                      bVar48 = bVar48 + 1;
                      if (bVar33 <= bVar48) break;
                      lVar53 = *(long *)(param_4 + 0x20);
                    }
                  }
                }
                lVar44 = lVar44 + 1;
              } while (lVar44 != (int)uVar37);
            }
          }
        }
        else if (0 < (int)uVar37) {
          lVar44 = 0;
          pcVar43 = (char *)(lVar38 + lVar40 * 0xa0 + 0x9c);
          do {
            uVar47 = (ulong)*(ushort *)(lVar28 + lVar44 * 2);
            if (((*(char *)(local_2f0 + (uVar47 - local_2e0)) <= *pcVar43) &&
                (*(char *)(uStack_2f8 + (uVar47 - local_2e0)) == '\0')) &&
               (uVar49 = (ulong)*(ushort *)(*(long *)(lVar27 + 0x2b0) + uVar47 * 2),
               uVar49 != 0xffff)) {
              lVar31 = *(long *)(lVar27 + 0x250);
              fVar67 = *(float *)(*(long *)(lVar27 + 0x40) + uVar47 * 0x10 + 8);
              pbVar50 = (byte *)(lVar31 + uVar49 * 6 + 4);
              bVar33 = *pbVar50;
              if (bVar33 != 0) {
                lVar51 = *(long *)(param_4 + 0x20);
                bVar48 = 0;
                puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                uVar64 = puVar3[1];
                uVar62 = *puVar3;
                lVar53 = lVar51;
                while( true ) {
                  puVar29 = (ushort *)
                            (*(long *)(lVar27 + 0x240) +
                            ((ulong)((uint)*(ushort *)(lVar31 + uVar49 * 6 + 2) + (uint)bVar48) &
                            0xffff) * 6);
                  puVar3 = (undefined8 *)(lVar53 + (ulong)*puVar29 * 0x10);
                  uVar88 = puVar3[1];
                  uVar87 = *puVar3;
                  auVar73 = *(undefined1 (*) [16])(lVar53 + (ulong)puVar29[1] * 0x10);
                  psVar1 = (short *)(*(long *)(lVar27 + 0x210) + (ulong)puVar29[2] * 4);
                  pbVar30 = (byte *)(psVar1 + 1);
                  bVar34 = *pbVar30;
                  if (bVar34 != 0) {
                    fVar66 = (float)uVar87 - (float)uVar62;
                    fVar61 = (float)((ulong)uVar62 >> 0x20);
                    fVar68 = (float)((ulong)uVar87 >> 0x20) - fVar61;
                    fVar70 = (float)uVar88 - (float)uVar64;
                    fVar69 = (float)((ulong)uVar64 >> 0x20);
                    fVar72 = (float)((ulong)uVar88 >> 0x20) - fVar69;
                    auVar89._4_4_ = fVar68;
                    auVar89._0_4_ = fVar66;
                    auVar89._8_4_ = fVar70;
                    auVar89._12_4_ = fVar72;
                    auVar90._4_4_ = fVar68;
                    auVar90._0_4_ = fVar66;
                    auVar90._8_4_ = fVar70;
                    auVar90._12_4_ = fVar72;
                    auVar78 = NEON_ext(auVar89,auVar90,4,1);
                    auVar77._0_4_ = auVar73._0_4_ - (float)uVar62;
                    auVar77._4_4_ = auVar73._4_4_ - fVar61;
                    auVar77._8_4_ = auVar73._8_4_ - (float)uVar64;
                    auVar77._12_4_ = auVar73._12_4_ - fVar69;
                    auVar73 = NEON_ext(auVar77,auVar77,4,1);
                    auVar89 = NEON_ext(auVar78,auVar78,8,1);
                    auVar90 = NEON_ext(auVar73,auVar73,8,1);
                    uVar87 = NEON_rev64(auVar89._0_8_,4);
                    uVar88 = NEON_rev64(auVar90._0_8_,4);
                    bVar33 = 0;
                    auVar86._0_4_ = fVar66 * auVar73._0_4_ - auVar77._0_4_ * auVar78._0_4_;
                    auVar86._4_4_ = fVar68 * auVar73._4_4_ - auVar77._4_4_ * auVar78._4_4_;
                    auVar86._8_4_ = fVar70 * (float)uVar88 - auVar77._8_4_ * (float)uVar87;
                    auVar86._12_4_ =
                         fVar72 * (float)((ulong)uVar88 >> 0x20) -
                         auVar77._12_4_ * (float)((ulong)uVar87 >> 0x20);
                    auVar73 = NEON_ext(auVar86,auVar86,4,1);
                    fVar61 = auVar73._0_4_;
                    fVar69 = auVar73._4_4_;
                    do {
                      pfVar41 = (float *)(*(long *)(lVar27 + 0x200) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar33) * 8);
                      fVar57 = *pfVar41;
                      fVar95 = pfVar41[1];
                      fVar63 = (float)((ulong)uVar62 >> 0x20);
                      fVar65 = (float)((ulong)uVar64 >> 0x20);
                      auVar94._0_4_ =
                           fVar58 * ((float)uVar62 + fVar66 * fVar57 + auVar77._0_4_ * fVar95);
                      auVar94._4_4_ = fVar59 * (fVar63 + fVar68 * fVar57 + auVar77._4_4_ * fVar95);
                      auVar94._8_4_ =
                           fVar60 * ((float)uVar64 + fVar70 * fVar57 + auVar77._8_4_ * fVar95);
                      auVar94._12_4_ = fVar71 * (fVar65 + fVar72 * fVar57 + auVar77._12_4_ * fVar95)
                      ;
                      auVar73 = NEON_ext(auVar94,auVar94,8,1);
                      fVar57 = auVar73._0_4_ + fVar71;
                      fVar95 = (auVar94._0_4_ + auVar94._4_4_ + fVar57) - fVar67;
                      fVar57 = (auVar94._0_4_ + auVar94._4_4_ + fVar57) - fVar67;
                      if (fVar95 < 0.0) {
                        fVar96 = auVar86._0_4_ * auVar86._0_4_ + fVar61 * fVar61 + fVar69 * fVar69;
                        fVar101 = auVar86._0_4_ * auVar86._0_4_ + fVar61 * fVar61 + fVar69 * fVar69;
                        uVar87 = CONCAT44(fVar101,fVar96);
                        uVar88 = NEON_frsqrte(uVar87,4);
                        fVar104 = (float)uVar88;
                        fVar105 = (float)((ulong)uVar88 >> 0x20);
                        uVar88 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104),4
                                             );
                        fVar104 = fVar104 * (float)uVar88;
                        fVar105 = fVar105 * (float)((ulong)uVar88 >> 0x20);
                        iVar102 = -(uint)(fVar96 <= 0.0);
                        iVar103 = -(uint)(fVar101 <= 0.0);
                        uVar87 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104),4
                                             );
                        fVar104 = (float)uVar87 * fVar104;
                        fVar105 = (float)((ulong)uVar87 >> 0x20) * fVar105;
                        fVar96 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                                 ~(byte)((uint)iVar102 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                          ~(byte)((uint)iVar102 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                   ~(byte)((uint)iVar102 >> 8),
                                                                   SUB41(fVar104,0) & ~(byte)iVar102
                                                                  )));
                        auVar100._0_4_ = fVar61 * fVar96;
                        fVar105 = (float)(CONCAT17((byte)((uint)fVar105 >> 0x18) &
                                                   ~(byte)((uint)iVar103 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar105 >> 0x10) &
                                                            ~(byte)((uint)iVar103 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar105 >> 8) &
                                                                     ~(byte)((uint)iVar103 >> 8),
                                                                     CONCAT14(SUB41(fVar105,0) &
                                                                              ~(byte)iVar103,fVar96)
                                                                    ))) >> 0x20);
                        auVar100._4_4_ = fVar69 * fVar105;
                        auVar100._8_4_ = auVar86._0_4_ * fVar96;
                        fVar105 = auVar86._4_4_ * fVar105;
                        fVar96 = fVar58 * auVar100._0_4_;
                        fVar104 = fVar59 * auVar100._4_4_;
                        fVar101 = fVar71 * fVar105;
                        auVar18._4_4_ = fVar104;
                        auVar18._0_4_ = fVar96;
                        auVar18._8_4_ = fVar60 * auVar100._8_4_;
                        auVar18._12_4_ = fVar101;
                        auVar19._4_4_ = fVar104;
                        auVar19._0_4_ = fVar96;
                        auVar19._8_4_ = fVar60 * auVar100._8_4_;
                        auVar19._12_4_ = fVar101;
                        auVar73 = NEON_ext(auVar18,auVar19,8,1);
                        if (fVar96 + fVar104 + auVar73._0_4_ < 0.0) {
                          auVar100._0_4_ = -auVar100._0_4_;
                          auVar100._4_4_ = -auVar100._4_4_;
                          auVar100._8_4_ = -auVar100._8_4_;
                        }
                        uVar62 = CONCAT44(fVar63 - fVar57 * auVar100._4_4_,
                                          (float)uVar62 - fVar95 * auVar100._0_4_);
                        uVar64 = CONCAT44(fVar65 - fVar57 * fVar105,
                                          (float)uVar64 - fVar95 * auVar100._8_4_);
                        puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                        puVar3[1] = uVar64;
                        *puVar3 = uVar62;
                        bVar34 = *pbVar30;
                      }
                      bVar33 = bVar33 + 1;
                    } while (bVar33 < bVar34);
                    bVar33 = *pbVar50;
                  }
                  bVar48 = bVar48 + 1;
                  if (bVar33 <= bVar48) break;
                  lVar53 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar44 = lVar44 + 1;
          } while (lVar44 != (int)uVar37);
          if (*(int *)(lVar27 + 0x238) != 0) {
            lVar44 = 0;
            do {
              uVar47 = (ulong)*(ushort *)(lVar28 + lVar44 * 2);
              if (((*(char *)(local_2f0 + (uVar47 - local_2e0)) <= *pcVar43) &&
                  (*(char *)(uStack_2f8 + (uVar47 - local_2e0)) == '\0')) &&
                 (uVar49 = (ulong)*(ushort *)(*(long *)(lVar27 + 0x2a0) + uVar47 * 2),
                 uVar49 != 0xffff)) {
                lVar31 = *(long *)(lVar27 + 0x230);
                fVar67 = *(float *)(*(long *)(lVar27 + 0x40) + uVar47 * 0x10 + 8);
                pbVar50 = (byte *)(lVar31 + uVar49 * 6 + 4);
                bVar33 = *pbVar50;
                if (bVar33 != 0) {
                  lVar51 = *(long *)(param_4 + 0x20);
                  bVar48 = 0;
                  puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                  uVar64 = puVar3[1];
                  uVar62 = *puVar3;
                  lVar53 = lVar51;
                  while( true ) {
                    puVar29 = (ushort *)
                              (*(long *)(lVar27 + 0x220) +
                              (ulong)(ushort)(*(short *)(lVar31 + uVar49 * 6 + 2) + (ushort)bVar48)
                              * 4);
                    puVar3 = (undefined8 *)(lVar53 + (ulong)*puVar29 * 0x10);
                    uVar88 = puVar3[1];
                    uVar87 = *puVar3;
                    puVar29 = (ushort *)(*(long *)(lVar27 + 0x1f0) + (ulong)puVar29[1] * 4);
                    puVar52 = puVar29 + 1;
                    bVar34 = (byte)*puVar52;
                    if (bVar34 != 0) {
                      fVar61 = (float)uVar62;
                      uVar20 = (ulong)uVar62 >> 0x20;
                      fVar69 = (float)uVar64;
                      uVar21 = (ulong)uVar64 >> 0x20;
                      bVar33 = 0;
                      do {
                        fVar66 = *(float *)(*(long *)(lVar27 + 0x1e0) +
                                           ((ulong)((uint)*puVar29 + (uint)bVar33) & 0xffff) * 4);
                        fVar68 = (float)((ulong)uVar62 >> 0x20);
                        fVar70 = (float)((ulong)uVar64 >> 0x20);
                        auVar82._0_4_ = fVar58 * ((float)uVar62 + ((float)uVar87 - fVar61) * fVar66)
                        ;
                        auVar82._4_4_ =
                             fVar59 * (fVar68 + ((float)((ulong)uVar87 >> 0x20) - (float)uVar20) *
                                                fVar66);
                        auVar82._8_4_ = fVar60 * ((float)uVar64 + ((float)uVar88 - fVar69) * fVar66)
                        ;
                        auVar82._12_4_ =
                             fVar71 * (fVar70 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar21) *
                                                fVar66);
                        auVar73 = NEON_ext(auVar82,auVar82,8,1);
                        fVar66 = auVar73._0_4_ + fVar71;
                        fVar72 = (auVar82._0_4_ + auVar82._4_4_ + fVar66) - fVar67;
                        fVar66 = (auVar82._0_4_ + auVar82._4_4_ + fVar66) - fVar67;
                        if (fVar72 < 0.0) {
                          uVar62 = CONCAT44(fVar68 - fVar59 * fVar66,(float)uVar62 - fVar58 * fVar72
                                           );
                          uVar64 = CONCAT44(fVar70 - fVar71 * fVar66,(float)uVar64 - fVar60 * fVar72
                                           );
                          puVar3 = (undefined8 *)(lVar51 + uVar47 * 0x10);
                          puVar3[1] = uVar64;
                          *puVar3 = uVar62;
                          bVar34 = (byte)*puVar52;
                        }
                        bVar33 = bVar33 + 1;
                      } while (bVar33 < bVar34);
                      bVar33 = *pbVar50;
                    }
                    bVar48 = bVar48 + 1;
                    if (bVar33 <= bVar48) break;
                    lVar53 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar44 = lVar44 + 1;
            } while (lVar44 != (int)uVar37);
          }
        }
        lVar44 = FUN_0043c4e0(DAT_04c6f050);
        lVar27 = DAT_04c6f058;
        if (lVar44 != 0) {
          lVar27 = lVar44;
        }
        if (((*(ulong *)(lVar27 + 0x10) < uVar35) || (*(long *)(lVar27 + 0x18) != lVar42 + uVar35))
           || (*(long *)(lVar27 + 0x28) == lVar42)) {
          FUN_00439980(lVar27,lVar42,uVar35);
        }
        else {
          *(long *)(lVar27 + 0x18) = lVar42;
        }
        lVar42 = FUN_0043c4e0(DAT_04c6f050);
        lVar27 = DAT_04c6f058;
        if (lVar42 != 0) {
          lVar27 = lVar42;
        }
        if (((*(ulong *)(lVar27 + 0x10) < uVar35) || (*(long *)(lVar27 + 0x18) != lVar32 + uVar35))
           || (*(long *)(lVar27 + 0x28) == lVar32)) {
          FUN_00439980(lVar27,lVar32,uVar35);
        }
        else {
          *(long *)(lVar27 + 0x18) = lVar32;
        }
      }
    }
    uVar2 = local_2b8;
    local_2c8 = (ulong)local_2c8._4_4_ << 0x20;
    lVar32 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar27 = DAT_04c6f058;
    if (lVar32 != 0) {
      lVar27 = lVar32;
    }
    uVar35 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    uVar2 = uVar55;
    if (((*(ulong *)(lVar27 + 0x10) < uVar35) || (*(long *)(lVar27 + 0x18) != uVar35 + lVar28)) ||
       (*(long *)(lVar27 + 0x28) == lVar28)) {
      FUN_00439980(lVar27,lVar28);
    }
    else {
      *(long *)(lVar27 + 0x18) = lVar28;
    }
  }
  if (uVar56 == 0) goto LAB_005e5558;
  if (param_7 == 0) {
    local_290 = 0;
    local_288 = 0x8000000000000000;
    local_278 = uVar56;
    lVar40 = FUN_0043c4e0(DAT_04c6f050);
    lVar38 = DAT_04c6f058;
    if (lVar40 != 0) {
      lVar38 = lVar40;
    }
    uVar35 = (ulong)(int)(uVar56 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar38 + 0x10) < uVar35) {
LAB_005e3f50:
      lVar28 = FUN_00439510(lVar38,uVar35);
    }
    else {
      lVar28 = *(long *)(lVar38 + 0x18);
      if (*(ulong *)(lVar38 + 0x20) < lVar28 + uVar35) goto LAB_005e3f50;
      *(ulong *)(lVar38 + 0x18) = lVar28 + uVar35;
    }
    local_288 = CONCAT44(uVar56,(undefined4)local_288) | 0x8000000000000000;
    local_300 = 0;
    uStack_2f8 = 0x8000000000000000;
    local_2e8 = CONCAT44(local_2e8._4_4_,uVar56);
    local_290 = lVar28;
    local_280 = lVar28;
    lVar40 = FUN_0043c4e0(DAT_04c6f050);
    lVar38 = DAT_04c6f058;
    if (lVar40 != 0) {
      lVar38 = lVar40;
    }
    if (*(ulong *)(lVar38 + 0x10) < uVar35) {
LAB_005e4970:
      lVar40 = FUN_00439510(lVar38,uVar35);
    }
    else {
      lVar40 = *(long *)(lVar38 + 0x18);
      if (*(ulong *)(lVar38 + 0x20) < lVar40 + uVar35) goto LAB_005e4970;
      *(ulong *)(lVar38 + 0x18) = lVar40 + uVar35;
    }
    local_288 = CONCAT44(local_288._4_4_,uVar56);
    uStack_2f8 = CONCAT44(uVar56,uVar56) | 0x8000000000000000;
    if (0 < (int)uVar56) {
      uVar35 = 0;
      do {
        uVar47 = uVar35 & 0xffff;
        uVar2 = (int)uVar35 + 1;
        uVar35 = (ulong)uVar2;
        lVar27 = uVar47 * 4;
        lVar38 = *(long *)(lVar46 + 0x40) + (ulong)*(ushort *)(lVar26 + uVar47 * 2) * 0x10;
        *(undefined4 *)(lVar28 + lVar27) = *(undefined4 *)(lVar38 + 8);
        *(undefined4 *)(lVar40 + lVar27) = *(undefined4 *)(lVar38 + 0xc);
      } while ((int)(uVar2 & 0xffff) < (int)uVar56);
    }
    local_300 = lVar40;
    local_2f0 = lVar40;
    FUN_00619690(param_1,lVar39,&local_2b0,&local_290,&local_300,param_4);
    iVar102 = (int)local_2e8;
    uStack_2f8 = uStack_2f8 & 0xffffffff00000000;
    lVar46 = FUN_0043c4e0(DAT_04c6f050);
    lVar38 = DAT_04c6f058;
    if (lVar46 != 0) {
      lVar38 = lVar46;
    }
    uVar35 = (ulong)(int)(iVar102 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar38 + 0x10) < uVar35) || (*(long *)(lVar38 + 0x18) != lVar40 + uVar35)) ||
       (*(long *)(lVar38 + 0x28) == lVar40)) {
      FUN_00439980(lVar38,lVar40);
    }
    else {
      *(long *)(lVar38 + 0x18) = lVar40;
    }
    uVar2 = local_278;
    local_288 = local_288 & 0xffffffff00000000;
    lVar46 = FUN_0043c4e0(DAT_04c6f050);
    lVar38 = DAT_04c6f058;
    if (lVar46 != 0) {
      lVar38 = lVar46;
    }
    uVar35 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
    if (((uVar35 <= *(ulong *)(lVar38 + 0x10)) && (*(long *)(lVar38 + 0x18) == lVar28 + uVar35)) &&
       (*(long *)(lVar38 + 0x28) != lVar28)) {
      *(long *)(lVar38 + 0x18) = lVar28;
      goto LAB_005e5558;
    }
  }
  else {
    lVar28 = FUN_0043c4e0(DAT_04c6f050);
    lVar27 = DAT_04c6f058;
    if (lVar28 != 0) {
      lVar27 = lVar28;
    }
    uVar35 = (ulong)(int)(uVar56 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar27 + 0x10) < uVar35) {
LAB_005e3ee4:
      lVar28 = FUN_00439510(lVar27,uVar35);
    }
    else {
      lVar28 = *(long *)(lVar27 + 0x18);
      if (*(ulong *)(lVar27 + 0x20) < lVar28 + uVar35) goto LAB_005e3ee4;
      *(ulong *)(lVar27 + 0x18) = lVar28 + uVar35;
    }
    lVar32 = FUN_0043c4e0(DAT_04c6f050);
    lVar27 = DAT_04c6f058;
    if (lVar32 != 0) {
      lVar27 = lVar32;
    }
    if (*(ulong *)(lVar27 + 0x10) < uVar35) {
LAB_005e3f94:
      lVar32 = FUN_00439510(lVar27,uVar35);
    }
    else {
      lVar32 = *(long *)(lVar27 + 0x18);
      if (*(ulong *)(lVar27 + 0x20) < lVar32 + uVar35) goto LAB_005e3f94;
      *(ulong *)(lVar27 + 0x18) = lVar32 + uVar35;
    }
    if (0 < (int)uVar56) {
      uVar47 = 0;
      do {
        uVar49 = uVar47 & 0xffff;
        uVar37 = (int)uVar47 + 1;
        uVar47 = (ulong)uVar37;
        lVar42 = uVar49 * 4;
        lVar27 = *(long *)(lVar46 + 0x40) + (ulong)*(ushort *)(lVar26 + uVar49 * 2) * 0x10;
        *(undefined4 *)(lVar28 + lVar42) = *(undefined4 *)(lVar27 + 8);
        *(undefined4 *)(lVar32 + lVar42) = *(undefined4 *)(lVar27 + 0xc);
      } while ((int)(uVar37 & 0xffff) < (int)uVar56);
    }
    lVar38 = lVar38 + lVar40 * 0xa0;
    lVar46 = *(long *)(lVar39 + 0x88);
    uVar64 = *(undefined8 *)(lVar46 + 0x28);
    fVar61 = (float)uVar64;
    uVar62 = *(undefined8 *)(lVar46 + 0x20);
    fVar71 = (float)uVar62;
    fVar67 = (float)((ulong)uVar62 >> 0x20);
    fVar58 = (float)*(undefined8 *)(lVar38 + 0x40) * fVar61 +
             (float)*(undefined8 *)(lVar38 + 0x20) * fVar71 +
             (float)*(undefined8 *)(lVar38 + 0x30) * fVar67;
    fVar59 = (float)((ulong)*(undefined8 *)(lVar38 + 0x40) >> 0x20) * fVar61 +
             (float)((ulong)*(undefined8 *)(lVar38 + 0x20) >> 0x20) * fVar71 +
             (float)((ulong)*(undefined8 *)(lVar38 + 0x30) >> 0x20) * fVar67;
    local_300 = CONCAT44(fVar59,fVar58);
    fVar60 = (float)*(undefined8 *)(lVar38 + 0x48) * fVar61 +
             (float)*(undefined8 *)(lVar38 + 0x28) * fVar71 +
             (float)*(undefined8 *)(lVar38 + 0x38) * fVar67;
    fVar58 = *(float *)(lVar38 + 0x50) * fVar58;
    fVar59 = *(float *)(lVar38 + 0x54) * fVar59;
    fVar69 = *(float *)(lVar38 + 0x58) * fVar60;
    fVar71 = *(float *)(lVar38 + 0x5c) *
             ((float)((ulong)*(undefined8 *)(lVar38 + 0x48) >> 0x20) * fVar61 +
             (float)((ulong)*(undefined8 *)(lVar38 + 0x28) >> 0x20) * fVar71 +
             (float)((ulong)*(undefined8 *)(lVar38 + 0x38) >> 0x20) * fVar67);
    auVar4._4_4_ = fVar59;
    auVar4._0_4_ = fVar58;
    auVar4._8_4_ = fVar69;
    auVar4._12_4_ = fVar71;
    auVar5._4_4_ = fVar59;
    auVar5._0_4_ = fVar58;
    auVar5._8_4_ = fVar69;
    auVar5._12_4_ = fVar71;
    auVar73 = NEON_ext(auVar4,auVar5,8,1);
    uStack_2f8 = CONCAT44((float)((ulong)uVar64 >> 0x20) - (fVar58 + fVar59 + auVar73._0_4_),fVar60)
    ;
    FUN_0053da30(&local_290,&local_300);
    lVar38 = *(long *)(param_4 + 0x18);
    fVar58 = (float)local_270;
    fVar59 = (float)((ulong)local_270 >> 0x20);
    fVar60 = (float)uStack_268;
    fVar71 = (float)((ulong)uStack_268 >> 0x20);
    if (param_7 == 2) {
      if (0 < (int)uVar2) {
        lVar46 = 0;
        do {
          uVar47 = (ulong)*(ushort *)(lVar26 + lVar46 * 2);
          uVar49 = (ulong)*(ushort *)(*(long *)(lVar38 + 0x2d0) + uVar47 * 2);
          if (uVar49 != 0xffff) {
            fVar67 = *(float *)(*(long *)(lVar38 + 0x40) + uVar47 * 0x10 + 8);
            lVar39 = *(long *)(lVar38 + 0x290) + uVar49 * 8;
            pbVar50 = (byte *)(lVar39 + 6);
            bVar33 = *pbVar50;
            if (bVar33 != 0) {
              lVar27 = *(long *)(param_4 + 0x20);
              puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
              uVar64 = puVar3[1];
              uVar62 = *puVar3;
              bVar48 = 0;
              lVar40 = lVar27;
              while( true ) {
                puVar29 = (ushort *)
                          (*(long *)(lVar38 + 0x280) +
                          ((ulong)((uint)*(ushort *)(lVar39 + 2) + (uint)bVar48) & 0xffff) * 6);
                puVar3 = (undefined8 *)(lVar40 + (ulong)*puVar29 * 0x10);
                uVar88 = puVar3[1];
                uVar87 = *puVar3;
                auVar73 = *(undefined1 (*) [16])(lVar40 + (ulong)puVar29[1] * 0x10);
                psVar1 = (short *)(*(long *)(lVar38 + 0x210) + (ulong)puVar29[2] * 4);
                pbVar30 = (byte *)(psVar1 + 1);
                bVar34 = *pbVar30;
                if (bVar34 != 0) {
                  fVar66 = (float)uVar87 - (float)uVar62;
                  fVar61 = (float)((ulong)uVar62 >> 0x20);
                  fVar68 = (float)((ulong)uVar87 >> 0x20) - fVar61;
                  fVar70 = (float)uVar88 - (float)uVar64;
                  fVar69 = (float)((ulong)uVar64 >> 0x20);
                  fVar72 = (float)((ulong)uVar88 >> 0x20) - fVar69;
                  auVar6._4_4_ = fVar68;
                  auVar6._0_4_ = fVar66;
                  auVar6._8_4_ = fVar70;
                  auVar6._12_4_ = fVar72;
                  auVar7._4_4_ = fVar68;
                  auVar7._0_4_ = fVar66;
                  auVar7._8_4_ = fVar70;
                  auVar7._12_4_ = fVar72;
                  auVar78 = NEON_ext(auVar6,auVar7,4,1);
                  auVar74._0_4_ = auVar73._0_4_ - (float)uVar62;
                  auVar74._4_4_ = auVar73._4_4_ - fVar61;
                  auVar74._8_4_ = auVar73._8_4_ - (float)uVar64;
                  auVar74._12_4_ = auVar73._12_4_ - fVar69;
                  auVar73 = NEON_ext(auVar74,auVar74,4,1);
                  auVar89 = NEON_ext(auVar78,auVar78,8,1);
                  auVar90 = NEON_ext(auVar73,auVar73,8,1);
                  uVar87 = NEON_rev64(auVar89._0_8_,4);
                  uVar88 = NEON_rev64(auVar90._0_8_,4);
                  bVar33 = 0;
                  auVar83._0_4_ = fVar66 * auVar73._0_4_ - auVar74._0_4_ * auVar78._0_4_;
                  auVar83._4_4_ = fVar68 * auVar73._4_4_ - auVar74._4_4_ * auVar78._4_4_;
                  auVar83._8_4_ = fVar70 * (float)uVar88 - auVar74._8_4_ * (float)uVar87;
                  auVar83._12_4_ =
                       fVar72 * (float)((ulong)uVar88 >> 0x20) -
                       auVar74._12_4_ * (float)((ulong)uVar87 >> 0x20);
                  auVar73 = NEON_ext(auVar83,auVar83,4,1);
                  fVar61 = auVar73._0_4_;
                  fVar69 = auVar73._4_4_;
                  do {
                    pfVar41 = (float *)(*(long *)(lVar38 + 0x200) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar33) * 8);
                    fVar57 = *pfVar41;
                    fVar95 = pfVar41[1];
                    fVar63 = (float)((ulong)uVar62 >> 0x20);
                    fVar65 = (float)((ulong)uVar64 >> 0x20);
                    auVar91._0_4_ =
                         fVar58 * ((float)uVar62 + fVar66 * fVar57 + auVar74._0_4_ * fVar95);
                    auVar91._4_4_ = fVar59 * (fVar63 + fVar68 * fVar57 + auVar74._4_4_ * fVar95);
                    auVar91._8_4_ =
                         fVar60 * ((float)uVar64 + fVar70 * fVar57 + auVar74._8_4_ * fVar95);
                    auVar91._12_4_ = fVar71 * (fVar65 + fVar72 * fVar57 + auVar74._12_4_ * fVar95);
                    auVar73 = NEON_ext(auVar91,auVar91,8,1);
                    fVar57 = auVar73._0_4_ + fVar71;
                    fVar95 = (auVar91._0_4_ + auVar91._4_4_ + fVar57) - fVar67;
                    fVar57 = (auVar91._0_4_ + auVar91._4_4_ + fVar57) - fVar67;
                    if (fVar95 < 0.0) {
                      fVar96 = auVar83._0_4_ * auVar83._0_4_ + fVar61 * fVar61 + fVar69 * fVar69;
                      fVar101 = auVar83._0_4_ * auVar83._0_4_ + fVar61 * fVar61 + fVar69 * fVar69;
                      uVar87 = CONCAT44(fVar101,fVar96);
                      uVar88 = NEON_frsqrte(uVar87,4);
                      fVar104 = (float)uVar88;
                      fVar105 = (float)((ulong)uVar88 >> 0x20);
                      uVar88 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104),4);
                      fVar104 = fVar104 * (float)uVar88;
                      fVar105 = fVar105 * (float)((ulong)uVar88 >> 0x20);
                      iVar102 = -(uint)(fVar96 <= 0.0);
                      iVar103 = -(uint)(fVar101 <= 0.0);
                      uVar87 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104),4);
                      fVar104 = (float)uVar87 * fVar104;
                      fVar105 = (float)((ulong)uVar87 >> 0x20) * fVar105;
                      fVar96 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                               ~(byte)((uint)iVar102 >> 0x18),
                                               CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                        ~(byte)((uint)iVar102 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                 ~(byte)((uint)iVar102 >> 8),
                                                                 SUB41(fVar104,0) & ~(byte)iVar102))
                                              );
                      auVar97._0_4_ = fVar61 * fVar96;
                      fVar105 = (float)(CONCAT17((byte)((uint)fVar105 >> 0x18) &
                                                 ~(byte)((uint)iVar103 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar105 >> 0x10) &
                                                          ~(byte)((uint)iVar103 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar105 >> 8) &
                                                                   ~(byte)((uint)iVar103 >> 8),
                                                                   CONCAT14(SUB41(fVar105,0) &
                                                                            ~(byte)iVar103,fVar96)))
                                                ) >> 0x20);
                      auVar97._4_4_ = fVar69 * fVar105;
                      auVar97._8_4_ = auVar83._0_4_ * fVar96;
                      fVar105 = auVar83._4_4_ * fVar105;
                      fVar96 = fVar58 * auVar97._0_4_;
                      fVar104 = fVar59 * auVar97._4_4_;
                      fVar101 = fVar71 * fVar105;
                      auVar12._4_4_ = fVar104;
                      auVar12._0_4_ = fVar96;
                      auVar12._8_4_ = fVar60 * auVar97._8_4_;
                      auVar12._12_4_ = fVar101;
                      auVar13._4_4_ = fVar104;
                      auVar13._0_4_ = fVar96;
                      auVar13._8_4_ = fVar60 * auVar97._8_4_;
                      auVar13._12_4_ = fVar101;
                      auVar73 = NEON_ext(auVar12,auVar13,8,1);
                      if (fVar96 + fVar104 + auVar73._0_4_ < 0.0) {
                        auVar97._0_4_ = -auVar97._0_4_;
                        auVar97._4_4_ = -auVar97._4_4_;
                        auVar97._8_4_ = -auVar97._8_4_;
                      }
                      uVar62 = CONCAT44(fVar63 - fVar57 * auVar97._4_4_,
                                        (float)uVar62 - fVar95 * auVar97._0_4_);
                      uVar64 = CONCAT44(fVar65 - fVar57 * fVar105,
                                        (float)uVar64 - fVar95 * auVar97._8_4_);
                      puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
                      puVar3[1] = uVar64;
                      *puVar3 = uVar62;
                      bVar34 = *pbVar30;
                    }
                    bVar33 = bVar33 + 1;
                  } while (bVar33 < bVar34);
                  bVar33 = *pbVar50;
                }
                bVar48 = bVar48 + 1;
                if (bVar33 <= bVar48) break;
                lVar40 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar46 = lVar46 + 1;
        } while (lVar46 != (int)uVar2);
        if (*(int *)(lVar38 + 0x278) != 0) {
          lVar46 = 0;
          do {
            uVar47 = (ulong)*(ushort *)(lVar26 + lVar46 * 2);
            uVar49 = (ulong)*(ushort *)(*(long *)(lVar38 + 0x2c0) + uVar47 * 2);
            if (uVar49 != 0xffff) {
              fVar67 = *(float *)(*(long *)(lVar38 + 0x40) + uVar47 * 0x10 + 8);
              lVar39 = *(long *)(lVar38 + 0x270) + uVar49 * 8;
              pbVar50 = (byte *)(lVar39 + 6);
              bVar33 = *pbVar50;
              if (bVar33 != 0) {
                lVar27 = *(long *)(param_4 + 0x20);
                puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
                uVar64 = puVar3[1];
                uVar62 = *puVar3;
                bVar48 = 0;
                lVar40 = lVar27;
                while( true ) {
                  puVar29 = (ushort *)
                            (*(long *)(lVar38 + 0x260) +
                            (ulong)(ushort)(*(short *)(lVar39 + 2) + (ushort)bVar48) * 4);
                  puVar3 = (undefined8 *)(lVar40 + (ulong)*puVar29 * 0x10);
                  uVar88 = puVar3[1];
                  uVar87 = *puVar3;
                  puVar29 = (ushort *)(*(long *)(lVar38 + 0x1f0) + (ulong)puVar29[1] * 4);
                  puVar52 = puVar29 + 1;
                  bVar34 = (byte)*puVar52;
                  if (bVar34 != 0) {
                    fVar61 = (float)uVar62;
                    uVar49 = (ulong)uVar62 >> 0x20;
                    fVar69 = (float)uVar64;
                    uVar20 = (ulong)uVar64 >> 0x20;
                    bVar33 = 0;
                    do {
                      fVar66 = *(float *)(*(long *)(lVar38 + 0x1e0) +
                                         ((ulong)((uint)*puVar29 + (uint)bVar33) & 0xffff) * 4);
                      fVar68 = (float)((ulong)uVar62 >> 0x20);
                      fVar70 = (float)((ulong)uVar64 >> 0x20);
                      auVar79._0_4_ = fVar58 * ((float)uVar62 + ((float)uVar87 - fVar61) * fVar66);
                      auVar79._4_4_ =
                           fVar59 * (fVar68 + ((float)((ulong)uVar87 >> 0x20) - (float)uVar49) *
                                              fVar66);
                      auVar79._8_4_ = fVar60 * ((float)uVar64 + ((float)uVar88 - fVar69) * fVar66);
                      auVar79._12_4_ =
                           fVar71 * (fVar70 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar20) *
                                              fVar66);
                      auVar73 = NEON_ext(auVar79,auVar79,8,1);
                      fVar66 = auVar73._0_4_ + fVar71;
                      fVar72 = (auVar79._0_4_ + auVar79._4_4_ + fVar66) - fVar67;
                      fVar66 = (auVar79._0_4_ + auVar79._4_4_ + fVar66) - fVar67;
                      if (fVar72 < 0.0) {
                        uVar62 = CONCAT44(fVar68 - fVar59 * fVar66,(float)uVar62 - fVar58 * fVar72);
                        uVar64 = CONCAT44(fVar70 - fVar71 * fVar66,(float)uVar64 - fVar60 * fVar72);
                        puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
                        puVar3[1] = uVar64;
                        *puVar3 = uVar62;
                        bVar34 = (byte)*puVar52;
                      }
                      bVar33 = bVar33 + 1;
                    } while (bVar33 < bVar34);
                    bVar33 = *pbVar50;
                  }
                  bVar48 = bVar48 + 1;
                  if (bVar33 <= bVar48) break;
                  lVar40 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar46 = lVar46 + 1;
          } while (lVar46 != (int)uVar2);
        }
      }
    }
    else if (0 < (int)uVar2) {
      lVar46 = 0;
      do {
        uVar47 = (ulong)*(ushort *)(lVar26 + lVar46 * 2);
        uVar49 = (ulong)*(ushort *)(*(long *)(lVar38 + 0x2b0) + uVar47 * 2);
        if (uVar49 != 0xffff) {
          lVar39 = *(long *)(lVar38 + 0x250);
          fVar67 = *(float *)(*(long *)(lVar38 + 0x40) + uVar47 * 0x10 + 8);
          pbVar50 = (byte *)(lVar39 + uVar49 * 6 + 4);
          bVar33 = *pbVar50;
          if (bVar33 != 0) {
            lVar27 = *(long *)(param_4 + 0x20);
            bVar48 = 0;
            puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
            uVar64 = puVar3[1];
            uVar62 = *puVar3;
            lVar40 = lVar27;
            while( true ) {
              puVar29 = (ushort *)
                        (*(long *)(lVar38 + 0x240) +
                        ((ulong)((uint)*(ushort *)(lVar39 + uVar49 * 6 + 2) + (uint)bVar48) & 0xffff
                        ) * 6);
              puVar3 = (undefined8 *)(lVar40 + (ulong)*puVar29 * 0x10);
              uVar88 = puVar3[1];
              uVar87 = *puVar3;
              auVar73 = *(undefined1 (*) [16])(lVar40 + (ulong)puVar29[1] * 0x10);
              psVar1 = (short *)(*(long *)(lVar38 + 0x210) + (ulong)puVar29[2] * 4);
              pbVar30 = (byte *)(psVar1 + 1);
              bVar34 = *pbVar30;
              if (bVar34 != 0) {
                fVar66 = (float)uVar87 - (float)uVar62;
                fVar61 = (float)((ulong)uVar62 >> 0x20);
                fVar68 = (float)((ulong)uVar87 >> 0x20) - fVar61;
                fVar70 = (float)uVar88 - (float)uVar64;
                fVar69 = (float)((ulong)uVar64 >> 0x20);
                fVar72 = (float)((ulong)uVar88 >> 0x20) - fVar69;
                auVar8._4_4_ = fVar68;
                auVar8._0_4_ = fVar66;
                auVar8._8_4_ = fVar70;
                auVar8._12_4_ = fVar72;
                auVar9._4_4_ = fVar68;
                auVar9._0_4_ = fVar66;
                auVar9._8_4_ = fVar70;
                auVar9._12_4_ = fVar72;
                auVar78 = NEON_ext(auVar8,auVar9,4,1);
                auVar75._0_4_ = auVar73._0_4_ - (float)uVar62;
                auVar75._4_4_ = auVar73._4_4_ - fVar61;
                auVar75._8_4_ = auVar73._8_4_ - (float)uVar64;
                auVar75._12_4_ = auVar73._12_4_ - fVar69;
                auVar73 = NEON_ext(auVar75,auVar75,4,1);
                auVar89 = NEON_ext(auVar78,auVar78,8,1);
                auVar90 = NEON_ext(auVar73,auVar73,8,1);
                uVar87 = NEON_rev64(auVar89._0_8_,4);
                uVar88 = NEON_rev64(auVar90._0_8_,4);
                bVar33 = 0;
                auVar84._0_4_ = fVar66 * auVar73._0_4_ - auVar75._0_4_ * auVar78._0_4_;
                auVar84._4_4_ = fVar68 * auVar73._4_4_ - auVar75._4_4_ * auVar78._4_4_;
                auVar84._8_4_ = fVar70 * (float)uVar88 - auVar75._8_4_ * (float)uVar87;
                auVar84._12_4_ =
                     fVar72 * (float)((ulong)uVar88 >> 0x20) -
                     auVar75._12_4_ * (float)((ulong)uVar87 >> 0x20);
                auVar73 = NEON_ext(auVar84,auVar84,4,1);
                fVar61 = auVar73._0_4_;
                fVar69 = auVar73._4_4_;
                do {
                  pfVar41 = (float *)(*(long *)(lVar38 + 0x200) +
                                     (ulong)(ushort)(*psVar1 + (ushort)bVar33) * 8);
                  fVar57 = *pfVar41;
                  fVar95 = pfVar41[1];
                  fVar63 = (float)((ulong)uVar62 >> 0x20);
                  fVar65 = (float)((ulong)uVar64 >> 0x20);
                  auVar92._0_4_ =
                       fVar58 * ((float)uVar62 + fVar66 * fVar57 + auVar75._0_4_ * fVar95);
                  auVar92._4_4_ = fVar59 * (fVar63 + fVar68 * fVar57 + auVar75._4_4_ * fVar95);
                  auVar92._8_4_ =
                       fVar60 * ((float)uVar64 + fVar70 * fVar57 + auVar75._8_4_ * fVar95);
                  auVar92._12_4_ = fVar71 * (fVar65 + fVar72 * fVar57 + auVar75._12_4_ * fVar95);
                  auVar73 = NEON_ext(auVar92,auVar92,8,1);
                  fVar57 = auVar73._0_4_ + fVar71;
                  fVar95 = (auVar92._0_4_ + auVar92._4_4_ + fVar57) - fVar67;
                  fVar57 = (auVar92._0_4_ + auVar92._4_4_ + fVar57) - fVar67;
                  if (fVar95 < 0.0) {
                    fVar96 = auVar84._0_4_ * auVar84._0_4_ + fVar61 * fVar61 + fVar69 * fVar69;
                    fVar101 = auVar84._0_4_ * auVar84._0_4_ + fVar61 * fVar61 + fVar69 * fVar69;
                    uVar87 = CONCAT44(fVar101,fVar96);
                    uVar88 = NEON_frsqrte(uVar87,4);
                    fVar104 = (float)uVar88;
                    fVar105 = (float)((ulong)uVar88 >> 0x20);
                    uVar88 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104),4);
                    fVar104 = fVar104 * (float)uVar88;
                    fVar105 = fVar105 * (float)((ulong)uVar88 >> 0x20);
                    iVar102 = -(uint)(fVar96 <= 0.0);
                    iVar103 = -(uint)(fVar101 <= 0.0);
                    uVar87 = NEON_frsqrts(uVar87,CONCAT44(fVar105 * fVar105,fVar104 * fVar104),4);
                    fVar104 = (float)uVar87 * fVar104;
                    fVar105 = (float)((ulong)uVar87 >> 0x20) * fVar105;
                    fVar96 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                             ~(byte)((uint)iVar102 >> 0x18),
                                             CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                      ~(byte)((uint)iVar102 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar104 >> 8) &
                                                               ~(byte)((uint)iVar102 >> 8),
                                                               SUB41(fVar104,0) & ~(byte)iVar102)));
                    auVar98._0_4_ = fVar61 * fVar96;
                    fVar105 = (float)(CONCAT17((byte)((uint)fVar105 >> 0x18) &
                                               ~(byte)((uint)iVar103 >> 0x18),
                                               CONCAT16((byte)((uint)fVar105 >> 0x10) &
                                                        ~(byte)((uint)iVar103 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar105 >> 8) &
                                                                 ~(byte)((uint)iVar103 >> 8),
                                                                 CONCAT14(SUB41(fVar105,0) &
                                                                          ~(byte)iVar103,fVar96))))
                                     >> 0x20);
                    auVar98._4_4_ = fVar69 * fVar105;
                    auVar98._8_4_ = auVar84._0_4_ * fVar96;
                    fVar105 = auVar84._4_4_ * fVar105;
                    fVar96 = fVar58 * auVar98._0_4_;
                    fVar104 = fVar59 * auVar98._4_4_;
                    fVar101 = fVar71 * fVar105;
                    auVar14._4_4_ = fVar104;
                    auVar14._0_4_ = fVar96;
                    auVar14._8_4_ = fVar60 * auVar98._8_4_;
                    auVar14._12_4_ = fVar101;
                    auVar15._4_4_ = fVar104;
                    auVar15._0_4_ = fVar96;
                    auVar15._8_4_ = fVar60 * auVar98._8_4_;
                    auVar15._12_4_ = fVar101;
                    auVar73 = NEON_ext(auVar14,auVar15,8,1);
                    if (fVar96 + fVar104 + auVar73._0_4_ < 0.0) {
                      auVar98._0_4_ = -auVar98._0_4_;
                      auVar98._4_4_ = -auVar98._4_4_;
                      auVar98._8_4_ = -auVar98._8_4_;
                    }
                    uVar62 = CONCAT44(fVar63 - fVar57 * auVar98._4_4_,
                                      (float)uVar62 - fVar95 * auVar98._0_4_);
                    uVar64 = CONCAT44(fVar65 - fVar57 * fVar105,
                                      (float)uVar64 - fVar95 * auVar98._8_4_);
                    puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
                    puVar3[1] = uVar64;
                    *puVar3 = uVar62;
                    bVar34 = *pbVar30;
                  }
                  bVar33 = bVar33 + 1;
                } while (bVar33 < bVar34);
                bVar33 = *pbVar50;
              }
              bVar48 = bVar48 + 1;
              if (bVar33 <= bVar48) break;
              lVar40 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar46 = lVar46 + 1;
      } while (lVar46 != (int)uVar2);
      if (*(int *)(lVar38 + 0x238) != 0) {
        lVar46 = 0;
        do {
          uVar47 = (ulong)*(ushort *)(lVar26 + lVar46 * 2);
          uVar49 = (ulong)*(ushort *)(*(long *)(lVar38 + 0x2a0) + uVar47 * 2);
          if (uVar49 != 0xffff) {
            lVar39 = *(long *)(lVar38 + 0x230);
            fVar67 = *(float *)(*(long *)(lVar38 + 0x40) + uVar47 * 0x10 + 8);
            pbVar50 = (byte *)(lVar39 + uVar49 * 6 + 4);
            bVar33 = *pbVar50;
            if (bVar33 != 0) {
              lVar27 = *(long *)(param_4 + 0x20);
              bVar48 = 0;
              puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
              uVar64 = puVar3[1];
              uVar62 = *puVar3;
              lVar40 = lVar27;
              while( true ) {
                puVar29 = (ushort *)
                          (*(long *)(lVar38 + 0x220) +
                          (ulong)(ushort)(*(short *)(lVar39 + uVar49 * 6 + 2) + (ushort)bVar48) * 4)
                ;
                puVar3 = (undefined8 *)(lVar40 + (ulong)*puVar29 * 0x10);
                uVar88 = puVar3[1];
                uVar87 = *puVar3;
                puVar29 = (ushort *)(*(long *)(lVar38 + 0x1f0) + (ulong)puVar29[1] * 4);
                puVar52 = puVar29 + 1;
                bVar34 = (byte)*puVar52;
                if (bVar34 != 0) {
                  fVar61 = (float)uVar62;
                  uVar20 = (ulong)uVar62 >> 0x20;
                  fVar69 = (float)uVar64;
                  uVar21 = (ulong)uVar64 >> 0x20;
                  bVar33 = 0;
                  do {
                    fVar66 = *(float *)(*(long *)(lVar38 + 0x1e0) +
                                       ((ulong)((uint)*puVar29 + (uint)bVar33) & 0xffff) * 4);
                    fVar68 = (float)((ulong)uVar62 >> 0x20);
                    fVar70 = (float)((ulong)uVar64 >> 0x20);
                    auVar80._0_4_ = fVar58 * ((float)uVar62 + ((float)uVar87 - fVar61) * fVar66);
                    auVar80._4_4_ =
                         fVar59 * (fVar68 + ((float)((ulong)uVar87 >> 0x20) - (float)uVar20) *
                                            fVar66);
                    auVar80._8_4_ = fVar60 * ((float)uVar64 + ((float)uVar88 - fVar69) * fVar66);
                    auVar80._12_4_ =
                         fVar71 * (fVar70 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar21) *
                                            fVar66);
                    auVar73 = NEON_ext(auVar80,auVar80,8,1);
                    fVar66 = auVar73._0_4_ + fVar71;
                    fVar72 = (auVar80._0_4_ + auVar80._4_4_ + fVar66) - fVar67;
                    fVar66 = (auVar80._0_4_ + auVar80._4_4_ + fVar66) - fVar67;
                    if (fVar72 < 0.0) {
                      uVar62 = CONCAT44(fVar68 - fVar59 * fVar66,(float)uVar62 - fVar58 * fVar72);
                      uVar64 = CONCAT44(fVar70 - fVar71 * fVar66,(float)uVar64 - fVar60 * fVar72);
                      puVar3 = (undefined8 *)(lVar27 + uVar47 * 0x10);
                      puVar3[1] = uVar64;
                      *puVar3 = uVar62;
                      bVar34 = (byte)*puVar52;
                    }
                    bVar33 = bVar33 + 1;
                  } while (bVar33 < bVar34);
                  bVar33 = *pbVar50;
                }
                bVar48 = bVar48 + 1;
                if (bVar33 <= bVar48) break;
                lVar40 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar46 = lVar46 + 1;
        } while (lVar46 != (int)uVar2);
      }
    }
    lVar46 = FUN_0043c4e0(DAT_04c6f050);
    lVar38 = DAT_04c6f058;
    if (lVar46 != 0) {
      lVar38 = lVar46;
    }
    if (((*(ulong *)(lVar38 + 0x10) < uVar35) || (*(long *)(lVar38 + 0x18) != lVar32 + uVar35)) ||
       (*(long *)(lVar38 + 0x28) == lVar32)) {
      FUN_00439980(lVar38,lVar32,uVar35);
    }
    else {
      *(long *)(lVar38 + 0x18) = lVar32;
    }
    lVar46 = FUN_0043c4e0(DAT_04c6f050);
    lVar38 = DAT_04c6f058;
    if (lVar46 != 0) {
      lVar38 = lVar46;
    }
    if (((uVar35 <= *(ulong *)(lVar38 + 0x10)) && (*(long *)(lVar38 + 0x18) == lVar28 + uVar35)) &&
       (*(long *)(lVar38 + 0x28) != lVar28)) {
      *(long *)(lVar38 + 0x18) = lVar28;
      goto LAB_005e5558;
    }
  }
  FUN_00439980(lVar38,lVar28,uVar35);
LAB_005e5558:
  uVar2 = local_298;
  local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
  lVar46 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar38 = DAT_04c6f058;
  if (lVar46 != 0) {
    lVar38 = lVar46;
  }
  uVar35 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar38 + 0x10) < uVar35) || (*(long *)(lVar38 + 0x18) != uVar35 + lVar26)) ||
     (*(long *)(lVar38 + 0x28) == lVar26)) {
    FUN_00439980();
  }
  else {
    *(long *)(lVar38 + 0x18) = lVar26;
  }
  return;
}

