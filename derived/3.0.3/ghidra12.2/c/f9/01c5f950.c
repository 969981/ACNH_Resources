
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_01c5f950(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  ulong uVar6;
  uint *puVar7;
  
  puVar4 = *(uint **)(param_1 + 8);
  if ((puVar4 == (uint *)0x0) || (*puVar4 == 0)) {
    return 0xfffe;
  }
  cVar5 = DAT_0534f430;
  while( true ) {
    if (cVar5 == '\0') {
      cVar5 = '\x01';
      DAT_0534f434 = 0xffffffffffffffff;
      DAT_0534f43c = 0xffffffffffffffff;
      DAT_0534f430 = '\x01';
      DAT_0534f444 = -1;
      DAT_0534f44c = 0xffffffffffffffff;
      _DAT_0534f454 = 0xffffffffffffffff;
      DAT_0534f45c = 0xffffffffffffffff;
      DAT_0534f464 = 0xffffffffffffffff;
      DAT_0534f46c = 0xffffffffffffffff;
    }
    else {
      uVar6 = (ulong)DAT_0534f444._4_4_;
      if (-1 < DAT_0534f444) {
        if ((undefined2 *)(uVar6 + (long)puVar4) == (undefined2 *)0x0) {
          return 0xfffe;
        }
        return *(undefined2 *)(uVar6 + (long)puVar4);
      }
      if (DAT_0534f444._4_4_ != 0xffffffff) {
        return 0xfffe;
      }
    }
    puVar7 = (uint *)(ulong)*puVar4;
    if (*puVar4 == 0) {
      return 0xfffe;
    }
    if (puVar4 == puVar7) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar4 + (10 - (long)puVar7)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar4 + (lVar2 - (long)puVar7);
    if (lVar2 == 0) {
      return 0xfffe;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar7));
    DAT_0534f444 = CONCAT44(0xfffffffe,(undefined4)DAT_0534f444);
    if (uVar6 == 0) {
      return 0xfffe;
    }
    piVar3 = (int *)(lVar2 + 4);
    while (piVar3[-1] != -0x7ec0fc35) {
      piVar3 = piVar3 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0xfffe;
      }
    }
    iVar1 = 0;
    if (*piVar3 != -1) {
      iVar1 = *piVar3;
    }
    DAT_0534f444 = CONCAT44(iVar1,(undefined4)DAT_0534f444);
    if (*puVar4 == 0) {
      return 0xfffe;
    }
  }
  return 0xfffe;
}

