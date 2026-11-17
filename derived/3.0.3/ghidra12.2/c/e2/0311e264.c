
bool FUN_0311e264(long param_1)

{
  if (*(long *)(param_1 + 0x1068) != 0) {
    return true;
  }
  if (((((*(byte *)(param_1 + 0x2d8) >> 1 & 1) == 0) && ((*(byte *)(param_1 + 0x4d0) >> 1 & 1) == 0)
       ) && ((*(byte *)(param_1 + 0x6c8) >> 1 & 1) == 0)) &&
     ((((*(byte *)(param_1 + 0x8c0) >> 1 & 1) == 0 && ((*(byte *)(param_1 + 0xab8) >> 1 & 1) == 0))
      && ((*(byte *)(param_1 + 0xcb0) >> 1 & 1) == 0)))) {
    return (*(byte *)(param_1 + 0xea8) & 2) == 0;
  }
  return false;
}

