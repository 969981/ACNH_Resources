
byte FUN_0037e870(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    lVar7 = *(long *)(lVar7 + (ulong)(*(int *)(lVar7 + (ulong)uVar1 + 4 +
                                                       (ulong)*(byte *)(lVar7 + (ulong)(*(int *)(
                                                  lVar7 + (ulong)uVar1 + 4) + uVar1) + 0xc) * 4) +
                                     uVar1) + 8);
    bVar6 = 0;
    if (*(long *)(lVar7 + 0x58) != 0) {
      bVar6 = *(char *)(lVar7 + 0x98) == '\0' & *(byte *)(*(long *)(lVar7 + 0x58) + 8) >> 5;
    }
    if (*(long *)(lVar7 + 8) != 0) {
      bVar3 = *(char *)(lVar7 + 0x54) == '\0' & *(byte *)(*(long *)(lVar7 + 8) + 4) >> 1;
      bVar4 = bVar2 & *(char *)(param_1 + 0x5a) != '\0';
      bVar5 = bVar4 | bVar6 | bVar3;
      if (bVar4 == 0 && (bVar6 == 0 && bVar3 == 0)) goto LAB_0037e90c;
      goto LAB_0037e940;
    }
  }
  bVar3 = bVar2 & *(char *)(param_1 + 0x5a) != '\0';
  bVar5 = bVar3 | bVar6;
  if (bVar3 == 0 && bVar6 == 0) {
LAB_0037e90c:
    if ((bVar2 >> 1 & 1) == 0) {
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xef;
      return bVar5 ^ 1;
    }
    *(byte *)(param_1 + 0x58) = bVar2 & 0x7f;
    return bVar5 ^ 1;
  }
LAB_0037e940:
  return bVar5 ^ 1;
}

