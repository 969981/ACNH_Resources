
void FUN_0014ca60(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  FUN_00143300(*(undefined8 *)(param_1 + 0x800));
  lVar2 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar2 * 8);
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      FUN_0014c6c8();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  FUN_00143300(param_1);
  return;
}

