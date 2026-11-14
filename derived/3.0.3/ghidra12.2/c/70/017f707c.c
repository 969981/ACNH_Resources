
void FUN_017f707c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_05292338 == 0) {
    iVar4 = 4;
    iVar5 = 4;
  }
  else {
    iVar4 = *(int *)(DAT_05292338 + 0xf64) * 2 + 4;
    iVar5 = *(int *)(DAT_05292338 + 0xf68) * 2 + 4;
  }
  iVar1 = iVar4 + 0x1f;
  iVar2 = iVar5 + 0x1f;
  iVar4 = 0x20 - iVar4;
  iVar5 = 0x20 - iVar5;
  iVar3 = iVar4;
  if (iVar1 <= iVar4) {
    iVar3 = iVar1;
  }
  if (iVar4 <= iVar1) {
    iVar4 = iVar1;
  }
  iVar1 = iVar5;
  if (iVar2 <= iVar5) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar5 <= iVar2) {
    iVar5 = iVar2;
  }
  *(int *)(param_1 + 0x20) = iVar4;
  *(int *)(param_1 + 0x24) = iVar5;
  return;
}

