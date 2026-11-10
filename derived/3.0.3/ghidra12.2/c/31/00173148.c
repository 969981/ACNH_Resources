
bool FUN_00173148(long param_1)

{
  if (((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 0x78) == 0)) &&
     (*(long *)(param_1 + 0x80) == 0)) {
    return *(long *)(param_1 + 0x88) != 0;
  }
  return true;
}

