
undefined8
FUN_021e2fb0(uint *param_1,uint *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  char cVar10;
  byte bVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  ushort uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  undefined8 local_120;
  uint local_118;
  uint uStack_114;
  long local_110;
  undefined4 local_104;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  uint local_e0;
  ulong local_dc;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [7];
  undefined1 local_7d;
  
  local_100 = 0x200d;
  FUN_0277d4ac(&local_100);
  puVar2 = PTR_DAT_04bb37e0;
  local_7d = 0;
  *(undefined2 *)param_1 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 2) = puVar2[2];
  param_1[7] = local_100._4_4_;
  puVar14 = param_1 + 6;
  *puVar14 = (uint)local_100;
  *(undefined *)((long)param_1 + 3) = puVar2[3];
  local_88 = 8;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)puVar2;
  *(undefined *)((long)param_1 + 10) = puVar2[2];
  param_1[1] = *(uint *)(puVar2 + 4);
  uVar6 = *(uint *)(puVar2 + 4);
  *(undefined *)((long)param_1 + 0xb) = puVar2[3];
  param_1[3] = uVar6;
  local_90 = local_84;
  local_84[0] = 0;
  local_98 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_98,"-----");
  if ((ulong)*param_3 < 0x23) {
    FUN_038d1270(&local_98,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_3 * 8 + 0xb0),
                 param_3[1]);
  }
  uVar19 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_98 + 0x18))(&local_98);
  uVar5 = FUN_006bd550(local_90,0);
  local_100 = CONCAT44(local_100._4_4_,uVar5);
  puVar7 = (uint *)FUN_0079e770(uVar19,&local_100);
  puVar3 = PTR_DAT_04bb40b8;
  puVar2 = PTR_DAT_04bb40b0;
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  if (*puVar7 != 0) {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar3 + 0x50);
        if (-1 < (int)uVar6) {
          if ((ushort *)((ulong)uVar6 + (long)puVar7) != (ushort *)0x0) {
            uVar16 = *(ushort *)((ulong)uVar6 + (long)puVar7);
            goto LAB_021e3210;
          }
          break;
        }
        if (uVar6 != 0xffffffff) break;
      }
      puVar8 = (uint *)(ulong)*puVar7;
      uVar16 = 0xfffe;
      if ((*puVar7 == 0) || (puVar7 == puVar8)) goto LAB_021e3210;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar8);
      if (lVar21 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
      *(undefined4 *)(puVar3 + 0x50) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x78f0e1d7) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_021e320c;
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar3 + 0x50) = iVar13;
      if (*puVar7 == 0) break;
    } while( true );
  }
LAB_021e320c:
  uVar16 = 0xfffe;
LAB_021e3210:
  local_100 = (ulong)uVar16;
  FUN_0277d4ac(&local_100);
  param_1[6] = (uint)local_100;
  param_1[7] = local_100._4_4_;
  if (*param_2 == 0) {
    return 0;
  }
  lVar21 = *(long *)PTR_DAT_04bb4960;
  if (0x14 < (*param_2 & 0xffff)) {
    return 0;
  }
  uVar5 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)*param_2 * 8 + 0x150),0);
  local_100 = CONCAT44(local_100._4_4_,uVar5);
  puVar8 = (uint *)FUN_036c67d0(lVar21 + 0x800,&local_100);
  puVar3 = PTR_DAT_04bc11f0;
  puVar2 = PTR_DAT_04bc11e8;
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  if (*puVar8 == 0) {
LAB_021e3378:
    uVar6 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bc11e8;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar3 + 0x30);
        if (-1 < (int)uVar6) {
          if ((ushort *)((ulong)uVar6 + (long)puVar8) == (ushort *)0x0) goto LAB_021e3378;
          uVar6 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar8);
          goto LAB_021e337c;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e3378;
      }
      puVar12 = (uint *)(ulong)*puVar8;
      uVar6 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_021e337c;
      lVar20 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar8 + (lVar20 - (long)puVar12);
      if (lVar20 == 0) goto LAB_021e3378;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
      uVar6 = 0;
      if (uVar9 == 0) goto LAB_021e337c;
      piVar15 = (int *)(lVar20 + 4);
      while (piVar15[-1] != 0x3e4510fa) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar6 = 0;
          goto LAB_021e337c;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar3 + 0x30) = iVar13;
    } while (*puVar8 != 0);
    uVar6 = 0;
  }
