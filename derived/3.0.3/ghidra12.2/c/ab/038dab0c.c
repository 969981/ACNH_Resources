
undefined8 FUN_038dab0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x40))();
  if (iVar1 < 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x038dab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,iVar1,param_3);
  return uVar2;
}

