
void FUN_0044e160(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00426e00(param_2,0x80000);
  if ((plVar1 == (long *)0x0) || (plVar1 = (long *)*plVar1, plVar1 == (long *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0044e1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_2);
  return;
}

