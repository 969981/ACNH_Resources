
bool FUN_021e0730(undefined4 *param_1,uint *param_2,uint *param_3,uint *param_4,byte *param_5,
                 long *param_6)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  char cVar16;
  int iVar17;
  ushort uVar18;
  int *piVar19;
  uint *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  long lVar23;
  uint *puVar24;
  float fVar25;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  long local_130;
  uint local_124;
  undefined4 local_120;
  undefined1 auStack_11c [8];
  undefined1 auStack_114 [8];
  undefined1 auStack_10c [8];
  uint local_104;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
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
  
  lVar14 = *(long *)PTR_DAT_04bb3968;
  uVar13 = *(uint *)(lVar14 + 0x16e78);
  if ((int)uVar13 < 1) {
    lVar23 = *(long *)(lVar14 + 0x16d68);
    if (lVar23 == 0) {
      return false;
    }
    puVar24 = *(uint **)(lVar23 + 8);
    if (puVar24 == (uint *)0x0) {
      return false;
    }
    uVar13 = *puVar24;
  }
  if (uVar13 <= *param_4) {
    return false;
  }
  local_7d = 0;
  local_88 = 8;
  local_90 = local_84;
  local_84[0] = 0;
  local_98 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_98,"-----");
  if ((ulong)*param_5 < 0x23) {
    FUN_038d1270(&local_98,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_5 * 8 + 0xb0),
                 param_5[1]);
  }
  uVar13 = *param_4;
  if ((int)*(uint *)(lVar14 + 0x16e78) < 1) {
    lVar23 = *(long *)(lVar14 + 0x16d68);
    if ((((lVar23 == 0) || (puVar24 = *(uint **)(lVar23 + 8), puVar24 == (uint *)0x0)) ||
        ((uVar13 < *(uint *)(lVar14 + 0x16d80) &&
         (*(char *)(*(long *)(lVar14 + 0x16d88) + (long)(int)uVar13) == '\0')))) ||
       (((*puVar24 <= uVar13 || (puVar24[1] == 0)) || ((ushort)puVar24[2] == 0))))
    goto LAB_021e08c0;
    iVar17 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      iVar17 = 0x1c;
    }
    puVar24 = (uint *)((ulong)(puVar24[1] * uVar13 + (uint)(ushort)puVar24[2] * 8 + iVar17) +
                      (long)puVar24);
  }
  else if (uVar13 < *(uint *)(lVar14 + 0x16e78)) {
    if (*(uint *)(lVar14 + 0x16e68) <= uVar13) {
      uVar13 = 0;
    }
    puVar24 = *(uint **)(*(long *)(lVar14 + 0x16e70) + (ulong)uVar13 * 8);
  }
  else {
LAB_021e08c0:
    puVar24 = (uint *)0x0;
  }
  uVar22 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_98 + 0x18))(&local_98);
  uVar8 = FUN_006bd550(local_90,0);
  local_100 = CONCAT44(local_100._4_4_,uVar8);
  puVar10 = (uint *)FUN_0079e770(uVar22,&local_100);
  bVar1 = puVar24 != (uint *)0x0 && puVar10 != (uint *)0x0;
  if (puVar24 == (uint *)0x0 || puVar10 == (uint *)0x0) {
    return bVar1;
  }
  local_100 = 0;
  local_e8 = 0xfffe00000000;
  local_e0 = 0;
  FUN_0277d4ac((long)&local_e8 + 4);
  puVar6 = PTR_DAT_04bc2860;
  puVar4 = PTR_DAT_04bc2858;
  uVar13 = *param_4;
  local_dc = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_9c = 0;
  local_a4 = 0;
  local_ac = 0;
  local_b4 = 0;
  if (*puVar24 == 0) {
LAB_021e0a4c:
    uVar9 = 0;
  }
  else {
    cVar16 = *PTR_DAT_04bc2858;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar6 + 0x10);
        if (-1 < (int)uVar9) {
          if (((uint *)((ulong)uVar9 + (long)puVar24) == (uint *)0x0) ||
             (uVar9 = *(uint *)((ulong)uVar9 + (long)puVar24), 0x32 < uVar9)) goto LAB_021e0a4c;
          goto LAB_021e0a50;
        }
        if (uVar9 != 0xffffffff) goto LAB_021e0a4c;
      }
      puVar20 = (uint *)(ulong)*puVar24;
      uVar9 = 0;
      if ((*puVar24 == 0) || (puVar24 == puVar20)) goto LAB_021e0a50;
      lVar14 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar24 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e0a4c;
      uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar20));
      *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
      uVar9 = 0;
      if (uVar11 == 0) goto LAB_021e0a50;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != -0x189a4aac) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar9 = 0;
          goto LAB_021e0a50;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar6 + 0x10) = iVar17;
    } while (*puVar24 != 0);
    uVar9 = 0;
  }