LAB_021e337c:
  uVar6 = uVar6 - *(ushort *)(lVar21 + 0xc18);
  if (*(uint *)(lVar21 + 0xbf8) <= uVar6) {
    return 0;
  }
  puVar8 = *(uint **)(*(long *)(lVar21 + 0xc00) + (long)(int)uVar6 * 8);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  local_100 = 0;
  local_e8 = 0xfffe00000000;
  local_e0 = 0;
  FUN_0277d4ac((long)&local_e8 + 4);
  puVar3 = PTR_DAT_04bc2c90;
  puVar2 = PTR_DAT_04bc2c88;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  if (*puVar8 == 0) {
LAB_021e34f4:
    local_100 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bc2c88;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar3 + 4);
        if (-1 < (int)uVar6) {
          if (((uint *)((ulong)uVar6 + (long)puVar8) == (uint *)0x0) ||
             (uVar6 = *(uint *)((ulong)uVar6 + (long)puVar8), local_100 = (ulong)uVar6, 0x32 < uVar6
             )) goto LAB_021e34f4;
          goto LAB_021e34f8;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e34f4;
      }
      puVar12 = (uint *)(ulong)*puVar8;
      local_100 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_021e34f8;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e34f4;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
      local_100 = 0;
      if (uVar9 == 0) goto LAB_021e34f8;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x189a4aac) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          local_100 = 0;
          goto LAB_021e34f8;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar3 + 4) = iVar13;
    } while (*puVar8 != 0);
    local_100 = 0;
  }
LAB_021e34f8:
  local_100 = local_100 << 0x20;
  uVar6 = *puVar8;
  if (uVar6 != 0) {
    cVar10 = *puVar2;
    do {
      if (cVar10 == '\0') {
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        cVar10 = '\x01';
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        uVar6 = *puVar8;
      }
      else {
        uVar17 = *(uint *)puVar3;
        if (-1 < (int)uVar17) {
          if ((int *)((ulong)uVar17 + (long)puVar8) != (int *)0x0) {
            iVar13 = *(int *)((ulong)uVar17 + (long)puVar8);
            goto LAB_021e35dc;
          }
          break;
        }
        if (uVar17 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar6;
      iVar13 = 0;
      if ((puVar12 == (uint *)0x0) || (puVar8 == puVar12)) goto LAB_021e35dc;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar12);
      iVar13 = 0;
      if (lVar21 == 0) goto LAB_021e35dc;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
      *(undefined4 *)puVar3 = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x1f401b52) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_021e35d8;
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)puVar3 = iVar13;
      uVar6 = *puVar8;
      if (uVar6 == 0) break;
    } while( true );
  }
LAB_021e35d8:
  iVar13 = 0;
LAB_021e35dc:
  local_f8 = (float)iVar13;
  if (*puVar8 == 0) {
LAB_021e36bc:
    iVar13 = 0;
  }
  else {
    cVar10 = *puVar2;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar3 + 0xc);
        if (-1 < (int)uVar6) {
          if ((int *)((ulong)uVar6 + (long)puVar8) == (int *)0x0) goto LAB_021e36bc;
          iVar13 = *(int *)((ulong)uVar6 + (long)puVar8);
          goto LAB_021e36c0;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e36bc;
      }
      puVar12 = (uint *)(ulong)*puVar8;
      iVar13 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_021e36c0;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e36bc;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
      iVar13 = 0;
      if (uVar9 == 0) goto LAB_021e36c0;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x79be959d) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          iVar13 = 0;
          goto LAB_021e36c0;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar3 + 0xc) = iVar13;
    } while (*puVar8 != 0);
    iVar13 = 0;
  }
