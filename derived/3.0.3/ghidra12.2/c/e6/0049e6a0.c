
undefined8 FUN_0049e6a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)0x0) {
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0049e6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
  return uVar2;
}

