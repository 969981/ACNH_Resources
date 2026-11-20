
void FUN_03fc56a4(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  
  *(undefined1 *)(param_2 + 0x10) = 0;
  pbVar2 = (byte *)(param_1 + 0x316a9e);
  bVar5 = *pbVar2;
  if (bVar5 == 7) {
    bVar4 = *(byte *)(param_2 + 0x12);
    if (*(char *)(param_1 + 0x3170f5) == '\0') {
      if (((bVar4 & 1) != 0) && (*(char *)(param_2 + 0x7f) != '\0')) {
        *(undefined1 *)(param_2 + 0x17) = 0;
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
    }
    else {
      if ((bVar4 >> 1 & 1) == 0) {
        if ((bVar4 & 1) == 0) goto LAB_03fc57b4;
        cVar3 = *(char *)(param_2 + 0x7f);
      }
      else {
        cVar3 = *(char *)(param_2 + 0x87);
      }
      if (cVar3 != '\0') {
        *(undefined1 *)(param_2 + 0x10) = 1;
        *(undefined1 *)(param_2 + 0x17) = 1;
      }
    }
  }
  else {
    bVar4 = *(byte *)(param_2 + 0x12);
    if ((bVar4 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)*(byte *)(param_2 + 0x7f);
      if (*(byte *)(param_2 + 0x7f) != 0) {
        uVar7 = 1;
        *(undefined1 *)(param_2 + 0x17) = 0;
        *(undefined1 *)(param_2 + 0x10) = 1;
        bVar5 = *pbVar2;
      }
    }
    if (bVar5 < 6) {
      if (((bVar4 >> 1 & 1) != 0) && (*(char *)(param_2 + 0x87) != '\0')) {
        lVar1 = param_2 + uVar7;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar6;
        *(char *)(param_2 + 0x10) = (char)uVar6;
        *(undefined1 *)(lVar1 + 0x17) = 1;
        bVar5 = *pbVar2;
      }
      uVar6 = (uint)uVar7;
      if (bVar5 < 2) {
        if (((bVar4 >> 2 & 1) != 0) && (*(char *)(param_2 + 0x8f) != '\0')) {
          uVar6 = uVar6 + 1;
          *(char *)(param_2 + 0x10) = (char)uVar6;
          *(undefined1 *)(param_2 + uVar7 + 0x17) = 2;
          bVar5 = *pbVar2;
        }
        if ((((bVar4 >> 3 & 1) != 0) && (bVar5 == 0)) && (*(char *)(param_2 + 0x97) != '\0')) {
          *(char *)(param_2 + 0x10) = (char)uVar6 + '\x01';
          *(undefined1 *)(param_2 + (ulong)uVar6 + 0x17) = 3;
        }
      }
    }
  }
LAB_03fc57b4:
  if (bVar4 < 0x10) {
    *(undefined1 *)(param_2 + 0x7c) = 0;
    return;
  }
  *(bool *)(param_2 + 0x7c) = *(char *)(param_2 + 0x9f) != '\0';
  return;
}

