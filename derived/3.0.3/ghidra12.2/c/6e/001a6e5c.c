
void FUN_001a6e5c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*(long *)(param_1 + 0x98) != 0) {
      (**(code **)(*plVar1 + 0xe8))(plVar1,*(long *)(param_1 + 0x98),param_1);
    }
    if (param_2 != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xe0))(*(long **)(param_1 + 8),param_2,param_1);
    }
  }
  *(long *)(param_1 + 0x98) = param_2;
  return;
}