LAB_021e36c0:
  local_f4 = (float)iVar13;
  if (*puVar8 == 0) {
LAB_021e37a8:
    iVar13 = 0;
  }
  else {
    cVar10 = *puVar2;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar3 + 0x10);
        if (-1 < (int)uVar6) {
          if ((int *)((ulong)uVar6 + (long)puVar8) == (int *)0x0) goto LAB_021e37a8;
          iVar13 = *(int *)((ulong)uVar6 + (long)puVar8);
          goto LAB_021e37ac;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e37a8;
      }
      puVar12 = (uint *)(ulong)*puVar8;
      iVar13 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_021e37ac;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e37a8;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
      iVar13 = 0;
      if (uVar9 == 0) goto LAB_021e37ac;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x5c2383b4) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          iVar13 = 0;
          goto LAB_021e37ac;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar3 + 0x10) = iVar13;
    } while (*puVar8 != 0);
    iVar13 = 0;
  }
LAB_021e37ac:
  local_f0 = (float)iVar13;
  local_ec = 0;
  uVar5 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  local_e8 = CONCAT44(local_e8._4_4_,uVar5);
  if (*puVar7 != 0) {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar4 + 0x50);
        if (-1 < (int)uVar6) {
          if ((ushort *)((ulong)uVar6 + (long)puVar7) != (ushort *)0x0) {
            uVar16 = *(ushort *)((ulong)uVar6 + (long)puVar7);
            goto LAB_021e38dc;
          }
          break;
        }
        if (uVar6 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)*puVar7;
      uVar16 = 0xfffe;
      if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_021e38dc;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0x50) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x78f0e1d7) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_021e38d8;
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar4 + 0x50) = iVar13;
      if (*puVar7 == 0) break;
    } while( true );
  }
LAB_021e38d8:
  uVar16 = 0xfffe;
LAB_021e38dc:
  local_120 = (undefined *)(ulong)uVar16;
  FUN_0277d4ac(&local_120);
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  uVar6 = 0;
  local_e8 = CONCAT44((uint)local_120,(undefined4)local_e8);
  local_e0 = local_120._4_4_;
  puVar12 = (uint *)((long)puVar7 - (ulong)*puVar7);
  if ((*puVar7 != 0) && (puVar12 != (uint *)0x0)) {
    uVar6 = 0;
    if (*puVar12 != 0) {
      uVar6 = puVar12[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar21 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar21 = 0x1c;
        }
        lVar21 = (long)puVar12 + lVar21 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar21 != 0) {
          uVar17 = 0;
          if ((ulong)uVar6 != 0) {
            uVar17 = (uint)((ulong)((long)puVar7 - lVar21) / (ulong)uVar6);
          }
          if (*puVar12 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < *(uint *)PTR_DAT_04bb9bf8) &&
             (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bb9bf8 + 8) + (long)(int)uVar17 * 2),
             uVar6 < 3)) goto LAB_021e3980;
        }
      }
      uVar6 = 0;
    }
  }
