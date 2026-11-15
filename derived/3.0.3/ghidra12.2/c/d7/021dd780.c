
bool FUN_021dd780(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  char *pcVar4;
  
  bVar2 = false;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x508);
    if (uVar1 == 0xffffffff) {
      uVar1 = *(uint *)(param_1 + 0x50c);
      if (uVar1 == 0xffffffff) {
        return false;
      }
      pcVar4 = &DAT_05454358 + (ulong)uVar1 * 0x2d8;
      if (0x10 < uVar1) {
        pcVar4 = &DAT_05454358;
      }
      if (*pcVar4 == '\0') {
        return false;
      }
      pcVar4 = pcVar4 + 0x110;
    }
    else {
      puVar3 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
      if (9 < uVar1) {
        puVar3 = &DAT_053fe348;
      }
      pcVar4 = puVar3 + 0x6d8;
    }
    bVar2 = *pcVar4 != '\0';
  }
  return bVar2;
}

