
bool FUN_003dddf8(long param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = 0x100000000;
  *(undefined8 *)(param_1 + 0x58) = 0x300000002;
  *(undefined8 *)(param_1 + 0x60) = 0x500000004;
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    return true;
  }
  return *(char *)(param_1 + 0x30) == '\0';
}