LAB_021e3980:
  puVar12 = (uint *)((long)puVar7 - (ulong)*puVar7);
  if ((((*puVar7 == 0) || (puVar12 == (uint *)0x0)) || (*puVar12 == 0)) ||
     ((uVar17 = puVar12[1], uVar17 == 0 || ((ulong)(ushort)puVar12[2] == 0)))) {
LAB_021e3a14:
    local_dc = (ulong)uVar6;
    local_d4 = true;
  }
  else {
    lVar21 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar21 = 0x1c;
    }
    lVar21 = (long)puVar12 + lVar21 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar21 == 0) goto LAB_021e3a14;
    uVar1 = 0;
    if ((ulong)uVar17 != 0) {
      uVar1 = (uint)((ulong)((long)puVar7 - lVar21) / (ulong)uVar17);
    }
    if (*puVar12 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bb6a50 <= uVar1) ||
       (uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar1 * 2), 7 < uVar16))
    goto LAB_021e3a14;
    local_d4 = uVar16 < 4;
    local_dc = (ulong)CONCAT24(uVar16,uVar6);
  }
  if (*puVar7 == 0) {
LAB_021e3b30:
    uVar6 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar4 + 0x68);
        if (-1 < (int)uVar6) {
          if (((byte *)((long)puVar7 + (ulong)uVar6) == (byte *)0x0) ||
             (bVar11 = *(byte *)((long)puVar7 + (ulong)uVar6), uVar6 = (uint)bVar11, 0xe < bVar11))
          goto LAB_021e3b30;
          goto LAB_021e3b34;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e3b30;
      }
      puVar12 = (uint *)(ulong)*puVar7;
      uVar6 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_021e3b34;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e3b30;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0x68) = 0xfffffffe;
      uVar6 = 0;
      if (uVar9 == 0) goto LAB_021e3b34;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x34eb5dc3) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar6 = 0;
          goto LAB_021e3b34;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar4 + 0x68) = iVar13;
    } while (*puVar7 != 0);
    uVar6 = 0;
  }
LAB_021e3b34:
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (*puVar7 == 0) {
LAB_021e3c44:
    uVar17 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar4 + 0x6c);
        if (-1 < (int)uVar17) {
          if (((byte *)((long)puVar7 + (ulong)uVar17) == (byte *)0x0) ||
             (bVar11 = *(byte *)((long)puVar7 + (ulong)uVar17), uVar17 = (uint)bVar11, 0xe < bVar11)
             ) goto LAB_021e3c44;
          goto LAB_021e3c48;
        }
        if (uVar17 != 0xffffffff) goto LAB_021e3c44;
      }
      puVar12 = (uint *)(ulong)*puVar7;
      uVar17 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_021e3c48;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e3c44;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0x6c) = 0xfffffffe;
      uVar17 = 0;
      if (uVar9 == 0) goto LAB_021e3c48;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x265ef22d) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar17 = 0;
          goto LAB_021e3c48;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar4 + 0x6c) = iVar13;
    } while (*puVar7 != 0);
    uVar17 = 0;
  }
LAB_021e3c48:
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  local_d0 = CONCAT44(uVar17,uVar6);
  if (*puVar7 == 0) {
LAB_021e3d5c:
    uVar6 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar4 + 8);
        if (-1 < (int)uVar6) {
          if (((uint *)((long)puVar7 + (ulong)uVar6) == (uint *)0x0) ||
             (uVar6 = *(uint *)((long)puVar7 + (ulong)uVar6), 6 < uVar6)) goto LAB_021e3d5c;
          goto LAB_021e3d60;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e3d5c;
      }
      puVar12 = (uint *)(ulong)*puVar7;
      uVar6 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_021e3d60;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e3d5c;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
      uVar6 = 0;
      if (uVar9 == 0) goto LAB_021e3d60;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x5ef86f1f) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar6 = 0;
          goto LAB_021e3d60;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar4 + 8) = iVar13;
    } while (*puVar7 != 0);
    uVar6 = 0;
  }
LAB_021e3d60:
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (*puVar7 == 0) {
LAB_021e3e6c:
    uVar17 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar4 + 0xc);
        if (-1 < (int)uVar17) {
          if (((uint *)((long)puVar7 + (ulong)uVar17) == (uint *)0x0) ||
             (uVar17 = *(uint *)((long)puVar7 + (ulong)uVar17), 6 < uVar17)) goto LAB_021e3e6c;
          goto LAB_021e3e70;
        }
        if (uVar17 != 0xffffffff) goto LAB_021e3e6c;
      }
      puVar12 = (uint *)(ulong)*puVar7;
      uVar17 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_021e3e70;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e3e6c;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
      uVar17 = 0;
      if (uVar9 == 0) goto LAB_021e3e70;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x195815cf) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar17 = 0;
          goto LAB_021e3e70;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar4 + 0xc) = iVar13;
    } while (*puVar7 != 0);
    uVar17 = 0;
  }
