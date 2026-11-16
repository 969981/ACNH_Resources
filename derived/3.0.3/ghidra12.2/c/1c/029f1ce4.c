
void FUN_029f1ce4(undefined4 *param_1,long *param_2)

{
  short *psVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong *puVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulong local_c0;
  long *local_b8;
  ulong local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_90;
  char *pcStack_88;
  undefined4 local_78;
  int local_74;
  
  lVar15 = *param_2;
  uVar31 = 0xbf800000;
  if (lVar15 == 0) {
LAB_029f1df8:
    uVar12 = 1;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      uVar12 = 2;
    }
LAB_029f1e20:
    local_74 = -1;
    local_78 = 0xffffffff;
    fVar32 = 0.0;
    plVar29 = (long *)0x0;
    uVar18 = 0xffffffff;
    bVar7 = false;
    bVar3 = false;
    iVar9 = -1;
    uVar8 = 0xffffffff;
    uVar11 = uVar18;
  }
  else {
    if (*(long *)(lVar15 + 0x18) == 0) {
      lVar21 = *(long *)(lVar15 + 8);
      if ((lVar21 != 0) && (*(int *)(lVar15 + 0x10) == *(int *)(lVar21 + 0x10))) {
        lVar23 = *(long *)(*(long *)(lVar21 + 0x120) + 8);
        lVar28 = *(long *)(lVar23 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar28 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar28 = lVar23 + 0x70;
          }
          lVar28 = *(long *)(lVar28 + 8);
          if (((lVar28 != 0) && (*(uint *)(lVar28 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar28 + 0x18) + lVar28) == 0x101feff464e494d))
          goto LAB_029f1d2c;
        }
      }
      goto LAB_029f1df8;
    }
    lVar21 = *(long *)(lVar15 + 8);
