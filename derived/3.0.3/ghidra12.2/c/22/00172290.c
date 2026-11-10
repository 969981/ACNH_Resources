
undefined8 FUN_00172290(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00172b58(param_1,*(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_0016cb78(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(int *)(param_1 + 0xbc) < 1) || (iVar1 = FUN_00172b3c(param_1), iVar1 == 0)) ||
     (uVar2 = FUN_00172af0(param_1,4), -0x385 < (int)uVar2)) {
    uVar2 = 0;
  }
  return uVar2;
}