LAB_021e3e70:
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  local_c8 = CONCAT44(uVar17,uVar6);
  uVar6 = *puVar7;
  if (uVar6 != 0) {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        uVar6 = *puVar7;
      }
      else {
        uVar17 = *(uint *)puVar4;
        if (-1 < (int)uVar17) {
          if (((uint *)((long)puVar7 + (ulong)uVar17) != (uint *)0x0) &&
             (uVar6 = *(uint *)((long)puVar7 + (ulong)uVar17), uVar6 < 0x33)) goto LAB_021e3f80;
          break;
        }
        if (uVar17 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar6;
      uVar6 = 0;
      if ((puVar12 == (uint *)0x0) || (puVar7 == puVar12)) goto LAB_021e3f80;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar12);
      uVar6 = 0;
      if (lVar21 == 0) goto LAB_021e3f80;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
      *(undefined4 *)puVar4 = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x5ab06d03) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_021e3f7c;
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)puVar4 = iVar13;
      uVar6 = *puVar7;
      if (uVar6 == 0) break;
    } while( true );
  }
LAB_021e3f7c:
  uVar6 = 0;
LAB_021e3f80:
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (*puVar7 == 0) {
LAB_021e4090:
    uVar17 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bb40b0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar4 + 4);
        if (-1 < (int)uVar17) {
          if (((uint *)((long)puVar7 + (ulong)uVar17) == (uint *)0x0) ||
             (uVar17 = *(uint *)((long)puVar7 + (ulong)uVar17), 0x32 < uVar17)) goto LAB_021e4090;
          goto LAB_021e4094;
        }
        if (uVar17 != 0xffffffff) goto LAB_021e4090;
      }
      puVar12 = (uint *)(ulong)*puVar7;
      uVar17 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar12)) goto LAB_021e4094;
      lVar21 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar7 + (lVar21 - (long)puVar12);
      if (lVar21 == 0) goto LAB_021e4090;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
      uVar17 = 0;
      if (uVar9 == 0) goto LAB_021e4094;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x1d1017d3) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar17 = 0;
          goto LAB_021e4094;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar4 + 4) = iVar13;
    } while (*puVar7 != 0);
    uVar17 = 0;
  }
LAB_021e4094:
  puVar3 = PTR_DAT_04bc2c90;
  local_c0 = CONCAT44(uVar17,uVar6);
  local_b8 = 0;
  local_a4 = 0;
  local_9c = 0;
  local_b4 = 0;
  local_ac = 0;
  if (*puVar8 == 0) {
LAB_021e4190:
    uVar6 = 0;
  }
  else {
    cVar10 = *puVar2;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar3 + 0x20);
        if (-1 < (int)uVar6) {
          if (((byte *)((ulong)uVar6 + (long)puVar8) == (byte *)0x0) ||
             (bVar11 = *(byte *)((ulong)uVar6 + (long)puVar8), uVar6 = (uint)bVar11, 3 < bVar11))
          goto LAB_021e4190;
          goto LAB_021e4194;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e4190;
      }
      puVar7 = (uint *)(ulong)*puVar8;
      uVar6 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar7)) goto LAB_021e4194;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar7);
      if (lVar21 == 0) goto LAB_021e4190;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
      *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
      uVar6 = 0;
      if (uVar9 == 0) goto LAB_021e4194;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0xd6603c) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar6 = 0;
          goto LAB_021e4194;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar3 + 0x20) = iVar13;
    } while (*puVar8 != 0);
    uVar6 = 0;
  }
