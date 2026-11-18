
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_036ccca0(long param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  char cVar6;
  uint *puVar7;
  ulong uVar8;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return 0;
  }
  cVar6 = DAT_05ab40b0;
  while( true ) {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      DAT_05ab40b4 = 0xffffffffffffffff;
      _DAT_05ab40bc = -1;
      DAT_05ab40b0 = '\x01';
    }
    else {
      if (-1 < _DAT_05ab40bc) {
        if ((byte *)((ulong)_DAT_05ab40c0 + (long)puVar5) == (byte *)0x0) {
          return 0;
        }
        bVar3 = *(byte *)((ulong)_DAT_05ab40c0 + (long)puVar5);
        if (bVar3 < 2) {
          return bVar3;
        }
        return 0;
      }
      if (_DAT_05ab40c0 != 0xffffffff) {
        return 0;
      }
    }
    puVar7 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0;
    }
    if (puVar5 == puVar7) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar5 + (lVar2 - (long)puVar7);
    if (lVar2 == 0) {
      return 0;
    }
    uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
    _DAT_05ab40bc = CONCAT44(0xfffffffe,DAT_05ab40bc);
    if (uVar8 == 0) {
      return 0;
    }
    piVar4 = (int *)(lVar2 + 4);
    while (piVar4[-1] != 0x6ed5fed) {
      piVar4 = piVar4 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar4 != -1) {
      iVar1 = *piVar4;
    }
    _DAT_05ab40bc = CONCAT44(iVar1,DAT_05ab40bc);
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

