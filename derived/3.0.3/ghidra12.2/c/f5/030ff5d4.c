
void FUN_030ff5d4(long param_1)

{
  if (((*(long *)(param_1 + 0x490) != 0) &&
      (*(int *)(*(long *)(param_1 + 0x490) + 0x20) == *(int *)(param_1 + 0x498))) ||
     ((*(long *)(param_1 + 0x4a0) != 0 &&
      (*(int *)(*(long *)(param_1 + 0x4a0) + 0x20) == *(int *)(param_1 + 0x4a8))))) {
    FUN_00767998(param_1 + 0x490,0xffffffff);
    *(undefined8 *)(param_1 + 0x490) = 0;
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
  }
  return;
}

