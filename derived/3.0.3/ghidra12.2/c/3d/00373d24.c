
void FUN_00373d24(long param_1,ulong param_2)

{
  FUN_0035d98c();
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  if (*(long *)(param_1 + 0x50) == param_1 + 0x48) {
    FUN_003859d4(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x60),param_1);
    return;
  }
  return;
}

