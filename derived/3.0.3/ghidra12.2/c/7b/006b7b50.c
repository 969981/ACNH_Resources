
void FUN_006b7b50(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_006b8260();
                    /* WARNING: Could not recover jumptable at 0x006b7b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2);
  return;
}

