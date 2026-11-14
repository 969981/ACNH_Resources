
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01c5f3c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 == (uint *)0x0) {
    return PTR_DAT_04c48628;
  }
  if (*puVar6 != 0) {
    cVar7 = DAT_0534f430;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        DAT_0534f434 = 0xffffffffffffffff;
        DAT_0534f43c = 0xffffffffffffffff;
        DAT_0534f430 = '\x01';
        DAT_0534f444 = 0xffffffffffffffff;
        DAT_0534f44c = 0xffffffffffffffff;
        _DAT_0534f454 = -1;
        DAT_0534f45c = 0xffffffffffffffff;
        DAT_0534f464 = 0xffffffffffffffff;
        DAT_0534f46c = 0xffffffffffffffff;
      }
      else {
        if (-1 < _DAT_0534f454) {
          puVar9 = (undefined *)((ulong)_DAT_0534f458 + (long)puVar6);
          goto LAB_01c5f4ac;
        }
        if (_DAT_0534f458 != 0xffffffff) break;
      }
      puVar4 = (uint *)(ulong)*puVar6;
      puVar9 = (undefined *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_01c5f4ac;
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar4);
      if (lVar2 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
      _DAT_0534f454 = CONCAT44(0xfffffffe,DAT_0534f454);
      puVar9 = (undefined *)0x0;
      if (uVar8 == 0) goto LAB_01c5f4ac;
      piVar5 = (int *)(lVar2 + 4);
      while (piVar5[-1] != 0x7215b154) {
        piVar5 = piVar5 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          puVar9 = (undefined *)0x0;
          goto LAB_01c5f4ac;
        }
      }
      iVar1 = 0;
      if (*piVar5 != -1) {
        iVar1 = *piVar5;
      }
      _DAT_0534f454 = CONCAT44(iVar1,DAT_0534f454);
    } while (*puVar6 != 0);
  }
  puVar9 = (undefined *)0x0;
LAB_01c5f4ac:
  puVar3 = PTR_DAT_04c48620;
  if (puVar9 != (undefined *)0x0) {
    puVar3 = puVar9;
  }
  return puVar3;
}