LAB_021e4194:
  local_120 = (undefined *)CONCAT44(local_120._4_4_,uVar6);
  if (uVar6 == 1) {
    fVar22 = 20.0;
LAB_021e41d0:
    if (DAT_05594b4c == '\x01') {
      uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar6;
    }
    else {
      uVar6 = nn::os::GetSystemTick();
      uVar17 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      uVar6 = uVar17 ^ uVar17 * 0x800;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
      uVar6 = uVar6 >> 8 ^ uVar17 >> 0x13 ^ uVar6 ^ uVar17;
    }
    if (((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * 100.0 < fVar22) {
LAB_021e4280:
      puVar3 = PTR_DAT_04bc2c90;
      local_104 = 9;
      if (*puVar8 == 0) {
LAB_021e4370:
        bVar11 = 0;
      }
      else {
        cVar10 = *puVar2;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar3 + 0x24);
            if (-1 < (int)uVar6) {
              if (((byte *)((ulong)uVar6 + (long)puVar8) == (byte *)0x0) ||
                 (bVar11 = *(byte *)((ulong)uVar6 + (long)puVar8), 1 < bVar11)) goto LAB_021e4370;
              goto LAB_021e4374;
            }
            if (uVar6 != 0xffffffff) goto LAB_021e4370;
          }
          puVar7 = (uint *)(ulong)*puVar8;
          bVar11 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar7)) goto LAB_021e4374;
          lVar21 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar8 + (lVar21 - (long)puVar7);
          if (lVar21 == 0) goto LAB_021e4370;
          uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
          *(undefined4 *)(puVar3 + 0x24) = 0xfffffffe;
          bVar11 = 0;
          if (uVar9 == 0) goto LAB_021e4374;
          piVar15 = (int *)(lVar21 + 4);
          while (piVar15[-1] != 0x7c60d6db) {
            piVar15 = piVar15 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              bVar11 = 0;
              goto LAB_021e4374;
            }
          }
          iVar13 = 0;
          if (*piVar15 != -1) {
            iVar13 = *piVar15;
          }
          *(int *)(puVar3 + 0x24) = iVar13;
        } while (*puVar8 != 0);
        bVar11 = 0;
      }
LAB_021e4374:
      FUN_021e2300(&local_120,&local_100,&local_104,bVar11 == 1,1,param_4,1);
      param_1[6] = (uint)local_120;
      param_1[7] = local_120._4_4_;
    }
  }
  else {
    if (uVar6 == 2) {
      fVar22 = 65.0;
      goto LAB_021e41d0;
    }
    if (uVar6 == 3) goto LAB_021e4280;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(puVar14);
  lVar21 = *(long *)puVar3;
  if (lVar21 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_110 = 0;
      local_118 = param_1[6];
      uStack_114 = param_1[7];
      local_120 = PTR_DAT_04bc0510 + 0x10;
      uVar6 = FUN_0277d6c4(&local_118);
      if (*(long *)puVar3 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(puVar14);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar21 + 0x1d8)) &&
             (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar6 * 8), lVar21 != 0)) {
            local_110 = lVar21;
          }
        }
      }
      uVar9 = FUN_01ad9cb4(&local_120);
      if ((uVar9 & 1) != 0) {
        param_1[6] = local_e8._4_4_;
        param_1[7] = local_e0;
      }
    }
  }
  puVar18 = (undefined8 *)PTR_DAT_04bc2c90;
  if (*puVar8 != 0) {
    cVar10 = *puVar2;
    do {
      if (cVar10 != '\0') {
        uVar6 = *(uint *)((long)puVar18 + 0x18);
        if ((int)uVar6 < 0) {
          if (uVar6 == 0xffffffff) goto LAB_021e4504;
        }
        else if (((byte *)((ulong)uVar6 + (long)puVar8) != (byte *)0x0) &&
                (bVar11 = *(byte *)((ulong)uVar6 + (long)puVar8), uVar6 = (uint)bVar11, bVar11 < 4))
        goto LAB_021e4588;
LAB_021e4760:
        uVar6 = 0;
        goto LAB_021e4588;
      }
      cVar10 = '\x01';
      *(undefined8 *)((long)puVar18 + 0x30) = 0xffffffffffffffff;
      *puVar2 = 1;
      *puVar18 = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar18 + 8) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar18 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar18 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar18 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar18 + 0x28) = 0xffffffffffffffff;
