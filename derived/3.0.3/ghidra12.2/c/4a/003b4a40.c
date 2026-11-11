
void FUN_003b4a40(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  *(int *)(param_1 + 0x24) = param_2;
  iVar1 = 0;
  if ((uVar2 & 1) != 0) {
    iVar1 = 0xc;
  }
  if ((uVar2 & 2) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  if ((uVar2 & 4) != 0) {
    iVar1 = iVar1 + 8;
  }
  *(long *)(param_1 + 0x30) = (long)iVar1 * (long)param_2;
  return;
}