LAB_021e0a50:
  local_100 = CONCAT44(uVar9,uVar13);
  if (*puVar24 == 0) {
LAB_021e0b38:
    iVar17 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0xc);
        if (-1 < (int)uVar13) {
          if ((int *)((ulong)uVar13 + (long)puVar24) == (int *)0x0) goto LAB_021e0b38;
          iVar17 = *(int *)((ulong)uVar13 + (long)puVar24);
          goto LAB_021e0b3c;
        }
        if (uVar13 != 0xffffffff) goto LAB_021e0b38;
      }
      puVar20 = (uint *)(ulong)*puVar24;
      iVar17 = 0;
      if ((*puVar24 == 0) || (puVar24 == puVar20)) goto LAB_021e0b3c;
      lVar14 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar24 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e0b38;
      uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar20));
      *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
      iVar17 = 0;
      if (uVar11 == 0) goto LAB_021e0b3c;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x1f401b52) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          iVar17 = 0;
          goto LAB_021e0b3c;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar6 + 0xc) = iVar17;
    } while (*puVar24 != 0);
    iVar17 = 0;
  }
LAB_021e0b3c:
  local_f8 = (float)iVar17;
  if (*puVar24 == 0) {
LAB_021e0c28:
    iVar17 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x18);
        if (-1 < (int)uVar13) {
          if ((int *)((ulong)uVar13 + (long)puVar24) == (int *)0x0) goto LAB_021e0c28;
          iVar17 = *(int *)((ulong)uVar13 + (long)puVar24);
          goto LAB_021e0c2c;
        }
        if (uVar13 != 0xffffffff) goto LAB_021e0c28;
      }
      puVar20 = (uint *)(ulong)*puVar24;
      iVar17 = 0;
      if ((*puVar24 == 0) || (puVar24 == puVar20)) goto LAB_021e0c2c;
      lVar14 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar24 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e0c28;
      uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar20));
      *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
      iVar17 = 0;
      if (uVar11 == 0) goto LAB_021e0c2c;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x79be959d) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          iVar17 = 0;
          goto LAB_021e0c2c;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar6 + 0x18) = iVar17;
    } while (*puVar24 != 0);
    iVar17 = 0;
  }
LAB_021e0c2c:
  local_f4 = (float)iVar17;
  if (*puVar24 == 0) {
LAB_021e0d18:
    iVar17 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x1c);
        if (-1 < (int)uVar13) {
          if ((int *)((ulong)uVar13 + (long)puVar24) == (int *)0x0) goto LAB_021e0d18;
          iVar17 = *(int *)((ulong)uVar13 + (long)puVar24);
          goto LAB_021e0d1c;
        }
        if (uVar13 != 0xffffffff) goto LAB_021e0d18;
      }
      puVar20 = (uint *)(ulong)*puVar24;
      iVar17 = 0;
      if ((*puVar24 == 0) || (puVar24 == puVar20)) goto LAB_021e0d1c;
      lVar14 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar24 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e0d18;
      uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar20));
      *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
      iVar17 = 0;
      if (uVar11 == 0) goto LAB_021e0d1c;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != -0x5c2383b4) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          iVar17 = 0;
          goto LAB_021e0d1c;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar6 + 0x1c) = iVar17;
    } while (*puVar24 != 0);
    iVar17 = 0;
  }
LAB_021e0d1c:
  local_f0 = (float)iVar17;
  local_ec = 0;
  uVar8 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  puVar5 = PTR_DAT_04bb40b8;
  puVar4 = PTR_DAT_04bb40b0;
  local_e8 = CONCAT44(local_e8._4_4_,uVar8);
  if (*puVar10 != 0) {
    cVar16 = *PTR_DAT_04bb40b0;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        uVar13 = *(uint *)(puVar5 + 0x50);
        if (-1 < (int)uVar13) {
          if ((ushort *)((ulong)uVar13 + (long)puVar10) != (ushort *)0x0) {
            uVar18 = *(ushort *)((ulong)uVar13 + (long)puVar10);
            goto LAB_021e0e4c;
          }
          break;
        }
        if (uVar13 != 0xffffffff) break;
      }
      puVar20 = (uint *)(ulong)*puVar10;
      uVar18 = 0xfffe;
      if ((*puVar10 == 0) || (puVar10 == puVar20)) goto LAB_021e0e4c;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar20));
      *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != -0x78f0e1d7) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_021e0e48;
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar5 + 0x50) = iVar17;
      if (*puVar10 == 0) break;
    } while( true );
  }
