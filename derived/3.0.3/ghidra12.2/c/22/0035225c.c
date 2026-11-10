
void FUN_0035225c(byte *param_1)

{
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00347cd8(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x2c) * 0x48);
    }
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x2c] = 0xff;
    param_1[0x2d] = 0xff;
    param_1[0x2e] = 0xff;
    param_1[0x2f] = 0xff;
    if ((*param_1 & 1) != 0) {
      **(undefined8 **)(param_1 + 0x40) = 0;
      **(undefined8 **)(param_1 + 0x48) = 0;
      return;
    }
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  return;
}

