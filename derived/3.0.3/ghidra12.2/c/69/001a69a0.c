
void FUN_001a69a0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x88);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (param_1 + 0xd0 != param_2) {
    FUN_001db790(param_2,*(undefined8 *)(param_1 + 0xd8));
  }
                    /* WARNING: Could not recover jumptable at 0x001a69f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

