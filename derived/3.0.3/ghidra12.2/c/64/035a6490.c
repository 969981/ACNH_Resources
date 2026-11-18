
void FUN_035a6490(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x24) + 1;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar1 != iVar3) {
    iVar2 = *(int *)(param_2 + 0x10);
    iVar4 = iVar2;
    do {
      FUN_035a4360(param_1,iVar4,iVar3,0);
      if (iVar4 < *(int *)(param_2 + 0x20)) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar3 = iVar3 + 1;
        iVar4 = *(int *)(param_2 + 0x10);
      }
    } while (iVar2 != iVar4 || iVar1 != iVar3);
  }
  return;
}

