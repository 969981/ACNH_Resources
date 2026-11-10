
void FUN_00166738(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x678) != 0) {
    FUN_00143300();
    *(undefined8 *)(lVar1 + 0x678) = 0;
  }
  return;
}

