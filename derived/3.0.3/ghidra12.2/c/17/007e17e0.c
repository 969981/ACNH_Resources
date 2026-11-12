
void FUN_007e17e0(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_04cce818 == 0) {
    return;
  }
  if (*(int *)(DAT_04cce818 + 8) == 0) {
    bVar2 = 0;
    bVar1 = false;
  }
  else if (**(long **)(DAT_04cce818 + 0x10) == 0) {
    bVar1 = false;
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(**(long **)(DAT_04cce818 + 0x10) + 0x38);
    bVar1 = (bVar2 & 0x20) == 0;
    bVar2 = bVar2 >> 6 & 1;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar4 < iVar5) {
LAB_007e184c:
    iVar3 = iVar5;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar3 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar3 + -1;
    *(int *)(param_1 + 0x18) = iVar4 + 1;
    if (iVar3 <= iVar5) {
      iVar5 = 0;
    }
    *(bool *)(*(long *)(param_1 + 8) + (long)((iVar3 + -1) - iVar5)) = bVar1;
  }
  else {
    if (0 < iVar4) {
      *(int *)(param_1 + 0x18) = iVar4 + -1;
      iVar4 = iVar4 + -1;
    }
    if (iVar4 < iVar5) goto LAB_007e184c;
  }
  iVar5 = 0;
  if (bVar1) {
    iVar5 = *(int *)(param_1 + 0x728) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x740);
  iVar4 = *(int *)(param_1 + 0x738);
  *(int *)(param_1 + 0x728) = iVar5;
  if (iVar4 <= iVar3) {
    if (0 < iVar3) {
      *(int *)(param_1 + 0x740) = iVar3 + -1;
      iVar3 = iVar3 + -1;
    }
    if (iVar4 <= iVar3) goto LAB_007e18e4;
  }
  *(int *)(param_1 + 0x740) = iVar3 + 1;
  iVar5 = iVar4;
  if (0 < *(int *)(param_1 + 0x73c)) {
    iVar5 = *(int *)(param_1 + 0x73c);
  }
  if (iVar5 <= iVar4) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x73c) = iVar5 + -1;
  *(byte *)(*(long *)(param_1 + 0x730) + (long)((iVar5 + -1) - iVar4)) = bVar2;
  iVar5 = *(int *)(param_1 + 0x728);
LAB_007e18e4:
  iVar4 = 0;
  if (bVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0xe50) + 1;
  }
  *(int *)(param_1 + 0xe50) = iVar4;
  *(bool *)(param_1 + 0xe58) =
       *(int *)(param_1 + 0x72c) <= iVar5 || *(int *)(param_1 + 0xe54) <= iVar4;
  return;
}

