
undefined4 FUN_02ce8928(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 < 0) {
    return 6;
  }
  piVar2 = (int *)(**(code **)(*(long *)(param_1 + 0x3a9b0) + 0x18))();
  iVar1 = *piVar2;
  if (*(int *)(param_1 + 0x753c0) != -1) {
    iVar1 = iVar1 + 1;
  }
  if (param_2 < iVar1) {
    uVar3 = 3;
    if (*(int *)(param_1 + 0x753c0) != param_2) {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 6;
  }
  return uVar3;
}

