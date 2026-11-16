
/* WARNING: Type propagation algorithm not settling */

void FUN_029899a0(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined1 uVar10;
  ushort uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  char cVar28;
  char cVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined4 uVar42;
  long *plVar43;
  int iVar44;
  ulong uVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  uint *puVar49;
  undefined4 uVar50;
  int iVar51;
  int iVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  uint local_224;
  uint *local_220;
  int local_218;
  undefined4 local_214;
  int local_210;
  undefined8 local_200;
  undefined4 *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [4];
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1c8;
  uint *local_1c0;
  undefined8 uStack_1b8;
  long *local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  uint local_188;
  int local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
  uint local_160;
  undefined8 local_158;
  undefined1 local_150 [208];
  undefined4 local_78;
  uint local_74;
  
  puVar14 = PTR_DAT_04bb26a8;
  puVar13 = PTR_DAT_04bb2020;
  lVar31 = *param_2;
  if (lVar31 == 0) {
LAB_02989c08:
    local_224 = *(uint *)(param_2 + 2);
LAB_02989c24:
    bVar20 = false;
    bVar1 = false;
    bVar18 = false;
    bVar19 = false;
    plVar43 = (long *)0x0;
    uVar40 = 0xffffffff;
    fVar54 = 0.0;
    fVar53 = -1.0;
    local_218 = -1;
    local_214 = 0xffffffff;
    local_210 = -1;
    local_78 = 0xffffffff;
  }
  else {
    if (*(long *)(lVar31 + 0x18) == 0) {
      lVar34 = *(long *)(lVar31 + 8);
      if ((lVar34 != 0) && (*(int *)(lVar31 + 0x10) == *(int *)(lVar34 + 0x10))) {
        lVar35 = *(long *)(*(long *)(lVar34 + 0x120) + 8);
        lVar36 = *(long *)(lVar35 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar36 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar36 = lVar35 + 0x70;
          }
          lVar36 = *(long *)(lVar36 + 8);
          if (((lVar36 != 0) && (*(uint *)(lVar36 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar36 + 0x18) + lVar36) == 0x101feff464e494d))
          goto LAB_029899fc;
        }
      }
      goto LAB_02989c08;
    }
    lVar34 = *(long *)(lVar31 + 8);
LAB_029899fc:
    if (((lVar34 == 0) || (*(int *)(lVar34 + 0x10) != *(int *)(lVar31 + 0x10))) ||
       ((*(int *)(lVar34 + 0xc) == 0 || (*(int *)(lVar34 + 0xc) == 7)))) {
      local_224 = *(uint *)(param_2 + 2);
      if (-1 < (int)local_224) goto LAB_02989a34;
      goto LAB_02989c24;
    }
    local_224 = *(uint *)(param_2 + 2);
LAB_02989a34:
    local_188 = local_188 & 0xffffff00;
    local_198 = &local_188;
    local_190 = (long *)0x10000000000;
    local_74 = 0;
    if (local_224 != 99999 && -1 < (int)local_224) {
      local_74 = local_224;
    }
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_1a8._8_8_ = &DAT_0405db6e;
    local_1a8._0_8_ = puVar2;
    FUN_02a21700(&local_198,local_1a8,2,&local_74);
    local_1f0 = CONCAT22(local_1f0._2_2_,0xff);
    local_200 = 0;
    local_1f8 = (undefined4 *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = (undefined1  [4])0x0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    local_1c0 = local_198;
    local_1c8 = puVar2;
    uVar23 = FUN_02a0c5d4(*(long *)puVar14 + 0xa5968,&local_200,&local_1c8);
    if ((((uVar23 & 1) == 0) || (local_1f8 == (undefined4 *)0x0)) ||
       ((*(uint *)((long)local_1f8 + 0x18) == 0 ||
        (plVar43 = (long *)((ulong)*(uint *)((long)local_1f8 + 0x18) + (long)local_1f8),
        *plVar43 != 0x101feff464e494d)))) {
      local_188 = local_188 & 0xffffff00;
      local_198 = &local_188;
      local_74 = 0;
      local_190 = (long *)0x10000000000;
      local_1a8._8_8_ = &DAT_0405db6e;
      local_1a8._0_8_ = puVar13 + 0x10;
      FUN_02a21700(&local_198,local_1a8,2,&local_74);
      local_1f0 = CONCAT22(local_1f0._2_2_,0xff);
      local_200 = 0;
      local_1f8 = (undefined4 *)0x0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = (undefined1  [4])0x0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      local_1c0 = local_198;
      local_1c8 = puVar13 + 0x10;
      uVar23 = FUN_02a0c5d4(*(long *)puVar14 + 0xa5968,&local_200,&local_1c8);
      plVar43 = (long *)0x0;
      if ((uVar23 & 1) == 0) goto LAB_02989c5c;
      if (local_1f8 == (undefined4 *)0x0) {
        plVar43 = (long *)0x0;
        goto LAB_02989c5c;
      }
      if (*(uint *)((long)local_1f8 + 0x18) == 0) {
        plVar43 = (long *)0x0;
        uVar40 = *(uint *)(param_2 + 1);
        goto joined_r0x02989cac;
      }
      plVar43 = (long *)((ulong)*(uint *)((long)local_1f8 + 0x18) + (long)local_1f8);
      if (*plVar43 != 0x101feff464e494d) {
        plVar43 = (long *)0x0;
      }
      uVar40 = *(uint *)(param_2 + 1);
      if (-1 < (int)uVar40) goto LAB_02989c64;
LAB_02989cb0:
      bVar19 = *(int *)((long)param_2 + 0xc) != 0;
    }
    else {
LAB_02989c5c:
      uVar40 = *(uint *)(param_2 + 1);
joined_r0x02989cac:
      if ((int)uVar40 < 0) goto LAB_02989cb0;
LAB_02989c64:
      uVar46 = *(uint *)((long)plVar43 + 0x1c);
      uVar40 = uVar40 + 0xc80;
      if (uVar40 < uVar46) goto LAB_02989cb0;
      if (uVar46 == *(uint *)(plVar43 + 3)) {
        uVar40 = 0xffffffff;
        goto LAB_02989cb0;
      }
      uVar40 = (uVar40 - uVar46) + *(uint *)(plVar43 + 3);
      bVar19 = true;
    }
    puVar49 = (uint *)*param_2;
    if (*(long *)(puVar49 + 6) == 0) {
      lVar31 = *(long *)(puVar49 + 2);
      if ((lVar31 != 0) && (puVar49[4] == *(uint *)(lVar31 + 0x10))) {
        lVar31 = *(long *)(*(long *)(lVar31 + 0x120) + 8);
        lVar34 = *(long *)(lVar31 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar34 != 0)) {
          lVar31 = lVar31 + 0x70;
          lVar36 = lVar34;
          if (DAT_05aebc00 != '\0') {
            lVar36 = lVar31;
          }
          lVar36 = *(long *)(lVar36 + 8);
          if (((lVar36 != 0) && (*(uint *)(lVar36 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar36 + 0x18) + lVar36) == 0x101feff464e494d)) {
            if (DAT_05aebc00 == '\0') {
              lVar31 = lVar34;
            }
            plVar4 = (long *)((ulong)*(uint *)(*(long *)(lVar31 + 8) + 0x18) + *(long *)(lVar31 + 8)
                             );
            if (*plVar4 != 0x101feff464e494d) {
              plVar4 = (long *)0x0;
            }
            uVar21 = *(uint *)(plVar4 + 4);
            uVar46 = FUN_03b46270();
            uVar46 = uVar46 & ((int)uVar46 >> 0x1f ^ 0xffffffffU);
            goto LAB_02989cd0;
          }
        }
      }
      bVar1 = false;
    }
    else {
      uVar21 = *(uint *)(*(long *)(puVar49 + 6) + 0x20);
      uVar46 = *puVar49;
LAB_02989cd0:
      bVar1 = uVar46 < uVar21;
    }
    local_78 = FUN_03f0f0a0(puVar49);
    local_210 = FUN_03f0f6f0(puVar49);
    local_218 = FUN_03f0eae0(puVar49);
    local_214 = FUN_03f0ecd0(puVar49);
    fVar53 = (float)FUN_03f0e900(puVar49);
    iVar51 = -local_210;
    if (-1 < local_210) {
      iVar51 = local_210;
    }
    fVar54 = (float)FUN_03f0f270(*param_2);
    bVar18 = true;
    bVar20 = *(int *)(param_1 + 0xad8) != 0;
    bVar20 = (!bVar20 && (int)param_2[1] != 0) && (bVar20 || -1 < (int)param_2[1]);
    fVar54 = (fVar54 + (float)(iVar51 + -1)) / (float)local_218;
  }
  local_220 = (uint *)(param_2 + 2);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0xf0,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x120,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x150,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x180,&local_198);
  lVar31 = param_1 + 0x1e8;
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(lVar31,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x250,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x2b8,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 800,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x388,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x3f0,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x458,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x4c0,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x528,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x590,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x5f8,&local_198);
  lVar34 = param_1 + 0x660;
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(lVar34,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x6c8,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x730,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x798,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x800,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x868,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x8d0,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x938,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0x9a0,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0xa08,&local_198);
  local_198 = (uint *)CONCAT71(local_198._1_7_,bVar19);
  local_198 = (uint *)CONCAT44(uVar40,(undefined4)local_198);
  local_190 = plVar43;
  FUN_029e69e0(param_1 + 0xa70,&local_198);
  local_200 = local_200 & 0xffffffff00000000;
  local_1f8 = (undefined4 *)0x0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0xffffffff;
  if (bVar18) {
    uVar21 = *(uint *)((long)plVar43 + 0x1c);
    uVar46 = uVar40 + 0xc80;
    if ((uVar21 <= uVar46) && (uVar21 != *(uint *)(plVar43 + 3))) {
      uVar46 = (uVar40 - uVar21) + *(uint *)(plVar43 + 3);
    }
    local_180 = SUB84(plVar43,0);
    uStack_17c = (undefined4)((ulong)plVar43 >> 0x20);
    local_190 = (long *)0x0;
    local_188 = 0;
    local_184 = 0;
    local_198 = (uint *)(ulong)uVar46;
    auVar57 = FUN_03f0eec0(&local_198);
    uVar23 = auVar57._8_8_;
    local_1c8 = auVar57._0_8_;
    uVar45 = uVar23 >> 0x20;
    local_1c0 = (uint *)uVar23;
    uVar40 = auVar57._12_4_;
    if (uVar40 == 0) {
LAB_0298a15c:
      memset((undefined1 *)((long)local_1dc + uVar45),0,(ulong)(8 - uVar40));
    }
    else {
      if (uVar45 == 1) {
        uVar32 = 0;
      }
      else {
        uVar32 = 0;
        do {
          uVar10 = local_1a8[uVar32 - 0x1b];
          uVar3 = uVar32 + 1;
          lVar36 = uVar32 + 1;
          puVar7 = (undefined4 *)((long)local_1dc + uVar32);
          if (7 < uVar32) {
            puVar7 = (undefined4 *)local_1dc;
          }
          *(undefined1 *)puVar7 = local_1a8[uVar32 - 0x1c];
          uVar32 = uVar32 + 2;
          puVar7 = (undefined4 *)((long)local_1dc + lVar36);
          if (7 < uVar3) {
            puVar7 = (undefined4 *)local_1dc;
          }
          *(undefined1 *)puVar7 = uVar10;
        } while (uVar32 != (uVar45 & 0xfffffffe));
      }
      if ((uVar23 >> 0x20 & 1) != 0) {
        puVar7 = (undefined4 *)((long)local_1dc + uVar32);
        if (7 < uVar32) {
          puVar7 = (undefined4 *)local_1dc;
        }
        *(undefined1 *)puVar7 = local_1a8[uVar32 - 0x1c];
      }
      if (uVar40 < 8) goto LAB_0298a15c;
    }
    if (0 < (int)uVar40) {
      uVar23 = local_200 >> 0x20;
      local_200 = CONCAT44((int)uVar23,uVar40);
      local_1f8 = (undefined4 *)local_1dc;
    }
  }
  else {
    local_1dc = (undefined1  [4])0x0;
    uStack_1d8 = 0;
  }
  iVar51 = 1;
  uVar40 = 0xffffffff;
  local_74 = 0;
  if (*(char *)(param_1 + 0x188) == '\0') {
    uVar46 = 0xffffffff;
  }
  else {
    uVar46 = 0xffffffff;
    if (*(int *)(param_1 + 0x19c) != -1) {
      local_74 = (uint)*(byte *)(param_1 + 0x1d8);
      uVar46 = (uint)*(byte *)(param_1 + 0x1d9);
      uVar40 = (uint)*(byte *)(param_1 + 0x1da);
      if (local_74 < 0xd) {
        iVar51 = *(int *)(&DAT_0417c064 + (long)(int)local_74 * 4);
      }
    }
  }
  if (*(int *)(param_1 + 0x1a0) == -1) {
    uVar21 = 0xffffffff;
    uVar41 = 0;
    uVar25 = 0;
    uVar24 = 0xffffffff;
    iVar52 = -1;
    if (iVar51 != 1) goto LAB_0298a260;
LAB_0298a2b8:
    if (*(char *)(param_1 + 0xadc) != '\0') {
      iVar51 = *(int *)(param_1 + 0xe8);
      cVar29 = *(char *)(param_1 + 0xadc) + -1;
      goto LAB_0298a350;
    }
    iVar51 = 1;
  }
  else {
    bVar9 = *(byte *)(param_1 + 0x1e4);
    uVar41 = (uint)bVar9;
    uVar24 = (uint)*(byte *)(param_1 + 0x1e5);
    uVar21 = (uint)*(byte *)(param_1 + 0x1e6);
    if (bVar9 < 0xd) {
      uVar25 = *(undefined4 *)(&DAT_0417c064 + (long)(int)(uint)bVar9 * 4);
    }
    else {
      uVar25 = 1;
    }
    fVar55 = *(float *)(param_1 + 0x18c) * 30.0;
    uVar30 = 0;
    if (fVar55 != (float)(int)fVar55) {
      uVar30 = (uint)(0.0 <= fVar55);
    }
    iVar52 = uVar30 + (int)fVar55;
    if (iVar51 == 1) goto LAB_0298a2b8;
LAB_0298a260:
    if ((fVar53 < 1.0) || (80.0 <= fVar53)) {
      if ((fVar53 < 80.0) || (100.0 <= fVar53)) {
        if ((fVar53 < 100.0) || (120.0 <= fVar53)) {
          if (120.0 <= fVar53) {
            cVar28 = '\x03';
          }
          else {
            cVar28 = '\0';
          }
        }
        else {
          cVar28 = '\x04';
        }
      }
      else {
        cVar28 = '\x05';
      }
    }
    else {
      cVar28 = '\x06';
    }
    *(int *)(param_1 + 0xe8) = iVar51;
    cVar29 = cVar28 + '\x04';
    if (iVar51 != 8) {
      cVar29 = cVar28;
    }
LAB_0298a350:
    *(char *)(param_1 + 0xadc) = cVar29;
  }
  if (local_74 < 2) {
LAB_0298a384:
    uVar26 = 0;
  }
  else {
    lVar36 = lVar31 + (ulong)(local_74 - 2) * 0x68;
    if (10 < local_74 - 2) {
      lVar36 = lVar31;
    }
    if (*(int *)(lVar36 + 0x1c) == -1) goto LAB_0298a384;
    uVar26 = *(undefined4 *)(lVar36 + 0x58);
  }
  iVar33 = 0;
  fVar55 = 3.4028235e+38;
  uVar42 = 0;
  iVar44 = -1;
  do {
    lVar36 = lVar31 + (long)iVar33 * 0x68;
    fVar56 = *(float *)(lVar36 + 0xc);
    bVar18 = false;
    if ((0.0 <= fVar56) && (bVar18 = false, !NAN(fVar56) && !NAN(fVar55))) {
      bVar18 = fVar56 < fVar55;
    }
    if ((bVar18) && (fVar55 = fVar56, *(int *)(lVar36 + 0x20) != -1)) {
      fVar56 = fVar56 * 30.0;
      uVar42 = *(undefined4 *)(lVar31 + (long)iVar33 * 0x68 + 0x60);
      uVar30 = 0;
      if (fVar56 != (float)(int)fVar56) {
        uVar30 = (uint)(0.0 <= fVar56);
      }
      iVar44 = uVar30 + (int)fVar56;
    }
    iVar33 = iVar33 + 1;
  } while (iVar33 != 0xb);
  if (local_74 < 2) {
LAB_0298a438:
    uVar27 = 0;
  }
  else {
    lVar31 = lVar34 + (ulong)(local_74 - 2) * 0x68;
    if (10 < local_74 - 2) {
      lVar31 = lVar34;
    }
    if (*(int *)(lVar31 + 0x1c) == -1) goto LAB_0298a438;
    uVar27 = *(undefined4 *)(lVar31 + 0x58);
  }
  iVar33 = 0;
  fVar55 = 3.4028235e+38;
  uVar50 = 0;
  iVar47 = -1;
  do {
    lVar31 = lVar34 + (long)iVar33 * 0x68;
    fVar56 = *(float *)(lVar31 + 0xc);
    bVar18 = false;
    if ((0.0 <= fVar56) && (bVar18 = false, !NAN(fVar56) && !NAN(fVar55))) {
      bVar18 = fVar56 < fVar55;
    }
    if ((bVar18) && (fVar55 = fVar56, *(int *)(lVar31 + 0x20) != -1)) {
      fVar56 = fVar56 * 30.0;
      uVar50 = *(undefined4 *)(lVar34 + (long)iVar33 * 0x68 + 0x60);
      uVar30 = 0;
      if (fVar56 != (float)(int)fVar56) {
        uVar30 = (uint)(0.0 <= fVar56);
      }
      iVar47 = uVar30 + (int)fVar56;
    }
    iVar33 = iVar33 + 1;
  } while (iVar33 != 0xb);
  uVar30 = (uint)uStack_17c >> 8;
  uStack_17c._0_1_ = 0;
  local_180 = 0xffffffff;
  local_168 = 0.0;
  local_160 = 0;
  local_158 = 0;
  local_178 = 0xffffffffffffffff;
  local_170 = 0xffffffffbf800000;
  local_184 = *(int *)(param_1 + 0x110);
  if (local_184 == -1) {
    local_190._4_4_ = 0xffffffff;
  }
  else {
    fVar55 = *(float *)(param_1 + 0xfc) * 30.0;
    local_190._4_4_ = 0;
    if (fVar55 != (float)(int)fVar55) {
      local_190._4_4_ = (uint)(0.0 <= fVar55);
    }
    local_190._4_4_ = local_190._4_4_ + (int)fVar55;
  }
  uVar48 = 0xffffffff;
  if (*(int *)(param_1 + 0x140) == -1) {
    local_188 = 0xffffffff;
  }
  else {
    fVar55 = *(float *)(param_1 + 300) * 30.0;
    uVar37 = 0;
    if (fVar55 != (float)(int)fVar55) {
      uVar37 = (uint)(0.0 <= fVar55);
    }
    local_188 = uVar37 + (int)fVar55;
  }
  if ((*(char *)(param_1 + 0xf8) == '\0') || (iVar33 = *(int *)(param_1 + 0x10c), iVar33 == -1)) {
LAB_0298a5b4:
    if ((*(char *)(param_1 + 0x128) != '\0') && (*(int *)(param_1 + 0x13c) != -1)) {
      fVar55 = *(float *)(param_1 + 0x130) * 30.0;
      uVar37 = 0;
      if (fVar55 != (float)(int)fVar55) {
        uVar37 = (uint)(fVar55 < 0.0);
      }
      if ((int)fVar55 == uVar37) {
        iVar33 = *(int *)(param_1 + 0x13c) << 0x10;
        local_198._0_4_ = 3;
        goto LAB_0298a614;
      }
    }
    local_198._0_4_ = 1;
    iVar33 = -1;
  }
  else {
    fVar55 = *(float *)(param_1 + 0x100) * 30.0;
    uVar37 = 0;
    if (fVar55 != (float)(int)fVar55) {
      uVar37 = (uint)(fVar55 < 0.0);
    }
    if ((int)fVar55 != uVar37) goto LAB_0298a5b4;
    local_198._0_4_ = 2;
  }
