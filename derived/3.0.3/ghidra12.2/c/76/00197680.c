
void FUN_00197680(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x001976a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}