LAB_021e4504:
      puVar14 = (uint *)(ulong)*puVar8;
      uVar6 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_021e4588;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar14);
      if (lVar21 == 0) goto LAB_021e4760;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
      *(undefined4 *)((long)puVar18 + 0x18) = 0xfffffffe;
      uVar6 = 0;
      if (uVar9 == 0) goto LAB_021e4588;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x6309fc6) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar6 = 0;
          goto LAB_021e4588;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)((long)puVar18 + 0x18) = iVar13;
    } while (*puVar8 != 0);
  }
  uVar6 = 0;
LAB_021e4588:
  local_120._0_4_ = uVar6;
  if (uVar6 == 1) {
    fVar22 = 20.0;
LAB_021e45bc:
    if (DAT_05594b4c == '\x01') {
      uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar6;
    }
    else {
      uVar6 = nn::os::GetSystemTick();
      uVar17 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      uVar6 = uVar17 ^ uVar17 * 0x800;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
      uVar6 = uVar6 >> 8 ^ uVar17 >> 0x13 ^ uVar6 ^ uVar17;
      puVar18 = (undefined8 *)PTR_DAT_04bc2c90;
    }
    if (((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * 100.0 < fVar22) {
LAB_021e4674:
      local_104 = 0x10;
      if (*puVar8 == 0) {
LAB_021e4780:
        bVar11 = 0;
      }
      else {
        cVar10 = *puVar2;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *puVar18 = 0xffffffffffffffff;
            puVar18[1] = 0xffffffffffffffff;
            *puVar2 = 1;
            puVar18[6] = 0xffffffffffffffff;
            puVar18[2] = 0xffffffffffffffff;
            puVar18[3] = 0xffffffffffffffff;
            puVar18[4] = 0xffffffffffffffff;
            puVar18[5] = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)((long)puVar18 + 0x1c);
            if (-1 < (int)uVar6) {
              if (((byte *)((ulong)uVar6 + (long)puVar8) == (byte *)0x0) ||
                 (bVar11 = *(byte *)((ulong)uVar6 + (long)puVar8), 1 < bVar11)) goto LAB_021e4780;
              goto LAB_021e4784;
            }
            if (uVar6 != 0xffffffff) goto LAB_021e4780;
          }
          puVar14 = (uint *)(ulong)*puVar8;
          bVar11 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_021e4784;
          lVar21 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar8 + (lVar21 - (long)puVar14);
          if (lVar21 == 0) goto LAB_021e4780;
          uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
          *(undefined4 *)((long)puVar18 + 0x1c) = 0xfffffffe;
          bVar11 = 0;
          if (uVar9 == 0) goto LAB_021e4784;
          piVar15 = (int *)(lVar21 + 4);
          while (piVar15[-1] != 0x2c2a379e) {
            piVar15 = piVar15 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              bVar11 = 0;
              goto LAB_021e4784;
            }
          }
          iVar13 = 0;
          if (*piVar15 != -1) {
            iVar13 = *piVar15;
          }
          *(int *)((long)puVar18 + 0x1c) = iVar13;
        } while (*puVar8 != 0);
        bVar11 = 0;
      }
