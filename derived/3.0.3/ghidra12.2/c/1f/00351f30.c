
void FUN_00351f30(long param_1)

{
  do {
    *(byte *)(param_1 + 0x38) =
         *(byte *)(param_1 + 0x38) & 0x60 | ((*(byte *)(param_1 + 0x38) & 5) != 0) << 4;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_00351f30();
    }
    param_1 = *(long *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}

