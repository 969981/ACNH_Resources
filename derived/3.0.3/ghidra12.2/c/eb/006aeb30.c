
void FUN_006aeb30(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_006af0e0();
                    /* WARNING: Could not recover jumptable at 0x006aeb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1,param_2,0);
  return;
}

