
undefined8
FUN_021e4ac0(uint *param_1,uint *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  char cVar12;
  byte bVar13;
  uint *puVar14;
  int *piVar15;
  ushort uVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  long lVar21;
  float fVar22;
  undefined8 local_118;
  char *local_110;
  long local_108;
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
  undefined4 local_64;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
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
  uVar8 = *(uint *)(puVar2 + 4);
  *(undefined *)((long)param_1 + 0xb) = puVar2[3];
  param_1[3] = uVar8;
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
  uVar6 = FUN_006bd550(local_90,0);
  local_100 = CONCAT44(local_100._4_4_,uVar6);
  puVar9 = (uint *)FUN_0079e770(uVar19,&local_100);
  puVar4 = PTR_DAT_04bb40b8;
  puVar2 = PTR_DAT_04bb40b0;
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  if (*puVar9 != 0) {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
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
        uVar8 = *(uint *)(puVar4 + 0x50);
        if (-1 < (int)uVar8) {
          if ((ushort *)((ulong)uVar8 + (long)puVar9) != (ushort *)0x0) {
            uVar16 = *(ushort *)((ulong)uVar8 + (long)puVar9);
            goto LAB_021e4d24;
          }
          break;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar20 = (uint *)(ulong)*puVar9;
      uVar16 = 0xfffe;
      if ((*puVar9 == 0) || (puVar9 == puVar20)) goto LAB_021e4d24;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar20)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar20);
      if (lVar11 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar20));
      *(undefined4 *)(puVar4 + 0x50) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x78f0e1d7) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_021e4d20;
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x50) = iVar7;
      if (*puVar9 == 0) break;
    } while( true );
  }
LAB_021e4d20:
  uVar16 = 0xfffe;
LAB_021e4d24:
  local_100 = (ulong)uVar16;
  FUN_0277d4ac(&local_100);
  param_1[6] = (uint)local_100;
  param_1[7] = local_100._4_4_;
  puVar4 = PTR_DAT_04bc2340;
  puVar2 = PTR_DAT_04bc2338;
  lVar11 = *(long *)PTR_DAT_04bb4978;
  if (lVar11 == 0) {
    return 0;
  }
  if (*param_2 == 0) {
LAB_021e4e38:
    uVar8 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bc2338;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0xc);
        if (-1 < (int)uVar8) {
          if ((ushort *)((ulong)uVar8 + (long)param_2) == (ushort *)0x0) goto LAB_021e4e38;
          uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)param_2);
          goto LAB_021e4e3c;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e4e38;
      }
      puVar20 = (uint *)(ulong)*param_2;
      uVar8 = 0;
      if ((*param_2 == 0) || (param_2 == puVar20)) goto LAB_021e4e3c;
      lVar21 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar20)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)param_2 + (lVar21 - (long)puVar20);
      if (lVar21 == 0) goto LAB_021e4e38;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar20));
      *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
      uVar8 = 0;
      if (uVar10 == 0) goto LAB_021e4e3c;
      piVar15 = (int *)(lVar21 + 4);
      while (piVar15[-1] != 0x3e4510fa) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar8 = 0;
          goto LAB_021e4e3c;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0xc) = iVar7;
    } while (*param_2 != 0);
    uVar8 = 0;
  }
