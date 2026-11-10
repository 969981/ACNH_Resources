
void FUN_00192c88(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00192c88(param_1,*param_2);
  FUN_00192c88(param_1,param_2[1]);
  param_2 = param_2 + -2;
  if ((code *)*param_2 == (code *)0x0) {
    free(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00192cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(param_2);
  return;
}

