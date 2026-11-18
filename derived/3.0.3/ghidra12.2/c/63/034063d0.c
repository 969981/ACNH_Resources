
void FUN_034063d0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  long *plVar10;
  
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 != 0) {
    uVar7 = param_1[0x28];
    uVar1 = param_1[8];
    if ((-1 < (int)uVar7) && ((int)uVar7 < (int)uVar1)) {
      uVar2 = *param_1;
      iVar5 = 0;
      if (uVar2 != 0) {
        iVar5 = (int)uVar7 / (int)uVar2;
      }
      uVar3 = uVar7 - iVar5 * uVar2;
      if (uVar3 < uVar2) {
        puVar9 = *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar3 * 8);
      }
      else {
        puVar9 = (uint *)0x0;
      }
      uVar8 = (ulong)*puVar9;
      if (0 < (int)*puVar9) {
        plVar10 = *(long **)(puVar9 + 2);
        do {
          if (*plVar10 == lVar6) {
            return;
          }
          plVar10 = plVar10 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    uVar2 = uVar7 - 1;
    if ((0 < (int)uVar7) && ((int)uVar7 <= (int)uVar1)) {
      uVar3 = *param_1;
      iVar5 = 0;
      if (uVar3 != 0) {
        iVar5 = (int)uVar2 / (int)uVar3;
      }
      uVar4 = uVar2 - iVar5 * uVar3;
      if (uVar4 < uVar3) {
        puVar9 = *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar4 * 8);
      }
      else {
        puVar9 = (uint *)0x0;
      }
      uVar8 = (ulong)*puVar9;
      if (0 < (int)*puVar9) {
        plVar10 = *(long **)(puVar9 + 2);
        do {
          if (*plVar10 == lVar6) {
            if (((byte)param_1[0x2a] >> 2 & 1) != 0) {
              param_1[0x28] = uVar2;
              lVar6 = *(long *)(param_2 + 8);
              uVar7 = uVar2;
            }
            break;
          }
          plVar10 = plVar10 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    if ((-2 < (int)uVar7) && (uVar7 = uVar7 + 1, (int)uVar7 < (int)uVar1)) {
      uVar1 = *param_1;
      iVar5 = 0;
      if (uVar1 != 0) {
        iVar5 = (int)uVar7 / (int)uVar1;
      }
      uVar2 = uVar7 - iVar5 * uVar1;
      if (uVar2 < uVar1) {
        puVar9 = *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar2 * 8);
      }
      else {
        puVar9 = (uint *)0x0;
      }
      uVar8 = (ulong)*puVar9;
      if (0 < (int)*puVar9) {
        plVar10 = *(long **)(puVar9 + 2);
        do {
          if (*plVar10 == lVar6) {
            if (lVar6 == 0) {
              return;
            }
            if (((byte)param_1[0x2a] >> 3 & 1) == 0) {
              return;
            }
            param_1[0x28] = uVar7;
            return;
          }
          plVar10 = plVar10 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}