LAB_021e4e3c:
  uVar8 = uVar8 - *(ushort *)(lVar11 + 0x3d0);
  if (*(uint *)(lVar11 + 0x3b0) <= uVar8) {
    return 0;
  }
  puVar20 = *(uint **)(*(long *)(lVar11 + 0x3b8) + (long)(int)uVar8 * 8);
  if (puVar20 == (uint *)0x0) {
    return 0;
  }
  local_100 = 0;
  local_e8 = 0xfffe00000000;
  local_e0 = 0;
  FUN_0277d4ac((long)&local_e8 + 4);
  puVar4 = PTR_DAT_04bc2360;
  puVar2 = PTR_DAT_04bc2358;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_100 = local_100 & 0xffffffff00000000;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  if (*puVar20 == 0) {
LAB_021e4fe8:
    uVar8 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bc2358;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 4);
        if (-1 < (int)uVar8) {
          if (((uint *)((ulong)uVar8 + (long)puVar20) == (uint *)0x0) ||
             (uVar8 = *(uint *)((ulong)uVar8 + (long)puVar20), 0x32 < uVar8)) goto LAB_021e4fe8;
          if (uVar8 == 0x2f) {
            local_118 = PTR_DAT_04bb2020 + 0x10;
            local_110 = "SeqKKRave1stDone";
            iVar7 = FUN_02758850(&local_118);
            if (iVar7 == 0) {
              uVar8 = 0x30;
            }
            else {
              uVar8 = 0x2f;
            }
          }
          goto LAB_021e4fec;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e4fe8;
      }
      puVar18 = (uint *)(ulong)*puVar20;
      uVar8 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar18)) goto LAB_021e4fec;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e4fe8;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar18));
      *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
      uVar8 = 0;
      if (uVar10 == 0) goto LAB_021e4fec;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x189a4aac) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar8 = 0;
          goto LAB_021e4fec;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 4) = iVar7;
    } while (*puVar20 != 0);
    uVar8 = 0;
  }
LAB_021e4fec:
  local_100 = CONCAT44(uVar8,(uint)local_100);
  uVar8 = *puVar20;
  if (uVar8 != 0) {
    cVar12 = *puVar2;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        uVar8 = *puVar20;
      }
      else {
        uVar17 = *(uint *)puVar4;
        if (-1 < (int)uVar17) {
          if ((int *)((ulong)uVar17 + (long)puVar20) != (int *)0x0) {
            iVar7 = *(int *)((ulong)uVar17 + (long)puVar20);
            goto LAB_021e50d0;
          }
          break;
        }
        if (uVar17 != 0xffffffff) break;
      }
      puVar18 = (uint *)(ulong)uVar8;
      iVar7 = 0;
      if ((puVar18 == (uint *)0x0) || (iVar7 = 0, puVar20 == puVar18)) goto LAB_021e50d0;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar18);
      iVar7 = 0;
      if (lVar11 == 0) goto LAB_021e50d0;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar18));
      *(undefined4 *)puVar4 = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x1f401b52) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_021e50cc;
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)puVar4 = iVar7;
      uVar8 = *puVar20;
      if (uVar8 == 0) break;
    } while( true );
  }
LAB_021e50cc:
  iVar7 = 0;
LAB_021e50d0:
  local_f8 = (float)iVar7;
  if (*puVar20 == 0) {
LAB_021e51ac:
    iVar7 = 0;
  }
  else {
    cVar12 = *puVar2;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0xc);
        if (-1 < (int)uVar8) {
          if ((int *)((ulong)uVar8 + (long)puVar20) == (int *)0x0) goto LAB_021e51ac;
          iVar7 = *(int *)((ulong)uVar8 + (long)puVar20);
          goto LAB_021e51b0;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e51ac;
      }
      puVar18 = (uint *)(ulong)*puVar20;
      iVar7 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar18)) goto LAB_021e51b0;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e51ac;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar18));
      *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
      iVar7 = 0;
      if (uVar10 == 0) goto LAB_021e51b0;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x79be959d) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          iVar7 = 0;
          goto LAB_021e51b0;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0xc) = iVar7;
    } while (*puVar20 != 0);
    iVar7 = 0;
  }
LAB_021e51b0:
  local_f4 = (float)iVar7;
  if (*puVar20 == 0) {
LAB_021e528c:
    iVar7 = 0;
  }
  else {
    cVar12 = *puVar2;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0x10);
        if (-1 < (int)uVar8) {
          if ((int *)((ulong)uVar8 + (long)puVar20) == (int *)0x0) goto LAB_021e528c;
          iVar7 = *(int *)((ulong)uVar8 + (long)puVar20);
          goto LAB_021e5290;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e528c;
      }
      puVar18 = (uint *)(ulong)*puVar20;
      iVar7 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar18)) goto LAB_021e5290;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e528c;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar18));
      *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
      iVar7 = 0;
      if (uVar10 == 0) goto LAB_021e5290;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x5c2383b4) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          iVar7 = 0;
          goto LAB_021e5290;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x10) = iVar7;
    } while (*puVar20 != 0);
    iVar7 = 0;
  }
