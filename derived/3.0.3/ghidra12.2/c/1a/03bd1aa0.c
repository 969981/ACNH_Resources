
void FUN_03bd1aa0(long param_1,long param_2,long *param_3,long *param_4,uint param_5,
                 undefined8 *param_6)

{
  int *piVar1;
  size_t __size;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined *local_50;
  char *pcStack_48;
  
  uVar17 = (ulong)param_5;
  (**(code **)(*param_3 + 0x78))(param_3);
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x78))(param_4);
  }
  FUN_03beb5d0(param_1,param_3,param_4,uVar17);
  *(long *)(param_1 + 0x990) = param_2;
  uVar4 = *(uint *)(param_2 + 0x1b0);
  if ((int)uVar4 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
      piVar14 = *(int **)(param_2 + 0x16c8);
      do {
        iVar10 = *piVar14;
        uVar11 = uVar11 + 2;
        piVar1 = piVar14 + 0x12;
        piVar14 = piVar14 + 0x24;
        iVar9 = *piVar1 + iVar10 + iVar9;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      iVar9 = (*(int **)(param_2 + 0x16c8))[uVar11 * 0x12] + iVar9;
    }
  }
  *(int *)(param_1 + 0x9b8) = iVar9;
  uVar4 = *(uint *)(param_2 + 0x1b0);
  if ((int)uVar4 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
      piVar14 = (int *)(*(long *)(param_2 + 0x16c8) + 0x4c);
      do {
        uVar11 = uVar11 + 2;
        iVar9 = *piVar14 + piVar14[-0x12] + iVar9;
        piVar14 = piVar14 + 0x24;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      iVar9 = *(int *)(*(long *)(param_2 + 0x16c8) + uVar11 * 0x48 + 4) + iVar9;
    }
  }
  *(int *)(param_1 + 0x9bc) = iVar9;
  uVar4 = *(uint *)(param_2 + 0x1b0);
  if ((int)uVar4 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
      piVar14 = (int *)(*(long *)(param_2 + 0x16c8) + 0x58);
      do {
        uVar11 = uVar11 + 2;
        iVar9 = *piVar14 + piVar14[-0x12] + iVar9;
        piVar14 = piVar14 + 0x24;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      iVar9 = *(int *)(*(long *)(param_2 + 0x16c8) + uVar11 * 0x48 + 0x10) + iVar9;
    }
  }
  *(int *)(param_1 + 0x9c0) = iVar9;
  uVar4 = *(uint *)(param_2 + 0x1b0);
  if ((int)uVar4 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
      piVar14 = (int *)(*(long *)(param_2 + 0x16c8) + 0x5c);
      do {
        uVar11 = uVar11 + 2;
        iVar9 = *piVar14 + piVar14[-0x12] + iVar9;
        piVar14 = piVar14 + 0x24;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      iVar9 = *(int *)(*(long *)(param_2 + 0x16c8) + uVar11 * 0x48 + 0x14) + iVar9;
    }
  }
  *(int *)(param_1 + 0x9c4) = iVar9;
  uVar4 = *(uint *)(param_2 + 0x1b0);
  if ((int)uVar4 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
      piVar14 = (int *)(*(long *)(param_2 + 0x16c8) + 0x60);
      do {
        uVar11 = uVar11 + 2;
        iVar9 = *piVar14 + piVar14[-0x12] + iVar9;
        piVar14 = piVar14 + 0x24;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      iVar9 = *(int *)(*(long *)(param_2 + 0x16c8) + uVar11 * 0x48 + 0x18) + iVar9;
    }
  }
  *(int *)(param_1 + 0x9c8) = iVar9;
  uVar4 = *(uint *)(param_2 + 0x1b0);
  if ((int)uVar4 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
      piVar14 = (int *)(*(long *)(param_2 + 0x16c8) + 0x70);
      do {
        uVar11 = uVar11 + 2;
        iVar9 = *piVar14 + piVar14[-0x12] + iVar9;
        piVar14 = piVar14 + 0x24;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      iVar9 = *(int *)(*(long *)(param_2 + 0x16c8) + uVar11 * 0x48 + 0x28) + iVar9;
    }
  }
  *(int *)(param_1 + 0x9cc) = iVar9;
  uVar4 = *(uint *)(param_2 + 0x1b0);
  if ((int)uVar4 < 1) {
    iVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
      piVar14 = (int *)(*(long *)(param_2 + 0x16c8) + 0x74);
      do {
        uVar11 = uVar11 + 2;
        iVar9 = *piVar14 + piVar14[-0x12] + iVar9;
        piVar14 = piVar14 + 0x24;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      iVar9 = *(int *)(*(long *)(param_2 + 0x16c8) + uVar11 * 0x48 + 0x2c) + iVar9;
    }
  }
  *(int *)(param_1 + 0x9d0) = iVar9;
  *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_2 + 0x2ba0);
  *(undefined4 *)(param_1 + 0x9d8) = *(undefined4 *)(param_2 + 0x2ba4);
  *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(param_2 + 0x2ba8);
  *(undefined4 *)(param_1 + 0x9e0) = *(undefined4 *)(param_2 + 0x2bac);
  *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(param_2 + 0x2bb0);
  *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(param_2 + 0x2bb4);
  *(undefined4 *)(param_1 + 0x9ec) = *(undefined4 *)(param_2 + 0x2bbc);
  *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_2 + 0x2bb8);
  *(undefined4 *)(param_1 + 0x9f4) = *(undefined4 *)(param_2 + 0x2bc0);
  *(undefined4 *)(param_1 + 0x9fc) = *(undefined4 *)(param_2 + 0x2bc4);
  *(undefined4 *)(param_1 + 0xa00) = *(undefined4 *)(param_2 + 0x2bd0);
  *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(param_2 + 0x2bc8);
  *(undefined4 *)(param_1 + 0xa08) = *(undefined4 *)(param_2 + 0x2bcc);
  uVar5 = (**(code **)(**(long **)(param_2 + 0x1b00) + 0x70))();
  *(undefined4 *)(param_1 + 0xa0c) = uVar5;
  uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x990) + 0x1b00) + 0x78))();
  lVar8 = *(long *)(param_1 + 0x990);
  *(undefined4 *)(param_1 + 0xa10) = uVar5;
  iVar9 = *(int *)(*(long *)(lVar8 + 0x1c8) + 0x38);
  *(int *)(param_1 + 0xa14) = iVar9;
  uVar4 = *(uint *)PTR_DAT_04bd0f28;
  if (uVar4 == 0) {
    iVar10 = 0;
  }
  else {
    lVar12 = 0;
    lVar13 = 0;
    iVar10 = 0;
    do {
      if (lVar13 < *(int *)(lVar8 + 0x1c0)) {
        lVar3 = *(long *)(lVar8 + 0x1c8) + lVar12;
        iVar15 = (int)*(undefined8 *)(lVar3 + 0x18);
        iVar16 = *(int *)(lVar3 + (long)*(int *)(lVar3 + 0x10) * 8 + 0x20);
      }
      else {
        iVar16 = 0;
        iVar15 = 0;
      }
      if (iVar10 <= iVar16) {
        iVar10 = iVar16;
      }
      if (*(int *)(param_1 + 0x9f8) < iVar15) {
        *(int *)(param_1 + 0x9f8) = iVar15;
      }
      lVar12 = lVar12 + 0x7d8;
      lVar13 = lVar13 + 1;
    } while ((ulong)uVar4 * 0x7d8 != lVar12);
  }
  *(int *)(param_1 + 0xa18) = iVar9 - iVar10;
  puVar2 = PTR_DAT_04bb2698;
  if (param_6 == (undefined8 *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      param_6 = malloc(0x18);
    }
    else {
      param_6 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x18,8);
    }
    *param_6 = &PTR_LAB_04b7b4e8;
    param_6[1] = 0;
    param_6[2] = 0;
    *(undefined1 *)(param_1 + 0x64e31) = 1;
  }
  __size = uVar17 * 0x1a8 + 8;
  DAT_05aec200 = param_6;
  if (*(long *)puVar2 == 0) {
    puVar6 = malloc(__size);
  }
  else {
    puVar6 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
  }
  *puVar6 = uVar17;
  if (param_5 != 0) {
    puVar2 = PTR_DAT_04bd2390 + 0x10;
    lVar8 = 0;
    do {
      lVar12 = lVar8 + 0x1a8;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x10) = 0;
      lVar13 = (long)puVar6 + lVar8 + 0x68;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x18) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x20) = 0;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x28) = 0;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x40) = 0xffffffff;
      *(undefined1 *)((long)puVar6 + lVar8 + 0x58) = 1;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x60) = 0;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x94) = 8;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x98) = 0x3f800000;
      *(undefined1 *)((long)puVar6 + lVar8 + 0x9c) = 0xff;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x78) = 0;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x7c) = 8;
      *(undefined4 *)((long)puVar6 + lVar8 + 0x90) = 0;
      *(undefined **)((long)puVar6 + lVar8 + 8) = puVar2;
      *(long *)((long)puVar6 + lVar8 + 0x68) = lVar13;
      *(long *)((long)puVar6 + lVar8 + 0x70) = lVar13;
      lVar13 = (long)puVar6 + lVar8 + 0x80;
      *(long *)((long)puVar6 + lVar8 + 0x80) = lVar13;
      *(long *)((long)puVar6 + lVar8 + 0x88) = lVar13;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x154) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x15c) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x164) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x16c) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x30) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x38) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x48) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x50) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0xa0) = 0;
      *(undefined8 *)((long)puVar6 + lVar8 + 0xa8) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x18c) = 0;
      lVar8 = lVar12;
    } while ((ulong)param_5 * 0x1a8 != lVar12);
  }
  puVar2 = PTR_DAT_04bb2020;
  lVar8 = *(long *)PTR_DAT_04bd23b8;
  *(ulong **)(param_1 + 0x998) = puVar6 + 1;
  pcStack_48 = "xlinkContainer";
  local_50 = puVar2 + 0x10;
  uVar7 = FUN_038cca9c(uVar17 * lVar8 * 2 + 0x100,&local_50,lVar8,4,param_3,1);
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  pcStack_48 = "xlinkAssetExecutor";
  local_50 = puVar2 + 0x10;
  uVar7 = FUN_038cca9c(uVar17 * 0x118 + 0x100,&local_50,0x118,4,param_3,1);
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  (**(code **)(*param_3 + 0x78))(param_3);
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x78))(param_4);
  }
  return;
}