LAB_021e0e48:
  uVar18 = 0xfffe;
LAB_021e0e4c:
  local_140 = (undefined *)(ulong)uVar18;
  FUN_0277d4ac(&local_140);
  uVar13 = 0;
  local_e8 = CONCAT44((uint)local_140,(undefined4)local_e8);
  local_e0 = local_140._4_4_;
  puVar20 = (uint *)((long)puVar10 - (ulong)*puVar10);
  if ((*puVar10 != 0) && (puVar20 != (uint *)0x0)) {
    uVar13 = 0;
    if (*puVar20 != 0) {
      uVar13 = puVar20[1];
      if ((uVar13 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar20 + lVar14 + (ulong)(ushort)puVar20[2] * 8;
        if (lVar14 != 0) {
          uVar9 = 0;
          if ((ulong)uVar13 != 0) {
            uVar9 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar13);
          }
          if (*puVar20 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((uVar9 < *(uint *)PTR_DAT_04bb9bf8) &&
             (uVar13 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bb9bf8 + 8) + (long)(int)uVar9 * 2),
             uVar13 < 3)) goto LAB_021e0ef0;
        }
      }
      uVar13 = 0;
    }
  }
LAB_021e0ef0:
  puVar20 = (uint *)((long)puVar10 - (ulong)*puVar10);
  if ((((*puVar10 == 0) || (puVar20 == (uint *)0x0)) || (*puVar20 == 0)) ||
     ((uVar9 = puVar20[1], uVar9 == 0 || ((ulong)(ushort)puVar20[2] == 0)))) {
LAB_021e0f88:
    local_104 = 0;
    local_d4 = true;
    local_dc = (ulong)uVar13;
  }
  else {
    lVar14 = 0xc;
    if (*(char *)((long)puVar20 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar20 + lVar14 + (ulong)(ushort)puVar20[2] * 8;
    if (lVar14 == 0) goto LAB_021e0f88;
    uVar2 = 0;
    if ((ulong)uVar9 != 0) {
      uVar2 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar9);
    }
    if (*puVar20 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bb6a50 <= uVar2) ||
       (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar2 * 2), 7 < uVar18))
    goto LAB_021e0f88;
    local_104 = (uint)uVar18;
    local_d4 = local_104 < 4;
    local_dc = (ulong)CONCAT24(uVar18,uVar13);
  }
  if (*puVar10 == 0) {
LAB_021e1090:
    uVar13 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        uVar13 = *(uint *)(puVar5 + 0x68);
        if (-1 < (int)uVar13) {
          if (((byte *)((long)puVar10 + (ulong)uVar13) == (byte *)0x0) ||
             (bVar12 = *(byte *)((long)puVar10 + (ulong)uVar13), uVar13 = (uint)bVar12, 0xe < bVar12
             )) goto LAB_021e1090;
          goto LAB_021e1094;
        }
        if (uVar13 != 0xffffffff) goto LAB_021e1090;
      }
      puVar20 = (uint *)(ulong)*puVar10;
      uVar13 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar20)) goto LAB_021e1094;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e1090;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar20));
      *(undefined4 *)(puVar5 + 0x68) = 0xfffffffe;
      uVar13 = 0;
      if (uVar11 == 0) goto LAB_021e1094;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x34eb5dc3) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar13 = 0;
          goto LAB_021e1094;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar5 + 0x68) = iVar17;
    } while (*puVar10 != 0);
    uVar13 = 0;
  }
LAB_021e1094:
  if (*puVar10 == 0) {
LAB_021e1190:
    uVar9 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        uVar9 = *(uint *)(puVar5 + 0x6c);
        if (-1 < (int)uVar9) {
          if (((byte *)((long)puVar10 + (ulong)uVar9) == (byte *)0x0) ||
             (bVar12 = *(byte *)((long)puVar10 + (ulong)uVar9), uVar9 = (uint)bVar12, 0xe < bVar12))
          goto LAB_021e1190;
          goto LAB_021e1194;
        }
        if (uVar9 != 0xffffffff) goto LAB_021e1190;
      }
      puVar20 = (uint *)(ulong)*puVar10;
      uVar9 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar20)) goto LAB_021e1194;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e1190;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar20));
      *(undefined4 *)(puVar5 + 0x6c) = 0xfffffffe;
      uVar9 = 0;
      if (uVar11 == 0) goto LAB_021e1194;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x265ef22d) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar9 = 0;
          goto LAB_021e1194;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar5 + 0x6c) = iVar17;
    } while (*puVar10 != 0);
    uVar9 = 0;
  }