LAB_021e5290:
  local_f0 = (float)iVar7;
  local_ec = 0;
  uVar6 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  local_e8 = CONCAT44(local_e8._4_4_,uVar6);
  if (*puVar9 != 0) {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0x50);
        if (-1 < (int)uVar8) {
          if ((ushort *)((ulong)uVar8 + (long)puVar9) != (ushort *)0x0) {
            uVar16 = *(ushort *)((ulong)uVar8 + (long)puVar9);
            goto LAB_021e53bc;
          }
          break;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar18 = (uint *)(ulong)*puVar9;
      uVar16 = 0xfffe;
      if ((*puVar9 == 0) || (puVar9 == puVar18)) goto LAB_021e53bc;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x78f0e1d7) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_021e53b8;
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar5 + 0x50) = iVar7;
      if (*puVar9 == 0) break;
    } while( true );
  }
LAB_021e53b8:
  uVar16 = 0xfffe;
LAB_021e53bc:
  local_118 = (undefined *)(ulong)uVar16;
  FUN_0277d4ac(&local_118);
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  uVar8 = 0;
  local_e8 = CONCAT44((uint)local_118,(undefined4)local_e8);
  local_e0 = local_118._4_4_;
  puVar18 = (uint *)((long)puVar9 - (ulong)*puVar9);
  if ((*puVar9 != 0) && (puVar18 != (uint *)0x0)) {
    uVar8 = 0;
    if (*puVar18 != 0) {
      uVar8 = puVar18[1];
      if ((uVar8 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar11 != 0) {
          uVar17 = 0;
          if ((ulong)uVar8 != 0) {
            uVar17 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar8);
          }
          if (*puVar18 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < *(uint *)PTR_DAT_04bb9bf8) &&
             (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bb9bf8 + 8) + (long)(int)uVar17 * 2),
             uVar8 < 3)) goto LAB_021e5460;
        }
      }
      uVar8 = 0;
    }
  }
LAB_021e5460:
  puVar18 = (uint *)((long)puVar9 - (ulong)*puVar9);
  if ((((*puVar9 == 0) || (puVar18 == (uint *)0x0)) || (*puVar18 == 0)) ||
     ((uVar17 = puVar18[1], uVar17 == 0 || ((ulong)(ushort)puVar18[2] == 0)))) {
LAB_021e54f4:
    local_dc = (ulong)uVar8;
    local_d4 = true;
  }
  else {
    lVar11 = 0xc;
    if (*(char *)((long)puVar18 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
    if (lVar11 == 0) goto LAB_021e54f4;
    uVar1 = 0;
    if ((ulong)uVar17 != 0) {
      uVar1 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar17);
    }
    if (*puVar18 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bb6a50 <= uVar1) ||
       (uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar1 * 2), 7 < uVar16))
    goto LAB_021e54f4;
    local_d4 = uVar16 < 4;
    local_dc = (ulong)CONCAT24(uVar16,uVar8);
  }
  if (*puVar9 == 0) {
LAB_021e5610:
    uVar8 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0x68);
        if (-1 < (int)uVar8) {
          if (((byte *)((long)puVar9 + (ulong)uVar8) == (byte *)0x0) ||
             (bVar13 = *(byte *)((long)puVar9 + (ulong)uVar8), uVar8 = (uint)bVar13, 0xe < bVar13))
          goto LAB_021e5610;
          goto LAB_021e5614;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e5610;
      }
      puVar18 = (uint *)(ulong)*puVar9;
      uVar8 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar18)) goto LAB_021e5614;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e5610;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 0x68) = 0xfffffffe;
      uVar8 = 0;
      if (uVar10 == 0) goto LAB_021e5614;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x34eb5dc3) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar8 = 0;
          goto LAB_021e5614;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar5 + 0x68) = iVar7;
    } while (*puVar9 != 0);
    uVar8 = 0;
  }
