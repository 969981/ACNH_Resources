
undefined8 FUN_01f959b8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  if ((DAT_05ab9908 != 0) &&
     (uVar1 = *(uint *)(param_1 + 0xaf48), uVar1 != 0xffffffff && (int)uVar1 < 0x10)) {
    puVar2 = &DAT_0545b240 + (ulong)uVar1 * 0x118;
    if (0xf < uVar1) {
      puVar2 = &DAT_0545b240;
    }
    if ((puVar2[0x8c] != '\0') && (*(int *)(puVar2 + 0xa8) == 0x1c)) {
      return 1;
    }
  }
  return 0;
}

