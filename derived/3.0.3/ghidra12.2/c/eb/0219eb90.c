
void FUN_0219eb90(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  int iVar14;
  char cVar15;
  byte bVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  uint local_60;
  uint local_5c;
  byte local_58 [4];
  uint local_54;
  uint uStack_34;
  
  puVar5 = PTR_DAT_04bb3968;
  if (*(char *)(param_1 + 0xaf9) == '\0') {
    return;
  }
  puVar19 = &local_60;
  if (*(long *)(param_1 + 0xaa0) == 0) {
    return;
  }
  cVar4 = *(char *)(param_1 + 0xaf8);
  uVar3 = *(uint *)(*(long *)(param_1 + 0xaa0) + 4);
  uVar21 = (uint)cVar4;
  lVar11 = *(long *)PTR_DAT_04bb3968;
  if ((int)*(uint *)(lVar11 + 0x168f0) < 1) {
    if ((((*(long *)(lVar11 + 0x167e0) == 0) ||
         (puVar22 = *(uint **)(*(long *)(lVar11 + 0x167e0) + 8), puVar22 == (uint *)0x0)) ||
        ((uVar3 < *(uint *)(lVar11 + 0x167f8) &&
         (*(char *)(*(long *)(lVar11 + 0x16800) + (long)(int)uVar3) == '\0')))) ||
       (((*puVar22 <= uVar3 || (puVar22[1] == 0)) || ((ushort)puVar22[2] == 0)))) goto LAB_0219ec7c;
    iVar14 = 0xc;
    if (*(char *)((long)puVar22 + 10) != '\0') {
      iVar14 = 0x1c;
    }
    puVar22 = (uint *)((ulong)(puVar22[1] * uVar3 + (uint)(ushort)puVar22[2] * 8 + iVar14) +
                      (long)puVar22);
  }
  else if (uVar3 < *(uint *)(lVar11 + 0x168f0)) {
    uVar1 = uVar3;
    if (*(uint *)(lVar11 + 0x168e0) <= uVar3) {
      uVar1 = 0;
    }
    puVar22 = *(uint **)(*(long *)(lVar11 + 0x168e8) + (ulong)uVar1 * 8);
  }
  else {
LAB_0219ec7c:
    puVar22 = (uint *)0x0;
  }
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x10);
  uStack_34 = uVar21;
  if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
    lVar8 = (**(code **)(*(long *)*puVar12 + 0x38))();
    lVar11 = 0;
    if (lVar8 != 0) {
      lVar11 = lVar8 + 0x70;
    }
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar12[0x26] == (long *)0x0) {
      return;
    }
    lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
  }
  lVar8 = lVar11 + 0xa8;
  if (lVar11 == 0) {
    lVar8 = 0;
  }
  if (puVar22 == (uint *)0x0) {
    return;
  }
  if (lVar11 == 0) {
    return;
  }
  if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar12 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)*puVar12)();
    uVar9 = uVar9 & 0xffffffff;
  }
  puVar7 = PTR_DAT_04bc25f0;
  puVar6 = PTR_DAT_04bc25e8;
  lVar11 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
  lVar2 = lVar11 + ((long)cVar4 & 0xffffffffU) * 0x13230;
  if (9 < uVar21) {
    lVar2 = lVar11;
  }
  local_54 = *(uint *)(lVar2 + 0x10764);
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
LAB_0219ed9c:
    if (*pbVar13 < 8) goto LAB_0219ee14;
LAB_0219eda8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0219ee0c:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_0219ee14;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar16 = *(byte *)(lVar11 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar16 != 0xffffffffffffffff) {
      puVar18 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
      if (7 < bVar16) {
        puVar18 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar18 & 8) != 0) {
        pbVar13 = (byte *)(lVar11 + 0x471);
      }
    }
    local_58[0] = *pbVar13;
    if (7 < local_58[0]) goto LAB_0219ee0c;
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0219ed9c;
      }
      goto LAB_0219eda8;
    }