LAB_021e5614:
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (*puVar9 == 0) {
LAB_021e5720:
    uVar17 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar5 + 0x6c);
        if (-1 < (int)uVar17) {
          if (((byte *)((long)puVar9 + (ulong)uVar17) == (byte *)0x0) ||
             (bVar13 = *(byte *)((long)puVar9 + (ulong)uVar17), uVar17 = (uint)bVar13, 0xe < bVar13)
             ) goto LAB_021e5720;
          goto LAB_021e5724;
        }
        if (uVar17 != 0xffffffff) goto LAB_021e5720;
      }
      puVar18 = (uint *)(ulong)*puVar9;
      uVar17 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar18)) goto LAB_021e5724;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e5720;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 0x6c) = 0xfffffffe;
      uVar17 = 0;
      if (uVar10 == 0) goto LAB_021e5724;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x265ef22d) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar17 = 0;
          goto LAB_021e5724;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar5 + 0x6c) = iVar7;
    } while (*puVar9 != 0);
    uVar17 = 0;
  }
LAB_021e5724:
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  local_d0 = CONCAT44(uVar17,uVar8);
  if (*puVar9 == 0) {
LAB_021e582c:
    uVar8 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar8) {
          if (((uint *)((long)puVar9 + (ulong)uVar8) == (uint *)0x0) ||
             (uVar8 = *(uint *)((long)puVar9 + (ulong)uVar8), 6 < uVar8)) goto LAB_021e582c;
          goto LAB_021e5830;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e582c;
      }
      puVar18 = (uint *)(ulong)*puVar9;
      uVar8 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar18)) goto LAB_021e5830;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e582c;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      uVar8 = 0;
      if (uVar10 == 0) goto LAB_021e5830;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x5ef86f1f) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar8 = 0;
          goto LAB_021e5830;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar5 + 8) = iVar7;
    } while (*puVar9 != 0);
    uVar8 = 0;
  }
LAB_021e5830:
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (*puVar9 == 0) {
LAB_021e593c:
    uVar17 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar5 + 0xc);
        if (-1 < (int)uVar17) {
          if (((uint *)((long)puVar9 + (ulong)uVar17) == (uint *)0x0) ||
             (uVar17 = *(uint *)((long)puVar9 + (ulong)uVar17), 6 < uVar17)) goto LAB_021e593c;
          goto LAB_021e5940;
        }
        if (uVar17 != 0xffffffff) goto LAB_021e593c;
      }
      puVar18 = (uint *)(ulong)*puVar9;
      uVar17 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar18)) goto LAB_021e5940;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e593c;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
      uVar17 = 0;
      if (uVar10 == 0) goto LAB_021e5940;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x195815cf) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar17 = 0;
          goto LAB_021e5940;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar5 + 0xc) = iVar7;
    } while (*puVar9 != 0);
    uVar17 = 0;
  }
LAB_021e5940:
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  local_c8 = CONCAT44(uVar17,uVar8);
  uVar8 = *puVar9;
  if (uVar8 != 0) {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        uVar8 = *puVar9;
      }
      else {
        uVar17 = *(uint *)puVar5;
        if (-1 < (int)uVar17) {
          if (((uint *)((long)puVar9 + (ulong)uVar17) != (uint *)0x0) &&
             (uVar8 = *(uint *)((long)puVar9 + (ulong)uVar17), uVar8 < 0x33)) goto LAB_021e5a54;
          break;
        }
        if (uVar17 != 0xffffffff) break;
      }
      puVar18 = (uint *)(ulong)uVar8;
      uVar8 = 0;
      if ((puVar18 == (uint *)0x0) || (uVar8 = 0, puVar9 == puVar18)) goto LAB_021e5a54;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar18);
      uVar8 = 0;
      if (lVar11 == 0) goto LAB_021e5a54;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
      *(undefined4 *)puVar5 = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x5ab06d03) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_021e5a50;
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)puVar5 = iVar7;
      uVar8 = *puVar9;
      if (uVar8 == 0) break;
    } while( true );
  }