LAB_021e1194:
  local_d0 = CONCAT44(uVar9,uVar13);
  if (*puVar10 == 0) {
LAB_021e128c:
    uVar13 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        uVar13 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar13) {
          if (((uint *)((long)puVar10 + (ulong)uVar13) == (uint *)0x0) ||
             (uVar13 = *(uint *)((long)puVar10 + (ulong)uVar13), 6 < uVar13)) goto LAB_021e128c;
          goto LAB_021e1290;
        }
        if (uVar13 != 0xffffffff) goto LAB_021e128c;
      }
      puVar20 = (uint *)(ulong)*puVar10;
      uVar13 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar20)) goto LAB_021e1290;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e128c;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar20));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      uVar13 = 0;
      if (uVar11 == 0) goto LAB_021e1290;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x5ef86f1f) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar13 = 0;
          goto LAB_021e1290;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar5 + 8) = iVar17;
    } while (*puVar10 != 0);
    uVar13 = 0;
  }
LAB_021e1290:
  if (*puVar10 == 0) {
LAB_021e138c:
    uVar9 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        uVar9 = *(uint *)(puVar5 + 0xc);
        if (-1 < (int)uVar9) {
          if (((uint *)((long)puVar10 + (ulong)uVar9) == (uint *)0x0) ||
             (uVar9 = *(uint *)((long)puVar10 + (ulong)uVar9), 6 < uVar9)) goto LAB_021e138c;
          goto LAB_021e1390;
        }
        if (uVar9 != 0xffffffff) goto LAB_021e138c;
      }
      puVar20 = (uint *)(ulong)*puVar10;
      uVar9 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar20)) goto LAB_021e1390;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e138c;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar20));
      *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
      uVar9 = 0;
      if (uVar11 == 0) goto LAB_021e1390;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x195815cf) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar9 = 0;
          goto LAB_021e1390;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar5 + 0xc) = iVar17;
    } while (*puVar10 != 0);
    uVar9 = 0;
  }
LAB_021e1390:
  local_c8 = CONCAT44(uVar9,uVar13);
  uVar13 = *puVar10;
  if (uVar13 != 0) {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        uVar13 = *puVar10;
      }
      else {
        uVar9 = *(uint *)puVar5;
        if (-1 < (int)uVar9) {
          if (((uint *)((long)puVar10 + (ulong)uVar9) != (uint *)0x0) &&
             (uVar13 = *(uint *)((long)puVar10 + (ulong)uVar9), uVar13 < 0x33)) goto LAB_021e1494;
          break;
        }
        if (uVar9 != 0xffffffff) break;
      }
      puVar20 = (uint *)(ulong)uVar13;
      uVar13 = 0;
      if ((puVar20 == (uint *)0x0) || (uVar13 = 0, puVar10 == puVar20)) goto LAB_021e1494;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar20);
      uVar13 = 0;
      if (lVar14 == 0) goto LAB_021e1494;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar20));
      *(undefined4 *)puVar5 = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != -0x5ab06d03) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_021e1490;
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)puVar5 = iVar17;
      uVar13 = *puVar10;
      if (uVar13 == 0) break;
    } while( true );
  }
LAB_021e1490:
  uVar13 = 0;
LAB_021e1494:
  if (*puVar10 == 0) {
LAB_021e159c:
    uVar9 = 0;
  }
  else {
    cVar16 = *puVar4;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
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
        uVar9 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar9) {
          if (((uint *)((long)puVar10 + (ulong)uVar9) == (uint *)0x0) ||
             (uVar9 = *(uint *)((long)puVar10 + (ulong)uVar9), 0x32 < uVar9)) goto LAB_021e159c;
          goto LAB_021e15a0;
        }
        if (uVar9 != 0xffffffff) goto LAB_021e159c;
      }
      puVar20 = (uint *)(ulong)*puVar10;
      uVar9 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar20)) goto LAB_021e15a0;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar20)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar20);
      if (lVar14 == 0) goto LAB_021e159c;
      uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar20));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar9 = 0;
      if (uVar11 == 0) goto LAB_021e15a0;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != -0x1d1017d3) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar9 = 0;
          goto LAB_021e15a0;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar5 + 4) = iVar17;
    } while (*puVar10 != 0);
    uVar9 = 0;
  }
