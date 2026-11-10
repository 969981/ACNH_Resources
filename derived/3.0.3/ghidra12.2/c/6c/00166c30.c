
undefined8 FUN_00166c30(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x41f) >> 2 & 1) == 0) {
    if ((((*(byte *)(param_2 + 0x68c) >> 2 & 1) != 0) ||
        (*(long **)(param_2 + 0x4c8) == (long *)0x0)) || (**(long **)(param_2 + 0x4c8) != param_1))
    {
      return 0;
    }
    *(byte *)(param_2 + 0x68c) = *(byte *)(param_2 + 0x68c) | 4;
  }
  return 1;
}

