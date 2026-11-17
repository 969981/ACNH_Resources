
undefined8 FUN_02b6a1e8(long param_1,long param_2)

{
  if ((((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
      (*(int *)(param_2 + 0xc) != 0x1b)) || ((*(byte *)(param_2 + 8) & 1) != 0)) {
    return 0;
  }
  **(undefined1 **)(param_1 + 8) = 1;
  return 1;
}

