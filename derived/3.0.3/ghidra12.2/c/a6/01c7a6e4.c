
void FUN_01c7a6e4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x708);
  *(undefined8 *)(param_1 + 0x708) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_01c7c428(param_1);
  return;
}

