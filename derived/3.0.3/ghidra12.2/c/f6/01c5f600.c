
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01c5f600(long param_1)

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
    return PTR_DAT_04c48648;
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
        _DAT_0534f454 = 0xffffffffffffffff;
        DAT_0534f45c = 0xffffffffffffffff;
        DAT_0534f464 = -1;
        DAT_0534f46c = 0xffffffffffffffff;
      }
      else {
        if (-1 < DAT_0534f464) {
          puVar9 = (undefined *)((ulong)DAT_0534f464._4_4_ + (long)puVar6);
          goto LAB_01c5f6ec;
        }
        if (DAT_0534f464._4_4_ != 0xffffffff) break;
      }
      puVar4 = (uint *)(ulong)*puVar6;
      puVar9 = (undefined *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_01c5f6ec;
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar4);
      if (lVar2 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
      DAT_0534f464 = CONCAT44(0xfffffffe,(undefined4)DAT_0534f464);
      puVar9 = (undefined *)0x0;
      if (uVar8 == 0) goto LAB_01c5f6ec;
      piVar5 = (int *)(lVar2 + 4);
      while (piVar5[-1] != 0xb3d1d54) {
        piVar5 = piVar5 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          puVar9 = (undefined *)0x0;
          goto LAB_01c5f6ec;
        }
      }
      iVar1 = 0;
      if (*piVar5 != -1) {
        iVar1 = *piVar5;
      }
      DAT_0534f464 = CONCAT44(iVar1,(undefined4)DAT_0534f464);
    } while (*puVar6 != 0);
  }
  puVar9 = (undefined *)0x0;
LAB_01c5f6ec:
  puVar3 = PTR_DAT_04c48640;
  if (puVar9 != (undefined *)0x0) {
    puVar3 = puVar9;
  }
  return puVar3;
}