LAB_0298a614:
  local_198 = (uint *)CONCAT44(iVar33,(undefined4)local_198);
  if (((int)local_190._4_4_ < 0) && ((int)local_188 < 0)) {
    local_184 = -1;
    local_190._0_4_ = 1;
    goto LAB_0298a90c;
  }
  if (((int)local_190._4_4_ < 0) || ((int)local_188 < 0)) {
    if (-1 < (int)local_190._4_4_) goto LAB_0298a648;
    if (-1 < (int)local_188) goto LAB_0298a664;
    local_184 = -1;
    local_190._0_4_ = 1;
  }
  else if (local_188 < local_190._4_4_) {
LAB_0298a664:
    uVar48 = *(uint *)(param_1 + 0x148);
    local_184 = *(int *)(param_1 + 0x140) << 0x10;
    local_190._0_4_ = 3;
  }
  else {
LAB_0298a648:
    uVar48 = *(uint *)(param_1 + 0x118);
    local_190._0_4_ = 2;
  }
  if (plVar43 == (long *)0x0) goto LAB_0298a90c;
  puVar5 = (ushort *)((ulong)*(uint *)((long)plVar43 + 0x2c) + (long)plVar43 + 0x2c);
  uStack_17c = CONCAT31((int3)uVar30,uVar48 < *(uint *)(plVar43 + 4));
  uVar11 = *puVar5;
  uVar30 = (uint)uVar11;
  if (uVar30 == 0) {
    uVar37 = 0;
  }
  else {
    uVar23 = (ulong)(uVar11 >> 1);
    uVar37 = (uint)(uVar11 >> 1);
    uVar39 = *(uint *)(puVar5 + uVar23 * 6 + 2);
    if (uVar39 != uVar48) {
      uVar38 = 0;
      do {
        uVar37 = (uint)uVar23;
        uVar15 = uVar38;
        uVar16 = uVar37;
        uVar12 = uVar30;
        if (uVar39 < uVar48) {
          uVar15 = uVar37;
          uVar16 = uVar30;
          uVar12 = uVar38;
        }
        uVar30 = uVar16;
        uVar38 = uVar15;
        if (uVar12 == uVar37) break;
        uVar37 = uVar38 + uVar30 >> 1;
        uVar23 = (ulong)uVar37;
        uVar39 = *(uint *)(puVar5 + uVar23 * 6 + 2);
      } while (uVar39 != uVar48);
    }
  }
  puVar5 = puVar5 + (ulong)uVar37 * 6 + 4;
  if (uVar11 <= uVar37) {
    puVar5 = (ushort *)0x0;
  }
  local_178 = (ulong)CONCAT24(puVar5[3],(uint)puVar5[2]);
  uVar30 = *(uint *)((long)plVar43 + 0x3c);
  uVar23 = (ulong)uVar30;
  if (uVar30 != 0) {
    puVar6 = (ushort *)(uVar23 + (long)plVar43 + 0x3c);
    uVar11 = *puVar6;
    uVar45 = (ulong)uVar11;
    if (uVar11 == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = (ulong)(uVar11 >> 1);
      uVar30 = *(uint *)(puVar6 + uVar23 * 2 + 2);
      if (uVar30 != uVar48) {
        iVar33 = 0;
        do {
          iVar17 = (int)uVar23;
          iVar22 = iVar33;
          if (uVar48 <= uVar30) {
            iVar22 = (int)uVar45;
            uVar45 = uVar23;
            iVar17 = iVar33;
          }
          iVar33 = iVar17;
          if (iVar22 == (int)uVar23) break;
          uVar23 = (ulong)((uint)(iVar33 + (int)uVar45) >> 1);
          uVar30 = *(uint *)(puVar6 + uVar23 * 2 + 2);
        } while (uVar30 != uVar48);
      }
    }
  }
  local_170 = CONCAT44((int)uVar23,*(undefined4 *)puVar5);
  local_1c8 = (undefined *)(ulong)uVar48;
  local_1c0 = (uint *)0x0;
  uStack_1b8 = 0;
  local_1b0 = plVar43;
  iVar22 = FUN_03f0f6f0(&local_1c8);
  iVar33 = -iVar22;
  if (-1 < iVar22) {
    iVar33 = iVar22;
  }
  fVar55 = (float)FUN_03f0f270(&local_1c8);
  iVar22 = FUN_03f0eae0(&local_1c8);
  uVar30 = uVar48 + 0xc80;
  local_168 = (fVar55 + (float)(iVar33 + -1)) / (float)iVar22;
  uVar37 = *(uint *)((long)plVar43 + 0x1c);
  if ((uVar37 <= uVar30) && (uVar37 != *(uint *)(plVar43 + 3))) {
    uVar30 = (uVar48 - uVar37) + *(uint *)(plVar43 + 3);
  }
  local_1c0 = (uint *)0x0;
  uStack_1b8 = 0;
  local_1c8 = (undefined *)(ulong)uVar30;
  local_1b0 = plVar43;
  local_1a8 = FUN_03f0eec0(&local_1c8);
  uVar23 = local_1a8._8_8_ >> 0x20;
  uVar30 = local_1a8._12_4_;
  if (uVar30 == 0) {
LAB_0298a8d8:
    memset((undefined1 *)((long)local_150 + uVar23),0,(ulong)(8 - uVar30));
  }
  else {
    if (uVar23 == 1) {
      uVar45 = 0;
    }
    else {
      uVar45 = 0;
      do {
        uVar10 = local_1a8[uVar45 + 5];
        uVar32 = uVar45 + 1;
        lVar31 = uVar45 + 1;
        puVar8 = (undefined8 *)((long)local_150 + uVar45);
        if (7 < uVar45) {
          puVar8 = (undefined8 *)local_150;
        }
        *(undefined1 *)puVar8 = local_1a8[uVar45 + 4];
        uVar45 = uVar45 + 2;
        puVar8 = (undefined8 *)((long)local_150 + lVar31);
        if (7 < uVar32) {
          puVar8 = (undefined8 *)local_150;
        }
        *(undefined1 *)puVar8 = uVar10;
      } while (uVar45 != (uVar23 & 0xfffffffe));
    }
    if ((local_1a8._8_8_ >> 0x20 & 1) != 0) {
      puVar8 = (undefined8 *)((long)local_150 + uVar45);
      if (7 < uVar45) {
        puVar8 = (undefined8 *)local_150;
      }
      *(undefined1 *)puVar8 = local_1a8[uVar45 + 4];
    }
    if (uVar30 < 8) goto LAB_0298a8d8;
  }
  if (0 < (int)uVar30) {
    local_160 = uVar30;
  }
