
char * FUN_0038cf10(char *param_1)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  
  sVar1 = strlen(param_1);
  if ((int)sVar1 < 1) {
    return param_1;
  }
  uVar2 = sVar1 & 0xffffffff;
  lVar3 = sVar1 << 0x20;
  do {
    if (param_1[lVar3 + -0x100000000 >> 0x20] == '%') {
      return param_1 + (lVar3 >> 0x20);
    }
    uVar2 = uVar2 - 1;
    lVar3 = lVar3 + -0x100000000;
  } while (uVar2 != 0);
  return param_1;
}

