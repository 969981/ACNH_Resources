
void FUN_0014b378(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    do {
      FUN_00143300(*(undefined8 *)(param_1 + 0x20));
      FUN_00143300(*(undefined8 *)(param_1 + 0x18));
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_00143300(param_1);
      param_1 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}

