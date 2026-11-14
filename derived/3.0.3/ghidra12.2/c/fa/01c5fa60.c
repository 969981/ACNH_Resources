
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_01c5fa60(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  char cVar6;
  ulong uVar7;
  uint *puVar8;
  
  puVar5 = *(uint **)(param_1 + 8);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  if (*puVar5 == 0) {
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
      DAT_0534f46c = -1;
    }
    else {
      uVar7 = (ulong)DAT_0534f46c._4_4_;
      if (-1 < DAT_0534f46c) {
        if (uVar7 + (long)puVar5 == 0) {
          return 0;
        }
        uVar2 = param_2 + 7;
        if (-1 < (int)param_2) {
          uVar2 = param_2;
        }
        return *(byte *)(uVar7 + (long)puVar5 + (ulong)(uint)((int)uVar2 >> 3)) >>
               (ulong)(param_2 & 7) & 1;
      }
      if (DAT_0534f46c._4_4_ != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar5;
    if ((*puVar5 == 0) || (puVar5 == puVar8)) {
      return 0;
    }
    lVar3 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar5 + (lVar3 - (long)puVar8);
    if (lVar3 == 0) break;
    uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
    DAT_0534f46c = CONCAT44(0xfffffffe,(undefined4)DAT_0534f46c);
    if (uVar7 == 0) {
      return 0;
    }
    piVar4 = (int *)(lVar3 + 4);
    while (piVar4[-1] != -0x4ea76bef) {
      piVar4 = piVar4 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar4 != -1) {
      iVar1 = *piVar4;
    }
    DAT_0534f46c = CONCAT44(iVar1,(undefined4)DAT_0534f46c);
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

