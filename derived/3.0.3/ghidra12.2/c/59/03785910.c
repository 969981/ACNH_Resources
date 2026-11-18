
void FUN_03785910(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar7 = *(uint *)((long)param_1 + 0xc);
  iVar4 = *(int *)(param_2 + 8);
  iVar6 = *(int *)(param_2 + 0xc);
  uVar8 = iVar4 + ~uVar5;
  if (((uVar8 < 0x19) && (iVar9 = iVar6 + ~uVar7, -1 < iVar9)) && (iVar9 < 0x15)) {
    lVar10 = *param_1;
    uVar3 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar9;
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    uVar1 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar3 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar3 << 0x20) >> 0x25) * 4) =
           uVar2 | uVar1;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      uVar5 = *(uint *)(param_1 + 1);
      uVar7 = *(uint *)((long)param_1 + 0xc);
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar8 = iVar4 + ~uVar5;
    }
  }
  iVar9 = iVar6 - uVar7;
  if (((uVar8 < 0x19) && (-1 < iVar9)) && (iVar9 < 0x15)) {
    lVar10 = *param_1;
    uVar8 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar9;
    uVar2 = 1 << (ulong)(uVar8 & 0x1f);
    uVar1 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar8 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
           uVar2 | uVar1;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar5 = *(uint *)(param_1 + 1);
      uVar7 = *(uint *)((long)param_1 + 0xc);
      iVar9 = iVar6 - uVar7;
    }
    uVar8 = iVar4 + ~uVar5;
  }
  if (((uVar8 < 0x19) && (iVar9 = iVar9 + 1, -1 < iVar9)) && (iVar9 < 0x15)) {
    lVar10 = *param_1;
    uVar8 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar9;
    uVar2 = 1 << (ulong)(uVar8 & 0x1f);
    uVar1 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar8 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
           uVar2 | uVar1;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar5 = *(uint *)(param_1 + 1);
      uVar7 = *(uint *)((long)param_1 + 0xc);
    }
  }
  uVar8 = iVar4 - uVar5;
  if (((uVar8 < 0x19) && (iVar9 = iVar6 + ~uVar7, -1 < iVar9)) && (iVar9 < 0x15)) {
    lVar10 = *param_1;
    uVar3 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar9;
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    uVar1 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar3 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar3 << 0x20) >> 0x25) * 4) =
           uVar2 | uVar1;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar5 = *(uint *)(param_1 + 1);
      uVar7 = *(uint *)((long)param_1 + 0xc);
      uVar8 = iVar4 - uVar5;
    }
  }
  iVar9 = iVar6 - uVar7;
  if (((uVar8 < 0x19) && (-1 < iVar9)) && (iVar9 < 0x15)) {
    lVar10 = *param_1;
    uVar8 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar9;
    uVar2 = 1 << (ulong)(uVar8 & 0x1f);
    uVar1 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar8 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
           uVar2 | uVar1;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar5 = *(uint *)(param_1 + 1);
      uVar7 = *(uint *)((long)param_1 + 0xc);
      iVar9 = iVar6 - uVar7;
    }
    uVar8 = iVar4 - uVar5;
  }
  if (((uVar8 < 0x19) && (iVar9 = iVar9 + 1, -1 < iVar9)) && (iVar9 < 0x15)) {
    lVar10 = *param_1;
    uVar8 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar9;
    uVar2 = 1 << (ulong)(uVar8 & 0x1f);
    uVar1 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar8 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
           uVar2 | uVar1;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar5 = *(uint *)(param_1 + 1);
      uVar7 = *(uint *)((long)param_1 + 0xc);
    }
  }
  uVar8 = (iVar4 - uVar5) + 1;
  if (((uVar8 < 0x19) && (iVar9 = iVar6 + ~uVar7, -1 < iVar9)) && (iVar9 < 0x15)) {
    lVar10 = *param_1;
    uVar8 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar9;
    uVar2 = 1 << (ulong)(uVar8 & 0x1f);
    uVar1 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar8 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
           uVar2 | uVar1;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      uVar5 = *(uint *)(param_1 + 1);
      uVar7 = *(uint *)((long)param_1 + 0xc);
    }
    uVar8 = (iVar4 - uVar5) + 1;
  }
  iVar6 = iVar6 - uVar7;
  if (((uVar8 < 0x19) && (-1 < iVar6)) && (iVar6 < 0x15)) {
    lVar10 = *param_1;
    uVar8 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar6;
    uVar1 = 1 << (ulong)(uVar8 & 0x1f);
    uVar7 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar8 >> 5) * 4);
    if ((uVar1 & uVar7) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
           uVar1 | uVar7;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar4 = *(int *)(param_2 + 8);
      uVar5 = *(uint *)(param_1 + 1);
      iVar6 = *(int *)(param_2 + 0xc) - *(int *)((long)param_1 + 0xc);
    }
    uVar8 = (iVar4 - uVar5) + 1;
  }
  if (((uVar8 < 0x19) && (iVar6 = iVar6 + 1, -1 < iVar6)) && (iVar6 < 0x15)) {
    lVar10 = *param_1;
    uVar8 = uVar8 + *(int *)(lVar10 + 0x1c) * iVar6;
    uVar7 = 1 << (ulong)(uVar8 & 0x1f);
    uVar5 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)((int)uVar8 >> 5) * 4);
    if ((uVar7 & uVar5) == 0) {
      *(uint *)(*(long *)(lVar10 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
           uVar7 | uVar5;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      return;
    }
  }
  return;
}

