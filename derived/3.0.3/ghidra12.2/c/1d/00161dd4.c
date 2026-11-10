
void FUN_00161dd4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  plVar1 = *(long **)(lVar2 + 0x1a0);
  while (plVar1 != (long *)0x0) {
    *(long *)(lVar2 + 0x1a0) = plVar1[1];
    (**(code **)(*plVar1 + 0x20))(param_1,plVar1);
    FUN_00143300(plVar1);
    plVar1 = *(long **)(lVar2 + 0x1a0);
  }
  return;
}