LAB_021e15a0:
  local_c0 = CONCAT44(uVar9,uVar13);
  local_b8 = 0;
  local_a4 = 0;
  local_9c = 0;
  local_b4 = 0;
  local_ac = 0;
  uVar11 = FUN_021ded20();
  uVar13 = 6;
  if ((uVar11 & 1) == 0) {
    uVar13 = 2;
  }
  (**(code **)(*param_6 + 0x2f0))(auStack_10c,param_6);
  (**(code **)(*param_6 + 0x2d8))(auStack_114,param_6);
  (**(code **)(*param_6 + 0x2e0))(auStack_11c,param_6);
  uVar9 = 0;
  puVar10 = (uint *)((long)puVar24 - (ulong)*puVar24);
  if ((*puVar24 != 0) && (puVar10 != (uint *)0x0)) {
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar9 = puVar10[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar14 != 0) {
          uVar2 = 0;
          if ((ulong)uVar9 != 0) {
            uVar2 = (uint)((ulong)((long)puVar24 - lVar14) / (ulong)uVar9);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc2868) &&
             (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc2868 + 8) + (long)(int)uVar2 * 2),
             uVar9 < 4)) goto LAB_021e1690;
        }
      }
      uVar9 = 0;
    }
  }
LAB_021e1690:
  local_140 = (undefined *)CONCAT44(local_140._4_4_,uVar9);
  if (uVar9 == 1) {
    fVar25 = 20.0;
LAB_021e16d0:
    if (DAT_05594b4c == '\x01') {
      uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar9 = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar9;
    }
    else {
      uVar9 = nn::os::GetSystemTick();
      uVar2 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      uVar9 = uVar2 ^ uVar2 * 0x800;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
      uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
    }
    if (fVar25 <= ((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * 100.0) goto LAB_021e16b8;
LAB_021e1780:
    local_120 = 9;
    puVar10 = (uint *)((long)puVar24 - (ulong)*puVar24);
    if ((*puVar24 == 0) || (puVar10 == (uint *)0x0)) {
      bVar7 = false;
LAB_021e1894:
      local_124 = 0;
    }
    else {
      uVar18 = 0;
      if (*puVar10 == 0) {
LAB_021e181c:
        bVar7 = uVar18 == 1;
      }
      else {
        uVar9 = puVar10[1];
        if ((uVar9 == 0) || ((ulong)(ushort)puVar10[2] == 0)) {
LAB_021e1818:
          uVar18 = 0;
          goto LAB_021e181c;
        }
        lVar14 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar14 == 0) goto LAB_021e1818;
        uVar2 = 0;
        if ((ulong)uVar9 != 0) {
          uVar2 = (uint)((ulong)((long)puVar24 - lVar14) / (ulong)uVar9);
        }
        if (*puVar10 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (*(uint *)PTR_DAT_04bc2870 <= uVar2) goto LAB_021e1818;
        uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc2870 + 8) + (long)(int)uVar2 * 2);
        if (uVar18 < 2) goto LAB_021e181c;
        bVar7 = false;
      }
      if (((*puVar10 == 0) || (uVar9 = puVar10[1], uVar9 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
      goto LAB_021e1894;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
      local_124 = 0;
      if (lVar14 != 0) {
        uVar2 = 0;
        if ((ulong)uVar9 != 0) {
          uVar2 = (uint)((ulong)((long)puVar24 - lVar14) / (ulong)uVar9);
        }
        if (*puVar10 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc2878 <= uVar2) ||
           (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc2878 + 8) + (long)(int)uVar2 * 2),
           local_124 = (uint)uVar18, 2 < uVar18)) goto LAB_021e1894;
      }
    }
    FUN_021e2300(&local_140,&local_100,&local_120,bVar7,uVar13 >> (ulong)(local_124 & 0x1f) & 1,
                 auStack_10c,0);
    uVar15 = local_140._4_4_;
    uVar8 = (uint)local_140;
  }
  else {
    if (uVar9 == 2) {
      fVar25 = 65.0;
      goto LAB_021e16d0;
    }
    if (uVar9 == 3) goto LAB_021e1780;
LAB_021e16b8:
    uVar15 = local_e0;
    uVar8 = local_e8._4_4_;
  }
  *param_1 = uVar8;
  param_1[1] = uVar15;
  puVar4 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_1);
  lVar23 = *(long *)puVar4;
  if (lVar23 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_130 = 0;
      local_138 = *param_1;
      uStack_134 = param_1[1];
      local_140 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_138);
      if (*(long *)puVar4 != 0) {
        lVar14 = *(long *)(lVar23 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_1);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
             (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8), lVar14 != 0)) {
            local_130 = lVar14;
          }
        }
      }
      uVar11 = FUN_01ad9cb4(&local_140);
      if ((uVar11 & 1) != 0) {
        *param_1 = local_e8._4_4_;
        param_1[1] = local_e0;
      }
    }
  }
  pcVar21 = PTR_DAT_04bc2858;
  if (*puVar24 == 0) {
    uVar9 = 0;
  }
  else {
    cVar16 = *PTR_DAT_04bc2858;
    do {
      if (cVar16 != '\0') {
        uVar9 = *(uint *)(puVar6 + 0x24);
        if ((int)uVar9 < 0) {
          if (uVar9 == 0xffffffff) goto LAB_021e1a2c;
        }
        else if (((byte *)((ulong)uVar9 + (long)puVar24) != (byte *)0x0) &&
                (bVar12 = *(byte *)((ulong)uVar9 + (long)puVar24), uVar9 = (uint)bVar12, bVar12 < 4)
                ) goto LAB_021e1ab8;
LAB_021e1d5c:
        uVar9 = 0;
        goto LAB_021e1ab8;
      }
      cVar16 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *pcVar21 = 1;
      *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
LAB_021e1a2c:
      puVar10 = (uint *)(ulong)*puVar24;
      uVar9 = 0;
      if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_021e1ab8;
      lVar14 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar24 + (lVar14 - (long)puVar10);
      if (lVar14 == 0) goto LAB_021e1d5c;
      uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      uVar9 = 0;
      if (uVar11 == 0) goto LAB_021e1ab8;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != -0x6309fc6) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar9 = 0;
          goto LAB_021e1ab8;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar6 + 0x24) = iVar17;
    } while (*puVar24 != 0);
    uVar9 = 0;
  }
