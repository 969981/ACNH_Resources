
void FUN_003c3a30(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  iVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 8))();
  if ((0 < *(int *)(param_1 + 0xa0)) && (0 < iVar1 && 0 < iVar2)) {
    iVar3 = 0;
    do {
      iVar4 = 0;
      do {
        iVar5 = 0;
        do {
          FUN_003c3afc(param_1,param_2,iVar3,iVar4,iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xa0));
  }
  return;
}

