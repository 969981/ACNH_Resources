
void FUN_036095a8(char *param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  
  param_1[1] = (byte)(param_2 >> 7) & 1;
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != '\0') && 0x7fffffff < (uint)(int)(char)param_2)
  {
    bVar4 = 4;
  }
  param_1[-0x74] = bVar4 | param_1[-0x74] & 0xfbU;
  if ((param_2 >> 7 & 1) == 0) {
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    param_1[0x35] = '\0';
    cVar1 = param_1[1];
  }
  else {
    if ((*param_1 == '\0') || (param_1[0x22] != '\0')) {
      sVar2 = 0x186;
      param_1[0x35] = '\0';
    }
    else {
      uVar3 = 4;
      if (param_1[0x37] == '\0') {
        uVar3 = ((uint)(byte)param_1[0x24] << 2 ^ 0xffffffff) & 4;
      }
      uVar3 = (byte)param_1[0x23] >> (ulong)uVar3 & 0xf;
      param_1[0x35] = (char)uVar3;
      if (param_1[0x36] == 0) {
        sVar2 = 0x186;
      }
      else {
        sVar2 = (short)(uVar3 >> (ulong)(0x2104U >> (ulong)(((byte)param_1[0x36] & 7) << 2) & 7)) *
                -0x34 + 0x186;
      }
    }
    *(short *)(param_1 + 0x78) = sVar2;
    cVar1 = param_1[1];
  }
  if (cVar1 != '\0') {
    return;
  }
  *param_1 = '\0';
  param_1[-0x74] = param_1[-0x74] & 0xfb;
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
  uVar3 = 4;
  if (param_1[0x37] == '\0') {
    uVar3 = ((uint)(byte)param_1[0x24] << 2 ^ 0xffffffff) & 4;
  }
  uVar3 = (byte)param_1[0x23] >> (ulong)uVar3 & 0xf;
  param_1[0x35] = (char)uVar3;
  if (param_1[0x36] == 0) {
    param_1[0x78] = -0x7a;
    param_1[0x79] = '\x01';
    return;
  }
  *(short *)(param_1 + 0x78) =
       (short)(uVar3 >> (ulong)(0x2104U >> (ulong)(((byte)param_1[0x36] & 7) << 2) & 7)) * -0x34 +
       0x186;
  return;
}

