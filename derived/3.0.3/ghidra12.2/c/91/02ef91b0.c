
bool FUN_02ef91b0(long param_1)

{
  if (*(int *)(param_1 + 0x210) != -1 || *(byte *)(param_1 + 0x214) < 8) {
    return true;
  }
  if ((((*(int *)(param_1 + 0x224) == -1) && (7 < *(byte *)(param_1 + 0x228))) &&
      (*(int *)(param_1 + 0x238) == -1)) &&
     ((7 < *(byte *)(param_1 + 0x23c) && (*(int *)(param_1 + 0x24c) == -1)))) {
    return *(byte *)(param_1 + 0x250) < 8;
  }
  return true;
}

