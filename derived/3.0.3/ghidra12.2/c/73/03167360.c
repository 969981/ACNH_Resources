
int FUN_03167360(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int local_5c;
  undefined1 auStack_58 [3];
  char local_55;
  int local_54;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if ((lVar6 != 0) && (1 < *(uint *)(lVar6 + 0x298))) {
    return *(int *)(lVar6 + 0x444) + *(int *)(lVar6 + 0x2e8) * *(int *)(lVar6 + 0x440);
  }
  iVar11 = -1;
  piVar1 = (int *)(param_1 + 0x1c1d8);
  uVar3 = *(uint *)(param_1 + 0x1c1f0);
  if ((-1 < (int)uVar3) && ((int)uVar3 < *piVar1)) {
    lVar6 = param_1 + 0x1c1c8;
    uVar9 = uVar3 + 1 & 3;
    if (2 < uVar3) {
      uVar3 = uVar3 + 1 & 0xfffffffc;
      do {
        uVar3 = uVar3 - 4;
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
      } while (uVar3 != 0);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      lVar6 = *(long *)(lVar6 + 8);
    }
    iVar11 = -1;
    if ((lVar6 != 0) && (lVar6 = lVar6 - *(int *)(param_1 + 0x1c1dc), lVar6 != 0)) {
      iVar11 = *(int *)(lVar6 + 0x270);
    }
  }
  uVar4 = FUN_01810f30();
  lVar6 = FUN_033d0598(&DAT_0548e140);
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = 0x28c;
  if ((uVar4 & 1) == 0) {
    lVar7 = 0x1e4;
  }
  lVar6 = lVar6 + lVar7;
  if (iVar11 == 0x6f) {
    return *(int *)(lVar6 + 0x9c);
  }
  local_5c = (int)*(char *)(lVar6 + 0xa6);
  if (DAT_056fc1c0 == local_5c) {
    lVar7 = 0;
  }
  else if (DAT_056fc230 == local_5c) {
    lVar7 = 1;
  }
  else if (DAT_056fc2a0 == local_5c) {
    lVar7 = 2;
  }
  else if (DAT_056fc310 == local_5c) {
    lVar7 = 3;
  }
  else if (DAT_056fc380 == local_5c) {
    lVar7 = 4;
  }
  else if (DAT_056fc3f0 == local_5c) {
    lVar7 = 5;
  }
  else if (DAT_056fc460 == local_5c) {
    lVar7 = 6;
  }
  else if (DAT_056fc4d0 == local_5c) {
    lVar7 = 7;
  }
  else if (DAT_056fc540 == local_5c) {
    lVar7 = 8;
  }
  else if (DAT_056fc5b0 == local_5c) {
    lVar7 = 9;
  }
  else if (DAT_056fc620 == local_5c) {
    lVar7 = 10;
  }
  else if (DAT_056fc690 == local_5c) {
    lVar7 = 0xb;
  }
  else {
    lVar7 = 0xc;
    if (DAT_056fc700 != local_5c) {
      lVar7 = 0;
    }
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(lVar6 + 0x34 + lVar7 * 8);
  if (*(long *)puVar2 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar12 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_5c = (int)*(char *)(lVar6 + 0xa6);
  if (DAT_056fc1c0 == local_5c) {
    lVar7 = 0;
  }
  else if (DAT_056fc230 == local_5c) {
    lVar7 = 1;
  }
  else if (DAT_056fc2a0 == local_5c) {
    lVar7 = 2;
  }
  else if (DAT_056fc310 == local_5c) {
    lVar7 = 3;
  }
  else if (DAT_056fc380 == local_5c) {
    lVar7 = 4;
  }
  else if (DAT_056fc3f0 == local_5c) {
    lVar7 = 5;
  }
  else if (DAT_056fc460 == local_5c) {
    lVar7 = 6;
  }
  else if (DAT_056fc4d0 == local_5c) {
    lVar7 = 7;
  }
  else if (DAT_056fc540 == local_5c) {
    lVar7 = 8;
  }
  else if (DAT_056fc5b0 == local_5c) {
    lVar7 = 9;
  }
  else if (DAT_056fc620 == local_5c) {
    lVar7 = 10;
  }
  else if (DAT_056fc690 == local_5c) {
    lVar7 = 0xb;
  }
  else {
    lVar7 = 0xc;
    if (DAT_056fc700 != local_5c) {
      lVar7 = 0;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1c1f0);
  iVar11 = *piVar1;
  if ((-1 < (int)uVar3) && ((int)uVar3 < iVar11)) {
    lVar12 = param_1 + 0x1c1c8;
    uVar9 = uVar3 + 1 & 3;
    if (2 < uVar3) {
      uVar10 = uVar3 + 1 & 0xfffffffc;
      do {
        uVar10 = uVar10 - 4;
        lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
      } while (uVar10 != 0);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      lVar12 = *(long *)(lVar12 + 8);
    }
    if (((lVar12 != 0) && (lVar12 = lVar12 - *(int *)(param_1 + 0x1c1dc), lVar12 != 0)) &&
       (*(int *)(lVar12 + 0x270) == 0x6f)) {
      iVar8 = **(int **)(param_1 + 0x1c308);
      goto joined_r0x03167850;
    }
  }
  if (*(long **)(param_1 + 0x1c2e8) == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    piVar5 = (int *)(**(code **)(**(long **)(param_1 + 0x1c2e8) + 0x18))();
    iVar8 = *piVar5;
    uVar3 = *(uint *)(param_1 + 0x1c1f0);
    iVar11 = *piVar1;
  }
joined_r0x03167850:
  uVar9 = 0;
  if ((-1 < (int)uVar3) && (uVar9 = 0, (int)uVar3 < iVar11)) {
    lVar12 = param_1 + 0x1c1c8;
    uVar9 = uVar3 + 1 & 3;
    if (2 < uVar3) {
      uVar3 = uVar3 + 1 & 0xfffffffc;
      do {
        uVar3 = uVar3 - 4;
        lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
      } while (uVar3 != 0);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      lVar12 = *(long *)(lVar12 + 8);
    }
    uVar9 = 0;
    if ((lVar12 != 0) && (lVar12 = lVar12 - *(int *)(param_1 + 0x1c1dc), lVar12 != 0)) {
      uVar9 = (uint)((*(uint *)(lVar12 + 0x270) & 0xfffffffe) == 8);
    }
  }
  if (0 < (int)(uVar9 + iVar8)) {
    lVar6 = lVar6 + 0x34 + lVar7 * 8;
    iVar11 = 0;
    do {
      FUN_0315e2f0(&local_5c,param_1,iVar11);
      uVar4 = FUN_0277d7b4(auStack_58,lVar6);
      if ((((uVar4 & 1) != 0) && (local_55 == *(char *)(lVar6 + 3))) &&
         (local_54 == *(int *)(lVar6 + 4))) {
        return iVar11;
      }
      iVar11 = iVar11 + 1;
    } while (uVar9 + iVar8 != iVar11);
  }
  return 0;
}

