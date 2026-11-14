
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_01c5f840(long param_1)

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
    return 0xfffe;
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
      if (-1 < (int)DAT_0534f444) {
        puVar1 = (undefined2 *)((DAT_0534f444 & 0xffffffff) + (long)puVar5);
        if (puVar1 == (undefined2 *)0x0) {
          return 0xfffe;
        }
        return *puVar1;
      }
      if ((int)DAT_0534f444 != -1) {
        return 0xfffe;
      }
    }
    puVar7 = (uint *)(ulong)*puVar5;
    if (*puVar5 == 0) {
      return 0xfffe;
    }
    if (puVar5 == puVar7) break;
    lVar3 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar7)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar5 + (lVar3 - (long)puVar7);
    if (lVar3 == 0) {
      return 0xfffe;
    }
    uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar7));
    DAT_0534f444 = CONCAT44(DAT_0534f444._4_4_,0xfffffffe);
    if (uVar8 == 0) {
      return 0xfffe;
    }
    piVar4 = (int *)(lVar3 + 4);
    while (piVar4[-1] != -0x43a0d585) {
      piVar4 = piVar4 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0xfffe;
      }
    }
    iVar2 = 0;
    if (*piVar4 != -1) {
      iVar2 = *piVar4;
    }
    DAT_0534f444 = CONCAT44(DAT_0534f444._4_4_,iVar2);
    if (*puVar5 == 0) {
      return 0xfffe;
    }
  }
  return 0xfffe;
}

