
void FUN_004d1c70(long param_1)

{
  FUN_004d1cf0(param_1 + 0x40,*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,*(long *)(param_1 + 0x58),8,*(uint *)(param_1 + 100) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((*(ulong *)(param_1 + 0x50) & 1) == 0) {
    return;
  }
  FUN_0043dd50(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffe);
  return;
}