LAB_021e5a50:
  uVar8 = 0;
LAB_021e5a54:
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (*puVar9 == 0) {
LAB_021e5b60:
    uVar17 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bb40b0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar17) {
          if (((uint *)((long)puVar9 + (ulong)uVar17) == (uint *)0x0) ||
             (uVar17 = *(uint *)((long)puVar9 + (ulong)uVar17), 0x32 < uVar17)) goto LAB_021e5b60;
          goto LAB_021e5b64;
        }
        if (uVar17 != 0xffffffff) goto LAB_021e5b60;
      }
      puVar18 = (uint *)(ulong)*puVar9;
      uVar17 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar18)) goto LAB_021e5b64;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_021e5b60;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar17 = 0;
      if (uVar10 == 0) goto LAB_021e5b64;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x1d1017d3) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar17 = 0;
          goto LAB_021e5b64;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar5 + 4) = iVar7;
    } while (*puVar9 != 0);
    uVar17 = 0;
  }
LAB_021e5b64:
  local_c0 = CONCAT44(uVar17,uVar8);
  local_b8 = 0;
  local_a4 = 0;
  local_9c = 0;
  local_b4 = 0;
  local_ac = 0;
  if (*puVar20 == 0) {
LAB_021e5c54:
    uVar8 = 0;
  }
  else {
    cVar12 = *puVar2;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0x20);
        if (-1 < (int)uVar8) {
          if (((byte *)((ulong)uVar8 + (long)puVar20) == (byte *)0x0) ||
             (bVar13 = *(byte *)((ulong)uVar8 + (long)puVar20), uVar8 = (uint)bVar13, 3 < bVar13))
          goto LAB_021e5c54;
          goto LAB_021e5c58;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e5c54;
      }
      puVar9 = (uint *)(ulong)*puVar20;
      uVar8 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar9)) goto LAB_021e5c58;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar9)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar9);
      if (lVar11 == 0) goto LAB_021e5c54;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar9));
      *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
      uVar8 = 0;
      if (uVar10 == 0) goto LAB_021e5c58;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0xd6603c) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar8 = 0;
          goto LAB_021e5c58;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x20) = iVar7;
    } while (*puVar20 != 0);
    uVar8 = 0;
  }
LAB_021e5c58:
  local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar8);
  if (uVar8 == 1) {
    fVar22 = 20.0;
LAB_021e5c8c:
    if (DAT_05594b4c == '\x01') {
      uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar8;
    }
    else {
      uVar8 = nn::os::GetSystemTick();
      uVar17 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = uVar17 ^ uVar17 * 0x800;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
      uVar8 = uVar8 >> 8 ^ uVar17 >> 0x13 ^ uVar8 ^ uVar17;
    }
    if (((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * 100.0 < fVar22) {
LAB_021e5d44:
      local_64 = 9;
      if (*puVar20 == 0) {
LAB_021e5e30:
        bVar13 = 0;
      }
      else {
        cVar12 = *puVar2;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 0x24);
            if (-1 < (int)uVar8) {
              if (((byte *)((ulong)uVar8 + (long)puVar20) == (byte *)0x0) ||
                 (bVar13 = *(byte *)((ulong)uVar8 + (long)puVar20), 1 < bVar13)) goto LAB_021e5e30;
              goto LAB_021e5e34;
            }
            if (uVar8 != 0xffffffff) goto LAB_021e5e30;
          }
          puVar9 = (uint *)(ulong)*puVar20;
          bVar13 = 0;
          if ((*puVar20 == 0) || (puVar20 == puVar9)) goto LAB_021e5e34;
          lVar11 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar9)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar20 + (lVar11 - (long)puVar9);
          if (lVar11 == 0) goto LAB_021e5e30;
          uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar9));
          *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
          bVar13 = 0;
          if (uVar10 == 0) goto LAB_021e5e34;
          piVar15 = (int *)(lVar11 + 4);
          while (piVar15[-1] != 0x7c60d6db) {
            piVar15 = piVar15 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              bVar13 = 0;
              goto LAB_021e5e34;
            }
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar4 + 0x24) = iVar7;
        } while (*puVar20 != 0);
        bVar13 = 0;
      }
