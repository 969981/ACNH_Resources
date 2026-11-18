
int FUN_035acde0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x20) < 1 || iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    iVar5 = 0;
    iVar2 = 0;
    do {
      uVar6 = uVar3;
      uVar7 = uVar4;
      iVar8 = iVar1;
      do {
        if ((*(uint *)(*(long *)(param_2 + 0x10) + (long)((int)uVar6 >> 5) * 4) >>
             (ulong)(uVar6 & 0x1f) & 1) != 0) {
          iVar2 = (~*(uint *)(*(long *)(param_3 + 0x10) + (long)((int)uVar7 >> 5) * 4) >>
                   (ulong)(uVar7 & 0x1f) & 1) + iVar2;
        }
        iVar8 = iVar8 + -1;
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (iVar8 != 0);
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 + *(int *)(param_3 + 0x1c);
      uVar3 = uVar3 + iVar1;
    } while (iVar5 != *(int *)(param_2 + 0x20));
  }
  return iVar2;
}

