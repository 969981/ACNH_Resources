
void FUN_01d6c790(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  size_t __n;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  uint *puVar13;
  
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    lVar4 = (long)*(int *)(param_1 + 8) << 3;
    do {
      if (*(long *)*puVar3 == *param_2) {
        return;
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  puVar13 = *(uint **)(param_1 + 0x20);
  if (puVar13 != (uint *)0x0) {
    uVar5 = *puVar13;
    if (uVar5 != 0) {
      puVar3 = *(undefined8 **)(puVar13 + 2);
      plVar12 = (long *)*puVar3;
      if (0 < (int)uVar5) {
        lVar4 = 0;
        __n = (long)(int)uVar5 * 8;
        do {
          __n = __n - 8;
          if ((long *)*puVar3 == plVar12) {
            iVar2 = (int)lVar4;
            if (iVar2 != 1) {
              if ((-1 < -iVar2) && (-iVar2 < (int)uVar5)) {
                if (1 - iVar2 < (int)uVar5) {
                  memmove(puVar3,puVar3 + 1,__n);
                  uVar5 = *puVar13;
                }
                *puVar13 = uVar5 - 1;
                puVar13 = *(uint **)(param_1 + 0x20);
                uVar5 = *puVar13;
              }
              if ((int)uVar5 < (int)puVar13[1]) {
                *(long **)(*(long *)(puVar13 + 2) + (long)(int)uVar5 * 8) = plVar12;
                *puVar13 = *puVar13 + 1;
              }
            }
            break;
          }
          lVar4 = lVar4 + -1;
          puVar3 = puVar3 + 1;
        } while ((ulong)uVar5 + lVar4 != 0);
      }
      goto LAB_01d6c838;
    }
  }
  plVar12 = (long *)0x0;
LAB_01d6c838:
  if ((*plVar12 == 0) && (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
    *(long **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = plVar12;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *plVar12 = *param_2;
  if (1 < *(int *)(param_1 + 8)) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar7 = 0;
    uVar5 = *(int *)(param_1 + 8) - 1;
    do {
      if ((int)uVar5 <= (int)uVar7) {
        return;
      }
      puVar8 = *(ulong **)(lVar4 + (ulong)uVar7 * 8);
      uVar6 = (ulong)uVar7;
      if ((uVar5 - uVar7 & 1) == 0) {
        puVar11 = puVar8;
        uVar9 = uVar6;
      }
      else {
        uVar9 = uVar6 + 1;
        puVar11 = *(ulong **)(lVar4 + uVar9 * 8);
        if (*puVar11 < *puVar8) {
          *(ulong **)(lVar4 + uVar9 * 8) = puVar8;
          *(ulong **)(lVar4 + uVar6 * 8) = puVar11;
          puVar11 = puVar8;
        }
      }
      uVar10 = (ulong)uVar5;
      uVar5 = uVar7;
      if (~uVar6 + uVar10 != 0) {
        puVar3 = (undefined8 *)(lVar4 + 8 + uVar9 * 8);
        do {
          puVar8 = (ulong *)*puVar3;
          if (*puVar8 < *puVar11) {
            puVar3[-1] = puVar8;
            *puVar3 = puVar11;
            uVar5 = (uint)uVar9;
          }
          else {
            puVar11 = puVar8;
          }
          puVar8 = (ulong *)puVar3[1];
          if (*puVar8 < *puVar11) {
            uVar5 = (uint)uVar9 + 1;
            *puVar3 = puVar8;
            puVar3[1] = puVar11;
          }
          else {
            puVar11 = puVar8;
          }
          uVar9 = uVar9 + 2;
          puVar3 = puVar3 + 2;
        } while (uVar10 != uVar9);
      }
      if ((int)uVar5 <= (int)uVar7) {
        return;
      }
      puVar8 = *(ulong **)(lVar4 + (ulong)uVar5 * 8);
      uVar9 = (ulong)uVar5;
      uVar7 = uVar5;
      do {
        lVar1 = lVar4 + uVar9 * 8;
        puVar11 = *(ulong **)(lVar1 + -8);
        if (*puVar8 < *puVar11) {
          uVar7 = (uint)uVar9;
          *(ulong **)(lVar1 + -8) = puVar8;
          *(ulong **)(lVar4 + uVar9 * 8) = puVar11;
        }
        else {
          puVar8 = puVar11;
        }
        uVar9 = uVar9 - 1;
      } while ((long)uVar6 < (long)uVar9);
    } while (uVar7 != uVar5);
  }
  return;
}

