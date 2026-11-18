
byte FUN_03741df0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  
  puVar6 = *(uint **)(param_1 + 8);
  if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
    return 0;
  }
  cVar7 = DAT_05abc380;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      DAT_05abc384 = 0xffffffffffffffff;
      DAT_05abc38c = 0xffffffffffffffff;
      DAT_05abc380 = '\x01';
      DAT_05abc3f4 = 0xffffffffffffffff;
      DAT_05abc394 = 0xffffffffffffffff;
      DAT_05abc39c = 0xffffffffffffffff;
      DAT_05abc3a4 = 0xffffffffffffffff;
      DAT_05abc3ac = 0xffffffffffffffff;
      DAT_05abc3b4 = 0xffffffffffffffff;
      DAT_05abc3bc = 0xffffffffffffffff;
      DAT_05abc3c4 = 0xffffffffffffffff;
      DAT_05abc3cc = 0xffffffffffffffff;
      DAT_05abc3d4 = 0xffffffffffffffff;
      DAT_05abc3dc = 0xffffffffffffffff;
      DAT_05abc3e4 = 0xffffffffffffffff;
      DAT_05abc3ec = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_05abc3f4) {
        pbVar1 = (byte *)((DAT_05abc3f4 & 0xffffffff) + (long)puVar6);
        if (pbVar1 == (byte *)0x0) {
          return 0;
        }
        bVar4 = *pbVar1;
        if (bVar4 < 4) {
          return bVar4;
        }
        return 0;
      }
      if ((int)DAT_05abc3f4 != -1) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (puVar6 == puVar8) break;
    lVar3 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar6 + (lVar3 - (long)puVar8);
    if (lVar3 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    DAT_05abc3f4 = CONCAT44(DAT_05abc3f4._4_4_,0xfffffffe);
    if (uVar9 == 0) {
      return 0;
    }
    piVar5 = (int *)(lVar3 + 4);
    while (piVar5[-1] != 0x53520a06) {
      piVar5 = piVar5 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar2 = 0;
    if (*piVar5 != -1) {
      iVar2 = *piVar5;
    }
    DAT_05abc3f4 = CONCAT44(DAT_05abc3f4._4_4_,iVar2);
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