LAB_021e4784:
      FUN_021e2300(&local_120,&local_100,&local_104,bVar11 == 1,1,param_5,1);
      *param_1 = (uint)local_120;
      param_1[1] = local_120._4_4_;
      puVar18 = (undefined8 *)PTR_DAT_04bc2c90;
    }
  }
  else {
    if (uVar6 == 2) {
      fVar22 = 65.0;
      goto LAB_021e45bc;
    }
    if (uVar6 == 3) goto LAB_021e4674;
  }
  if (*puVar8 == 0) {
LAB_021e48a0:
    local_120._0_4_ = 0;
  }
  else {
    cVar10 = *puVar2;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *puVar18 = 0xffffffffffffffff;
        puVar18[1] = 0xffffffffffffffff;
        *puVar2 = 1;
        puVar18[6] = 0xffffffffffffffff;
        puVar18[2] = 0xffffffffffffffff;
        puVar18[3] = 0xffffffffffffffff;
        puVar18[4] = 0xffffffffffffffff;
        puVar18[5] = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar18 + 5);
        if (-1 < (int)uVar6) {
          if (((byte *)((ulong)uVar6 + (long)puVar8) == (byte *)0x0) ||
             (bVar11 = *(byte *)((ulong)uVar6 + (long)puVar8), local_120._0_4_ = (uint)bVar11,
             3 < bVar11)) goto LAB_021e48a0;
          goto LAB_021e48a4;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e48a0;
      }
      puVar14 = (uint *)(ulong)*puVar8;
      local_120._0_4_ = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_021e48a4;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar14);
      if (lVar21 == 0) goto LAB_021e48a0;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
      *(undefined4 *)(puVar18 + 5) = 0xfffffffe;
      local_120._0_4_ = 0;
      if (uVar9 == 0) goto LAB_021e48a4;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x744b3452) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          local_120._0_4_ = 0;
          goto LAB_021e48a4;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)(puVar18 + 5) = iVar13;
    } while (*puVar8 != 0);
    local_120._0_4_ = 0;
  }
LAB_021e48a4:
  if ((uint)local_120 == 1) {
    fVar22 = 20.0;
  }
  else {
    if ((uint)local_120 != 2) {
      if ((uint)local_120 != 3) {
        return 1;
      }
      goto LAB_021e4990;
    }
    fVar22 = 65.0;
  }
  if (DAT_05594b4c == '\x01') {
    uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar6;
  }
  else {
    uVar6 = nn::os::GetSystemTick();
    uVar17 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    uVar6 = uVar17 ^ uVar17 * 0x800;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
    uVar6 = uVar6 >> 8 ^ uVar17 >> 0x13 ^ uVar6 ^ uVar17;
    puVar18 = (undefined8 *)PTR_DAT_04bc2c90;
  }
  if (fVar22 <= ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * 100.0) {
    return 1;
  }
LAB_021e4990:
  local_104 = 0x12;
  if (*puVar8 == 0) {
LAB_021e4a80:
    bVar11 = 0;
  }
  else {
    cVar10 = *puVar2;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *puVar18 = 0xffffffffffffffff;
        puVar18[1] = 0xffffffffffffffff;
        *puVar2 = 1;
        puVar18[6] = 0xffffffffffffffff;
        puVar18[2] = 0xffffffffffffffff;
        puVar18[3] = 0xffffffffffffffff;
        puVar18[4] = 0xffffffffffffffff;
        puVar18[5] = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)((long)puVar18 + 0x2c);
        if (-1 < (int)uVar6) {
          if (((byte *)((ulong)uVar6 + (long)puVar8) == (byte *)0x0) ||
             (bVar11 = *(byte *)((ulong)uVar6 + (long)puVar8), 1 < bVar11)) goto LAB_021e4a80;
          goto LAB_021e4a84;
        }
        if (uVar6 != 0xffffffff) goto LAB_021e4a80;
      }
      puVar14 = (uint *)(ulong)*puVar8;
      bVar11 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_021e4a84;
      lVar21 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar8 + (lVar21 - (long)puVar14);
      if (lVar21 == 0) goto LAB_021e4a80;
      uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
      *(undefined4 *)((long)puVar18 + 0x2c) = 0xfffffffe;
      bVar11 = 0;
      if (uVar9 == 0) goto LAB_021e4a84;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != -0x5f8c557f) {
        piVar15 = piVar15 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          bVar11 = 0;
          goto LAB_021e4a84;
        }
      }
      iVar13 = 0;
      if (*piVar15 != -1) {
        iVar13 = *piVar15;
      }
      *(int *)((long)puVar18 + 0x2c) = iVar13;
    } while (*puVar8 != 0);
    bVar11 = 0;
  }
LAB_021e4a84:
  FUN_021e2300(&local_120,&local_100,&local_104,bVar11 == 1,1,param_6,1);
  param_1[2] = (uint)local_120;
  param_1[3] = local_120._4_4_;
  return 1;
}

