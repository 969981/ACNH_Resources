
void FUN_03609a3c(char *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  
  bVar5 = param_1[0x10];
  if (((((bVar5 & 1) == 0) && (param_1[0x1c] != '\0')) &&
      (sVar3 = *(short *)(param_1 + 0x1e), sVar3 != 0)) &&
     (*(short *)(param_1 + 0x1e) = sVar3 + -1, sVar3 == 1)) {
    param_1[0x22] = '\x01';
    bVar1 = param_1[1];
    bVar5 = 0;
    if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != '\0') && bVar1 != 0) {
      bVar5 = 8;
    }
    param_1[-0xb4] = bVar5 | param_1[-0xb4] & 0xf7U;
    uVar4 = (ushort)bVar1;
    if (((bVar1 != 0) && (uVar4 = 0x17d, *param_1 != '\0')) && (param_1[0x22] == '\0')) {
      sVar3 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_1[0x26] * 2);
      *(short *)(param_1 + 0x2e) = sVar3;
      uVar4 = 0x17d;
      if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
        uVar4 = sVar3 + 0x17d;
      }
    }
    *(ushort *)(param_1 + 0x3a) = uVar4;
    bVar5 = param_1[0x10];
  }
  bVar5 = bVar5 + 1 & 7;
  if (bVar5 != 0) {
    param_1[0x10] = bVar5;
    return;
  }
  if (param_1[0x24] == '\0') {
    param_1[0x10] = '\0';
    return;
  }
  bVar5 = param_1[0x26];
  if (param_1[0x25] == '\0') {
    if (bVar5 == 0) goto LAB_03609b5c;
  }
  else if (0xe < bVar5) goto LAB_03609b5c;
  cVar2 = param_1[0x23];
  if ((cVar2 != '\0') && (param_1[0x23] = cVar2 + -1, cVar2 == '\x01')) {
    param_1[0x23] = param_1[0x24];
    bVar1 = bVar5 - 1;
    if (param_1[0x25] != '\0') {
      bVar1 = bVar5 + 1;
    }
    if (bVar1 < 0x10) {
      param_1[0x26] = bVar1;
      bVar5 = bVar1;
    }
  }
LAB_03609b5c:
  uVar4 = (ushort)(byte)param_1[1];
  if (((param_1[1] != 0) && (uVar4 = 0x17d, *param_1 != '\0')) && (param_1[0x22] == '\0')) {
    sVar3 = *(short *)(&DAT_040579c0 + (ulong)bVar5 * 2);
    *(short *)(param_1 + 0x2e) = sVar3;
    uVar4 = 0x17d;
    if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
      uVar4 = sVar3 + 0x17d;
    }
  }
  *(ushort *)(param_1 + 0x3a) = uVar4;
  param_1[0x10] = param_1[0x10] + 1U & 7;
  return;
}

