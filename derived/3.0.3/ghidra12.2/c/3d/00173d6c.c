
undefined8 FUN_00173d6c(long param_1)

{
  if (((*(ushort *)(param_1 + 0xe2) >> 0xe & 1) == 0) &&
     ((*(long *)(param_1 + 0x40) == -1 || (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))))
     ) {
    return 0;
  }
  return 0xffffffff;
}

