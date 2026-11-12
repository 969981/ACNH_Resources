
undefined1 FUN_007db050(uint *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint *puVar6;
  int *piVar7;
  
  if (*param_1 != 0) {
    cVar5 = DAT_04cb2538;
    do {
      if (cVar5 == '\0') {
        cVar5 = '\x01';
        DAT_04cb253c = 0xffffffffffffffff;
        DAT_04cb2544 = 0xffffffffffffffff;
        DAT_04cb2538 = '\x01';
        DAT_04cb257c = 0xffffffffffffffff;
        DAT_04cb2584 = 0xffffffff;
        DAT_04cb254c = 0xffffffffffffffff;
        DAT_04cb2554 = 0xffffffffffffffff;
        DAT_04cb255c = 0xffffffffffffffff;
        DAT_04cb2564 = 0xffffffffffffffff;
        DAT_04cb256c = 0xffffffffffffffff;
        DAT_04cb2574 = 0xffffffffffffffff;
      }
      else {
        if (-1 < (int)DAT_04cb2564) {
          puVar1 = (undefined1 *)((DAT_04cb2564 & 0xffffffff) + (long)param_1);
          if (puVar1 == (undefined1 *)0x0) {
            return 0;
          }
          return *puVar1;
        }
        if ((int)DAT_04cb2564 != -1) {
          return 0;
        }
      }
      puVar6 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if (param_1 == puVar6) {
        return 0;
      }
      lVar3 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_1 + (lVar3 - (long)puVar6);
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      DAT_04cb2564 = CONCAT44(DAT_04cb2564._4_4_,0xfffffffe);
      if (uVar4 == 0) {
        return 0;
      }
      piVar7 = (int *)(lVar3 + 4);
      while (piVar7[-1] != 0x638671f9) {
        piVar7 = piVar7 + 2;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          return 0;
        }
      }
      iVar2 = 0;
      if (*piVar7 != -1) {
        iVar2 = *piVar7;
      }
      DAT_04cb2564 = CONCAT44(DAT_04cb2564._4_4_,iVar2);
    } while (*param_1 != 0);
  }
  return 0;
}

