
void FUN_006fe4a0(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x28); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}

