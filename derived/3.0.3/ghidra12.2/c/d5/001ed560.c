
undefined8 FUN_001ed560(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = param_1 + 1;
  plVar2 = (long *)*plVar8;
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)(param_2 + 8);
    if (lVar3 == 0) {
      plVar6 = plVar2;
      do {
        plVar9 = plVar6;
        plVar6 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    else {
      plVar6 = plVar2;
      plVar4 = plVar8;
      do {
        uVar7 = 0;
        if (plVar6[5] != 0) {
          uVar7 = *(ulong *)(plVar6[5] + 0x10);
        }
        plVar9 = plVar6;
        if (uVar7 < *(ulong *)(lVar3 + 0x10)) {
          plVar9 = plVar4;
          plVar6 = plVar6 + 1;
        }
        plVar6 = (long *)*plVar6;
        plVar4 = plVar9;
      } while (plVar6 != (long *)0x0);
    }
    if (plVar9 == plVar8) {
      return 0;
    }
    uVar7 = 0;
    if (lVar3 != 0) {
      uVar7 = *(ulong *)(lVar3 + 0x10);
    }
    uVar5 = 0;
    if (plVar9[5] != 0) {
      uVar5 = *(ulong *)(plVar9[5] + 0x10);
    }
    if (uVar5 <= uVar7) {
      plVar6 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        plVar6 = plVar9;
        do {
          plVar4 = (long *)plVar6[2];
          bVar1 = (long *)*plVar4 != plVar6;
          plVar6 = plVar4;
        } while (bVar1);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar9) {
        *param_1 = plVar4;
      }
      param_1[2] = param_1[2] + -1;
      FUN_00192390(plVar2,plVar9);
      FUN_001ec5a0(plVar8,plVar9 + 4);
      FUN_00187e4c(plVar9);
      return 1;
    }
  }
  return 0;
}

