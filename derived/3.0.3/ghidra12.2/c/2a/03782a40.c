
bool FUN_03782a40(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(DAT_05abff60 + 0x50);
  iVar3 = *(int *)(DAT_05abff60 + 0x60);
  iVar4 = *(int *)(DAT_05abff60 + 100);
  iVar5 = *(int *)(DAT_05abff60 + 0x2c);
  iVar1 = iVar7;
  if (iVar3 <= iVar7) {
    iVar1 = iVar3;
  }
  if (iVar7 <= iVar3) {
    iVar7 = iVar3;
  }
  iVar3 = iVar5;
  if (iVar4 <= iVar5) {
    iVar3 = iVar4;
  }
  iVar2 = iVar5;
  if (iVar5 <= iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (((iVar6 < *(int *)(DAT_05abff60 + 0x28)) ||
      (*(int *)(DAT_05abff60 + 0x38) < iVar4 || *(int *)(param_1 + 0x14) < iVar5)) ||
     (*(int *)(DAT_05abff60 + 0x3c) < *(int *)(param_1 + 0x24))) {
    iVar5 = *(int *)(param_1 + 0x14);
    iVar8 = *(int *)(param_1 + 0x24);
    return ((iVar1 <= iVar6 && iVar4 <= iVar7) && iVar3 <= iVar5) && iVar8 == iVar2 ||
           (((iVar1 <= iVar6 && iVar4 <= iVar7) && iVar3 <= iVar5) && iVar8 - iVar2 < 0) !=
           (((iVar1 <= iVar6 && iVar4 <= iVar7) && iVar3 <= iVar5) && SBORROW4(iVar8,iVar2));
  }
  return true;
}

