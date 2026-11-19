
ulong FUN_038aa900(long param_1,ulong param_2)

{
  long *plVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = 0;
  while (*(char *)(param_1 + lVar6) != '\0') {
    if (*(char *)(param_1 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      break;
    }
    if (*(char *)(param_1 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      break;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) goto LAB_038aaa10;
  }
  uVar5 = (uint)lVar6;
  param_2 = (long)(int)uVar5 * -0x395b586ca42e166b ^ param_2;
  if (7 < (int)uVar5) {
    lVar6 = 0;
    do {
      plVar1 = (long *)(param_1 + lVar6);
      uVar4 = lVar6 + 0x10;
      lVar6 = lVar6 + 8;
      uVar7 = *plVar1 * -0x395b586ca42e166b;
      param_2 = ((uVar7 ^ uVar7 >> 0x2f) * -0x395b586ca42e166b ^ param_2) * -0x395b586ca42e166b;
    } while (uVar4 <= (ulong)(long)(int)uVar5);
  }
  uVar3 = uVar5 + 7;
  if (-1 < (int)uVar5) {
    uVar3 = uVar5;
  }
  if ((uVar5 & 7) - 1 < 7) {
    pbVar2 = (byte *)(param_1 + (int)(uVar3 & 0xfffffff8));
    switch(uVar5 & 7) {
    case 7:
      param_2 = param_2 ^ (ulong)pbVar2[6] << 0x30;
    case 6:
      param_2 = param_2 ^ (ulong)pbVar2[5] << 0x28;
    case 5:
      param_2 = param_2 ^ (ulong)pbVar2[4] << 0x20;
    case 4:
      param_2 = param_2 ^ (ulong)pbVar2[3] << 0x18;
    case 3:
      param_2 = param_2 ^ (ulong)pbVar2[2] << 0x10;
    case 2:
      param_2 = param_2 ^ (ulong)pbVar2[1] << 8;
    case 1:
      param_2 = (param_2 ^ *pbVar2) * -0x395b586ca42e166b;
    }
  }
LAB_038aaa10:
  uVar4 = (param_2 ^ param_2 >> 0x2f) * -0x395b586ca42e166b;
  return uVar4 ^ uVar4 >> 0x2f;
}

