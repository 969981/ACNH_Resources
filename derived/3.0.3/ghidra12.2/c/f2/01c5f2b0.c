
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_01c5f2b0(long param_1)

{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  char cVar6;
  uint *puVar7;
  ulong uVar8;
  
  puVar5 = *(uint **)(param_1 + 8);
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return 0;
  }
  cVar6 = DAT_0534f430;
  while( true ) {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      DAT_0534f434 = 0xffffffffffffffff;
      DAT_0534f43c = 0xffffffffffffffff;
      DAT_0534f430 = '\x01';
      DAT_0534f444 = 0xffffffffffffffff;
      DAT_0534f44c = 0xffffffffffffffff;
      _DAT_0534f454 = 0xffffffffffffffff;
      DAT_0534f45c = 0xffffffffffffffff;
      DAT_0534f464 = 0xffffffffffffffff;
      DAT_0534f46c = 0xffffffffffffffff;
    }
    else {
      if (-1 < DAT_0534f454) {
        puVar1 = (undefined2 *)((_DAT_0534f454 & 0xffffffff) + (long)puVar5);
        if (puVar1 == (undefined2 *)0x0) {
          return 0;
        }
        return *puVar1;
      }
      if (DAT_0534f454 != -1) {
        return 0;
      }
    }
    puVar7 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0;
    }
    if (puVar5 == puVar7) break;
    lVar3 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar5 + (lVar3 - (long)puVar7);
    if (lVar3 == 0) {
      return 0;
    }
    uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
    _DAT_0534f454 = CONCAT44(_DAT_0534f458,0xfffffffe);
    if (uVar8 == 0) {
      return 0;
    }
    piVar4 = (int *)(lVar3 + 4);
    while (piVar4[-1] != 0x54706054) {
      piVar4 = piVar4 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    iVar2 = 0;
    if (*piVar4 != -1) {
      iVar2 = *piVar4;
    }
    _DAT_0534f454 = CONCAT44(_DAT_0534f458,iVar2);
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

