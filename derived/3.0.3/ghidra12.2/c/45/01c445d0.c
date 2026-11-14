
bool FUN_01c445d0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  uint *puVar5;
  ulong uVar6;
  
  uVar2 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x200);
  if (((*(uint *)(param_1 + 0x1e0) <= uVar2) ||
      (puVar3 = *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar2 * 8), puVar3 == (uint *)0x0
      )) || (*puVar3 == 0)) {
    return false;
  }
  cVar4 = DAT_0534cd78;
  while( true ) {
    if (cVar4 == '\0') {
      cVar4 = '\x01';
      DAT_0534cd7c = 0xffffffffffffffff;
      DAT_0534cd84 = 0xffffffffffffffff;
      DAT_0534cd78 = '\x01';
      DAT_0534cdac = 0xffffffff;
      DAT_0534cd8c = 0xffffffffffffffff;
      DAT_0534cd94 = 0xffffffffffffffff;
      DAT_0534cd9c = 0xffffffffffffffff;
      DAT_0534cda4 = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_0534cdac) {
        if ((char *)((ulong)DAT_0534cdac + (long)puVar3) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)DAT_0534cdac + (long)puVar3) != '\0';
      }
      if (DAT_0534cdac != 0xffffffff) {
        return false;
      }
    }
    puVar5 = (uint *)(ulong)*puVar3;
    if (*puVar3 == 0) {
      return false;
    }
    if (puVar3 == puVar5) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar3 + (10 - (long)puVar5)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar3 + (lVar1 - (long)puVar5);
    if (lVar1 == 0) {
      return false;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar3 + (8 - (long)puVar5));
    if (uVar6 == 0) {
      DAT_0534cdac = 0xfffffffe;
      return false;
    }
    puVar5 = (uint *)(lVar1 + 4);
    while (puVar5[-1] != 0xc1bb7d2d) {
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        DAT_0534cdac = 0xfffffffe;
        return false;
      }
    }
    DAT_0534cdac = 0;
    if (*puVar5 != 0xffffffff) {
      DAT_0534cdac = *puVar5;
    }
    if (*puVar3 == 0) {
      return false;
    }
  }
  return false;
}

