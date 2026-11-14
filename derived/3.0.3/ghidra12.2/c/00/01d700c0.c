
long FUN_01d700c0(long param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(param_1 + 0x28);
    lVar3 = (long)*(int *)(param_1 + 0x20) * 8;
    do {
      lVar3 = lVar3 + -8;
      lVar13 = *plVar1;
      if (*param_2 == *(ulong *)(lVar13 + 0x20)) {
        puVar14 = *(uint **)(param_1 + 0x38);
        if (puVar14 == (uint *)0x0) {
          return lVar13;
        }
        uVar5 = *puVar14;
        if ((int)uVar5 < 1) {
          return lVar13;
        }
        plVar1 = *(long **)(puVar14 + 2);
        lVar3 = 0;
        sVar4 = (long)(int)uVar5 * 8;
        while (sVar4 = sVar4 - 8, *plVar1 != lVar13) {
          lVar3 = lVar3 + -1;
          plVar1 = plVar1 + 1;
          if ((ulong)uVar5 + lVar3 == 0) {
            return lVar13;
          }
        }
        iVar2 = (int)lVar3;
        if (iVar2 == 1) {
          return lVar13;
        }
        if ((-1 < -iVar2) && (-iVar2 < (int)uVar5)) {
          if (1 - iVar2 < (int)uVar5) {
            memmove(plVar1,plVar1 + 1,sVar4);
            uVar5 = *puVar14;
          }
          *puVar14 = uVar5 - 1;
          puVar14 = *(uint **)(param_1 + 0x38);
          uVar5 = *puVar14;
        }
        if ((int)uVar5 < (int)puVar14[1]) {
          *(long *)(*(long *)(puVar14 + 2) + (long)(int)uVar5 * 8) = lVar13;
          *puVar14 = *puVar14 + 1;
          return lVar13;
        }
        return lVar13;
      }
      plVar1 = plVar1 + 1;
    } while (*param_2 <= *(ulong *)(lVar13 + 0x20) && lVar3 != 0);
  }
  puVar14 = *(uint **)(param_1 + 0x38);
  if (puVar14 != (uint *)0x0) {
    uVar5 = *puVar14;
    if (uVar5 != 0) {
      plVar1 = *(long **)(puVar14 + 2);
      lVar3 = *plVar1;
      if (0 < (int)uVar5) {
        lVar13 = 0;
        sVar4 = (long)(int)uVar5 * 8;
        do {
          sVar4 = sVar4 - 8;
          if (*plVar1 == lVar3) {
            iVar2 = (int)lVar13;
            if (iVar2 != 1) {
              if ((-1 < -iVar2) && (-iVar2 < (int)uVar5)) {
                if (1 - iVar2 < (int)uVar5) {
                  memmove(plVar1,plVar1 + 1,sVar4);
                  uVar5 = *puVar14;
                }
                *puVar14 = uVar5 - 1;
                puVar14 = *(uint **)(param_1 + 0x38);
                uVar5 = *puVar14;
              }
              if ((int)uVar5 < (int)puVar14[1]) {
                *(long *)(*(long *)(puVar14 + 2) + (long)(int)uVar5 * 8) = lVar3;
                *puVar14 = *puVar14 + 1;
              }
            }
            break;
          }
          lVar13 = lVar13 + -1;
          plVar1 = plVar1 + 1;
        } while ((ulong)uVar5 + lVar13 != 0);
      }
      goto LAB_01d7016c;
    }
  }
  lVar3 = 0;
LAB_01d7016c:
  FUN_01d713a0(lVar3);
  *(ulong *)(lVar3 + 0x20) = *param_2;
  uVar5 = *(int *)(param_1 + 0x20) - 1;
  if (uVar5 != 0 && 0 < *(int *)(param_1 + 0x20)) {
    lVar13 = *(long *)(param_1 + 0x28);
    uVar7 = 0;
    do {
      if ((int)uVar5 <= (int)uVar7) {
        return lVar3;
      }
      lVar8 = *(long *)(lVar13 + (ulong)uVar7 * 8);
      uVar6 = (ulong)uVar7;
      if ((uVar5 - uVar7 & 1) == 0) {
        lVar10 = lVar8;
        uVar9 = uVar6;
      }
      else {
        uVar9 = uVar6 + 1;
        lVar10 = *(long *)(lVar13 + uVar9 * 8);
        if (*(ulong *)(lVar8 + 0x20) < *(ulong *)(lVar10 + 0x20)) {
          *(long *)(lVar13 + uVar9 * 8) = lVar8;
          *(long *)(lVar13 + uVar6 * 8) = lVar10;
          lVar10 = lVar8;
        }
      }
      uVar11 = (ulong)uVar5;
      uVar5 = uVar7;
      if (~uVar6 + uVar11 != 0) {
        plVar1 = (long *)(lVar13 + 8 + uVar9 * 8);
        do {
          lVar8 = *plVar1;
          if (*(ulong *)(lVar10 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
            plVar1[-1] = lVar8;
            *plVar1 = lVar10;
            uVar5 = (uint)uVar9;
          }
          else {
            lVar10 = lVar8;
          }
          lVar8 = plVar1[1];
          if (*(ulong *)(lVar10 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
            uVar5 = (uint)uVar9 + 1;
            *plVar1 = lVar8;
            plVar1[1] = lVar10;
          }
          else {
            lVar10 = lVar8;
          }
          uVar9 = uVar9 + 2;
          plVar1 = plVar1 + 2;
        } while (uVar11 != uVar9);
      }
      if ((int)uVar5 <= (int)uVar7) {
        return lVar3;
      }
      lVar8 = *(long *)(lVar13 + (ulong)uVar5 * 8);
      uVar9 = (ulong)uVar5;
      uVar7 = uVar5;
      do {
        lVar10 = lVar13 + uVar9 * 8;
        lVar12 = *(long *)(lVar10 + -8);
        if (*(ulong *)(lVar12 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
          uVar7 = (uint)uVar9;
          *(long *)(lVar10 + -8) = lVar8;
          *(long *)(lVar13 + uVar9 * 8) = lVar12;
        }
        else {
          lVar8 = lVar12;
        }
        uVar9 = uVar9 - 1;
      } while ((long)uVar6 < (long)uVar9);
    } while (uVar7 != uVar5);
  }
  return lVar3;
}