LAB_021e1ab8:
  local_140._0_4_ = uVar9;
  if (uVar9 == 1) {
    fVar25 = 20.0;
LAB_021e1b3c:
    if (DAT_05594b4c == '\x01') {
      uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar9 = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar9;
    }
    else {
      uVar9 = nn::os::GetSystemTick();
      uVar2 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
      uVar9 = uVar2 ^ uVar2 * 0x800;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
      uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
      pcVar21 = PTR_DAT_04bc2858;
    }
    if (fVar25 <= ((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * 100.0) goto LAB_021e1ad8;
LAB_021e1bf4:
    local_120 = 0x10;
    bVar12 = 0;
    if (*puVar24 != 0) {
      cVar16 = *pcVar21;
      do {
        if (cVar16 != '\0') {
          uVar9 = *(uint *)(puVar6 + 0x28);
          if ((int)uVar9 < 0) {
            if (uVar9 == 0xffffffff) goto LAB_021e1c54;
          }
          else {
            bVar12 = 0;
            if (((byte *)((ulong)uVar9 + (long)puVar24) == (byte *)0x0) ||
               (bVar12 = *(byte *)((ulong)uVar9 + (long)puVar24), bVar12 < 2)) goto LAB_021e1d80;
          }
LAB_021e1d7c:
          bVar12 = 0;
          goto LAB_021e1d80;
        }
        cVar16 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *pcVar21 = '\x01';
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
LAB_021e1c54:
        puVar10 = (uint *)(ulong)*puVar24;
        bVar12 = 0;
        if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_021e1d80;
        lVar14 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar24 + (lVar14 - (long)puVar10);
        if (lVar14 == 0) goto LAB_021e1d7c;
        uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
        bVar12 = 0;
        if (uVar11 == 0) goto LAB_021e1d80;
        piVar19 = (int *)(lVar14 + 4);
        while (piVar19[-1] != 0x2c2a379e) {
          piVar19 = piVar19 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            bVar12 = 0;
            goto LAB_021e1d80;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        *(int *)(puVar6 + 0x28) = iVar17;
      } while (*puVar24 != 0);
      bVar12 = 0;
    }
LAB_021e1d80:
    if (*puVar24 == 0) {
LAB_021e1e64:
      local_124 = 0;
    }
    else {
      cVar16 = *pcVar21;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *pcVar21 = '\x01';
          *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar6 + 0x2c);
          if (-1 < (int)uVar9) {
            if (((byte *)((ulong)uVar9 + (long)puVar24) == (byte *)0x0) ||
               (bVar3 = *(byte *)((ulong)uVar9 + (long)puVar24), local_124 = (uint)bVar3, 2 < bVar3)
               ) goto LAB_021e1e64;
            goto LAB_021e1e68;
          }
          if (uVar9 != 0xffffffff) goto LAB_021e1e64;
        }
        puVar10 = (uint *)(ulong)*puVar24;
        local_124 = 0;
        if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_021e1e68;
        lVar14 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar24 + (lVar14 - (long)puVar10);
        if (lVar14 == 0) goto LAB_021e1e64;
        uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
        local_124 = 0;
        if (uVar11 == 0) goto LAB_021e1e68;
        piVar19 = (int *)(lVar14 + 4);
        while (piVar19[-1] != -0x5bc694d7) {
          piVar19 = piVar19 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            local_124 = 0;
            goto LAB_021e1e68;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        *(int *)(puVar6 + 0x2c) = iVar17;
      } while (*puVar24 != 0);
      local_124 = 0;
    }
LAB_021e1e68:
    FUN_021e2300(&local_140,&local_100,&local_120,bVar12 == 1,
                 uVar13 >> (ulong)(local_124 & 0x1f) & 1,auStack_114,0);
    *param_2 = (uint)local_140;
    param_2[1] = local_140._4_4_;
    uVar9 = *puVar24;
    pcVar21 = PTR_DAT_04bc2858;
joined_r0x021e1eb4:
    if (uVar9 != 0) goto LAB_021e1eb8;
LAB_021e1f94:
    local_140._0_4_ = 0;
  }
  else {
    if (uVar9 == 2) {
      fVar25 = 65.0;
      goto LAB_021e1b3c;
    }
    if (uVar9 == 3) goto LAB_021e1bf4;
LAB_021e1ad8:
    puVar4 = PTR_DAT_04bb37e0;
    if (*param_4 == 0xd) {
      uVar22 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if (((uint)((ulong)uVar22 >> 0x20) & 0xff) == 0x17) {
        local_140._0_4_ = local_104;
        if (local_104 < 8) {
          uVar9 = *(uint *)(&DAT_04057b60 + (long)(int)local_104 * 4);
        }
        else {
          uVar9 = 0x32;
        }
        if (uVar9 <= (uint)((int)((ulong)uVar22 >> 0x10) >> 0x18)) {
LAB_021e1cd4:
          FUN_021e2c70(&local_140,local_104);
          pcVar21 = PTR_DAT_04bc2858;
          *param_2 = (uint)local_140;
          param_2[1] = local_140._4_4_;
          uVar9 = *puVar24;
          goto joined_r0x021e1eb4;
        }
      }
      else if ((char)((ulong)uVar22 >> 0x20) < '\x05') goto LAB_021e1cd4;
    }
    *(undefined2 *)param_2 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)((long)param_2 + 2) = puVar4[2];
    *(undefined *)((long)param_2 + 3) = puVar4[3];
    param_2[1] = *(uint *)(puVar4 + 4);
    if (*puVar24 == 0) goto LAB_021e1f94;
LAB_021e1eb8:
    cVar16 = *pcVar21;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *pcVar21 = '\x01';
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar6 + 0x30);
        if (-1 < (int)uVar9) {
          if (((byte *)((ulong)uVar9 + (long)puVar24) == (byte *)0x0) ||
             (bVar12 = *(byte *)((ulong)uVar9 + (long)puVar24), local_140._0_4_ = (uint)bVar12,
             3 < bVar12)) goto LAB_021e1f94;
          goto LAB_021e1f98;
        }
        if (uVar9 != 0xffffffff) goto LAB_021e1f94;
      }
      puVar10 = (uint *)(ulong)*puVar24;
      local_140._0_4_ = 0;
      if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_021e1f98;
      lVar14 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar24 + (lVar14 - (long)puVar10);
      if (lVar14 == 0) goto LAB_021e1f94;
      uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 0x30) = 0xfffffffe;
      local_140._0_4_ = 0;
      if (uVar11 == 0) goto LAB_021e1f98;
      piVar19 = (int *)(lVar14 + 4);
      while (piVar19[-1] != 0x744b3452) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          local_140._0_4_ = 0;
          goto LAB_021e1f98;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar6 + 0x30) = iVar17;
    } while (*puVar24 != 0);
    local_140._0_4_ = 0;
  }
