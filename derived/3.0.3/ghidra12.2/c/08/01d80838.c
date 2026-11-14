
undefined8 FUN_01d80838(long *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (int)param_1[1]) {
                    /* WARNING: Could not recover jumptable at 0x01d8085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x60))();
    return uVar1;
  }
  return 0;
}

