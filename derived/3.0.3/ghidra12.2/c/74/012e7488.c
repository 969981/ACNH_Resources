
undefined2 * FUN_012e7488(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    iVar2 = *(int *)(param_2 + 8);
    lVar1 = lVar7 + 0x130 + (ulong)*(uint *)(lVar7 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar7 + 0x198)) {
      lVar1 = lVar7 + 0x130;
    }
    iVar3 = *(int *)(lVar1 + 0x28);
    if (iVar3 <= iVar2 && iVar2 <= *(int *)(lVar1 + 8) + iVar3 + -1) {
      iVar4 = *(int *)(lVar1 + 0x2c);
      iVar5 = *(int *)(param_2 + 0xc);
      if ((iVar4 <= iVar5 && iVar5 <= *(int *)(lVar1 + 0xc) + iVar4 + -1) &&
         (uVar6 = (iVar5 - iVar4) + (iVar2 - iVar3) * *(int *)(lVar1 + 0xc),
         uVar6 < *(uint *)(lVar1 + 0x10))) {
        return (undefined2 *)(*(long *)(lVar1 + 0x18) + (long)(int)uVar6 * 8);
      }
    }
  }
  return &DAT_05586008;
}

