
bool FUN_01f2acf4(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0xad5a) & 6) != 0) {
    return false;
  }
  uVar1 = FUN_0212ef10(param_1 + 0xaa50);
  if ((uVar1 & 1) == 0) {
    if ((*(int *)(param_1 + 0x77f4) != 0x3a) && (*(int *)(param_1 + 0x77b0) != 0x3a)) {
      return *(int *)(param_1 + 0x77f4) != 0x37 && *(int *)(param_1 + 0x77b0) != 0x37;
    }
  }
  return false;
}