LAB_029f1d2c:
    if (((lVar21 == 0) || (*(int *)(lVar21 + 0x10) != *(int *)(lVar15 + 0x10))) ||
       (*(int *)(lVar21 + 0xc) == 0)) goto LAB_029f1df8;
    bVar7 = *(char *)((long)param_2 + 0xc) == '\0';
    uVar12 = 3;
    if (bVar7) {
      uVar12 = 1;
    }
    uVar8 = 1;
    if (!bVar7) {
      uVar8 = 2;
    }
    if (*(int *)(lVar21 + 0xc) == 7) {
      uVar12 = uVar8;
      goto LAB_029f1e20;
    }
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_b0 = CONCAT62(local_b0._2_6_,0xff);
    local_a8 = (long *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_88 = "BGM_RadioExercise";
    uVar24 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_c0,&local_90);
    plVar29 = (long *)0x0;
    if ((uVar24 & 1) != 0) {
      if ((local_b8 == (long *)0x0) || (*(uint *)((long)local_b8 + 0x18) == 0)) {
        plVar29 = (long *)0x0;
      }
      else {
        plVar29 = (long *)((ulong)*(uint *)((long)local_b8 + 0x18) + (long)local_b8);
        if (*plVar29 != 0x101feff464e494d) {
          plVar29 = (long *)0x0;
        }
      }
    }
    uVar18 = *(uint *)(param_2 + 1);
    if (-1 < (int)uVar18) {
      uVar11 = *(uint *)((long)plVar29 + 0x1c);
      uVar18 = uVar18 + 0xc80;
      if (uVar11 <= uVar18) {
        if (uVar11 == *(uint *)(plVar29 + 3)) {
          uVar18 = 0xffffffff;
        }
        else {
          uVar18 = (uVar18 - uVar11) + *(uint *)(plVar29 + 3);
        }
      }
    }
    puVar16 = (ulong *)*param_2;
    local_c0 = *puVar16;
    local_b8 = (long *)puVar16[1];
    local_b0 = puVar16[2];
    local_a8 = (long *)puVar16[3];
    if (puVar16[1] == 0) {
      bVar7 = false;
    }
    else {
      bVar7 = *(int *)(puVar16[1] + 0x10) == (int)puVar16[2];
    }
    if ((((int)uVar18 < 1) || (bVar7)) || (plVar29 == (long *)0x0)) {
      if (local_a8 != (long *)0x0) goto LAB_029f2afc;
      if ((local_b8 != (long *)0x0) && ((int)local_b0 == *(int *)((long)local_b8 + 0x10))) {
        lVar15 = *(long *)(*(long *)((long)local_b8 + 0x120) + 8);
        lVar21 = *(long *)(lVar15 + 0x38);
        if ((DAT_05aebc00 == '\0') && (lVar21 == 0)) goto LAB_029f2cb8;
        lVar15 = lVar15 + 0x70;
        lVar28 = lVar21;
        if (DAT_05aebc00 != '\0') {
          lVar28 = lVar15;
        }
        lVar28 = *(long *)(lVar28 + 8);
        if (((lVar28 == 0) || (*(uint *)(lVar28 + 0x18) == 0)) ||
           (*(long *)((ulong)*(uint *)(lVar28 + 0x18) + lVar28) != 0x101feff464e494d))
        goto LAB_029f2cb8;
        if (DAT_05aebc00 == '\0') {
          lVar15 = lVar21;
        }
        plVar17 = (long *)((ulong)*(uint *)(*(long *)(lVar15 + 8) + 0x18) + *(long *)(lVar15 + 8));
        if (*plVar17 != 0x101feff464e494d) {
          plVar17 = (long *)0x0;
        }
        uVar19 = *(uint *)(plVar17 + 4);
        uVar11 = FUN_03b46270();
        uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        goto LAB_029f2b04;
      }
LAB_029f2cb8:
      bVar7 = false;
    }
    else {
      local_b0 = local_b0 & 0xffffffff00000000;
      local_b8 = (long *)0x0;
      local_c0 = (ulong)uVar18;
      local_a8 = plVar29;
LAB_029f2afc:
      uVar19 = *(uint *)(local_a8 + 4);
      uVar11 = (uint)local_c0;
LAB_029f2b04:
      bVar7 = uVar11 < uVar19;
    }
    uVar8 = FUN_03f0f0a0(&local_c0);
    iVar9 = FUN_03f0f6f0(&local_c0);
    plVar17 = local_a8;
    if (local_a8 == (long *)0x0) {
      if ((local_b8 != (long *)0x0) && ((int)local_b0 == *(int *)((long)local_b8 + 0x10))) {
        lVar21 = *(long *)(*(long *)((long)local_b8 + 0x120) + 8);
        lVar15 = *(long *)(lVar21 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar15 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar15 = lVar21 + 0x70;
          }
          lVar15 = *(long *)(lVar15 + 8);
          if (((lVar15 != 0) && (*(uint *)(lVar15 + 0x18) != 0)) &&
             (plVar17 = (long *)((ulong)*(uint *)(lVar15 + 0x18) + lVar15),
             *plVar17 == 0x101feff464e494d)) goto LAB_029f2b2c;
        }
      }
