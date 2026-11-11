
undefined8 FUN_0044e270(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)FUN_00426e00(param_1,0x80000);
  if ((plVar1 == (long *)0x0) || (plVar1 = (long *)*plVar1, plVar1 == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0044e2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return uVar2;
}

