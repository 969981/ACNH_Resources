
undefined4 FUN_003ddab0(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x10);
  if (uVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    do {
      if (*(short *)(puVar2 + -1) == 0x4003) {
        return *puVar2;
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 != 0);
  }
  return 0;
}