LAB_021e5e34:
      FUN_021e2300(&local_118,&local_100,&local_64,bVar13 == 1,1,param_4,1);
      param_1[6] = (uint)local_118;
      param_1[7] = local_118._4_4_;
    }
  }
  else {
    if (uVar8 == 2) {
      fVar22 = 65.0;
      goto LAB_021e5c8c;
    }
    if (uVar8 == 3) goto LAB_021e5d44;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(puVar14);
  lVar11 = *(long *)puVar3;
  if (lVar11 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_108 = 0;
      local_110 = *(char **)(param_1 + 6);
      local_118 = PTR_DAT_04bc0510 + 0x10;
      uVar8 = FUN_0277d6c4(&local_110);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(puVar14);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), lVar11 != 0)) {
            local_108 = lVar11;
          }
        }
      }
      uVar10 = FUN_01ad9cb4(&local_118);
      if ((uVar10 & 1) != 0) {
        param_1[6] = local_e8._4_4_;
        param_1[7] = local_e0;
      }
    }
  }
  if (*puVar20 == 0) {
LAB_021e6040:
    uVar8 = 0;
  }
  else {
    cVar12 = *puVar2;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0x18);
        if (-1 < (int)uVar8) {
          if (((byte *)((ulong)uVar8 + (long)puVar20) == (byte *)0x0) ||
             (bVar13 = *(byte *)((ulong)uVar8 + (long)puVar20), uVar8 = (uint)bVar13, 3 < bVar13))
          goto LAB_021e6040;
          goto LAB_021e6044;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e6040;
      }
      puVar14 = (uint *)(ulong)*puVar20;
      uVar8 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_021e6044;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar14);
      if (lVar11 == 0) goto LAB_021e6040;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
      uVar8 = 0;
      if (uVar10 == 0) goto LAB_021e6044;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x6309fc6) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar8 = 0;
          goto LAB_021e6044;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x18) = iVar7;
    } while (*puVar20 != 0);
    uVar8 = 0;
  }
LAB_021e6044:
  local_118._0_4_ = uVar8;
  if (uVar8 == 1) {
    fVar22 = 20.0;
LAB_021e6078:
    if (DAT_05594b4c == '\x01') {
      uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar8;
    }
    else {
      uVar8 = nn::os::GetSystemTick();
      uVar17 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = uVar17 ^ uVar17 * 0x800;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
      uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
      uVar8 = uVar8 >> 8 ^ uVar17 >> 0x13 ^ uVar8 ^ uVar17;
    }
    if (((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * 100.0 < fVar22) {
LAB_021e6130:
      local_64 = 0x10;
      if (*puVar20 == 0) {
LAB_021e6214:
        bVar13 = 0;
      }
      else {
        cVar12 = *puVar2;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 0x1c);
            if (-1 < (int)uVar8) {
              if (((byte *)((ulong)uVar8 + (long)puVar20) == (byte *)0x0) ||
                 (bVar13 = *(byte *)((ulong)uVar8 + (long)puVar20), 1 < bVar13)) goto LAB_021e6214;
              goto LAB_021e6218;
            }
            if (uVar8 != 0xffffffff) goto LAB_021e6214;
          }
          puVar14 = (uint *)(ulong)*puVar20;
          bVar13 = 0;
          if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_021e6218;
          lVar11 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar20 + (lVar11 - (long)puVar14);
          if (lVar11 == 0) goto LAB_021e6214;
          uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
          *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
          bVar13 = 0;
          if (uVar10 == 0) goto LAB_021e6218;
          piVar15 = (int *)(lVar11 + 4);
          while (piVar15[-1] != 0x2c2a379e) {
            piVar15 = piVar15 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              bVar13 = 0;
              goto LAB_021e6218;
            }
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar4 + 0x1c) = iVar7;
        } while (*puVar20 != 0);
        bVar13 = 0;
      }
