
undefined8 FUN_00161dbc(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00161dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0x18))();
  return uVar1;
}