LAB_0298a90c:
  uVar48 = *local_220;
  uVar30 = 0;
  if (uVar48 != 99999 && -1 < (int)uVar48) {
    uVar30 = uVar48 & ((int)uVar48 >> 0x1f ^ 0xffffffffU);
  }
  lVar31 = *(long *)(DAT_055f6860 + 0x19f820);
  if (lVar31 == 0) {
    iVar33 = -1;
  }
  else {
    iVar33 = -1;
    do {
      while (*(int *)(lVar31 + 0x20) <= (int)uVar30) {
        if ((int)uVar30 <= *(int *)(lVar31 + 0x20)) {
          iVar33 = (int)*(char *)(lVar31 + 0x28);
          goto LAB_0298a990;
        }
        lVar31 = *(long *)(lVar31 + 0x10);
        if (lVar31 == 0) goto LAB_0298a990;
      }
      lVar31 = *(long *)(lVar31 + 8);
    } while (lVar31 != 0);
  }
LAB_0298a990:
  *(int *)(param_1 + 0x78) = iVar33;
  *(float *)(param_1 + 0x18) = fVar53;
  *(float *)(param_1 + 0x1c) = fVar54;
  *(uint *)(param_1 + 0x28) = uVar46;
  *(uint *)(param_1 + 0x2c) = uVar40;
  *(uint *)(param_1 + 0x38) = uVar41;
  *(int *)(param_1 + 0x3c) = iVar52;
  *(uint *)(param_1 + 0x40) = uVar24;
  *(uint *)(param_1 + 0x44) = uVar21;
  *(undefined4 *)(param_1 + 0x48) = uVar26;
  *(undefined4 *)(param_1 + 0x4c) = uVar42;
  *(int *)(param_1 + 0x50) = iVar44;
  *(undefined4 *)(param_1 + 0x54) = uVar27;
  *(bool *)(param_1 + 1) = bVar1;
  *(uint *)(param_1 + 4) = local_224;
  *(bool *)param_1 = bVar20;
  *(undefined4 *)(param_1 + 0x88) = (undefined4)local_170;
  *(undefined4 *)(param_1 + 0x58) = uVar50;
  *(int *)(param_1 + 0x5c) = iVar47;
  *(undefined4 *)(param_1 + 8) = local_78;
  *(int *)(param_1 + 0xc) = local_210;
  *(float *)(param_1 + 0x90) = local_168;
  *(int *)(param_1 + 0x10) = local_218;
  *(undefined4 *)(param_1 + 0x14) = local_214;
  *(int *)(param_1 + 0x20) = iVar51;
  *(uint *)(param_1 + 0x24) = local_74;
  if (iVar52 == 0x7fffffff) {
    iVar52 = -1;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar25;
  *(int *)(param_1 + 0x34) = iVar52;
  *(uint **)(param_1 + 0x60) = local_198;
  if (local_190._4_4_ == 0x7fffffff) {
    local_190._4_4_ = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x68) = (undefined4)local_190;
  *(uint *)(param_1 + 0x6c) = local_190._4_4_;
  if (local_188 == 0x7fffffff) {
    local_188 = 0xffffffff;
  }
  *(uint *)(param_1 + 0x70) = local_188;
  *(int *)(param_1 + 0x74) = local_184;
  *(undefined1 *)(param_1 + 0x7c) = (undefined1)uStack_17c;
  *(undefined4 *)(param_1 + 0x80) = (undefined4)local_178;
  *(undefined4 *)(param_1 + 0x84) = local_178._4_4_;
  *(undefined4 *)(param_1 + 0x8c) = local_170._4_4_;
  if ((int)local_160 < 1) {
    if (*(long *)(param_1 + 0xa0) != 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xa8) = local_150._0_8_;
    *(uint *)(param_1 + 0x98) = local_160;
    *(undefined8 **)(param_1 + 0xa0) = (undefined8 *)(param_1 + 0xa8);
  }
  if ((int)local_200 < 1) {
    if (*(long *)(param_1 + 0xb8) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xd4) = CONCAT44(uStack_1d8,local_1dc);
    *(int *)(param_1 + 0xb0) = (int)local_200;
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(param_1 + 0xd4);
  }
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 8;
  *(undefined8 **)(param_1 + 200) = (undefined8 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(int *)(param_1 + 0xad8) = (int)param_2[1];
  return;
}

