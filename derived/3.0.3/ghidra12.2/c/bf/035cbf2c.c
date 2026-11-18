
void FUN_035cbf2c(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  bVar2 = *(byte *)(param_1 + 1);
  bVar3 = bVar2 & 0x44;
  uVar1 = (bVar2 >> 3 & 7) >> (ulong)(bVar2 & 3) & 1;
  if (bVar3 == 0x44) {
    uVar1 = 1;
  }
  bVar6 = (bVar2 & 0x38) != 0 || bVar3 == 0x44;
  bVar4 = bVar3 == 0x44;
  bVar5 = uVar1 != 0;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    bVar4 = bVar6;
    bVar5 = bVar6;
  }
  if (!(bool)(bVar5 | bVar4 ^ 1U) || *(char *)(param_1 + 0x14) != '\0') {
    *(byte *)(param_1 + -0x3f) = *(byte *)(param_1 + -0x3f) | 2;
    bVar2 = *(byte *)(param_1 + 1);
  }
  *(byte *)(param_1 + 1) = bVar2 & 0x7c | 3;
  bVar3 = *(byte *)(param_1 + 0xd88);
  if (bVar3 == 0) {
    *(undefined4 *)(param_1 + 0xd8a) = 0;
  }
  *(byte *)(param_1 + 0xd88) = bVar3 | 2;
  *(byte *)(param_1 + 0xd89) = *(byte *)(param_1 + 0xd89) | 2;
  if (*(byte *)(param_1 + 0xd70) == 0) {
    *(undefined4 *)(param_1 + 0xd72) = 0;
  }
  *(byte *)(param_1 + 0xd70) = *(byte *)(param_1 + 0xd70) | 2;
  *(byte *)(param_1 + 0xd71) = *(byte *)(param_1 + 0xd71) | 2;
  return;
}