LAB_029f2bc4:
      uVar11 = 0xffffffff;
    }
    else {
LAB_029f2b2c:
      uVar11 = *(uint *)((long)plVar17 + 0x3c);
      if (((uVar11 == 0) ||
          (psVar1 = (short *)((ulong)uVar11 + (long)plVar17 + 0x3c), psVar1 == (short *)0x0)) ||
         (*psVar1 == 0)) goto LAB_029f2bc4;
      iVar10 = FUN_03f0fbe0(&local_c0);
      uVar11 = iVar10 + 1;
    }
    local_74 = FUN_03f0eae0(&local_c0);
    local_78 = FUN_03f0ecd0(&local_c0);
    uVar31 = FUN_03f0e900(&local_c0);
    iVar10 = -iVar9;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    fVar32 = (float)FUN_03f0f270(&local_c0);
    bVar3 = true;
    fVar32 = (fVar32 + (float)(iVar10 + -1)) / (float)local_74;
  }
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x10,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x1c,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x28,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x34,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x40,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x4c,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x58,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 100,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x70,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x7c,&local_c0);
  local_c0 = CONCAT44(uVar18,(int)local_c0) & 0xffffffffffffff00;
  local_b8 = plVar29;
  FUN_029e69e0(param_1 + 0x88,&local_c0);
  if (!bVar3) {
    uVar24 = 0xffffffff;
    uVar18 = 0;
    uVar19 = 0;
    uVar14 = 0;
    uVar22 = 0xffffffffffffffff;
    uVar27 = 0xffffffff;
    goto LAB_029f2974;
  }
  fVar30 = (float)param_1[0x14];
  if (param_1[0x18] == -1) {
    uVar18 = 0xffffffff;
  }
  else {
    fVar33 = (float)param_1[0x13] * 30.0;
    uVar18 = 0;
    if (fVar33 != (float)(int)fVar33) {
      uVar18 = (uint)(0.0 <= fVar33);
    }
    uVar18 = uVar18 + (int)fVar33;
  }
  uVar19 = (uint)*(byte *)(param_1 + 0x12);
  if (0.0 <= fVar30 && fVar30 < 3.4028235e+38) {
    uVar19 = 1;
  }
  else {
    fVar30 = 3.4028235e+38;
  }
  bVar6 = uVar18 < 0x7fffffff;
  iVar10 = param_1[0x1a];
  fVar33 = (float)param_1[0x20];
  if (!bVar6) {
    uVar18 = 0x7fffffff;
  }
  uVar14 = param_1[0x24];
  if (!bVar6) {
    iVar10 = -1;
  }
  if (uVar14 != 0xffffffff) {
    fVar34 = (float)param_1[0x1f] * 30.0;
    uVar14 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar14 = (uint)(0.0 <= fVar34);
    }
    uVar14 = uVar14 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x1e) != '\0') {
    uVar19 = 2;
  }
  uVar26 = 2;
  if (fVar33 < 0.0 || fVar30 <= fVar33) {
    fVar33 = fVar30;
    uVar26 = uVar19;
  }
  fVar30 = (float)param_1[0x2c];
  uVar19 = uVar14;
  if ((int)uVar14 < 0 || (int)uVar18 <= (int)uVar14) {
    uVar19 = uVar18;
  }
  uVar20 = param_1[0x30];
  uVar13 = 2;
  iVar2 = param_1[0x26];
  if ((int)uVar14 < 0 || (int)uVar18 <= (int)uVar14) {
    uVar13 = (uint)bVar6;
    iVar2 = iVar10;
  }
  if (uVar20 != 0xffffffff) {
    fVar34 = (float)param_1[0x2b] * 30.0;
    uVar20 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar20 = (uint)(0.0 <= fVar34);
    }
    uVar20 = uVar20 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    uVar26 = 3;
  }
  uVar18 = 3;
  if (fVar30 < 0.0 || fVar33 <= fVar30) {
    fVar30 = fVar33;
    uVar18 = uVar26;
  }
  fVar33 = (float)param_1[0x38];
  uVar14 = uVar20;
  if ((int)uVar20 < 0 || (int)uVar19 <= (int)uVar20) {
    uVar14 = uVar19;
  }
  uVar26 = param_1[0x3c];
  iVar10 = param_1[0x32];
  uVar25 = 3;
  if ((int)uVar20 < 0 || (int)uVar19 <= (int)uVar20) {
    iVar10 = iVar2;
    uVar25 = uVar13;
  }
  if (uVar26 != 0xffffffff) {
    fVar34 = (float)param_1[0x37] * 30.0;
    uVar26 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar26 = (uint)(0.0 <= fVar34);
    }
    uVar26 = uVar26 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x36) != '\0') {
    uVar18 = 4;
  }
  uVar19 = 4;
  if (fVar33 < 0.0 || fVar30 <= fVar33) {
    fVar33 = fVar30;
    uVar19 = uVar18;
  }
  fVar30 = (float)param_1[0x44];
  uVar18 = uVar26;
  if ((int)uVar26 < 0 || (int)uVar14 <= (int)uVar26) {
    uVar18 = uVar14;
  }
  uVar20 = param_1[0x48];
  iVar2 = param_1[0x3e];
  uVar13 = 4;
  if ((int)uVar26 < 0 || (int)uVar14 <= (int)uVar26) {
    iVar2 = iVar10;
    uVar13 = uVar25;
  }
  if (uVar20 != 0xffffffff) {
    fVar34 = (float)param_1[0x43] * 30.0;
    uVar20 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar20 = (uint)(0.0 <= fVar34);
    }
    uVar20 = uVar20 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x42) != '\0') {
    uVar19 = 5;
  }
  uVar14 = 5;
  if (fVar30 < 0.0 || fVar33 <= fVar30) {
    fVar30 = fVar33;
    uVar14 = uVar19;
  }
  fVar33 = (float)param_1[0x50];
  uVar19 = uVar20;
  if ((int)uVar20 < 0 || (int)uVar18 <= (int)uVar20) {
    uVar19 = uVar18;
  }
  uVar26 = param_1[0x54];
  iVar10 = param_1[0x4a];
  uVar25 = 5;
  if ((int)uVar20 < 0 || (int)uVar18 <= (int)uVar20) {
    iVar10 = iVar2;
    uVar25 = uVar13;
  }
  if (uVar26 != 0xffffffff) {
    fVar34 = (float)param_1[0x4f] * 30.0;
    uVar26 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar26 = (uint)(0.0 <= fVar34);
    }
    uVar26 = uVar26 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x4e) != '\0') {
    uVar14 = 6;
  }
  uVar18 = 6;
  if (fVar33 < 0.0 || fVar30 <= fVar33) {
    fVar33 = fVar30;
    uVar18 = uVar14;
  }
  fVar30 = (float)param_1[0x5c];
  uVar14 = uVar26;
  if ((int)uVar26 < 0 || (int)uVar19 <= (int)uVar26) {
    uVar14 = uVar19;
  }
  uVar20 = param_1[0x60];
  iVar2 = param_1[0x56];
  uVar13 = 6;
  if ((int)uVar26 < 0 || (int)uVar19 <= (int)uVar26) {
    iVar2 = iVar10;
    uVar13 = uVar25;
  }
  if (uVar20 != 0xffffffff) {
    fVar34 = (float)param_1[0x5b] * 30.0;
    uVar20 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar20 = (uint)(0.0 <= fVar34);
    }
    uVar20 = uVar20 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x5a) != '\0') {
    uVar18 = 7;
  }
  uVar19 = 7;
  if (fVar30 < 0.0 || fVar33 <= fVar30) {
    fVar30 = fVar33;
    uVar19 = uVar18;
  }
  fVar33 = (float)param_1[0x68];
  uVar18 = uVar20;
  if ((int)uVar20 < 0 || (int)uVar14 <= (int)uVar20) {
    uVar18 = uVar14;
  }
  iVar10 = param_1[0x62];
  uVar26 = 7;
  if ((int)uVar20 < 0 || (int)uVar14 <= (int)uVar20) {
    iVar10 = iVar2;
    uVar26 = uVar13;
  }
  if (param_1[0x6c] == -1) {
    uVar14 = 0xffffffff;
  }
  else {
    fVar34 = (float)param_1[0x67] * 30.0;
    uVar14 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar14 = (uint)(0.0 <= fVar34);
    }
    uVar14 = uVar14 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x66) != '\0') {
    uVar19 = 8;
  }
  uVar20 = 8;
  if (fVar33 < 0.0 || fVar30 <= fVar33) {
    fVar33 = fVar30;
    uVar20 = uVar19;
  }
  fVar30 = (float)param_1[0x74];
  uVar13 = uVar14;
  if ((int)uVar14 < 0 || (int)uVar18 <= (int)uVar14) {
    uVar13 = uVar18;
  }
  iVar2 = param_1[0x6e];
  uVar25 = 8;
  if ((int)uVar14 < 0 || (int)uVar18 <= (int)uVar14) {
    iVar2 = iVar10;
    uVar25 = uVar26;
  }
  if (param_1[0x78] == -1) {
    uVar26 = 0xffffffff;
  }
  else {
    fVar34 = (float)param_1[0x73] * 30.0;
    uVar26 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar26 = (uint)(0.0 <= fVar34);
    }
    uVar26 = uVar26 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x72) != '\0') {
    uVar20 = 9;
  }
  uVar14 = 9;
  if (fVar30 < 0.0 || fVar33 <= fVar30) {
    fVar30 = fVar33;
    uVar14 = uVar20;
  }
  fVar33 = (float)param_1[0x80];
  iVar10 = param_1[0x7a];
  if ((int)uVar26 < 0 || (int)uVar13 <= (int)uVar26) {
    iVar10 = iVar2;
  }
  uVar19 = 9;
  if ((int)uVar26 < 0 || (int)uVar13 <= (int)uVar26) {
    uVar26 = uVar13;
    uVar19 = uVar25;
  }
  if (param_1[0x84] == -1) {
    uVar20 = 0xffffffff;
  }
  else {
    fVar34 = (float)param_1[0x7f] * 30.0;
    uVar20 = 0;
    if (fVar34 != (float)(int)fVar34) {
      uVar20 = (uint)(0.0 <= fVar34);
    }
    uVar20 = uVar20 + (int)fVar34;
  }
  if (*(char *)(param_1 + 0x7e) != '\0') {
    uVar14 = 10;
  }
  bVar6 = true;
  bVar5 = false;
  if (fVar33 < fVar30) {
    bVar6 = false;
    bVar5 = true;
    if (!NAN(fVar33)) {
      bVar6 = fVar33 < 0.0;
      bVar5 = false;
    }
  }
  uVar18 = 10;
  if (bVar6 != bVar5) {
    uVar18 = uVar14;
  }
  if (((int)uVar20 < 0) || ((int)uVar26 <= (int)uVar20)) {
    if (uVar26 == 0x7fffffff) {
      uVar26 = 0xffffffff;
    }
    else if (-1 < iVar10) goto LAB_029f24bc;
LAB_029f2618:
    uVar14 = 0;
LAB_029f2920:
    uVar13 = 0xffffffff;
  }
  else {
    iVar10 = param_1[0x86];
    uVar19 = 10;
    uVar26 = uVar20;
    if (iVar10 < 0) goto LAB_029f2618;
LAB_029f24bc:
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0x94,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xa0,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xac,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xb8,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xc4,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xd0,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xdc,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xe8,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0xf4,&local_c0);
    local_c0 = CONCAT44(iVar10,(int)local_c0) & 0xffffffffffffff00;
    local_b8 = plVar29;
    FUN_029e69e0(param_1 + 0x100,&local_c0);
    uVar20 = 0x7fffffff;
    if (param_1[0x9c] == -1) {
      uVar14 = 0;
    }
    else {
      fVar30 = (float)param_1[0x97] * 30.0;
      uVar20 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar20 = (uint)(0.0 <= fVar30);
      }
      uVar20 = uVar20 + (int)fVar30;
      uVar14 = (uint)(uVar20 < 0x7fffffff);
      if (uVar20 >= 0x7fffffff) {
        uVar20 = 0x7fffffff;
      }
    }
    uVar13 = uVar20;
    if (param_1[0xa8] != -1) {
      fVar30 = (float)param_1[0xa3] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar13 = uVar25 + (int)fVar30;
      uVar4 = 2;
      if (uVar20 <= uVar25 + (int)fVar30) {
        uVar13 = uVar20;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar20 = uVar13;
    if (param_1[0xb4] != -1) {
      fVar30 = (float)param_1[0xaf] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar20 = uVar25 + (int)fVar30;
      uVar4 = 3;
      if ((int)uVar20 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar13 <= (int)uVar20) {
        uVar20 = uVar13;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar13 = uVar20;
    if (param_1[0xc0] != -1) {
      fVar30 = (float)param_1[0xbb] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar13 = uVar25 + (int)fVar30;
      uVar4 = 4;
      if ((int)uVar13 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar20 <= (int)uVar13) {
        uVar13 = uVar20;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar20 = uVar13;
    if (param_1[0xcc] != -1) {
      fVar30 = (float)param_1[199] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar20 = uVar25 + (int)fVar30;
      uVar4 = 5;
      if ((int)uVar20 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar13 <= (int)uVar20) {
        uVar20 = uVar13;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar13 = uVar20;
    if (param_1[0xd8] != -1) {
      fVar30 = (float)param_1[0xd3] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar13 = uVar25 + (int)fVar30;
      uVar4 = 6;
      if ((int)uVar13 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar20 <= (int)uVar13) {
        uVar13 = uVar20;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar20 = uVar13;
    if (param_1[0xe4] != -1) {
      fVar30 = (float)param_1[0xdf] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar20 = uVar25 + (int)fVar30;
      uVar4 = 7;
      if ((int)uVar20 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar13 <= (int)uVar20) {
        uVar20 = uVar13;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar13 = uVar20;
    if (param_1[0xf0] != -1) {
      fVar30 = (float)param_1[0xeb] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar13 = uVar25 + (int)fVar30;
      uVar4 = 8;
      if ((int)uVar13 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar20 <= (int)uVar13) {
        uVar13 = uVar20;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar20 = uVar13;
    if (param_1[0xfc] != -1) {
      fVar30 = (float)param_1[0xf7] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar20 = uVar25 + (int)fVar30;
      uVar4 = 9;
      if ((int)uVar20 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar13 <= (int)uVar20) {
        uVar20 = uVar13;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    uVar13 = uVar20;
    if (param_1[0x108] != -1) {
      fVar30 = (float)param_1[0x103] * 30.0;
      uVar25 = 0;
      if (fVar30 != (float)(int)fVar30) {
        uVar25 = (uint)(0.0 <= fVar30);
      }
      uVar13 = uVar25 + (int)fVar30;
      uVar4 = 10;
      if ((int)uVar13 < 0 != SCARRY4(uVar25,(int)fVar30) || (int)uVar20 <= (int)uVar13) {
        uVar13 = uVar20;
        uVar4 = uVar14;
      }
      uVar14 = uVar4;
    }
    if (uVar13 == 0x7fffffff) goto LAB_029f2920;
  }
  uVar22 = CONCAT44(uVar13,uVar26);
  if (param_1[0x90] == -1) {
    uVar24 = 0xffffffff;
  }
  else {
    fVar30 = (float)param_1[0x8b] * 30.0;
    uVar26 = 0;
    if (fVar30 != (float)(int)fVar30) {
      uVar26 = (uint)(0.0 <= fVar30);
    }
    uVar20 = uVar26 + (int)fVar30;
    if ((int)uVar20 < 0 != SCARRY4(uVar26,(int)fVar30)) {
      uVar20 = 0xffffffff;
    }
    uVar24 = (ulong)uVar20;
  }
  uVar27 = (ulong)(uint)param_1[0x8f];
LAB_029f2974:
  *param_1 = uVar12;
  param_1[1] = uVar8;
  param_1[2] = iVar9;
  param_1[3] = uVar11;
  param_1[4] = local_74;
  param_1[5] = local_78;
  param_1[6] = uVar31;
  param_1[7] = fVar32;
  *(bool *)(param_1 + 8) = bVar3;
  *(bool *)((long)param_1 + 0x21) = bVar7;
  param_1[0xb] = uVar14;
  param_1[9] = uVar18;
  param_1[10] = uVar19;
  *(undefined8 *)(param_1 + 0xc) = uVar22;
  *(ulong *)(param_1 + 0xe) = uVar27 | uVar24 << 0x20;
  return;
}

