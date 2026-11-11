
void FUN_005e00c0(undefined4 param_1,uint param_2,ulong param_3,long param_4,ulong param_5,
                 ulong param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  ushort uVar35;
  uint uVar36;
  undefined8 *puVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  char *pcVar41;
  long lVar42;
  long lVar43;
  ushort *puVar44;
  float *pfVar45;
  uint *puVar46;
  float *pfVar47;
  uint uVar48;
  byte *pbVar49;
  byte bVar50;
  long lVar51;
  byte *pbVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  byte bVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar64 [12];
  float fVar74;
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  float fVar73;
  undefined1 auVar68 [16];
  float fVar63;
  undefined1 auVar69 [16];
  undefined1 auVar65 [12];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  int iVar75;
  int iVar76;
  int iVar82;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  long local_3d0;
  long local_350;
  ulong uStack_348;
  long local_340;
  undefined8 local_338;
  ushort local_330;
  long local_320;
  undefined8 local_318;
  long local_310;
  uint local_308;
  long local_300;
  undefined8 local_2f8;
  long local_2f0;
  uint local_2e8;
  undefined1 local_2e0 [16];
  float local_2d0;
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
  
  lVar53 = *(long *)(param_4 + 400);
  lVar39 = *(long *)(param_4 + 0x18);
  lVar51 = lVar53 + (long)(int)param_2 * 0xa0;
  uVar3 = *(uint *)(lVar39 + 0x48);
  puVar37 = (undefined8 *)(lVar51 + 0x88);
  local_2c0 = CONCAT44(*(undefined4 *)(lVar39 + 0xe0),*(undefined4 *)(lVar39 + 0xe0));
  FUN_0054d8f0(local_2e0,*puVar37,&local_2c0);
  uVar36 = param_2;
  if (0x1d < (int)param_2) {
    uVar36 = 0x1e;
  }
  uVar2 = 0;
  if ((param_3 & 1) == 0) {
    uVar2 = 1 << (ulong)(uVar36 & 0x1f);
  }
  local_300 = 0;
  local_2f8 = 0x8000000000000000;
  local_2e8 = uVar3;
  if (uVar3 == 0) {
    local_3d0 = 0;
  }
  else {
    lVar31 = FUN_0043c4e0(DAT_04c6f050);
    lVar32 = DAT_04c6f058;
    if (lVar31 != 0) {
      lVar32 = lVar31;
    }
    uVar34 = (ulong)(int)(uVar3 * 2 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar32 + 0x10) < uVar34) {
LAB_005e01bc:
      local_3d0 = FUN_00439510();
    }
    else {
      local_3d0 = *(long *)(lVar32 + 0x18);
      uVar34 = local_3d0 + uVar34;
      if (*(ulong *)(lVar32 + 0x20) < uVar34) goto LAB_005e01bc;
      *(ulong *)(lVar32 + 0x18) = uVar34;
    }
  }
  local_2f8._4_4_ = uVar3 | 0x80000000;
  if (uVar3 != 0) {
    local_2f8._0_4_ = uVar3;
  }
  local_300 = local_3d0;
  local_2f0 = local_3d0;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if ((int)uVar3 < 1) goto LAB_005e0398;
      puVar46 = *(uint **)(lVar39 + 0xe8);
      uVar35 = 0;
      pfVar47 = *(float **)(param_4 + 0x20);
      uVar36 = 0;
      do {
        uVar48 = uVar36;
        if ((*puVar46 & uVar2) != 0) {
          fVar58 = local_2e0._0_4_ - *pfVar47;
          fVar59 = local_2e0._4_4_ - pfVar47[1];
          fVar60 = local_2e0._8_4_ - pfVar47[2];
          fVar61 = local_2e0._12_4_ - pfVar47[3];
          fVar58 = fVar58 * fVar58;
          fVar59 = fVar59 * fVar59;
          fVar60 = fVar60 * fVar60;
          fVar61 = fVar61 * fVar61;
          auVar70._4_4_ = fVar59;
          auVar70._0_4_ = fVar58;
          auVar70._8_4_ = fVar60;
          auVar70._12_4_ = fVar61;
          auVar77._4_4_ = fVar59;
          auVar77._0_4_ = fVar58;
          auVar77._8_4_ = fVar60;
          auVar77._12_4_ = fVar61;
          auVar70 = NEON_ext(auVar70,auVar77,8,1);
          if ((fVar58 + fVar59 + auVar70._0_4_) - local_2d0 < 0.0) {
            uVar48 = uVar36 + 1;
            *(ushort *)(local_3d0 + (long)(int)uVar36 * 2) = uVar35;
          }
        }
        uVar35 = uVar35 + 1;
        pfVar47 = pfVar47 + 4;
        puVar46 = puVar46 + 1;
        uVar36 = uVar48;
      } while ((int)(uint)uVar35 < (int)uVar3);
LAB_005e036c:
      bVar28 = SBORROW4(uVar3,uVar48);
      bVar29 = (int)(uVar3 - uVar48) < 0;
      bVar30 = uVar3 == uVar48;
      if ((int)uVar3 < (int)uVar48) goto LAB_005e03a8;
