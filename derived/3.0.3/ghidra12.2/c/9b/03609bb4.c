
void FUN_03609bb4(char *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  byte bVar6;
  short sVar7;
  
  uVar1 = param_2 & 0xff;
  bVar2 = param_1[0x27];
  param_1[0x27] = (char)param_2;
  param_1[1] = 7 < uVar1;
  cVar3 = param_1[0x26];
  param_1[0x26] = (byte)(param_2 >> 4) & 0xf;
  param_1[0x25] = (byte)(param_2 >> 3) & 1;
  param_2 = param_2 & 7;
  param_1[0x24] = (char)param_2;
  param_1[0x23] = (char)param_2;
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != '\0') && 7 < uVar1) {
    bVar6 = 8;
  }
  param_1[-0xb4] = bVar6 | param_1[-0xb4] & 0xf7U;
  if (uVar1 < 8) {
    sVar7 = 0;
  }
  else {
    sVar7 = 0x17d;
    if ((*param_1 != '\0') && (param_1[0x22] == '\0')) {
      sVar4 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_1[0x26] * 2);
      *(short *)(param_1 + 0x2e) = sVar4;
      sVar7 = 0x17d;
      if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
        sVar7 = sVar4 + 0x17d;
      }
    }
  }
  *(short *)(param_1 + 0x3a) = sVar7;
  if (param_1[1] == '\0') {
    *param_1 = '\0';
    param_1[-0xb4] = param_1[-0xb4] & 0xf7;
    uVar5 = (ushort)(byte)param_1[1];
    if (((param_1[1] != 0) && (uVar5 = 0x17d, *param_1 != '\0')) && (param_1[0x22] == '\0')) {
      sVar7 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_1[0x26] * 2);
      *(short *)(param_1 + 0x2e) = sVar7;
      uVar5 = 0x17d;
      if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
        uVar5 = sVar7 + 0x17d;
      }
    }
    *(ushort *)(param_1 + 0x3a) = uVar5;
    uVar5 = (ushort)(byte)param_1[1];
    if ((param_1[1] == 0) || (uVar5 = 0x17d, *param_1 == '\0')) goto LAB_03609d18;
  }
  else {
    if (*param_1 == '\0') {
      param_1[0x3a] = '}';
      param_1[0x3b] = '\x01';
      return;
    }
    bVar6 = param_1[0x26];
    if (param_1[-0x14f6] == '\x03') {
      uVar1 = (bVar2 | uVar1) & 8;
      if (((param_2 == 0) || (uVar1 != 0)) || ((bVar2 & 7) == 0)) {
        if ((uVar1 == 0 && (bVar2 & 7) == 0) && param_2 != 0) {
          bVar6 = cVar3 + 1;
        }
      }
      else {
LAB_03609ca0:
        bVar6 = cVar3 + 2;
      }
    }
    else if ((param_2 == 0) || ((bVar2 & 7) != 0)) {
      if ((param_2 != 0) && ((((bVar2 | uVar1) >> 3 & 1) == 0 && ((bVar2 & 7) != 0)))) {
        if (cVar3 == '\x0e') {
          bVar6 = 8;
        }
        else {
          if (cVar3 != '\x06') goto LAB_03609ca0;
          bVar6 = 0;
        }
      }
    }
    else {
      bVar6 = 0xf;
    }
    param_1[0x26] = bVar6 & 0xf;
  }
  uVar5 = 0x17d;
  if (param_1[0x22] == '\0') {
    sVar4 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_1[0x26] * 2);
    *(short *)(param_1 + 0x2e) = sVar4;
    sVar7 = 0x17d;
    if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
      sVar7 = sVar4 + 0x17d;
    }
    *(short *)(param_1 + 0x3a) = sVar7;
    return;
  }
LAB_03609d18:
  *(ushort *)(param_1 + 0x3a) = uVar5;
  return;
}

