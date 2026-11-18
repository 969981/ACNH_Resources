
byte FUN_035b7cf0(byte *param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_1[-0x31fd] >> 2 & 1) != 0) {
    return 0xff;
  }
  if ((param_1[0x12] == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(*(long *)(param_1 + 0x18) + 1) == '\0';
  }
  iVar3 = 0;
  if (param_1[0x10] != 0) {
    bVar2 = false;
  }
  if ((2 < param_1[-0x3fee]) && (iVar3 = 2, (char)param_1[-0x3ec0] < '\0')) {
    iVar3 = 3;
  }
  if (param_1[1] != 0) {
    uVar1 = 0x5410;
    if (iVar3 != 3) {
      uVar1 = 0x2998;
    }
    if (uVar1 <= (ulong)(*(long *)(param_1 + -0x3fb8) - *(long *)(param_1 + 8))) goto LAB_035b7d88;
  }
  bVar2 = true;
LAB_035b7d88:
  return *param_1 | bVar2 << 1 | 0x3c;
}

