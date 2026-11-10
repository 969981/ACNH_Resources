
void FUN_001a6e00(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) != 0) {
      (**(code **)(*plVar1 + 0xf8))(plVar1,*(int *)(param_1 + 0x90),param_1);
    }
    if (param_2 != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xf0))(*(long **)(param_1 + 8),param_2,param_1);
    }
  }
  *(int *)(param_1 + 0x90) = param_2;
  return;
}

