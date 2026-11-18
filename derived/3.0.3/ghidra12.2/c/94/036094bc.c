
void FUN_036094bc(char *param_1)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  
  if (((param_1[0x1c] == '\0') || (sVar1 = *(short *)(param_1 + 0x1e), sVar1 == 0)) ||
     (*(short *)(param_1 + 0x1e) = sVar1 + -1, sVar1 != 1)) {
    return;
  }
  param_1[0x22] = '\x01';
  bVar3 = 0;
  if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != '\0') && param_1[1] != '\0') {
    bVar3 = 4;
  }
  param_1[-0x74] = bVar3 | param_1[-0x74] & 0xfbU;
  if (param_1[1] == '\0') {
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    param_1[0x35] = '\0';
    return;
  }
  if ((*param_1 == '\0') || (param_1[0x22] != '\0')) {
    param_1[0x35] = '\0';
    param_1[0x78] = -0x7a;
    param_1[0x79] = '\x01';
    return;
  }
  uVar2 = 4;
  if (param_1[0x37] == '\0') {
    uVar2 = ((uint)(byte)param_1[0x24] << 2 ^ 0xffffffff) & 4;
  }
  uVar2 = (byte)param_1[0x23] >> (ulong)uVar2 & 0xf;
  param_1[0x35] = (char)uVar2;
  if (param_1[0x36] == 0) {
    param_1[0x78] = -0x7a;
    param_1[0x79] = '\x01';
    return;
  }
  *(short *)(param_1 + 0x78) =
       (short)(uVar2 >> (ulong)(0x2104U >> (ulong)(((byte)param_1[0x36] & 7) << 2) & 7)) * -0x34 +
       0x186;
  return;
}