LAB_021e1f98:
  if ((uint)local_140 == 1) {
    fVar25 = 20.0;
  }
  else {
    if ((uint)local_140 != 2) {
      if ((uint)local_140 == 3) goto LAB_021e20ac;
      goto LAB_021e1fb8;
    }
    fVar25 = 65.0;
  }
  if (DAT_05594b4c == '\x01') {
    uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar9 = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar9;
  }
  else {
    uVar9 = nn::os::GetSystemTick();
    uVar2 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
    uVar9 = uVar2 ^ uVar2 * 0x800;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
    pcVar21 = PTR_DAT_04bc2858;
  }
  if (((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * 100.0 < fVar25) {
LAB_021e20ac:
    local_120 = 0x12;
    bVar12 = 0;
    if (*puVar24 != 0) {
      cVar16 = *pcVar21;
      do {
        if (cVar16 != '\0') {
          uVar9 = *(uint *)(puVar6 + 0x34);
          if ((int)uVar9 < 0) {
            if (uVar9 == 0xffffffff) goto LAB_021e210c;
          }
          else {
            bVar12 = 0;
            if (((byte *)((ulong)uVar9 + (long)puVar24) == (byte *)0x0) ||
               (bVar12 = *(byte *)((ulong)uVar9 + (long)puVar24), bVar12 < 2)) goto LAB_021e21a4;
          }
LAB_021e21a0:
          bVar12 = 0;
          goto LAB_021e21a4;
        }
        cVar16 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *pcVar21 = '\x01';
        *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
LAB_021e210c:
        puVar10 = (uint *)(ulong)*puVar24;
        bVar12 = 0;
        if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_021e21a4;
        lVar14 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar24 + (lVar14 - (long)puVar10);
        if (lVar14 == 0) goto LAB_021e21a0;
        uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x34) = 0xfffffffe;
        bVar12 = 0;
        if (uVar11 == 0) goto LAB_021e21a4;
        piVar19 = (int *)(lVar14 + 4);
        while (piVar19[-1] != -0x5f8c557f) {
          piVar19 = piVar19 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            bVar12 = 0;
            goto LAB_021e21a4;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        *(int *)(puVar6 + 0x34) = iVar17;
      } while (*puVar24 != 0);
      bVar12 = 0;
    }
LAB_021e21a4:
    if (*puVar24 == 0) {
LAB_021e2290:
      local_124 = 0;
    }
    else {
      cVar16 = *pcVar21;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *pcVar21 = '\x01';
          *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar6 + 0x38);
          if (-1 < (int)uVar9) {
            if (((byte *)((ulong)uVar9 + (long)puVar24) == (byte *)0x0) ||
               (bVar3 = *(byte *)((ulong)uVar9 + (long)puVar24), local_124 = (uint)bVar3, 2 < bVar3)
               ) goto LAB_021e2290;
            goto LAB_021e2294;
          }
          if (uVar9 != 0xffffffff) goto LAB_021e2290;
        }
        puVar10 = (uint *)(ulong)*puVar24;
        local_124 = 0;
        if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_021e2294;
        lVar14 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar24 + (lVar14 - (long)puVar10);
        if (lVar14 == 0) goto LAB_021e2290;
        uVar11 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x38) = 0xfffffffe;
        local_124 = 0;
        if (uVar11 == 0) goto LAB_021e2294;
        piVar19 = (int *)(lVar14 + 4);
        while (piVar19[-1] != -0x2076f85) {
          piVar19 = piVar19 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            local_124 = 0;
            goto LAB_021e2294;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        *(int *)(puVar6 + 0x38) = iVar17;
      } while (*puVar24 != 0);
      local_124 = 0;
    }
LAB_021e2294:
    FUN_021e2300(&local_140,&local_100,&local_120,bVar12 == 1,
                 uVar13 >> (ulong)(local_124 & 0x1f) & 1,auStack_11c,0);
    *param_3 = (uint)local_140;
    param_3[1] = local_140._4_4_;
    return bVar1;
  }
LAB_021e1fb8:
  puVar4 = PTR_DAT_04bb37e0;
  *(undefined2 *)param_3 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_3 + 2) = puVar4[2];
  *(undefined *)((long)param_3 + 3) = puVar4[3];
  param_3[1] = *(uint *)(puVar4 + 4);
  return bVar1;
}

