
void FUN_00397b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00397b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_1 + 0x20,param_3);
  return;
}

