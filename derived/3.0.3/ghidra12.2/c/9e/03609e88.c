
void FUN_03609e88(byte *param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  
  bVar5 = param_1[0x1c];
  uVar3 = param_2 >> 6 & 1;
  param_1[0x1c] = (byte)uVar3;
  if (((bVar5 < uVar3 && (param_1[0x10] & 1) != 0) &&
      (sVar2 = *(short *)(param_1 + 0x1e), sVar2 != 0)) &&
     (*(short *)(param_1 + 0x1e) = sVar2 + -1, sVar2 == 1)) {
    param_1[0x22] = 1;
    bVar1 = param_1[1];
    bVar5 = 0;
    if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != 0) && bVar1 != 0) {
      bVar5 = 8;
    }
    param_1[-0xb4] = bVar5 | param_1[-0xb4] & 0xf7;
    uVar4 = (ushort)bVar1;
    if (((bVar1 != 0) && (uVar4 = 0x17d, *param_1 != 0)) && (param_1[0x22] == 0)) {
      sVar2 = *(short *)(&DAT_040579c0 + (ulong)param_1[0x26] * 2);
      *(short *)(param_1 + 0x2e) = sVar2;
      uVar4 = 0x17d;
      if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
        uVar4 = sVar2 + 0x17d;
      }
    }
    *(ushort *)(param_1 + 0x3a) = uVar4;
  }
  if ((param_2 & 0xff) >> 7 != 0) {
    param_1[0x22] = 0;
    bVar1 = param_1[1];
    *param_1 = bVar1;
    bVar5 = 0;
    if (*(int *)(param_1 + 0x14) != 0 && bVar1 != 0) {
      bVar5 = 8;
    }
    param_1[-0xb4] = bVar5 | param_1[-0xb4] & 0xf7;
    uVar4 = (ushort)bVar1;
    if (((bVar1 != 0) && (uVar4 = 0x17d, *param_1 != 0)) && (param_1[0x22] == 0)) {
      sVar2 = *(short *)(&DAT_040579c0 + (ulong)param_1[0x26] * 2);
      *(short *)(param_1 + 0x2e) = sVar2;
      uVar4 = 0x17d;
      if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
        uVar4 = sVar2 + 0x17d;
      }
    }
    *(ushort *)(param_1 + 0x3a) = uVar4;
    if (*(short *)(param_1 + 0x1e) == 0) {
      sVar2 = *(short *)(param_1 + 0x20);
      *(short *)(param_1 + 0x1e) = sVar2;
      if (((((param_1[0x10] & 1) != 0) && (param_1[0x1c] != 0)) && (sVar2 != 0)) &&
         (*(short *)(param_1 + 0x1e) = sVar2 + -1, (short)(sVar2 + -1) == 0)) {
        param_1[0x22] = 1;
        bVar1 = param_1[1];
        bVar5 = 0;
        if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != 0) && bVar1 != 0) {
          bVar5 = 8;
        }
        param_1[-0xb4] = bVar5 | param_1[-0xb4] & 0xf7;
        uVar4 = (ushort)bVar1;
        if (((bVar1 != 0) && (uVar4 = 0x17d, *param_1 != 0)) && (param_1[0x22] == 0)) {
          sVar2 = *(short *)(&DAT_040579c0 + (ulong)param_1[0x26] * 2);
          *(short *)(param_1 + 0x2e) = sVar2;
          uVar4 = 0x17d;
          if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
            uVar4 = sVar2 + 0x17d;
          }
        }
        *(ushort *)(param_1 + 0x3a) = uVar4;
        return;
      }
    }
  }
  return;
}

