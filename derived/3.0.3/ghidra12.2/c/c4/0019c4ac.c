
void FUN_0019c4ac(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x78);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x0019c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