LAB_021e6218:
      FUN_021e2300(&local_118,&local_100,&local_64,bVar13 == 1,1,param_5,1);
      *param_1 = (uint)local_118;
      param_1[1] = local_118._4_4_;
    }
  }
  else {
    if (uVar8 == 2) {
      fVar22 = 65.0;
      goto LAB_021e6078;
    }
    if (uVar8 == 3) goto LAB_021e6130;
  }
  if (*puVar20 == 0) {
LAB_021e6320:
    local_118._0_4_ = 0;
  }
  else {
    cVar12 = *puVar2;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0x28);
        if (-1 < (int)uVar8) {
          if (((byte *)((ulong)uVar8 + (long)puVar20) == (byte *)0x0) ||
             (bVar13 = *(byte *)((ulong)uVar8 + (long)puVar20), local_118._0_4_ = (uint)bVar13,
             3 < bVar13)) goto LAB_021e6320;
          goto LAB_021e6324;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e6320;
      }
      puVar14 = (uint *)(ulong)*puVar20;
      local_118._0_4_ = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_021e6324;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar14);
      if (lVar11 == 0) goto LAB_021e6320;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
      local_118._0_4_ = 0;
      if (uVar10 == 0) goto LAB_021e6324;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x744b3452) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          local_118._0_4_ = 0;
          goto LAB_021e6324;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x28) = iVar7;
    } while (*puVar20 != 0);
    local_118._0_4_ = 0;
  }
LAB_021e6324:
  if ((uint)local_118 == 1) {
    fVar22 = 20.0;
  }
  else {
    if ((uint)local_118 != 2) {
      if ((uint)local_118 != 3) {
        return 1;
      }
      goto LAB_021e6410;
    }
    fVar22 = 65.0;
  }
  if (DAT_05594b4c == '\x01') {
    uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar8;
  }
  else {
    uVar8 = nn::os::GetSystemTick();
    uVar17 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = uVar17 ^ uVar17 * 0x800;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
    uVar8 = uVar8 >> 8 ^ uVar17 >> 0x13 ^ uVar8 ^ uVar17;
  }
  if (fVar22 <= ((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * 100.0) {
    return 1;
  }
LAB_021e6410:
  local_64 = 0x12;
  if (*puVar20 == 0) {
LAB_021e64f4:
    bVar13 = 0;
  }
  else {
    cVar12 = *puVar2;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar4 + 0x2c);
        if (-1 < (int)uVar8) {
          if (((byte *)((ulong)uVar8 + (long)puVar20) == (byte *)0x0) ||
             (bVar13 = *(byte *)((ulong)uVar8 + (long)puVar20), 1 < bVar13)) goto LAB_021e64f4;
          goto LAB_021e64f8;
        }
        if (uVar8 != 0xffffffff) goto LAB_021e64f4;
      }
      puVar14 = (uint *)(ulong)*puVar20;
      bVar13 = 0;
      if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_021e64f8;
      lVar11 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar20 + (lVar11 - (long)puVar14);
      if (lVar11 == 0) goto LAB_021e64f4;
      uVar10 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
      bVar13 = 0;
      if (uVar10 == 0) goto LAB_021e64f8;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != -0x5f8c557f) {
        piVar15 = piVar15 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          bVar13 = 0;
          goto LAB_021e64f8;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x2c) = iVar7;
    } while (*puVar20 != 0);
    bVar13 = 0;
  }
LAB_021e64f8:
  FUN_021e2300(&local_118,&local_100,&local_64,bVar13 == 1,1,param_6,1);
  param_1[2] = (uint)local_118;
  param_1[3] = local_118._4_4_;
  return 1;
}

