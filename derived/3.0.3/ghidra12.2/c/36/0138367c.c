
void FUN_0138367c(long param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  if ((*(uint *)(param_1 + 8) <= (uint)(int)param_2) ||
     (*(uint *)(param_1 + 0xc) <= (uint)(int)param_3)) {
    return;
  }
  uVar4 = (int)param_2 + *(uint *)(param_1 + 8) * (int)param_3;
  iVar8 = *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x1c);
  lVar7 = *(long *)(param_1 + 0x10);
  iVar9 = iVar6 + 1;
  *(int *)(param_1 + 0x1c) = iVar9;
  if (((int)uVar4 < 0) || ((lVar7 == 0 || (iVar8 <= (int)uVar4)))) {
    *(int *)(param_1 + 0x1c) = iVar6;
  }
  else {
    uVar3 = *(uint *)(lVar7 + (ulong)(uVar4 >> 5) * 4);
    *(int *)(param_1 + 0x1c) = iVar6;
    if ((uVar3 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    iVar1 = *(int *)(param_1 + 0x2c) + iVar1;
    iVar9 = 0;
    if (iVar2 <= iVar1) {
      iVar9 = iVar2;
    }
    *(uint *)(*(long *)(param_1 + 0x20) + (long)(iVar1 - iVar9) * 4) = CONCAT22(param_3,param_2);
    lVar7 = *(long *)(param_1 + 0x10);
    iVar8 = *(int *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar9 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x1c) = iVar9;
  if (((-1 < (int)uVar4) && (lVar7 != 0)) && ((int)uVar4 < iVar8)) {
    lVar5 = (ulong)(uVar4 >> 5) * 4;
    *(uint *)(lVar7 + lVar5) = *(uint *)(lVar7 + lVar5) | 1 << (ulong)(uVar4 & 0x1f);
    iVar6 = *(int *)(param_1 + 0x1c) + -1;
  }
  *(int *)(param_1 + 0x1c) = iVar6;
  return;
}

