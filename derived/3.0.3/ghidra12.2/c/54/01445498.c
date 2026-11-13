
void FUN_01445498(long param_1)

{
  if (DAT_0556aa70 != 0) {
    *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
  }
  if (*(int *)(param_1 + 0x368) == 3) {
    return;
  }
  FUN_03ebb160(param_1 + 0x360);
  return;
}

