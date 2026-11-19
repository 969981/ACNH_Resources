
undefined8 FUN_03865104(long param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  
  if (param_2 < *(int *)(param_1 + 0x3d4)) {
    iVar3 = *(int *)(param_1 + 0x2e8);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = param_2 / iVar3;
    }
    iVar7 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
    if ((*(byte *)(param_1 + 1000) >> 1 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 0x434);
      uVar2 = 0;
      if ((int)uVar4 < iVar7) {
        uVar2 = ~uVar4;
      }
      if (iVar7 < 0) {
        uVar2 = uVar4 + 1;
      }
      iVar7 = uVar2 + iVar7;
    }
    uVar2 = (param_2 - iVar5 * iVar3) + (iVar5 - iVar7) * iVar3;
    uVar4 = *(uint *)(param_1 + 0x208);
    bVar6 = (int)uVar2 < 0;
    bVar1 = (int)uVar4 <= (int)uVar2;
    if (bVar6 || bVar1) {
      uVar2 = 0xffffffff;
    }
    if (((((!bVar6 && !bVar1) && uVar4 != uVar2) && ((bVar6 || bVar1) || (int)uVar2 <= (int)uVar4))
        && uVar2 <= uVar4) && (((bVar6 || bVar1) || (int)uVar4 <= (int)uVar2) || uVar4 != uVar2)) {
      return *(undefined8 *)(*(long *)(param_1 + 0x210) + (ulong)uVar2 * 8);
    }
  }
  return 0;
}

