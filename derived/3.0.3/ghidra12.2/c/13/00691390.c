
void FUN_00691390(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  uVar5 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar5) {
    uVar7 = 0;
    lVar8 = param_1 - *(int *)(param_1 + 4);
    do {
      lVar9 = param_1 + uVar7 * 0x18;
      lVar10 = *(long *)(lVar9 + 0x10);
      *(undefined8 *)(lVar9 + 0x10) = 0;
      if (0 < *(int *)(lVar9 + 0x24)) {
        lVar2 = lVar8;
        if (lVar10 != 0) {
          lVar2 = lVar10 - *(int *)(lVar9 + 0x18);
        }
        lVar10 = (long)*(int *)(param_1 + uVar7 * 0x18 + 0x20);
        lVar9 = *(int *)(lVar9 + 0x24) + lVar10;
        do {
          piVar1 = (int *)(param_1 + (long)(int)uVar5 * 0x18 + 0x10 + lVar10 * 8);
          uVar6 = 0;
          uVar4 = piVar1[1];
          plVar11 = (long *)(lVar8 + 8 + (long)*piVar1);
          do {
            if ((uVar4 >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
              lVar3 = 0;
              if (plVar11[-1] != 0) {
                lVar3 = (long)((int)plVar11[-1] - (int)lVar2);
              }
              plVar11[-1] = lVar3;
            }
            if ((uVar4 >> (ulong)(uVar6 + 1 & 0x1f) & 1) != 0) {
              lVar3 = 0;
              if (*plVar11 != 0) {
                lVar3 = (long)((int)*plVar11 - (int)lVar2);
              }
              *plVar11 = lVar3;
            }
            uVar6 = uVar6 + 2;
            plVar11 = plVar11 + 2;
          } while (uVar6 != 0x20);
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar9);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5);
  }
  return;
}

