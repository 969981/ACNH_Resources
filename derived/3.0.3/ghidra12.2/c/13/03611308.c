
void FUN_03611308(char *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  
  bVar6 = param_1[0x10];
  uVar4 = 1 << (ulong)(bVar6 & 0x1f);
  if ((uVar4 & 0x55) != 0) {
    if (((param_1[0x1c] != '\0') && (sVar3 = *(short *)(param_1 + 0x1e), sVar3 != 0)) &&
       (*(short *)(param_1 + 0x1e) = sVar3 + -1, sVar3 == 1)) {
      param_1[0x22] = '\x01';
      bVar1 = param_1[1];
      bVar6 = 0;
      if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != '\0') && bVar1 != 0) {
        bVar6 = 2;
      }
      param_1[-0x3c] = bVar6 | param_1[-0x3c] & 0xfdU;
      uVar5 = (ushort)bVar1;
      if (((bVar1 != 0) && (uVar5 = 0x17f, *param_1 != '\0')) && (param_1[0x22] == '\0')) {
        uVar5 = 0x17f;
        if (param_1[0x2f] != '\0') {
          uVar5 = *(short *)(param_1 + 0x32) + 0x17f;
        }
      }
      *(ushort *)(param_1 + 0xae) = uVar5;
      bVar6 = param_1[0x10];
    }
LAB_036113bc:
    param_1[0x10] = bVar6 + 1;
    return;
  }
  if ((uVar4 & 0x2a) != 0) goto LAB_036113bc;
  if (param_1[0x24] == '\0') goto LAB_03611470;
  bVar6 = param_1[0x26];
  if (param_1[0x25] == '\0') {
    if (bVar6 != 0) goto LAB_036113ec;
  }
  else if (bVar6 < 0xf) {
LAB_036113ec:
    cVar2 = param_1[0x23];
    if ((cVar2 != '\0') && (param_1[0x23] = cVar2 + -1, cVar2 == '\x01')) {
      param_1[0x23] = param_1[0x24];
      bVar1 = bVar6 - 1;
      if (param_1[0x25] != '\0') {
        bVar1 = bVar6 + 1;
      }
      if (bVar1 < 0x10) {
        param_1[0x26] = bVar1;
        bVar6 = bVar1;
      }
    }
  }
  sVar3 = *(short *)(&DAT_04057c80 + (ulong)bVar6 * 2);
  *(short *)(param_1 + 0x32) = sVar3;
  uVar5 = (ushort)(byte)param_1[1];
  if (((param_1[1] != 0) && (uVar5 = 0x17f, *param_1 != '\0')) && (param_1[0x22] == '\0')) {
    uVar5 = 0x17f;
    if (param_1[0x2f] != '\0') {
      uVar5 = sVar3 + 0x17f;
    }
  }
  *(ushort *)(param_1 + 0xae) = uVar5;
LAB_03611470:
  param_1[0x10] = '\0';
  return;
}

