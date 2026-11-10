
long * FUN_0033c2c0(long param_1,long *param_2)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x1b0) == 1) {
    plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,8,0x80);
    *plVar1 = (long)&PTR_LAB_0484b778;
    return plVar1;
  }
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x28,0x80);
  *plVar1 = (long)(PTR_DAT_04bcee98 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar1 + 1),false,0);
  return plVar1;
}

