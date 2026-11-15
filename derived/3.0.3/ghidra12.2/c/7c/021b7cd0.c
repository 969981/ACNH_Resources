
void FUN_021b7cd0(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar3 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar3 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar3 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar3 + 0x472) != bVar2)) {
      return;
    }
  }
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    FUN_0219b680(param_1);
  }
  if (*(char *)(param_1 + 0x1699) != '\0') {
    FUN_0219b680(param_1 + 0xba0);
  }
  if (*(char *)(param_1 + 0x2239) != '\0') {
    FUN_0219b680(param_1 + 0x1740);
  }
  if (*(char *)(param_1 + 0x2dd9) != '\0') {
    FUN_0219b680(param_1 + 0x22e0);
  }
  if (*(char *)(param_1 + 0x3979) != '\0') {
    FUN_0219b680(param_1 + 0x2e80);
  }
  if (*(char *)(param_1 + 0x4519) != '\0') {
    FUN_0219b680(param_1 + 0x3a20);
  }
  if (*(char *)(param_1 + 0x50b9) != '\0') {
    FUN_0219b680(param_1 + 0x45c0);
  }
  if (*(char *)(param_1 + 0x5c59) != '\0') {
    FUN_0219b680(param_1 + 0x5160);
  }
  if (*(char *)(param_1 + 0x67f9) != '\0') {
    FUN_0219b680(param_1 + 0x5d00);
  }
  if (*(char *)(param_1 + 0x7399) == '\0') {
    return;
  }
  FUN_0219b680(param_1 + 0x68a0);
  return;
}

