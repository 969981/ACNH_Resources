
void FUN_03b18ee0(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    FUN_0035d98c(lVar1,0);
    *(undefined4 *)(lVar1 + 0x50) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_0035d98c(lVar1,0);
    *(undefined4 *)(lVar1 + 0x50) = 0;
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0xe0))();
  }
  if ((param_2 & 1) != 0) {
    for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != param_1 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_03b18ee0(*(undefined8 *)(lVar1 + 0x10),1);
    }
  }
  return;
}

