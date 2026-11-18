
void FUN_035a70c8(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  if ((param_3 & 0xfffffffe) == 2) {
    uVar2 = *param_2 + 1;
    uVar1 = *param_1;
    if (uVar2 < uVar1) {
      return;
    }
    iVar6 = *(int *)(param_1 + 6);
    if ((((uint)uVar1 + iVar6) - 1 & 0xffff) < (uint)uVar2) {
      return;
    }
    uVar8 = (uint)param_2[1];
  }
  else {
    if (1 < param_3) {
      return;
    }
    uVar2 = *param_2;
    uVar1 = *param_1;
    if (uVar2 < uVar1) {
      return;
    }
    iVar6 = *(int *)(param_1 + 6);
    if ((((uint)uVar1 + iVar6) - 1 & 0xffff) < (uint)uVar2) {
      return;
    }
    uVar8 = param_2[1] + 1 & 0xffff;
  }
  uVar3 = param_1[1];
  if (uVar3 <= uVar8) {
    if ((((uVar8 <= (((uint)uVar3 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
         (iVar4 = (uint)uVar2 - (uint)uVar1, -1 < iVar4)) && (iVar4 < iVar6)) &&
       ((iVar5 = uVar8 - uVar3, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8))))) {
      if ((*(long *)(param_1 + 0x10) != 0) && ((param_3 | 2) == 2)) {
        lVar7 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar6) * 0x28;
        *(byte *)(lVar7 + 5) = *(byte *)(lVar7 + 5) | 0x10;
      }
    }
  }
  return;
}

