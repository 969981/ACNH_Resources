
undefined4 FUN_00424dc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == 0) {
    uVar3 = FUN_00426720(PTR_DAT_048607c0,1,1,*param_1,*(undefined4 *)(param_1 + 1));
    *param_1 = uVar3;
    iVar1 = *(int *)(param_1 + 1);
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
  }
  if (iVar1 != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  uVar2 = FUN_00424f20(param_1,param_2,param_3);
  return uVar2;
}

