
long FUN_00433d50(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 0x20);
    plVar5 = *(long **)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar1) {
      uVar3 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x10,*(undefined8 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    iVar7 = uVar6 - uVar1;
    if (0 < iVar7) {
      plVar8 = (long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar6 * 0x10);
      do {
        plVar8 = plVar8 + -2;
        if (*plVar8 != 0) {
          FUN_004435c0();
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      uVar6 = *(uint *)(param_1 + 0x20);
    }
    plVar8 = *(long **)(param_1 + 0x18);
    uVar2 = uVar6;
    if ((int)uVar1 <= (int)uVar6) {
      uVar2 = uVar1;
    }
    if ((plVar8 != plVar5) && (0 < (int)uVar2)) {
      uVar9 = (ulong)uVar2;
      plVar10 = plVar5;
      do {
        if (*plVar10 == 0) {
          lVar4 = *plVar8;
          *plVar8 = 0;
        }
        else {
          FUN_004435a0();
          lVar4 = *plVar8;
          *plVar8 = *plVar10;
        }
        if (lVar4 != 0) {
          FUN_004435c0();
        }
        *(int *)(plVar8 + 1) = (int)plVar10[1];
        uVar9 = uVar9 - 1;
        plVar10 = plVar10 + 2;
        plVar8 = plVar8 + 2;
      } while (uVar9 != 0);
      plVar8 = *(long **)(param_1 + 0x18);
    }
    if (0 < (int)(uVar1 - uVar2)) {
      plVar5 = plVar5 + (long)(int)uVar2 * 2;
      plVar8 = plVar8 + (long)(int)uVar2 * 2;
      uVar2 = ~uVar1;
      if ((int)uVar2 < (int)~uVar6) {
        uVar2 = ~uVar6;
      }
      iVar7 = uVar1 + uVar2 + 1;
      do {
        lVar4 = *plVar5;
        *plVar8 = lVar4;
        if (lVar4 != 0) {
          FUN_004435a0();
        }
        *(int *)(plVar8 + 1) = (int)plVar5[1];
        iVar7 = iVar7 + -1;
        plVar5 = plVar5 + 2;
        plVar8 = plVar8 + 2;
      } while (iVar7 != 0);
    }
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  return param_1;
}

