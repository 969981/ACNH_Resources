
undefined8 FUN_00285e00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + -0x20;
  if ((*(ulong *)(param_1 + -8) & 1) != 0) {
    lVar1 = *(ulong *)(param_1 + -8) - 1;
  }
  return *(undefined8 *)(lVar1 + 0x18);
}

