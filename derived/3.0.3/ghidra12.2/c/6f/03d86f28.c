
uint FUN_03d86f28(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (((*(byte *)(param_1 + 0x2c0) & 1) != 0) && (*(char *)(param_1 + 0x2c2) == '\0')) {
    lVar3 = *(long *)(param_1 + 0x280);
    if (*(char *)(lVar3 + 0x20) == '\0') {
      uVar2 = *(uint *)(lVar3 + 0x28);
    }
    else {
      puVar1 = (uint *)(lVar3 + 0x24);
      if (*(char *)(lVar3 + 0x21) != '\0') {
        puVar1 = (uint *)(lVar3 + 0x28);
      }
      uVar2 = *puVar1;
    }
    if (0xd < uVar2) {
      return 0;
    }
    uVar2 = 0x36ccU >> (ulong)(uVar2 & 0x1f) & 1;
  }
  return uVar2;
}

