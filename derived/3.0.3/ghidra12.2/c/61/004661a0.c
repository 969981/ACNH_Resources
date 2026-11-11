
void FUN_004661a0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xa0) = 0;
  iVar2 = FUN_00426fc0(param_2);
  uVar1 = iVar2 + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0xa4) = uVar1;
  *(uint *)(param_1 + 0xa8) = uVar1;
  return;
}