LAB_005e0374:
      if (!bVar30 && bVar29 == bVar28) goto LAB_005e03a8;
    }
    else {
      if (0 < (int)uVar3) {
        uVar35 = 0;
        pfVar45 = *(float **)(param_4 + 0x20);
        uVar48 = 0;
        pfVar47 = (float *)(*(long *)(lVar39 + 0x40) + 4);
        do {
          fVar58 = local_2e0._0_4_ - *pfVar45;
          fVar59 = local_2e0._4_4_ - pfVar45[1];
          fVar60 = local_2e0._8_4_ - pfVar45[2];
          fVar61 = local_2e0._12_4_ - pfVar45[3];
          fVar58 = fVar58 * fVar58;
          fVar59 = fVar59 * fVar59;
          fVar60 = fVar60 * fVar60;
          fVar61 = fVar61 * fVar61;
          auVar85._4_4_ = fVar59;
          auVar85._0_4_ = fVar58;
          auVar85._8_4_ = fVar60;
          auVar85._12_4_ = fVar61;
          auVar86._4_4_ = fVar59;
          auVar86._0_4_ = fVar58;
          auVar86._8_4_ = fVar60;
          auVar86._12_4_ = fVar61;
          auVar70 = NEON_ext(auVar85,auVar86,8,1);
          if (((fVar58 + fVar59 + auVar70._0_4_) - local_2d0 < 0.0) && (*pfVar47 != 0.0)) {
            *(ushort *)(local_3d0 + (long)(int)uVar48 * 2) = uVar35;
            uVar48 = uVar48 + 1;
          }
          uVar35 = uVar35 + 1;
          pfVar45 = pfVar45 + 4;
          pfVar47 = pfVar47 + 4;
        } while ((int)(uint)uVar35 < (int)uVar3);
        goto LAB_005e036c;
      }
LAB_005e0398:
      uVar48 = 0;
      bVar28 = false;
      bVar30 = uVar3 == 0;
      bVar29 = false;
      if (-1 < (int)uVar3) goto LAB_005e0374;
LAB_005e03a8:
      uVar3 = uVar48;
      local_2f8._0_4_ = uVar48;
    }
  }
  else {
    local_320 = 0;
    local_318 = 0x8000000000000000;
    local_308 = uVar3;
    if (uVar3 == 0) {
      local_318._0_4_ = 0;
      local_310 = 0;
    }
    else {
      lVar31 = FUN_0043c4e0(DAT_04c6f050);
      lVar32 = DAT_04c6f058;
      if (lVar31 != 0) {
        lVar32 = lVar31;
      }
      uVar34 = (ulong)(int)(uVar3 * 2 + 0x7f & 0xffffff80);
      if (*(ulong *)(lVar32 + 0x10) < uVar34) {
LAB_005e0268:
        local_310 = FUN_00439510();
      }
      else {
        local_310 = *(long *)(lVar32 + 0x18);
        uVar34 = local_310 + uVar34;
        if (*(ulong *)(lVar32 + 0x20) < uVar34) goto LAB_005e0268;
        *(ulong *)(lVar32 + 0x18) = uVar34;
      }
      if (uVar3 != 0) {
        local_318._0_4_ = uVar3;
      }
    }
    lVar32 = local_310;
    local_318._4_4_ = uVar3 | 0x80000000;
    if ((param_3 & 1) == 0) {
      if ((int)uVar3 < 1) goto LAB_005e0f04;
      pcVar41 = *(char **)(lVar39 + 0x188);
      uVar35 = 0;
      puVar46 = *(uint **)(lVar39 + 0xe8);
      uVar36 = 0;
      uVar48 = 0;
      pfVar47 = *(float **)(param_4 + 0x20);
      do {
        if ((*puVar46 & uVar2) != 0) {
          fVar58 = local_2e0._0_4_ - *pfVar47;
          fVar59 = local_2e0._4_4_ - pfVar47[1];
          fVar60 = local_2e0._8_4_ - pfVar47[2];
          fVar61 = local_2e0._12_4_ - pfVar47[3];
          fVar58 = fVar58 * fVar58;
          fVar59 = fVar59 * fVar59;
          fVar60 = fVar60 * fVar60;
          fVar61 = fVar61 * fVar61;
          auVar8._4_4_ = fVar59;
          auVar8._0_4_ = fVar58;
          auVar8._8_4_ = fVar60;
          auVar8._12_4_ = fVar61;
          auVar9._4_4_ = fVar59;
          auVar9._0_4_ = fVar58;
          auVar9._8_4_ = fVar60;
          auVar9._12_4_ = fVar61;
          auVar70 = NEON_ext(auVar8,auVar9,8,1);
          if ((fVar58 + fVar59 + auVar70._0_4_) - local_2d0 < 0.0) {
            if (*pcVar41 == '\0') {
              *(ushort *)(local_3d0 + (long)(int)uVar48 * 2) = uVar35;
              uVar48 = uVar48 + 1;
            }
            else {
              *(ushort *)(local_310 + (long)(int)uVar36 * 2) = uVar35;
              uVar36 = uVar36 + 1;
            }
          }
        }
        uVar35 = uVar35 + 1;
        pfVar47 = pfVar47 + 4;
        puVar46 = puVar46 + 1;
        pcVar41 = pcVar41 + 1;
      } while ((int)(uint)uVar35 < (int)uVar3);
LAB_005e0ee4:
      uVar2 = uVar36;
      uVar26 = uVar36;
      if (uVar3 == uVar36) {
LAB_005e0ef0:
        uVar2 = uVar3;
        uVar26 = (uint)local_318;
      }
    }
    else {
      if (0 < (int)uVar3) {
        uVar35 = 0;
        pcVar41 = *(char **)(lVar39 + 0x188);
        uVar36 = 0;
        uVar48 = 0;
        pfVar45 = *(float **)(param_4 + 0x20);
        pfVar47 = (float *)(*(long *)(lVar39 + 0x40) + 4);
        do {
          fVar58 = local_2e0._0_4_ - *pfVar45;
          fVar59 = local_2e0._4_4_ - pfVar45[1];
          fVar60 = local_2e0._8_4_ - pfVar45[2];
          fVar61 = local_2e0._12_4_ - pfVar45[3];
          fVar58 = fVar58 * fVar58;
          fVar59 = fVar59 * fVar59;
          fVar60 = fVar60 * fVar60;
          fVar61 = fVar61 * fVar61;
          auVar6._4_4_ = fVar59;
          auVar6._0_4_ = fVar58;
          auVar6._8_4_ = fVar60;
          auVar6._12_4_ = fVar61;
          auVar7._4_4_ = fVar59;
          auVar7._0_4_ = fVar58;
          auVar7._8_4_ = fVar60;
          auVar7._12_4_ = fVar61;
          auVar70 = NEON_ext(auVar6,auVar7,8,1);
          if (((fVar58 + fVar59 + auVar70._0_4_) - local_2d0 < 0.0) && (*pfVar47 != 0.0)) {
            if (*pcVar41 == '\0') {
              *(ushort *)(local_3d0 + (long)(int)uVar48 * 2) = uVar35;
              uVar48 = uVar48 + 1;
            }
            else {
              *(ushort *)(local_310 + (long)(int)uVar36 * 2) = uVar35;
              uVar36 = uVar36 + 1;
            }
          }
          uVar35 = uVar35 + 1;
          pfVar45 = pfVar45 + 4;
          pcVar41 = pcVar41 + 1;
          pfVar47 = pfVar47 + 4;
        } while ((int)(uint)uVar35 < (int)uVar3);
        goto LAB_005e0ee4;
      }
LAB_005e0f04:
      uVar48 = 0;
      uVar36 = 0;
      uVar2 = uVar36;
      uVar26 = uVar36;
      if (uVar3 == 0) goto LAB_005e0ef0;
    }
    local_318._0_4_ = uVar26;
    uVar26 = uVar48;
    uVar27 = uVar48;
    if (uVar3 == uVar48) {
      uVar26 = uVar3;
      uVar27 = (uint)local_2f8;
    }
    local_2f8._0_4_ = uVar27;
    local_320 = local_310;
    if (uVar36 != 0) {
      local_350 = *(long *)(param_4 + 0x220);
      local_330 = *(ushort *)(lVar39 + 0x1a8);
      uStack_348 = *(ulong *)(param_4 + 0x228);
      local_340 = *(long *)(param_4 + 0x230);
      local_338 = *(undefined8 *)(param_4 + 0x210);
      if (param_7 == 0) {
        local_2c0 = 0;
        local_2b8 = 0x8000000000000000;
        local_2a8 = uVar36;
        lVar31 = FUN_0043c4e0(DAT_04c6f050);
        lVar53 = DAT_04c6f058;
        if (lVar31 != 0) {
          lVar53 = lVar31;
        }
        uVar34 = (ulong)(int)(uVar36 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar53 + 0x10) < uVar34) {
LAB_005e1038:
          lVar31 = FUN_00439510(lVar53,uVar34);
        }
        else {
          lVar31 = *(long *)(lVar53 + 0x18);
          if (*(ulong *)(lVar53 + 0x20) < lVar31 + uVar34) goto LAB_005e1038;
          *(ulong *)(lVar53 + 0x18) = lVar31 + uVar34;
        }
        local_2b8 = CONCAT44(uVar36,(undefined4)local_2b8) | 0x8000000000000000;
        local_2c0 = lVar31;
        local_2b0 = lVar31;
        lVar55 = FUN_0043c4e0(DAT_04c6f050);
        lVar53 = DAT_04c6f058;
        if (lVar55 != 0) {
          lVar53 = lVar55;
        }
        if (*(ulong *)(lVar53 + 0x10) < uVar34) {
LAB_005e1c5c:
          lVar55 = FUN_00439510(lVar53,uVar34);
        }
        else {
          lVar55 = *(long *)(lVar53 + 0x18);
          if (*(ulong *)(lVar53 + 0x20) < lVar55 + uVar34) goto LAB_005e1c5c;
          *(ulong *)(lVar53 + 0x18) = lVar55 + uVar34;
        }
        local_2b8 = CONCAT44(local_2b8._4_4_,uVar36);
        if (0 < (int)uVar36) {
          uVar38 = 0;
          do {
            uVar57 = uVar38 & 0xffff;
            uVar3 = (int)uVar38 + 1;
            uVar38 = (ulong)uVar3;
            lVar40 = uVar57 * 4;
            lVar53 = *(long *)(lVar39 + 0x40) + (ulong)*(ushort *)(lVar32 + uVar57 * 2) * 0x10;
            *(undefined4 *)(lVar31 + lVar40) = *(undefined4 *)(lVar53 + 8);
            *(undefined4 *)(lVar55 + lVar40) = *(undefined4 *)(lVar53 + 0xc);
          } while ((int)(uVar3 & 0xffff) < (int)uVar36);
        }
        FUN_00600070(param_1,lVar51,&local_320,&local_2c0,param_4,&local_350);
        lVar40 = FUN_0043c4e0(DAT_04c6f050);
        lVar53 = DAT_04c6f058;
        if (lVar40 != 0) {
          lVar53 = lVar40;
        }
        if (((*(ulong *)(lVar53 + 0x10) < uVar34) || (*(long *)(lVar53 + 0x18) != lVar55 + uVar34))
           || (*(long *)(lVar53 + 0x28) == lVar55)) {
          FUN_00439980(lVar53,lVar55,uVar34);
        }
        else {
          *(long *)(lVar53 + 0x18) = lVar55;
        }
        uVar36 = local_2a8;
        local_2b8 = local_2b8 & 0xffffffff00000000;
        lVar55 = FUN_0043c4e0(DAT_04c6f050);
        lVar53 = DAT_04c6f058;
        if (lVar55 != 0) {
          lVar53 = lVar55;
        }
        uVar34 = (ulong)(int)(uVar36 * 4 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar53 + 0x10) < uVar34) || (*(long *)(lVar53 + 0x18) != lVar31 + uVar34))
           || (*(long *)(lVar53 + 0x28) == lVar31)) {
          FUN_00439980(lVar53,lVar31);
        }
        else {
          *(long *)(lVar53 + 0x18) = lVar31;
        }
      }
      else {
        lVar55 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar55 != 0) {
          lVar31 = lVar55;
        }
        uVar34 = (ulong)(int)(uVar36 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar31 + 0x10) < uVar34) {
LAB_005e0fc4:
          lVar55 = FUN_00439510(lVar31,uVar34);
        }
        else {
          lVar55 = *(long *)(lVar31 + 0x18);
          if (*(ulong *)(lVar31 + 0x20) < lVar55 + uVar34) goto LAB_005e0fc4;
          *(ulong *)(lVar31 + 0x18) = lVar55 + uVar34;
        }
        lVar40 = FUN_0043c4e0(DAT_04c6f050);
        lVar31 = DAT_04c6f058;
        if (lVar40 != 0) {
          lVar31 = lVar40;
        }
        if (*(ulong *)(lVar31 + 0x10) < uVar34) {
LAB_005e122c:
          lVar40 = FUN_00439510(lVar31,uVar34);
        }
        else {
          lVar40 = *(long *)(lVar31 + 0x18);
          if (*(ulong *)(lVar31 + 0x20) < lVar40 + uVar34) goto LAB_005e122c;
          *(ulong *)(lVar31 + 0x18) = lVar40 + uVar34;
        }
        if (0 < (int)uVar36) {
          uVar38 = 0;
          do {
            uVar57 = uVar38 & 0xffff;
            uVar3 = (int)uVar38 + 1;
            uVar38 = (ulong)uVar3;
            lVar42 = uVar57 * 4;
            lVar31 = *(long *)(lVar39 + 0x40) + (ulong)*(ushort *)(lVar32 + uVar57 * 2) * 0x10;
            *(undefined4 *)(lVar55 + lVar42) = *(undefined4 *)(lVar31 + 8);
            *(undefined4 *)(lVar40 + lVar42) = *(undefined4 *)(lVar31 + 0xc);
          } while ((int)(uVar3 & 0xffff) < (int)uVar36);
        }
        uVar33 = FUN_0054d870(*puVar37,lVar51 + 0x20,&local_2c0);
        lVar31 = *(long *)(param_4 + 0x18);
        if (param_7 == 2) {
          if (0 < (int)uVar2) {
            lVar42 = 0;
            pcVar41 = (char *)(lVar53 + (long)(int)param_2 * 0xa0 + 0x9c);
            do {
              uVar38 = (ulong)*(ushort *)(lVar32 + lVar42 * 2);
              if (((*(char *)(local_340 + (uVar38 - local_330)) <= *pcVar41) &&
                  (*(char *)(uStack_348 + (uVar38 - local_330)) == '\0')) &&
                 (uVar57 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2d0) + uVar38 * 2),
                 uVar57 != 0xffff)) {
                lVar54 = *(long *)(param_4 + 0x20);
                uVar5 = *(undefined4 *)(*(long *)(lVar31 + 0x40) + uVar38 * 0x10 + 8);
                local_80[0] = CONCAT44(uVar5,uVar5);
                lVar53 = *(long *)(lVar31 + 0x290) + uVar57 * 8;
                bVar50 = *(byte *)(lVar53 + 6);
                if (bVar50 != 0) {
                  iVar76 = 0;
                  bVar56 = 0;
                  lVar43 = lVar54;
                  while( true ) {
                    puVar4 = (undefined8 *)(lVar54 + uVar38 * 0x10);
                    uVar83 = puVar4[1];
                    fVar60 = (float)uVar83;
                    fVar61 = (float)((ulong)uVar83 >> 0x20);
                    uVar83 = *puVar4;
                    fVar58 = (float)uVar83;
                    fVar59 = (float)((ulong)uVar83 >> 0x20);
                    puVar44 = (ushort *)
                              (*(long *)(lVar31 + 0x280) +
                              ((ulong)((uint)*(ushort *)(lVar53 + 2) + (uint)bVar56) & 0xffff) * 6);
                    auVar70 = *(undefined1 (*) [16])(lVar43 + (ulong)*puVar44 * 0x10);
                    auVar77 = *(undefined1 (*) [16])(lVar43 + (ulong)puVar44[1] * 0x10);
                    psVar1 = (short *)(*(long *)(lVar31 + 0x210) + (ulong)puVar44[2] * 4);
                    pbVar49 = (byte *)(psVar1 + 1);
                    if (*pbVar49 != 0) {
                      fVar87 = auVar70._0_4_ - fVar58;
                      fVar88 = auVar70._4_4_ - fVar59;
                      fVar89 = auVar70._8_4_ - fVar60;
                      fVar90 = auVar70._12_4_ - fVar61;
                      auVar14._4_4_ = fVar88;
                      auVar14._0_4_ = fVar87;
                      auVar14._8_4_ = fVar89;
                      auVar14._12_4_ = fVar90;
                      auVar15._4_4_ = fVar88;
                      auVar15._0_4_ = fVar87;
                      auVar15._8_4_ = fVar89;
                      auVar15._12_4_ = fVar90;
                      auVar70 = NEON_ext(auVar14,auVar15,4,1);
                      fVar91 = auVar77._0_4_ - fVar58;
                      fVar92 = auVar77._4_4_ - fVar59;
                      fVar93 = auVar77._8_4_ - fVar60;
                      fVar94 = auVar77._12_4_ - fVar61;
                      auVar22._4_4_ = fVar92;
                      auVar22._0_4_ = fVar91;
                      auVar22._8_4_ = fVar93;
                      auVar22._12_4_ = fVar94;
                      auVar23._4_4_ = fVar92;
                      auVar23._0_4_ = fVar91;
                      auVar23._8_4_ = fVar93;
                      auVar23._12_4_ = fVar94;
                      auVar77 = NEON_ext(auVar22,auVar23,4,1);
                      auVar85 = NEON_ext(auVar70,auVar70,8,1);
                      auVar86 = NEON_ext(auVar77,auVar77,8,1);
                      uVar83 = NEON_rev64(auVar85._0_8_,4);
                      bVar50 = 0;
                      uVar84 = NEON_rev64(auVar86._0_8_,4);
                      auVar71._0_4_ = fVar87 * auVar77._0_4_ - fVar91 * auVar70._0_4_;
                      auVar71._4_4_ = fVar88 * auVar77._4_4_ - fVar92 * auVar70._4_4_;
                      auVar71._8_4_ = fVar89 * (float)uVar84 - fVar93 * (float)uVar83;
                      auVar71._12_4_ =
                           fVar90 * (float)((ulong)uVar84 >> 0x20) -
                           fVar94 * (float)((ulong)uVar83 >> 0x20);
                      auVar70 = NEON_ext(auVar71,auVar71,4,1);
                      fVar63 = auVar70._0_4_;
                      fVar73 = auVar70._4_4_;
                      while( true ) {
                        pfVar47 = (float *)(*(long *)(lVar31 + 0x200) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 8);
                        fVar74 = *pfVar47;
                        fVar62 = pfVar47[1];
                        local_90 = fVar58 + fVar87 * fVar74 + fVar91 * fVar62;
                        fStack_8c = fVar59 + fVar88 * fVar74 + fVar92 * fVar62;
                        fStack_88 = fVar60 + fVar89 * fVar74 + fVar93 * fVar62;
                        fStack_84 = fVar61 + fVar90 * fVar74 + fVar94 * fVar62;
                        FUN_0054d980(uVar33,&local_90,local_80,
                                     (uint)*(ushort *)(lVar53 + 4) + iVar76,local_a0,&local_b0,
                                     &local_b8);
                        fVar58 = (float)local_b8 - (float)local_80[0];
                        fVar59 = (float)((ulong)local_b8 >> 0x20) -
                                 (float)((ulong)local_80[0] >> 0x20);
                        local_b8 = CONCAT44(fVar59,fVar58);
                        if (fVar58 < 0.0) {
                          fVar60 = auVar71._0_4_ * auVar71._0_4_ + fVar63 * fVar63 + fVar73 * fVar73
                          ;
                          fVar74 = auVar71._0_4_ * auVar71._0_4_ + fVar63 * fVar63 + fVar73 * fVar73
                          ;
                          uVar83 = CONCAT44(fVar74,fVar60);
                          uVar84 = NEON_frsqrte(uVar83,4);
                          fVar61 = (float)uVar84;
                          fVar62 = (float)((ulong)uVar84 >> 0x20);
                          uVar84 = NEON_frsqrts(uVar83,CONCAT44(fVar62 * fVar62,fVar61 * fVar61),4);
                          fVar61 = fVar61 * (float)uVar84;
                          fVar62 = fVar62 * (float)((ulong)uVar84 >> 0x20);
                          iVar75 = -(uint)(fVar60 <= 0.0);
                          iVar82 = -(uint)(fVar74 <= 0.0);
                          uVar83 = NEON_frsqrts(uVar83,CONCAT44(fVar62 * fVar62,fVar61 * fVar61),4);
                          fVar61 = (float)uVar83 * fVar61;
                          fVar62 = (float)((ulong)uVar83 >> 0x20) * fVar62;
                          fVar60 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) &
                                                   ~(byte)((uint)iVar75 >> 0x18),
                                                   CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                                            ~(byte)((uint)iVar75 >> 0x10),
                                                            CONCAT11((byte)((uint)fVar61 >> 8) &
                                                                     ~(byte)((uint)iVar75 >> 8),
                                                                     SUB41(fVar61,0) & ~(byte)iVar75
                                                                    )));
                          auVar66._0_4_ = fVar63 * fVar60;
                          fVar61 = (float)(CONCAT17((byte)((uint)fVar62 >> 0x18) &
                                                    ~(byte)((uint)iVar82 >> 0x18),
                                                    CONCAT16((byte)((uint)fVar62 >> 0x10) &
                                                             ~(byte)((uint)iVar82 >> 0x10),
                                                             CONCAT15((byte)((uint)fVar62 >> 8) &
                                                                      ~(byte)((uint)iVar82 >> 8),
                                                                      CONCAT14(SUB41(fVar62,0) &
                                                                               ~(byte)iVar82,fVar60)
                                                                     ))) >> 0x20);
                          auVar66._4_4_ = fVar73 * fVar61;
                          auVar66._8_4_ = auVar71._0_4_ * fVar60;
                          fVar61 = auVar71._4_4_ * fVar61;
                          auVar80._0_4_ = local_b0 * auVar66._0_4_;
                          auVar80._4_4_ = fStack_ac * auVar66._4_4_;
                          auVar80._8_4_ = fStack_a8 * auVar66._8_4_;
                          auVar80._12_4_ = fStack_a4 * fVar61;
                          auVar70 = NEON_ext(auVar80,auVar80,8,1);
                          if (auVar80._0_4_ + auVar80._4_4_ + auVar70._0_4_ < 0.0) {
                            auVar66._0_4_ = -auVar66._0_4_;
                            auVar66._4_4_ = -auVar66._4_4_;
                            auVar66._8_4_ = -auVar66._8_4_;
                          }
                          auVar70 = *(undefined1 (*) [16])(lVar54 + uVar38 * 0x10);
                          puVar4 = (undefined8 *)(lVar54 + uVar38 * 0x10);
                          puVar4[1] = CONCAT44(auVar70._12_4_ - fVar59 * fVar61,
                                               auVar70._8_4_ - fVar58 * auVar66._8_4_);
                          *puVar4 = CONCAT44(auVar70._4_4_ - fVar59 * auVar66._4_4_,
                                             auVar70._0_4_ - fVar58 * auVar66._0_4_);
                        }
                        bVar50 = bVar50 + 1;
                        iVar76 = iVar76 + 1;
                        if (*pbVar49 <= bVar50) break;
                        puVar4 = (undefined8 *)(lVar54 + uVar38 * 0x10);
                        uVar83 = puVar4[1];
                        fVar60 = (float)uVar83;
                        fVar61 = (float)((ulong)uVar83 >> 0x20);
                        uVar83 = *puVar4;
                        fVar58 = (float)uVar83;
                        fVar59 = (float)((ulong)uVar83 >> 0x20);
                      }
                      bVar50 = *(byte *)(lVar53 + 6);
                    }
                    bVar56 = bVar56 + 1;
                    if (bVar50 <= bVar56) break;
                    lVar43 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar42 = lVar42 + 1;
            } while (lVar42 != (int)uVar2);
            if (*(int *)(lVar31 + 0x278) != 0) {
              lVar53 = 0;
              do {
                uVar38 = (ulong)*(ushort *)(lVar32 + lVar53 * 2);
                if (((*(char *)(local_340 + (uVar38 - local_330)) <= *pcVar41) &&
                    (*(char *)(uStack_348 + (uVar38 - local_330)) == '\0')) &&
                   (uVar57 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2c0) + uVar38 * 2),
                   uVar57 != 0xffff)) {
                  lVar54 = *(long *)(param_4 + 0x20);
                  uVar5 = *(undefined4 *)(*(long *)(lVar31 + 0x40) + uVar38 * 0x10 + 8);
                  local_80[0] = CONCAT44(uVar5,uVar5);
                  lVar42 = *(long *)(lVar31 + 0x270) + uVar57 * 8;
                  bVar50 = *(byte *)(lVar42 + 6);
                  if (bVar50 != 0) {
                    iVar76 = 0;
                    bVar56 = 0;
                    lVar43 = lVar54;
                    while( true ) {
                      puVar4 = (undefined8 *)(lVar54 + uVar38 * 0x10);
                      uVar83 = puVar4[1];
                      fVar60 = (float)uVar83;
                      fVar61 = (float)((ulong)uVar83 >> 0x20);
                      uVar83 = *puVar4;
                      fVar58 = (float)uVar83;
                      fVar59 = (float)((ulong)uVar83 >> 0x20);
                      puVar44 = (ushort *)
                                (*(long *)(lVar31 + 0x260) +
                                (ulong)(ushort)(*(short *)(lVar42 + 2) + (ushort)bVar56) * 4);
                      auVar70 = *(undefined1 (*) [16])(lVar43 + (ulong)*puVar44 * 0x10);
                      psVar1 = (short *)(*(long *)(lVar31 + 0x1f0) + (ulong)puVar44[1] * 4);
                      pbVar49 = (byte *)(psVar1 + 1);
                      if (*pbVar49 != 0) {
                        fVar63 = auVar70._0_4_ - fVar58;
                        fVar73 = auVar70._4_4_ - fVar59;
                        fVar87 = auVar70._8_4_ - fVar60;
                        fVar88 = auVar70._12_4_ - fVar61;
                        bVar50 = 0;
                        while( true ) {
                          fVar89 = *(float *)(*(long *)(lVar31 + 0x1e0) +
                                             (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 4);
                          local_90 = fVar58 + fVar63 * fVar89;
                          fStack_8c = fVar59 + fVar73 * fVar89;
                          fStack_88 = fVar60 + fVar87 * fVar89;
                          fStack_84 = fVar61 + fVar88 * fVar89;
                          FUN_0054d980(uVar33,&local_90,local_80,
                                       (uint)*(ushort *)(lVar42 + 4) + iVar76,local_a0,&local_b0,
                                       &local_b8);
                          fVar58 = (float)local_b8 - (float)local_80[0];
                          fVar59 = (float)((ulong)local_b8 >> 0x20) -
                                   (float)((ulong)local_80[0] >> 0x20);
                          local_b8 = CONCAT44(fVar59,fVar58);
                          if (fVar58 < 0.0) {
                            auVar70 = *(undefined1 (*) [16])(lVar54 + uVar38 * 0x10);
                            puVar4 = (undefined8 *)(lVar54 + uVar38 * 0x10);
                            puVar4[1] = CONCAT44(auVar70._12_4_ - fVar59 * fStack_a4,
                                                 auVar70._8_4_ - fVar58 * fStack_a8);
                            *puVar4 = CONCAT44(auVar70._4_4_ - fVar59 * fStack_ac,
                                               auVar70._0_4_ - fVar58 * local_b0);
                          }
                          bVar50 = bVar50 + 1;
                          iVar76 = iVar76 + 1;
                          if (*pbVar49 <= bVar50) break;
                          puVar4 = (undefined8 *)(lVar54 + uVar38 * 0x10);
                          uVar83 = puVar4[1];
                          fVar60 = (float)uVar83;
                          fVar61 = (float)((ulong)uVar83 >> 0x20);
                          uVar83 = *puVar4;
                          fVar58 = (float)uVar83;
                          fVar59 = (float)((ulong)uVar83 >> 0x20);
                        }
                        bVar50 = *(byte *)(lVar42 + 6);
                      }
                      bVar56 = bVar56 + 1;
                      if (bVar50 <= bVar56) break;
                      lVar43 = *(long *)(param_4 + 0x20);
                    }
                  }
                }
                lVar53 = lVar53 + 1;
              } while (lVar53 != (int)uVar2);
            }
          }
        }
        else if (0 < (int)uVar2) {
          lVar42 = 0;
          pcVar41 = (char *)(lVar53 + (long)(int)param_2 * 0xa0 + 0x9c);
          do {
            uVar38 = (ulong)*(ushort *)(lVar32 + lVar42 * 2);
            if (((*(char *)(local_340 + (uVar38 - local_330)) <= *pcVar41) &&
                (*(char *)(uStack_348 + (uVar38 - local_330)) == '\0')) &&
               (uVar57 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2b0) + uVar38 * 2),
               uVar57 != 0xffff)) {
              uVar5 = *(undefined4 *)(*(long *)(lVar31 + 0x40) + uVar38 * 0x10 + 8);
              local_80[0] = CONCAT44(uVar5,uVar5);
              lVar53 = *(long *)(lVar31 + 0x250);
              pbVar49 = (byte *)(lVar53 + uVar57 * 6 + 4);
              bVar50 = *pbVar49;
              if (bVar50 != 0) {
                lVar43 = *(long *)(param_4 + 0x20);
                bVar56 = 0;
                lVar54 = lVar43;
                while( true ) {
                  puVar4 = (undefined8 *)(lVar43 + uVar38 * 0x10);
                  uVar83 = puVar4[1];
                  fVar60 = (float)uVar83;
                  fVar61 = (float)((ulong)uVar83 >> 0x20);
                  uVar83 = *puVar4;
                  fVar58 = (float)uVar83;
                  fVar59 = (float)((ulong)uVar83 >> 0x20);
                  puVar44 = (ushort *)
                            (*(long *)(lVar31 + 0x240) +
                            ((ulong)((uint)*(ushort *)(lVar53 + uVar57 * 6 + 2) + (uint)bVar56) &
                            0xffff) * 6);
                  auVar70 = *(undefined1 (*) [16])(lVar54 + (ulong)*puVar44 * 0x10);
                  auVar77 = *(undefined1 (*) [16])(lVar54 + (ulong)puVar44[1] * 0x10);
                  psVar1 = (short *)(*(long *)(lVar31 + 0x210) + (ulong)puVar44[2] * 4);
                  pbVar52 = (byte *)(psVar1 + 1);
                  if (*pbVar52 != 0) {
                    fVar87 = auVar70._0_4_ - fVar58;
                    fVar88 = auVar70._4_4_ - fVar59;
                    fVar89 = auVar70._8_4_ - fVar60;
                    fVar90 = auVar70._12_4_ - fVar61;
                    auVar16._4_4_ = fVar88;
                    auVar16._0_4_ = fVar87;
                    auVar16._8_4_ = fVar89;
                    auVar16._12_4_ = fVar90;
                    auVar17._4_4_ = fVar88;
                    auVar17._0_4_ = fVar87;
                    auVar17._8_4_ = fVar89;
                    auVar17._12_4_ = fVar90;
                    auVar70 = NEON_ext(auVar16,auVar17,4,1);
                    fVar91 = auVar77._0_4_ - fVar58;
                    fVar92 = auVar77._4_4_ - fVar59;
                    fVar93 = auVar77._8_4_ - fVar60;
                    fVar94 = auVar77._12_4_ - fVar61;
                    auVar24._4_4_ = fVar92;
                    auVar24._0_4_ = fVar91;
                    auVar24._8_4_ = fVar93;
                    auVar24._12_4_ = fVar94;
                    auVar25._4_4_ = fVar92;
                    auVar25._0_4_ = fVar91;
                    auVar25._8_4_ = fVar93;
                    auVar25._12_4_ = fVar94;
                    auVar77 = NEON_ext(auVar24,auVar25,4,1);
                    auVar85 = NEON_ext(auVar70,auVar70,8,1);
                    auVar86 = NEON_ext(auVar77,auVar77,8,1);
                    uVar83 = NEON_rev64(auVar85._0_8_,4);
                    bVar50 = 0;
                    uVar84 = NEON_rev64(auVar86._0_8_,4);
                    auVar72._0_4_ = fVar87 * auVar77._0_4_ - fVar91 * auVar70._0_4_;
                    auVar72._4_4_ = fVar88 * auVar77._4_4_ - fVar92 * auVar70._4_4_;
                    auVar72._8_4_ = fVar89 * (float)uVar84 - fVar93 * (float)uVar83;
                    auVar72._12_4_ =
                         fVar90 * (float)((ulong)uVar84 >> 0x20) -
                         fVar94 * (float)((ulong)uVar83 >> 0x20);
                    auVar70 = NEON_ext(auVar72,auVar72,4,1);
                    fVar63 = auVar70._0_4_;
                    fVar73 = auVar70._4_4_;
                    while( true ) {
                      pfVar47 = (float *)(*(long *)(lVar31 + 0x200) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 8);
                      fVar74 = *pfVar47;
                      fVar62 = pfVar47[1];
                      local_90 = fVar58 + fVar87 * fVar74 + fVar91 * fVar62;
                      fStack_8c = fVar59 + fVar88 * fVar74 + fVar92 * fVar62;
                      fStack_88 = fVar60 + fVar89 * fVar74 + fVar93 * fVar62;
                      fStack_84 = fVar61 + fVar90 * fVar74 + fVar94 * fVar62;
                      FUN_0054d980(uVar33,&local_90,local_80,0xffff,local_a0,&local_b0,&local_b8);
                      fVar58 = (float)local_b8 - (float)local_80[0];
                      fVar59 = (float)((ulong)local_b8 >> 0x20) -
                               (float)((ulong)local_80[0] >> 0x20);
                      local_b8 = CONCAT44(fVar59,fVar58);
                      if (fVar58 < 0.0) {
                        fVar60 = auVar72._0_4_ * auVar72._0_4_ + fVar63 * fVar63 + fVar73 * fVar73;
                        fVar74 = auVar72._0_4_ * auVar72._0_4_ + fVar63 * fVar63 + fVar73 * fVar73;
                        uVar83 = CONCAT44(fVar74,fVar60);
                        uVar84 = NEON_frsqrte(uVar83,4);
                        fVar61 = (float)uVar84;
                        fVar62 = (float)((ulong)uVar84 >> 0x20);
                        uVar84 = NEON_frsqrts(uVar83,CONCAT44(fVar62 * fVar62,fVar61 * fVar61),4);
                        fVar61 = fVar61 * (float)uVar84;
                        fVar62 = fVar62 * (float)((ulong)uVar84 >> 0x20);
                        iVar76 = -(uint)(fVar60 <= 0.0);
                        iVar75 = -(uint)(fVar74 <= 0.0);
                        uVar83 = NEON_frsqrts(uVar83,CONCAT44(fVar62 * fVar62,fVar61 * fVar61),4);
                        fVar61 = (float)uVar83 * fVar61;
                        fVar62 = (float)((ulong)uVar83 >> 0x20) * fVar62;
                        fVar60 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) &
                                                 ~(byte)((uint)iVar76 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                                          ~(byte)((uint)iVar76 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar61 >> 8) &
                                                                   ~(byte)((uint)iVar76 >> 8),
                                                                   SUB41(fVar61,0) & ~(byte)iVar76))
                                                );
                        auVar67._0_4_ = fVar63 * fVar60;
                        fVar61 = (float)(CONCAT17((byte)((uint)fVar62 >> 0x18) &
                                                  ~(byte)((uint)iVar75 >> 0x18),
                                                  CONCAT16((byte)((uint)fVar62 >> 0x10) &
                                                           ~(byte)((uint)iVar75 >> 0x10),
                                                           CONCAT15((byte)((uint)fVar62 >> 8) &
                                                                    ~(byte)((uint)iVar75 >> 8),
                                                                    CONCAT14(SUB41(fVar62,0) &
                                                                             ~(byte)iVar75,fVar60)))
                                                 ) >> 0x20);
                        auVar67._4_4_ = fVar73 * fVar61;
                        auVar67._8_4_ = auVar72._0_4_ * fVar60;
                        fVar61 = auVar72._4_4_ * fVar61;
                        auVar81._0_4_ = local_b0 * auVar67._0_4_;
                        auVar81._4_4_ = fStack_ac * auVar67._4_4_;
                        auVar81._8_4_ = fStack_a8 * auVar67._8_4_;
                        auVar81._12_4_ = fStack_a4 * fVar61;
                        auVar70 = NEON_ext(auVar81,auVar81,8,1);
                        if (auVar81._0_4_ + auVar81._4_4_ + auVar70._0_4_ < 0.0) {
                          auVar67._0_4_ = -auVar67._0_4_;
                          auVar67._4_4_ = -auVar67._4_4_;
                          auVar67._8_4_ = -auVar67._8_4_;
                        }
                        auVar70 = *(undefined1 (*) [16])(lVar43 + uVar38 * 0x10);
                        puVar4 = (undefined8 *)(lVar43 + uVar38 * 0x10);
                        puVar4[1] = CONCAT44(auVar70._12_4_ - fVar59 * fVar61,
                                             auVar70._8_4_ - fVar58 * auVar67._8_4_);
                        *puVar4 = CONCAT44(auVar70._4_4_ - fVar59 * auVar67._4_4_,
                                           auVar70._0_4_ - fVar58 * auVar67._0_4_);
                      }
                      bVar50 = bVar50 + 1;
                      if (*pbVar52 <= bVar50) break;
                      puVar4 = (undefined8 *)(lVar43 + uVar38 * 0x10);
                      uVar83 = puVar4[1];
                      fVar60 = (float)uVar83;
                      fVar61 = (float)((ulong)uVar83 >> 0x20);
                      uVar83 = *puVar4;
                      fVar58 = (float)uVar83;
                      fVar59 = (float)((ulong)uVar83 >> 0x20);
                    }
                    bVar50 = *pbVar49;
                  }
                  bVar56 = bVar56 + 1;
                  if (bVar50 <= bVar56) break;
                  lVar54 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar42 = lVar42 + 1;
          } while (lVar42 != (int)uVar2);
          if (*(int *)(lVar31 + 0x238) != 0) {
            lVar53 = 0;
            do {
              uVar38 = (ulong)*(ushort *)(lVar32 + lVar53 * 2);
              if (((*(char *)(local_340 + (uVar38 - local_330)) <= *pcVar41) &&
                  (*(char *)(uStack_348 + (uVar38 - local_330)) == '\0')) &&
                 (uVar57 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x2a0) + uVar38 * 2),
                 uVar57 != 0xffff)) {
                uVar5 = *(undefined4 *)(*(long *)(lVar31 + 0x40) + uVar38 * 0x10 + 8);
                local_80[0] = CONCAT44(uVar5,uVar5);
                lVar42 = *(long *)(lVar31 + 0x230);
                pbVar49 = (byte *)(lVar42 + uVar57 * 6 + 4);
                bVar50 = *pbVar49;
                if (bVar50 != 0) {
                  lVar43 = *(long *)(param_4 + 0x20);
                  bVar56 = 0;
                  lVar54 = lVar43;
                  while( true ) {
                    puVar4 = (undefined8 *)(lVar43 + uVar38 * 0x10);
                    uVar83 = puVar4[1];
                    fVar60 = (float)uVar83;
                    fVar61 = (float)((ulong)uVar83 >> 0x20);
                    uVar83 = *puVar4;
                    fVar58 = (float)uVar83;
                    fVar59 = (float)((ulong)uVar83 >> 0x20);
                    puVar44 = (ushort *)
                              (*(long *)(lVar31 + 0x220) +
                              (ulong)(ushort)(*(short *)(lVar42 + uVar57 * 6 + 2) + (ushort)bVar56)
                              * 4);
                    auVar70 = *(undefined1 (*) [16])(lVar54 + (ulong)*puVar44 * 0x10);
                    psVar1 = (short *)(*(long *)(lVar31 + 0x1f0) + (ulong)puVar44[1] * 4);
                    pbVar52 = (byte *)(psVar1 + 1);
                    if (*pbVar52 != 0) {
                      fVar63 = auVar70._0_4_ - fVar58;
                      fVar73 = auVar70._4_4_ - fVar59;
                      fVar87 = auVar70._8_4_ - fVar60;
                      fVar88 = auVar70._12_4_ - fVar61;
                      bVar50 = 0;
                      while( true ) {
                        fVar89 = *(float *)(*(long *)(lVar31 + 0x1e0) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 4);
                        local_90 = fVar58 + fVar63 * fVar89;
                        fStack_8c = fVar59 + fVar73 * fVar89;
                        fStack_88 = fVar60 + fVar87 * fVar89;
                        fStack_84 = fVar61 + fVar88 * fVar89;
                        FUN_0054d980(uVar33,&local_90,local_80,0xffff,local_a0,&local_b0,&local_b8);
                        fVar58 = (float)local_b8 - (float)local_80[0];
                        fVar59 = (float)((ulong)local_b8 >> 0x20) -
                                 (float)((ulong)local_80[0] >> 0x20);
                        local_b8 = CONCAT44(fVar59,fVar58);
                        if (fVar58 < 0.0) {
                          auVar70 = *(undefined1 (*) [16])(lVar43 + uVar38 * 0x10);
                          puVar4 = (undefined8 *)(lVar43 + uVar38 * 0x10);
                          puVar4[1] = CONCAT44(auVar70._12_4_ - fVar59 * fStack_a4,
                                               auVar70._8_4_ - fVar58 * fStack_a8);
                          *puVar4 = CONCAT44(auVar70._4_4_ - fVar59 * fStack_ac,
                                             auVar70._0_4_ - fVar58 * local_b0);
                        }
                        bVar50 = bVar50 + 1;
                        if (*pbVar52 <= bVar50) break;
                        puVar4 = (undefined8 *)(lVar43 + uVar38 * 0x10);
                        uVar83 = puVar4[1];
                        fVar60 = (float)uVar83;
                        fVar61 = (float)((ulong)uVar83 >> 0x20);
                        uVar83 = *puVar4;
                        fVar58 = (float)uVar83;
                        fVar59 = (float)((ulong)uVar83 >> 0x20);
                      }
                      bVar50 = *pbVar49;
                    }
                    bVar56 = bVar56 + 1;
                    if (bVar50 <= bVar56) break;
                    lVar54 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar53 = lVar53 + 1;
            } while (lVar53 != (int)uVar2);
          }
        }
        lVar31 = FUN_0043c4e0(DAT_04c6f050);
        lVar53 = DAT_04c6f058;
        if (lVar31 != 0) {
          lVar53 = lVar31;
        }
        if (((*(ulong *)(lVar53 + 0x10) < uVar34) || (*(long *)(lVar53 + 0x18) != lVar40 + uVar34))
           || (*(long *)(lVar53 + 0x28) == lVar40)) {
          FUN_00439980(lVar53,lVar40,uVar34);
        }
        else {
          *(long *)(lVar53 + 0x18) = lVar40;
        }
        lVar31 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
        lVar53 = DAT_04c6f058;
        if (lVar31 != 0) {
          lVar53 = lVar31;
        }
        if (((*(ulong *)(lVar53 + 0x10) < uVar34) || (*(long *)(lVar53 + 0x18) != lVar55 + uVar34))
           || (*(long *)(lVar53 + 0x28) == lVar55)) {
          FUN_00439980(lVar53,lVar55,uVar34);
        }
        else {
          *(long *)(lVar53 + 0x18) = lVar55;
        }
      }
    }
    uVar36 = local_308;
    local_318 = (ulong)local_318._4_4_ << 0x20;
    lVar31 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar53 = DAT_04c6f058;
    if (lVar31 != 0) {
      lVar53 = lVar31;
    }
    uVar34 = (ulong)(int)(uVar36 * 2 + 0x7f & 0xffffff80);
    uVar3 = uVar26;
    if (((*(ulong *)(lVar53 + 0x10) < uVar34) || (*(long *)(lVar53 + 0x18) != uVar34 + lVar32)) ||
       (*(long *)(lVar53 + 0x28) == lVar32)) {
      FUN_00439980();
    }
    else {
      *(long *)(lVar53 + 0x18) = lVar32;
    }
  }
  if (uVar48 == 0) goto LAB_005e1df0;
  if (param_7 == 0) {
    local_2c0 = 0;
    local_2b8 = 0x8000000000000000;
    local_2a8 = uVar48;
    lVar32 = FUN_0043c4e0(DAT_04c6f050);
    lVar53 = DAT_04c6f058;
    if (lVar32 != 0) {
      lVar53 = lVar32;
    }
    uVar34 = (ulong)(int)(uVar48 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar53 + 0x10) < uVar34) {
LAB_005e0484:
      lVar32 = FUN_00439510(lVar53,uVar34);
    }
    else {
      lVar32 = *(long *)(lVar53 + 0x18);
      if (*(ulong *)(lVar53 + 0x20) < lVar32 + uVar34) goto LAB_005e0484;
      *(ulong *)(lVar53 + 0x18) = lVar32 + uVar34;
    }
    local_2b8 = CONCAT44(uVar48,(undefined4)local_2b8) | 0x8000000000000000;
    local_350 = 0;
    uStack_348 = 0x8000000000000000;
    local_338 = CONCAT44(local_338._4_4_,uVar48);
    local_2c0 = lVar32;
    local_2b0 = lVar32;
    lVar31 = FUN_0043c4e0(DAT_04c6f050);
    lVar53 = DAT_04c6f058;
    if (lVar31 != 0) {
      lVar53 = lVar31;
    }
    if (*(ulong *)(lVar53 + 0x10) < uVar34) {
LAB_005e10c4:
      lVar31 = FUN_00439510(lVar53,uVar34);
    }
    else {
      lVar31 = *(long *)(lVar53 + 0x18);
      if (*(ulong *)(lVar53 + 0x20) < lVar31 + uVar34) goto LAB_005e10c4;
      *(ulong *)(lVar53 + 0x18) = lVar31 + uVar34;
    }
    local_2b8 = CONCAT44(local_2b8._4_4_,uVar48);
    uStack_348 = CONCAT44(uVar48,uVar48) | 0x8000000000000000;
    if (0 < (int)uVar48) {
      uVar34 = 0;
      do {
        uVar38 = uVar34 & 0xffff;
        uVar36 = (int)uVar34 + 1;
        uVar34 = (ulong)uVar36;
        lVar55 = uVar38 * 4;
        lVar53 = *(long *)(lVar39 + 0x40) + (ulong)*(ushort *)(local_3d0 + uVar38 * 2) * 0x10;
        *(undefined4 *)(lVar32 + lVar55) = *(undefined4 *)(lVar53 + 8);
        *(undefined4 *)(lVar31 + lVar55) = *(undefined4 *)(lVar53 + 0xc);
      } while ((int)(uVar36 & 0xffff) < (int)uVar48);
    }
    local_350 = lVar31;
    local_340 = lVar31;
    FUN_00604360(param_1,lVar51,&local_300,&local_2c0,&local_350,param_4);
    iVar76 = (int)local_338;
    uStack_348 = uStack_348 & 0xffffffff00000000;
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar39 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar39 = lVar51;
    }
    uVar34 = (ulong)(int)(iVar76 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar39 + 0x10) < uVar34) || (*(long *)(lVar39 + 0x18) != lVar31 + uVar34)) ||
       (*(long *)(lVar39 + 0x28) == lVar31)) {
      FUN_00439980(lVar39,lVar31);
    }
    else {
      *(long *)(lVar39 + 0x18) = lVar31;
    }
    uVar36 = local_2a8;
    local_2b8 = local_2b8 & 0xffffffff00000000;
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar39 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar39 = lVar51;
    }
    uVar34 = (ulong)(int)(uVar36 * 4 + 0x7f & 0xffffff80);
    if (((uVar34 <= *(ulong *)(lVar39 + 0x10)) && (*(long *)(lVar39 + 0x18) == lVar32 + uVar34)) &&
       (*(long *)(lVar39 + 0x28) != lVar32)) {
      *(long *)(lVar39 + 0x18) = lVar32;
      goto LAB_005e1df0;
    }
  }
  else {
    lVar32 = FUN_0043c4e0(DAT_04c6f050);
    lVar53 = DAT_04c6f058;
    if (lVar32 != 0) {
      lVar53 = lVar32;
    }
    uVar34 = (ulong)(int)(uVar48 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar53 + 0x10) < uVar34) {
LAB_005e0414:
      lVar32 = FUN_00439510(lVar53,uVar34);
    }
    else {
      lVar32 = *(long *)(lVar53 + 0x18);
      if (*(ulong *)(lVar53 + 0x20) < lVar32 + uVar34) goto LAB_005e0414;
      *(ulong *)(lVar53 + 0x18) = lVar32 + uVar34;
    }
    lVar31 = FUN_0043c4e0(DAT_04c6f050);
    lVar53 = DAT_04c6f058;
    if (lVar31 != 0) {
      lVar53 = lVar31;
    }
    if (*(ulong *)(lVar53 + 0x10) < uVar34) {
LAB_005e04cc:
      lVar31 = FUN_00439510(lVar53,uVar34);
    }
    else {
      lVar31 = *(long *)(lVar53 + 0x18);
      if (*(ulong *)(lVar53 + 0x20) < lVar31 + uVar34) goto LAB_005e04cc;
      *(ulong *)(lVar53 + 0x18) = lVar31 + uVar34;
    }
    if (0 < (int)uVar48) {
      uVar38 = 0;
      do {
        uVar57 = uVar38 & 0xffff;
        uVar36 = (int)uVar38 + 1;
        uVar38 = (ulong)uVar36;
        lVar55 = uVar57 * 4;
        lVar53 = *(long *)(lVar39 + 0x40) + (ulong)*(ushort *)(local_3d0 + uVar57 * 2) * 0x10;
        *(undefined4 *)(lVar32 + lVar55) = *(undefined4 *)(lVar53 + 8);
        *(undefined4 *)(lVar31 + lVar55) = *(undefined4 *)(lVar53 + 0xc);
      } while ((int)(uVar36 & 0xffff) < (int)uVar48);
    }
    uVar33 = FUN_0054d870(*puVar37,lVar51 + 0x20,&local_2c0);
    lVar39 = *(long *)(param_4 + 0x18);
    if (param_7 == 2) {
      if (0 < (int)uVar3) {
        lVar51 = 0;
        do {
          uVar57 = (ulong)*(ushort *)(local_3d0 + lVar51 * 2);
          uVar38 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2d0) + uVar57 * 2);
          if (uVar38 != 0xffff) {
            lVar55 = *(long *)(param_4 + 0x20);
            uVar5 = *(undefined4 *)(*(long *)(lVar39 + 0x40) + uVar57 * 0x10 + 8);
            local_a0[0] = CONCAT44(uVar5,uVar5);
            lVar53 = *(long *)(lVar39 + 0x290) + uVar38 * 8;
            bVar50 = *(byte *)(lVar53 + 6);
            if (bVar50 != 0) {
              iVar76 = 0;
              bVar56 = 0;
              lVar40 = lVar55;
              while( true ) {
                puVar37 = (undefined8 *)(lVar55 + uVar57 * 0x10);
                uVar83 = puVar37[1];
                fVar60 = (float)uVar83;
                fVar61 = (float)((ulong)uVar83 >> 0x20);
                uVar83 = *puVar37;
                fVar58 = (float)uVar83;
                fVar59 = (float)((ulong)uVar83 >> 0x20);
                puVar44 = (ushort *)
                          (*(long *)(lVar39 + 0x280) +
                          ((ulong)((uint)*(ushort *)(lVar53 + 2) + (uint)bVar56) & 0xffff) * 6);
                auVar70 = *(undefined1 (*) [16])(lVar40 + (ulong)*puVar44 * 0x10);
                auVar77 = *(undefined1 (*) [16])(lVar40 + (ulong)puVar44[1] * 0x10);
                psVar1 = (short *)(*(long *)(lVar39 + 0x210) + (ulong)puVar44[2] * 4);
                pbVar49 = (byte *)(psVar1 + 1);
                if (*pbVar49 != 0) {
                  fVar87 = auVar70._0_4_ - fVar58;
                  fVar88 = auVar70._4_4_ - fVar59;
                  fVar89 = auVar70._8_4_ - fVar60;
                  fVar90 = auVar70._12_4_ - fVar61;
                  auVar10._4_4_ = fVar88;
                  auVar10._0_4_ = fVar87;
                  auVar10._8_4_ = fVar89;
                  auVar10._12_4_ = fVar90;
                  auVar11._4_4_ = fVar88;
                  auVar11._0_4_ = fVar87;
                  auVar11._8_4_ = fVar89;
                  auVar11._12_4_ = fVar90;
                  auVar70 = NEON_ext(auVar10,auVar11,4,1);
                  fVar91 = auVar77._0_4_ - fVar58;
                  fVar92 = auVar77._4_4_ - fVar59;
                  fVar93 = auVar77._8_4_ - fVar60;
                  fVar94 = auVar77._12_4_ - fVar61;
                  auVar18._4_4_ = fVar92;
                  auVar18._0_4_ = fVar91;
                  auVar18._8_4_ = fVar93;
                  auVar18._12_4_ = fVar94;
                  auVar19._4_4_ = fVar92;
                  auVar19._0_4_ = fVar91;
                  auVar19._8_4_ = fVar93;
                  auVar19._12_4_ = fVar94;
                  auVar77 = NEON_ext(auVar18,auVar19,4,1);
                  auVar85 = NEON_ext(auVar70,auVar70,8,1);
                  auVar86 = NEON_ext(auVar77,auVar77,8,1);
                  uVar83 = NEON_rev64(auVar85._0_8_,4);
                  bVar50 = 0;
                  uVar84 = NEON_rev64(auVar86._0_8_,4);
                  auVar68._0_4_ = fVar87 * auVar77._0_4_ - fVar91 * auVar70._0_4_;
                  auVar68._4_4_ = fVar88 * auVar77._4_4_ - fVar92 * auVar70._4_4_;
                  auVar68._8_4_ = fVar89 * (float)uVar84 - fVar93 * (float)uVar83;
                  auVar68._12_4_ =
                       fVar90 * (float)((ulong)uVar84 >> 0x20) -
                       fVar94 * (float)((ulong)uVar83 >> 0x20);
                  auVar70 = NEON_ext(auVar68,auVar68,4,1);
                  fVar63 = auVar70._0_4_;
                  fVar73 = auVar70._4_4_;
                  while( true ) {
                    pfVar47 = (float *)(*(long *)(lVar39 + 0x200) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 8);
                    fVar74 = *pfVar47;
                    fVar62 = pfVar47[1];
                    uStack_348 = CONCAT44(fVar61 + fVar90 * fVar74 + fVar94 * fVar62,
                                          fVar60 + fVar89 * fVar74 + fVar93 * fVar62);
                    local_350 = CONCAT44(fVar59 + fVar88 * fVar74 + fVar92 * fVar62,
                                         fVar58 + fVar87 * fVar74 + fVar91 * fVar62);
                    FUN_0054d980(uVar33,&local_350,local_a0,(uint)*(ushort *)(lVar53 + 4) + iVar76,
                                 &local_320,&local_90,&local_b0);
                    local_b0 = local_b0 - (float)local_a0[0];
                    fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                    if (local_b0 < 0.0) {
                      fVar58 = auVar68._0_4_ * auVar68._0_4_ + fVar63 * fVar63 + fVar73 * fVar73;
                      fVar60 = auVar68._0_4_ * auVar68._0_4_ + fVar63 * fVar63 + fVar73 * fVar73;
                      uVar83 = CONCAT44(fVar60,fVar58);
                      uVar84 = NEON_frsqrte(uVar83,4);
                      fVar59 = (float)uVar84;
                      fVar61 = (float)((ulong)uVar84 >> 0x20);
                      uVar84 = NEON_frsqrts(uVar83,CONCAT44(fVar61 * fVar61,fVar59 * fVar59),4);
                      fVar59 = fVar59 * (float)uVar84;
                      fVar61 = fVar61 * (float)((ulong)uVar84 >> 0x20);
                      iVar75 = -(uint)(fVar58 <= 0.0);
                      iVar82 = -(uint)(fVar60 <= 0.0);
                      uVar83 = NEON_frsqrts(uVar83,CONCAT44(fVar61 * fVar61,fVar59 * fVar59),4);
                      fVar59 = (float)uVar83 * fVar59;
                      fVar61 = (float)((ulong)uVar83 >> 0x20) * fVar61;
                      fVar58 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                               ~(byte)((uint)iVar75 >> 0x18),
                                               CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                                        ~(byte)((uint)iVar75 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar59 >> 8) &
                                                                 ~(byte)((uint)iVar75 >> 8),
                                                                 SUB41(fVar59,0) & ~(byte)iVar75)));
                      auVar64._0_4_ = fVar63 * fVar58;
                      fVar59 = (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) &
                                                ~(byte)((uint)iVar82 >> 0x18),
                                                CONCAT16((byte)((uint)fVar61 >> 0x10) &
                                                         ~(byte)((uint)iVar82 >> 0x10),
                                                         CONCAT15((byte)((uint)fVar61 >> 8) &
                                                                  ~(byte)((uint)iVar82 >> 8),
                                                                  CONCAT14(SUB41(fVar61,0) &
                                                                           ~(byte)iVar82,fVar58))))
                                      >> 0x20);
                      auVar64._4_4_ = fVar73 * fVar59;
                      auVar64._8_4_ = auVar68._0_4_ * fVar58;
                      fVar59 = auVar68._4_4_ * fVar59;
                      auVar78._0_4_ = local_90 * auVar64._0_4_;
                      auVar78._4_4_ = fStack_8c * auVar64._4_4_;
                      auVar78._8_4_ = fStack_88 * auVar64._8_4_;
                      auVar78._12_4_ = fStack_84 * fVar59;
                      auVar70 = NEON_ext(auVar78,auVar78,8,1);
                      if (auVar78._0_4_ + auVar78._4_4_ + auVar70._0_4_ < 0.0) {
                        auVar64._0_4_ = -auVar64._0_4_;
                        auVar64._4_4_ = -auVar64._4_4_;
                        auVar64._8_4_ = -auVar64._8_4_;
                      }
                      auVar70 = *(undefined1 (*) [16])(lVar55 + uVar57 * 0x10);
                      puVar37 = (undefined8 *)(lVar55 + uVar57 * 0x10);
                      puVar37[1] = CONCAT44(auVar70._12_4_ - fStack_ac * fVar59,
                                            auVar70._8_4_ - local_b0 * auVar64._8_4_);
                      *puVar37 = CONCAT44(auVar70._4_4_ - fStack_ac * auVar64._4_4_,
                                          auVar70._0_4_ - local_b0 * auVar64._0_4_);
                    }
                    bVar50 = bVar50 + 1;
                    iVar76 = iVar76 + 1;
                    if (*pbVar49 <= bVar50) break;
                    puVar37 = (undefined8 *)(lVar55 + uVar57 * 0x10);
                    uVar83 = puVar37[1];
                    fVar60 = (float)uVar83;
                    fVar61 = (float)((ulong)uVar83 >> 0x20);
                    uVar83 = *puVar37;
                    fVar58 = (float)uVar83;
                    fVar59 = (float)((ulong)uVar83 >> 0x20);
                  }
                  bVar50 = *(byte *)(lVar53 + 6);
                }
                bVar56 = bVar56 + 1;
                if (bVar50 <= bVar56) break;
                lVar40 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar51 = lVar51 + 1;
        } while (lVar51 != (int)uVar3);
        if (*(int *)(lVar39 + 0x278) != 0) {
          lVar51 = 0;
          do {
            uVar57 = (ulong)*(ushort *)(local_3d0 + lVar51 * 2);
            uVar38 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2c0) + uVar57 * 2);
            if (uVar38 != 0xffff) {
              lVar55 = *(long *)(param_4 + 0x20);
              uVar5 = *(undefined4 *)(*(long *)(lVar39 + 0x40) + uVar57 * 0x10 + 8);
              local_a0[0] = CONCAT44(uVar5,uVar5);
              lVar53 = *(long *)(lVar39 + 0x270) + uVar38 * 8;
              bVar50 = *(byte *)(lVar53 + 6);
              if (bVar50 != 0) {
                iVar76 = 0;
                bVar56 = 0;
                lVar40 = lVar55;
                while( true ) {
                  puVar37 = (undefined8 *)(lVar55 + uVar57 * 0x10);
                  uVar83 = puVar37[1];
                  fVar60 = (float)uVar83;
                  fVar61 = (float)((ulong)uVar83 >> 0x20);
                  uVar83 = *puVar37;
                  fVar58 = (float)uVar83;
                  fVar59 = (float)((ulong)uVar83 >> 0x20);
                  puVar44 = (ushort *)
                            (*(long *)(lVar39 + 0x260) +
                            (ulong)(ushort)(*(short *)(lVar53 + 2) + (ushort)bVar56) * 4);
                  auVar70 = *(undefined1 (*) [16])(lVar40 + (ulong)*puVar44 * 0x10);
                  psVar1 = (short *)(*(long *)(lVar39 + 0x1f0) + (ulong)puVar44[1] * 4);
                  pbVar49 = (byte *)(psVar1 + 1);
                  if (*pbVar49 != 0) {
                    fVar63 = auVar70._0_4_ - fVar58;
                    fVar73 = auVar70._4_4_ - fVar59;
                    fVar87 = auVar70._8_4_ - fVar60;
                    fVar88 = auVar70._12_4_ - fVar61;
                    bVar50 = 0;
                    while( true ) {
                      fVar89 = *(float *)(*(long *)(lVar39 + 0x1e0) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 4);
                      uStack_348 = CONCAT44(fVar61 + fVar88 * fVar89,fVar60 + fVar87 * fVar89);
                      local_350 = CONCAT44(fVar59 + fVar73 * fVar89,fVar58 + fVar63 * fVar89);
                      FUN_0054d980(uVar33,&local_350,local_a0,(uint)*(ushort *)(lVar53 + 4) + iVar76
                                   ,&local_320,&local_90,&local_b0);
                      local_b0 = local_b0 - (float)local_a0[0];
                      fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                      if (local_b0 < 0.0) {
                        auVar70 = *(undefined1 (*) [16])(lVar55 + uVar57 * 0x10);
                        puVar37 = (undefined8 *)(lVar55 + uVar57 * 0x10);
                        puVar37[1] = CONCAT44(auVar70._12_4_ - fStack_ac * fStack_84,
                                              auVar70._8_4_ - local_b0 * fStack_88);
                        *puVar37 = CONCAT44(auVar70._4_4_ - fStack_ac * fStack_8c,
                                            auVar70._0_4_ - local_b0 * local_90);
                      }
                      bVar50 = bVar50 + 1;
                      iVar76 = iVar76 + 1;
                      if (*pbVar49 <= bVar50) break;
                      puVar37 = (undefined8 *)(lVar55 + uVar57 * 0x10);
                      uVar83 = puVar37[1];
                      fVar60 = (float)uVar83;
                      fVar61 = (float)((ulong)uVar83 >> 0x20);
                      uVar83 = *puVar37;
                      fVar58 = (float)uVar83;
                      fVar59 = (float)((ulong)uVar83 >> 0x20);
                    }
                    bVar50 = *(byte *)(lVar53 + 6);
                  }
                  bVar56 = bVar56 + 1;
                  if (bVar50 <= bVar56) break;
                  lVar40 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar51 = lVar51 + 1;
          } while (lVar51 != (int)uVar3);
        }
      }
    }
    else if (0 < (int)uVar3) {
      lVar51 = 0;
      do {
        uVar57 = (ulong)*(ushort *)(local_3d0 + lVar51 * 2);
        uVar38 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2b0) + uVar57 * 2);
        if (uVar38 != 0xffff) {
          uVar5 = *(undefined4 *)(*(long *)(lVar39 + 0x40) + uVar57 * 0x10 + 8);
          local_a0[0] = CONCAT44(uVar5,uVar5);
          lVar53 = *(long *)(lVar39 + 0x250);
          pbVar49 = (byte *)(lVar53 + uVar38 * 6 + 4);
          bVar50 = *pbVar49;
          if (bVar50 != 0) {
            lVar40 = *(long *)(param_4 + 0x20);
            bVar56 = 0;
            lVar55 = lVar40;
            while( true ) {
              puVar37 = (undefined8 *)(lVar40 + uVar57 * 0x10);
              uVar83 = puVar37[1];
              fVar60 = (float)uVar83;
              fVar61 = (float)((ulong)uVar83 >> 0x20);
              uVar83 = *puVar37;
              fVar58 = (float)uVar83;
              fVar59 = (float)((ulong)uVar83 >> 0x20);
              puVar44 = (ushort *)
                        (*(long *)(lVar39 + 0x240) +
                        ((ulong)((uint)*(ushort *)(lVar53 + uVar38 * 6 + 2) + (uint)bVar56) & 0xffff
                        ) * 6);
              auVar70 = *(undefined1 (*) [16])(lVar55 + (ulong)*puVar44 * 0x10);
              auVar77 = *(undefined1 (*) [16])(lVar55 + (ulong)puVar44[1] * 0x10);
              psVar1 = (short *)(*(long *)(lVar39 + 0x210) + (ulong)puVar44[2] * 4);
              pbVar52 = (byte *)(psVar1 + 1);
              if (*pbVar52 != 0) {
                fVar87 = auVar70._0_4_ - fVar58;
                fVar88 = auVar70._4_4_ - fVar59;
                fVar89 = auVar70._8_4_ - fVar60;
                fVar90 = auVar70._12_4_ - fVar61;
                auVar12._4_4_ = fVar88;
                auVar12._0_4_ = fVar87;
                auVar12._8_4_ = fVar89;
                auVar12._12_4_ = fVar90;
                auVar13._4_4_ = fVar88;
                auVar13._0_4_ = fVar87;
                auVar13._8_4_ = fVar89;
                auVar13._12_4_ = fVar90;
                auVar70 = NEON_ext(auVar12,auVar13,4,1);
                fVar91 = auVar77._0_4_ - fVar58;
                fVar92 = auVar77._4_4_ - fVar59;
                fVar93 = auVar77._8_4_ - fVar60;
                fVar94 = auVar77._12_4_ - fVar61;
                auVar20._4_4_ = fVar92;
                auVar20._0_4_ = fVar91;
                auVar20._8_4_ = fVar93;
                auVar20._12_4_ = fVar94;
                auVar21._4_4_ = fVar92;
                auVar21._0_4_ = fVar91;
                auVar21._8_4_ = fVar93;
                auVar21._12_4_ = fVar94;
                auVar77 = NEON_ext(auVar20,auVar21,4,1);
                auVar85 = NEON_ext(auVar70,auVar70,8,1);
                auVar86 = NEON_ext(auVar77,auVar77,8,1);
                uVar83 = NEON_rev64(auVar85._0_8_,4);
                bVar50 = 0;
                uVar84 = NEON_rev64(auVar86._0_8_,4);
                auVar69._0_4_ = fVar87 * auVar77._0_4_ - fVar91 * auVar70._0_4_;
                auVar69._4_4_ = fVar88 * auVar77._4_4_ - fVar92 * auVar70._4_4_;
                auVar69._8_4_ = fVar89 * (float)uVar84 - fVar93 * (float)uVar83;
                auVar69._12_4_ =
                     fVar90 * (float)((ulong)uVar84 >> 0x20) -
                     fVar94 * (float)((ulong)uVar83 >> 0x20);
                auVar70 = NEON_ext(auVar69,auVar69,4,1);
                fVar63 = auVar70._0_4_;
                fVar73 = auVar70._4_4_;
                while( true ) {
                  pfVar47 = (float *)(*(long *)(lVar39 + 0x200) +
                                     (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 8);
                  fVar74 = *pfVar47;
                  fVar62 = pfVar47[1];
                  uStack_348 = CONCAT44(fVar61 + fVar90 * fVar74 + fVar94 * fVar62,
                                        fVar60 + fVar89 * fVar74 + fVar93 * fVar62);
                  local_350 = CONCAT44(fVar59 + fVar88 * fVar74 + fVar92 * fVar62,
                                       fVar58 + fVar87 * fVar74 + fVar91 * fVar62);
                  FUN_0054d980(uVar33,&local_350,local_a0,0xffff,&local_320,&local_90,&local_b0);
                  local_b0 = local_b0 - (float)local_a0[0];
                  fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                  if (local_b0 < 0.0) {
                    fVar58 = auVar69._0_4_ * auVar69._0_4_ + fVar63 * fVar63 + fVar73 * fVar73;
                    fVar60 = auVar69._0_4_ * auVar69._0_4_ + fVar63 * fVar63 + fVar73 * fVar73;
                    uVar83 = CONCAT44(fVar60,fVar58);
                    uVar84 = NEON_frsqrte(uVar83,4);
                    fVar59 = (float)uVar84;
                    fVar61 = (float)((ulong)uVar84 >> 0x20);
                    uVar84 = NEON_frsqrts(uVar83,CONCAT44(fVar61 * fVar61,fVar59 * fVar59),4);
                    fVar59 = fVar59 * (float)uVar84;
                    fVar61 = fVar61 * (float)((ulong)uVar84 >> 0x20);
                    iVar76 = -(uint)(fVar58 <= 0.0);
                    iVar75 = -(uint)(fVar60 <= 0.0);
                    uVar83 = NEON_frsqrts(uVar83,CONCAT44(fVar61 * fVar61,fVar59 * fVar59),4);
                    fVar59 = (float)uVar83 * fVar59;
                    fVar61 = (float)((ulong)uVar83 >> 0x20) * fVar61;
                    fVar58 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                             ~(byte)((uint)iVar76 >> 0x18),
                                             CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                                      ~(byte)((uint)iVar76 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar59 >> 8) &
                                                               ~(byte)((uint)iVar76 >> 8),
                                                               SUB41(fVar59,0) & ~(byte)iVar76)));
                    auVar65._0_4_ = fVar63 * fVar58;
                    fVar59 = (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) &
                                              ~(byte)((uint)iVar75 >> 0x18),
                                              CONCAT16((byte)((uint)fVar61 >> 0x10) &
                                                       ~(byte)((uint)iVar75 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar61 >> 8) &
                                                                ~(byte)((uint)iVar75 >> 8),
                                                                CONCAT14(SUB41(fVar61,0) &
                                                                         ~(byte)iVar75,fVar58)))) >>
                                    0x20);
                    auVar65._4_4_ = fVar73 * fVar59;
                    auVar65._8_4_ = auVar69._0_4_ * fVar58;
                    fVar59 = auVar69._4_4_ * fVar59;
                    auVar79._0_4_ = local_90 * auVar65._0_4_;
                    auVar79._4_4_ = fStack_8c * auVar65._4_4_;
                    auVar79._8_4_ = fStack_88 * auVar65._8_4_;
                    auVar79._12_4_ = fStack_84 * fVar59;
                    auVar70 = NEON_ext(auVar79,auVar79,8,1);
                    if (auVar79._0_4_ + auVar79._4_4_ + auVar70._0_4_ < 0.0) {
                      auVar65._0_4_ = -auVar65._0_4_;
                      auVar65._4_4_ = -auVar65._4_4_;
                      auVar65._8_4_ = -auVar65._8_4_;
                    }
                    auVar70 = *(undefined1 (*) [16])(lVar40 + uVar57 * 0x10);
                    puVar37 = (undefined8 *)(lVar40 + uVar57 * 0x10);
                    puVar37[1] = CONCAT44(auVar70._12_4_ - fStack_ac * fVar59,
                                          auVar70._8_4_ - local_b0 * auVar65._8_4_);
                    *puVar37 = CONCAT44(auVar70._4_4_ - fStack_ac * auVar65._4_4_,
                                        auVar70._0_4_ - local_b0 * auVar65._0_4_);
                  }
                  bVar50 = bVar50 + 1;
                  if (*pbVar52 <= bVar50) break;
                  puVar37 = (undefined8 *)(lVar40 + uVar57 * 0x10);
                  uVar83 = puVar37[1];
                  fVar60 = (float)uVar83;
                  fVar61 = (float)((ulong)uVar83 >> 0x20);
                  uVar83 = *puVar37;
                  fVar58 = (float)uVar83;
                  fVar59 = (float)((ulong)uVar83 >> 0x20);
                }
                bVar50 = *pbVar49;
              }
              bVar56 = bVar56 + 1;
              if (bVar50 <= bVar56) break;
              lVar55 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar51 = lVar51 + 1;
      } while (lVar51 != (int)uVar3);
      if (*(int *)(lVar39 + 0x238) != 0) {
        lVar51 = 0;
        do {
          uVar57 = (ulong)*(ushort *)(local_3d0 + lVar51 * 2);
          uVar38 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2a0) + uVar57 * 2);
          if (uVar38 != 0xffff) {
            uVar5 = *(undefined4 *)(*(long *)(lVar39 + 0x40) + uVar57 * 0x10 + 8);
            local_a0[0] = CONCAT44(uVar5,uVar5);
            lVar53 = *(long *)(lVar39 + 0x230);
            pbVar49 = (byte *)(lVar53 + uVar38 * 6 + 4);
            bVar50 = *pbVar49;
            if (bVar50 != 0) {
              lVar40 = *(long *)(param_4 + 0x20);
              bVar56 = 0;
              lVar55 = lVar40;
              while( true ) {
                puVar37 = (undefined8 *)(lVar40 + uVar57 * 0x10);
                uVar83 = puVar37[1];
                fVar60 = (float)uVar83;
                fVar61 = (float)((ulong)uVar83 >> 0x20);
                uVar83 = *puVar37;
                fVar58 = (float)uVar83;
                fVar59 = (float)((ulong)uVar83 >> 0x20);
                puVar44 = (ushort *)
                          (*(long *)(lVar39 + 0x220) +
                          (ulong)(ushort)(*(short *)(lVar53 + uVar38 * 6 + 2) + (ushort)bVar56) * 4)
                ;
                auVar70 = *(undefined1 (*) [16])(lVar55 + (ulong)*puVar44 * 0x10);
                psVar1 = (short *)(*(long *)(lVar39 + 0x1f0) + (ulong)puVar44[1] * 4);
                pbVar52 = (byte *)(psVar1 + 1);
                if (*pbVar52 != 0) {
                  fVar63 = auVar70._0_4_ - fVar58;
                  fVar73 = auVar70._4_4_ - fVar59;
                  fVar87 = auVar70._8_4_ - fVar60;
                  fVar88 = auVar70._12_4_ - fVar61;
                  bVar50 = 0;
                  while( true ) {
                    fVar89 = *(float *)(*(long *)(lVar39 + 0x1e0) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar50) * 4);
                    uStack_348 = CONCAT44(fVar61 + fVar88 * fVar89,fVar60 + fVar87 * fVar89);
                    local_350 = CONCAT44(fVar59 + fVar73 * fVar89,fVar58 + fVar63 * fVar89);
                    FUN_0054d980(uVar33,&local_350,local_a0,0xffff,&local_320,&local_90,&local_b0);
                    local_b0 = local_b0 - (float)local_a0[0];
                    fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                    if (local_b0 < 0.0) {
                      auVar70 = *(undefined1 (*) [16])(lVar40 + uVar57 * 0x10);
                      puVar37 = (undefined8 *)(lVar40 + uVar57 * 0x10);
                      puVar37[1] = CONCAT44(auVar70._12_4_ - fStack_ac * fStack_84,
                                            auVar70._8_4_ - local_b0 * fStack_88);
                      *puVar37 = CONCAT44(auVar70._4_4_ - fStack_ac * fStack_8c,
                                          auVar70._0_4_ - local_b0 * local_90);
                    }
                    bVar50 = bVar50 + 1;
                    if (*pbVar52 <= bVar50) break;
                    puVar37 = (undefined8 *)(lVar40 + uVar57 * 0x10);
                    uVar83 = puVar37[1];
                    fVar60 = (float)uVar83;
                    fVar61 = (float)((ulong)uVar83 >> 0x20);
                    uVar83 = *puVar37;
                    fVar58 = (float)uVar83;
                    fVar59 = (float)((ulong)uVar83 >> 0x20);
                  }
                  bVar50 = *pbVar49;
                }
                bVar56 = bVar56 + 1;
                if (bVar50 <= bVar56) break;
                lVar55 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar51 = lVar51 + 1;
        } while (lVar51 != (int)uVar3);
      }
    }
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar39 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar39 = lVar51;
    }
    if (((*(ulong *)(lVar39 + 0x10) < uVar34) || (*(long *)(lVar39 + 0x18) != lVar31 + uVar34)) ||
       (*(long *)(lVar39 + 0x28) == lVar31)) {
      FUN_00439980(lVar39,lVar31,uVar34);
    }
    else {
      *(long *)(lVar39 + 0x18) = lVar31;
    }
    lVar51 = FUN_0043c4e0(DAT_04c6f050);
    lVar39 = DAT_04c6f058;
    if (lVar51 != 0) {
      lVar39 = lVar51;
    }
    if (((uVar34 <= *(ulong *)(lVar39 + 0x10)) && (*(long *)(lVar39 + 0x18) == lVar32 + uVar34)) &&
       (*(long *)(lVar39 + 0x28) != lVar32)) {
      *(long *)(lVar39 + 0x18) = lVar32;
      goto LAB_005e1df0;
    }
  }
  FUN_00439980(lVar39,lVar32,uVar34);
LAB_005e1df0:
  uVar36 = local_2e8;
  local_2f8 = (ulong)local_2f8._4_4_ << 0x20;
  lVar51 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar39 = DAT_04c6f058;
  if (lVar51 != 0) {
    lVar39 = lVar51;
  }
  uVar34 = (ulong)(int)(uVar36 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar39 + 0x10) < uVar34) || (*(long *)(lVar39 + 0x18) != uVar34 + local_3d0)) ||
     (*(long *)(lVar39 + 0x28) == local_3d0)) {
    FUN_00439980();
  }
  else {
    *(long *)(lVar39 + 0x18) = local_3d0;
  }
  return;
}

