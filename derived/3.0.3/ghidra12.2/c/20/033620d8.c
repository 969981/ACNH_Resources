
undefined4 FUN_033620d8(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x590) + 1;
  *(int *)(param_1 + 0x590) = iVar1;
  if ((iVar1 == 0x1e) && (plVar2 = *(long **)(param_1 + 0x5a0), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
  }
  return param_2;
}

