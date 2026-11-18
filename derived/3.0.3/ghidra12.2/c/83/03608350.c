
void FUN_03608350(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  uVar7 = *(ulong *)(param_1 + -0x30);
  uVar9 = *(long *)(param_1 + 0x10) - uVar7;
  lVar4 = *(long *)(param_1 + -0x2538);
  uVar6 = lVar4 - *(long *)(param_1 + 0x10);
  uVar2 = uVar6;
  if ((uVar9 & 4) != 0) {
    uVar2 = uVar6 + 4;
  }
  lVar1 = (uVar9 & 0x7f) + uVar6;
  if ((uVar9 & 0x80) != 0) {
    lVar1 = lVar1 + 0x80;
  }
  iVar5 = (int)((ulong)lVar1 >> 8);
  uVar3 = *(int *)(param_1 + -0x2538) - (int)uVar7;
  if ((uVar3 >> 7 & 1) == 0) {
    uVar6 = (lVar4 - uVar7 & 0xffffffffffffff80) + uVar7;
    if ((lVar4 - uVar7 & 0x80) != 0) {
      uVar6 = uVar6 - 0x80;
    }
    if ((*(long *)(param_1 + 0x20) == -1) || (uVar7 < uVar6)) {
      *(ulong *)(param_1 + 0x20) = uVar6;
    }
  }
  else {
    iVar5 = iVar5 + 1;
    *(long *)(param_1 + 0x20) = lVar4;
  }
  if ((uVar3 >> 2 & 1) == 0) {
    iVar8 = (int)(uVar2 >> 3);
    uVar6 = *(long *)(param_1 + -0x2538) - *(long *)(param_1 + -0x30);
    uVar2 = (uVar6 & 0xfffffffffffffffc) + *(long *)(param_1 + -0x30);
    if ((uVar6 & 4) != 0) {
      uVar2 = uVar2 - 4;
    }
    if ((*(long *)(param_1 + 0x28) == -1) || (uVar7 < uVar2)) {
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
  }
  else {
    iVar8 = (int)(uVar2 >> 3) + 1;
    *(long *)(param_1 + 0x28) = lVar4;
  }
  *(long *)(param_1 + 0x10) = lVar4;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar5;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar8;
  return;
}

