
byte FUN_01c558a0(long param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  char cVar6;
  uint *puVar7;
  ulong uVar8;
  
  puVar5 = *(uint **)(param_1 + 8);
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
    return 0;
  }
  cVar6 = DAT_0534e328;
  while( true ) {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      DAT_0534e32c = 0xffffffffffffffff;
      DAT_0534e334 = 0xffffffffffffffff;
      DAT_0534e328 = '\x01';
      DAT_0534e33c = 0xffffffffffffffff;
      DAT_0534e344 = -1;
      DAT_0534e34c = 0xffffffffffffffff;
      DAT_0534e354 = 0xffffffffffffffff;
    }
    else {
      if (-1 < DAT_0534e344) {
        if ((byte *)((ulong)DAT_0534e344._4_4_ + (long)puVar5) == (byte *)0x0) {
          return 0;
        }
        bVar3 = *(byte *)((ulong)DAT_0534e344._4_4_ + (long)puVar5);
        if (bVar3 < 0x11) {
          return bVar3;
        }
        return 0;
      }
      if (DAT_0534e344._4_4_ != 0xffffffff) {
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
    DAT_0534e344 = CONCAT44(0xfffffffe,(undefined4)DAT_0534e344);
    if (uVar8 == 0) {
      return 0;
    }
    piVar4 = (int *)(lVar2 + 4);
    while (piVar4[-1] != 0x4556b457) {
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
    DAT_0534e344 = CONCAT44(iVar1,(undefined4)DAT_0534e344);
    if (*puVar5 == 0) {
      return 0;
    }
  }
  return 0;
}