LAB_0219ee14:
    local_58[0] = *pbVar13;
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
  }
  if (*puVar22 == 0) {
LAB_0219ef10:
    bVar16 = 0;
  }
  else {
    cVar15 = *PTR_DAT_04bc25e8;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
      }
      else {
        uVar21 = *(uint *)(puVar7 + 8);
        if (-1 < (int)uVar21) {
          if (((byte *)((ulong)uVar21 + (long)puVar22) == (byte *)0x0) ||
             (bVar16 = *(byte *)((ulong)uVar21 + (long)puVar22), 4 < bVar16)) goto LAB_0219ef10;
          goto LAB_0219ef14;
        }
        if (uVar21 != 0xffffffff) goto LAB_0219ef10;
      }
      puVar18 = (uint *)(ulong)*puVar22;
      bVar16 = 0;
      if ((*puVar22 == 0) || (puVar22 == puVar18)) goto LAB_0219ef14;
      lVar11 = 0xc;
      if (*(char *)((long)puVar22 + (10 - (long)puVar18)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar22 + (lVar11 - (long)puVar18);
      if (lVar11 == 0) goto LAB_0219ef10;
      uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar18));
      *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
      bVar16 = 0;
      if (uVar17 == 0) goto LAB_0219ef14;
      piVar20 = (int *)(lVar11 + 4);
      while (piVar20[-1] != 0x378b2f14) {
        piVar20 = piVar20 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          bVar16 = 0;
          goto LAB_0219ef14;
        }
      }
      iVar14 = 0;
      if (*piVar20 != -1) {
        iVar14 = *piVar20;
      }
      *(int *)(puVar7 + 8) = iVar14;
    } while (*puVar22 != 0);
    bVar16 = 0;
  }
LAB_0219ef14:
  if (bVar16 == 0) {
    if (uVar3 != 1) {
      local_5c = 0;
      if (uVar3 != 0xe) {
LAB_0219f030:
        puVar19 = &local_54;
        goto LAB_0219f04c;
      }
      local_5c = 0;
      uVar17 = FUN_02b67a30(&local_5c,(int)cVar4);
      if ((uVar17 & 1) == 0) goto LAB_0219f030;
      local_60 = 1;
      if (local_5c != (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1e335c)) {
        local_60 = 2;
      }
      goto LAB_0219f0e4;
    }
    local_5c = 1;
    puVar19 = &local_5c;
LAB_0219f04c:
    uVar10 = 0;
    goto LAB_0219f0f0;
  }
  if (*puVar22 == 0) {
LAB_0219f074:
    local_5c = 0;
  }
  else {
    cVar15 = *puVar6;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
      }
      else {
        uVar3 = *(uint *)(puVar7 + 8);
        if (-1 < (int)uVar3) {
          if (((byte *)((ulong)uVar3 + (long)puVar22) == (byte *)0x0) ||
             (bVar16 = *(byte *)((ulong)uVar3 + (long)puVar22), local_5c = (uint)bVar16, 4 < bVar16)
             ) goto LAB_0219f074;
          goto LAB_0219f078;
        }
        if (uVar3 != 0xffffffff) goto LAB_0219f074;
      }
      puVar19 = (uint *)(ulong)*puVar22;
      local_5c = 0;
      if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_0219f078;
      lVar11 = 0xc;
      if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar22 + (lVar11 - (long)puVar19);
      if (lVar11 == 0) goto LAB_0219f074;
      uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
      *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
      local_5c = 0;
      if (uVar17 == 0) goto LAB_0219f078;
      piVar20 = (int *)(lVar11 + 4);
      while (piVar20[-1] != 0x378b2f14) {
        piVar20 = piVar20 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          local_5c = 0;
          goto LAB_0219f078;
        }
      }
      iVar14 = 0;
      if (*piVar20 != -1) {
        iVar14 = *piVar20;
      }
      *(int *)(puVar7 + 8) = iVar14;
    } while (*puVar22 != 0);
    local_5c = 0;
  }
LAB_0219f078:
  switch(local_5c) {
  case 1:
    local_54 = 3;
    break;
  case 2:
    local_54 = 1;
LAB_0219f0c4:
    lVar11 = *(long *)puVar5;
    local_5c = 1;
    goto LAB_0219f108;
  case 3:
    local_54 = 2;
    break;
  case 4:
    local_54 = 0;
LAB_0219f100:
    lVar11 = *(long *)puVar5;
    local_5c = 0;
LAB_0219f108:
    if (((uint)(int)cVar4 < 10) && ((&DAT_053fee41)[((long)cVar4 & 0xffffffffU) * 0xba0] != '\0')) {
      FUN_01e2caf8(lVar11 + 0xda0,&DAT_053fe850 + (ulong)(uint)(int)cVar4 * 0xba0,1,&local_5c,0,0);
    }
    goto LAB_0219f14c;
  default:
    if (local_54 == 0) goto LAB_0219f100;
    if (local_54 == 1) goto LAB_0219f0c4;
  }
  puVar19 = &local_54;
LAB_0219f0e4:
  uVar10 = 1;
LAB_0219f0f0:
  FUN_021dafb0(&uStack_34,puVar19,local_58,0,uVar10,0);
LAB_0219f14c:
  FUN_021956e0(param_1);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return;
}

