
void FUN_002ba5a4(long param_1)

{
  long *plVar1;
  undefined1 auStack_20 [16];
  
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x80) + 0x10), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(auStack_20);
  }
  return;
}

