
long FUN_0052c080(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x20);
    plVar6 = *(long **)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
      uVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar2,8,*(undefined8 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar4;
    }
    uVar7 = *(uint *)(param_1 + 0x20);
    iVar8 = uVar7 - uVar2;
    if (0 < iVar8) {
      plVar9 = (long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar7 * 8);
      do {
        plVar9 = plVar9 + -1;
        if (*plVar9 != 0) {
          FUN_004435c0();
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      uVar7 = *(uint *)(param_1 + 0x20);
    }
    plVar9 = *(long **)(param_1 + 0x18);
    uVar1 = uVar7;
    if ((int)uVar2 <= (int)uVar7) {
      uVar1 = uVar2;
    }
    if ((plVar9 != plVar6) && (0 < (int)uVar1)) {
      uVar10 = (ulong)uVar1;
      plVar11 = plVar6;
      do {
        if (*plVar11 == 0) {
          lVar5 = *plVar9;
          *plVar9 = 0;
        }
        else {
          FUN_004435a0();
          lVar5 = *plVar9;
          *plVar9 = *plVar11;
        }
        if (lVar5 != 0) {
          FUN_004435c0();
        }
        uVar10 = uVar10 - 1;
        plVar9 = plVar9 + 1;
        plVar11 = plVar11 + 1;
      } while (uVar10 != 0);
      plVar9 = *(long **)(param_1 + 0x18);
    }
    if (0 < (int)(uVar2 - uVar1)) {
      uVar3 = ~uVar2;
      if ((int)uVar3 < (int)~uVar7) {
        uVar3 = ~uVar7;
      }
      iVar8 = uVar2 + uVar3 + 1;
      plVar6 = plVar6 + (int)uVar1;
      plVar9 = plVar9 + (int)uVar1;
      do {
        lVar5 = *plVar6;
        *plVar9 = lVar5;
        if (lVar5 != 0) {
          FUN_004435a0();
        }
        iVar8 = iVar8 + -1;
        plVar6 = plVar6 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar8 != 0);
    }
    *(uint *)(param_1 + 0x20) = uVar2;
    if (param_2 != param_1) {
      plVar6 = *(long **)(param_2 + 0x28);
      uVar2 = *(uint *)(param_2 + 0x30);
      if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < (int)uVar2) {
        uVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar2,8,*(undefined8 *)(param_1 + 0x28),
                             *(undefined4 *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0x28) = uVar4;
      }
      uVar7 = *(uint *)(param_1 + 0x30);
      iVar8 = uVar7 - uVar2;
      if (0 < iVar8) {
        plVar9 = (long *)(*(long *)(param_1 + 0x28) + (long)(int)uVar7 * 8);
        do {
          plVar9 = plVar9 + -1;
          if (*plVar9 != 0) {
            FUN_004435c0();
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar7 = *(uint *)(param_1 + 0x30);
      }
      plVar9 = *(long **)(param_1 + 0x28);
      uVar1 = uVar7;
      if ((int)uVar2 <= (int)uVar7) {
        uVar1 = uVar2;
      }
      if ((plVar9 != plVar6) && (0 < (int)uVar1)) {
        uVar10 = (ulong)uVar1;
        plVar11 = plVar6;
        do {
          if (*plVar11 == 0) {
            lVar5 = *plVar9;
            *plVar9 = 0;
          }
          else {
            FUN_004435a0();
            lVar5 = *plVar9;
            *plVar9 = *plVar11;
          }
          if (lVar5 != 0) {
            FUN_004435c0();
          }
          uVar10 = uVar10 - 1;
          plVar9 = plVar9 + 1;
          plVar11 = plVar11 + 1;
        } while (uVar10 != 0);
        plVar9 = *(long **)(param_1 + 0x28);
      }
      if (0 < (int)(uVar2 - uVar1)) {
        uVar3 = ~uVar2;
        if ((int)uVar3 < (int)~uVar7) {
          uVar3 = ~uVar7;
        }
        iVar8 = uVar2 + uVar3 + 1;
        plVar6 = plVar6 + (int)uVar1;
        plVar9 = plVar9 + (int)uVar1;
        do {
          lVar5 = *plVar6;
          *plVar9 = lVar5;
          if (lVar5 != 0) {
            FUN_004435a0();
          }
          iVar8 = iVar8 + -1;
          plVar6 = plVar6 + 1;
          plVar9 = plVar9 + 1;
        } while (iVar8 != 0);
      }
      *(uint *)(param_1 + 0x30) = uVar2;
    }
  }
  return param_1;
}

