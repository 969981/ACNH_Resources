
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_036d17a0(long param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 != 0) {
    cVar7 = DAT_05ab4368;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        DAT_05ab436c = 0xffffffffffffffff;
        DAT_05ab4374 = 0xffffffffffffffff;
        DAT_05ab4368 = '\x01';
        DAT_05ab43bc = 0xffffffff;
        DAT_05ab437c = 0xffffffffffffffff;
        DAT_05ab4384 = 0xffffffffffffffff;
        _DAT_05ab438c = 0xffffffffffffffff;
        DAT_05ab4394 = 0xffffffffffffffff;
        DAT_05ab439c = 0xffffffffffffffff;
        DAT_05ab43a4 = 0xffffffffffffffff;
        DAT_05ab43ac = 0xffffffffffffffff;
        DAT_05ab43b4 = 0xffffffffffffffff;
        uVar4 = *puVar6;
      }
      else {
        if (-1 < DAT_05ab438c) {
          psVar1 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar6);
          if ((psVar1 != (short *)0x0) && (*psVar1 == -1)) {
            return 0;
          }
          break;
        }
        if (DAT_05ab438c != -1) break;
        uVar4 = *puVar6;
      }
      if ((uVar4 == 0) || (puVar8 = (uint *)(ulong)uVar4, puVar6 == puVar8)) break;
      lVar3 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar6 + (lVar3 - (long)puVar8);
      if (lVar3 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
      _DAT_05ab4390 = (undefined4)(_DAT_05ab438c >> 0x20);
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
      if (uVar9 == 0) break;
      piVar5 = (int *)(lVar3 + 4);
      while (piVar5[-1] != 0x54706054) {
        piVar5 = piVar5 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_036d18b8;
      }
      iVar2 = 0;
      if (*piVar5 != -1) {
        iVar2 = *piVar5;
      }
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar2);
      if (*puVar6 == 0) break;
    } while( true );
  }
LAB_036d18b8:
  puVar6 = *(uint **)(param_1 + 8);
  if (*puVar6 == 0) {
    return 0;
  }
  cVar7 = DAT_05ab4368;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      DAT_05ab436c = 0xffffffffffffffff;
      DAT_05ab4374 = 0xffffffffffffffff;
      DAT_05ab4368 = '\x01';
      DAT_05ab43bc = 0xffffffff;
      DAT_05ab437c = 0xffffffffffffffff;
      DAT_05ab4384 = 0xffffffffffffffff;
      _DAT_05ab438c = 0xffffffffffffffff;
      DAT_05ab4394 = 0xffffffffffffffff;
      DAT_05ab439c = 0xffffffffffffffff;
      DAT_05ab43a4 = 0xffffffffffffffff;
      DAT_05ab43ac = 0xffffffffffffffff;
      DAT_05ab43b4 = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_05ab43bc) {
        if ((ulong)DAT_05ab43bc + (long)puVar6 == 0) {
          return 0;
        }
        uVar4 = param_2 + 7;
        if (-1 < (int)param_2) {
          uVar4 = param_2;
        }
        return *(byte *)((ulong)DAT_05ab43bc + (long)puVar6 + (ulong)(uint)((int)uVar4 >> 3)) >>
               (ulong)(param_2 & 7) & 1;
      }
      if (DAT_05ab43bc != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar6;
    if ((*puVar6 == 0) || (puVar6 == puVar8)) {
      return 0;
    }
    lVar3 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar6 + (lVar3 - (long)puVar8);
    if (lVar3 == 0) break;
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    if (uVar9 == 0) {
      DAT_05ab43bc = 0xfffffffe;
      return 0;
    }
    puVar8 = (uint *)(lVar3 + 4);
    while (puVar8[-1] != 0x6a63fb6) {
      puVar8 = puVar8 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        DAT_05ab43bc = 0xfffffffe;
        return 0;
      }
    }
    DAT_05ab43bc = 0;
    if (*puVar8 != 0xffffffff) {
      DAT_05ab43bc = *puVar8;
    }
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

