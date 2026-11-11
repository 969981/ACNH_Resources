
undefined8 * FUN_00422840(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar3 = *param_2;
    uVar2 = *param_1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607c0,iVar1,1,uVar2,*(undefined4 *)(param_1 + 1));
      *param_1 = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1);
    *(int *)(param_1 + 1) = iVar1;
  }
  return param_1;
}

