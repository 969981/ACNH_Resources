
void FUN_03609dc4(char *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  
  FUN_03609e88();
  if ((param_2 >> 7 & 1) != 0) {
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    uVar1 = (*(uint *)(param_1 + 0x18) >> 1) + 6;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x14) = uVar1;
    bVar2 = param_1[1];
    param_1[0x23] = param_1[0x24];
    param_1[0x26] = (byte)param_1[0x27] >> 4;
    bVar5 = 0;
    if ((uVar1 != 0 && *param_1 != '\0') && bVar2 != 0) {
      bVar5 = 8;
    }
    param_1[-0xb4] = bVar5 | param_1[-0xb4] & 0xf7U;
    uVar4 = (ushort)bVar2;
    if (((bVar2 != 0) && (uVar4 = 0x17d, *param_1 != '\0')) && (param_1[0x22] == '\0')) {
      sVar3 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_1[0x26] * 2);
      *(short *)(param_1 + 0x2e) = sVar3;
      uVar4 = 0x17d;
      if ((*(ushort *)(param_1 + 0x28) & 1) != 0) {
        uVar4 = sVar3 + 0x17d;
      }
    }
    *(ushort *)(param_1 + 0x3a) = uVar4;
  }
  return;
}

