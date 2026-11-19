
void FUN_03beb8c0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if ((char)param_1[0xf] != '\0') {
    puVar3 = (uint *)(param_1 + 0xa7);
    if ((char)param_1[0x12d] != '\0') {
      puVar3 = (uint *)(param_1 + 0x21);
    }
    if ((*puVar3 & 0x8004ef) != 0) {
      plVar7 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
      (**(code **)(*plVar7 + 0x10))();
      if ((long *)param_1[3] != param_1 + 2) {
        lVar13 = (long)*(int *)((long)param_1 + 0x24);
        lVar14 = param_1[3] - lVar13;
        do {
          if (*(long *)(lVar14 + 0x28) != lVar14 + 0x20) {
            lVar15 = (long)*(int *)(lVar14 + 0x34);
            lVar11 = *(long *)(lVar14 + 0x28) - lVar15;
            do {
              FUN_03bf4e8c(lVar11);
              lVar11 = *(long *)(lVar11 + lVar15 + 8) - lVar15;
            } while (lVar11 != (lVar14 + 0x20) - lVar15);
          }
          lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
        } while (lVar14 != (long)(param_1 + 2) - lVar13);
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar7 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
    (**(code **)(*plVar7 + 0x10))();
    if ((int)param_1[0x12] != 0) {
      plVar12 = (long *)param_1[0x13];
      plVar5 = plVar12 + (int)param_1[0x12];
      do {
        lVar14 = *plVar12;
        if (*(long *)(lVar14 + 0x28) != lVar14 + 0x20) {
          lVar11 = (long)*(int *)(lVar14 + 0x34);
          lVar13 = *(long *)(lVar14 + 0x28) - lVar11;
          do {
            if ((*(byte *)(lVar13 + 0xd8) >> 1 & 1) == 0) {
              plVar1 = (long *)(lVar13 + 0x88);
              plVar4 = plVar1 + *(uint *)(lVar13 + 0x80);
              if (1 < *(uint *)(lVar13 + 0x80)) {
                plVar4 = plVar1;
              }
              if ((*plVar4 != 0) && (uVar6 = *(uint *)(*plVar4 + 0x50), 0 < (int)uVar6)) {
                uVar10 = 0;
                do {
                  plVar4 = plVar1 + *(uint *)(lVar13 + 0x80);
                  if (1 < *(uint *)(lVar13 + 0x80)) {
                    plVar4 = plVar1;
                  }
                  uVar2 = uVar10;
                  if (*(uint *)(*plVar4 + 0x50) <= uVar10) {
                    uVar2 = 0;
                  }
                  puVar8 = *(undefined8 **)(*(long *)(*plVar4 + 0x58) + (ulong)uVar2 * 8);
                  if (puVar8 != (undefined8 *)0x0) {
                    (**(code **)*puVar8)();
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar6 != uVar10);
              }
            }
            lVar13 = *(long *)(lVar13 + lVar11 + 8) - lVar11;
          } while (lVar13 != (lVar14 + 0x20) - lVar11);
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar5);
    }
    if (*(char *)((long)param_1 + 0x7a) != '\0') {
      if ((long *)param_1[3] != param_1 + 2) {
        lVar13 = (long)*(int *)((long)param_1 + 0x24);
        lVar14 = param_1[3] - lVar13;
        do {
          if (*(long *)(lVar14 + 0x28) != lVar14 + 0x20) {
            lVar11 = (long)*(int *)(lVar14 + 0x34);
            plVar12 = (long *)(*(long *)(lVar14 + 0x28) - lVar11);
            do {
              if ((*(byte *)(plVar12 + 0x1b) >> 1 & 1) == 0) {
                lVar15 = (**(code **)(**(long **)(plVar12[6] + 0x18) + 0x20))();
                if ((lVar15 != 0) && (*(char *)(lVar15 + 0x78) != '\0')) {
                  plVar5 = plVar12 + 0x11 + *(uint *)(plVar12 + 0x10);
                  if (1 < *(uint *)(plVar12 + 0x10)) {
                    plVar5 = plVar12 + 0x11;
                  }
                  lVar15 = *plVar5;
                  if ((lVar15 != 0) && (*(int *)(lVar15 + 0x68) != 0)) {
                    lVar9 = (long)*(int *)(lVar15 + 0x68) << 3;
                    puVar8 = *(undefined8 **)(lVar15 + 0x70);
                    do {
                      (*(code *)**(undefined8 **)*puVar8)();
                      lVar9 = lVar9 + -8;
                      puVar8 = puVar8 + 1;
                    } while (lVar9 != 0);
                  }
                }
                if ((((*(byte *)(plVar12 + 0x1b) >> 1 & 1) == 0) &&
                    (lVar15 = (**(code **)(**(long **)(plVar12[6] + 0x18) + 0x20))(), lVar15 != 0))
                   && (*(char *)(lVar15 + 0x78) != '\0')) {
                  (**(code **)(*plVar12 + 0x28))(plVar12);
                  plVar12[0xd] = 0;
                  plVar12[0xe] = 0;
                  *(byte *)(plVar12 + 0x1b) = *(byte *)(plVar12 + 0x1b) & 0xfb;
                }
              }
              plVar12 = (long *)(*(long *)((long)plVar12 + lVar11 + 8) - lVar11);
            } while (plVar12 != (long *)((lVar14 + 0x20) - lVar11));
          }
          lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
        } while (lVar14 != (long)(param_1 + 2) - lVar13);
      }
    }
    (**(code **)(*plVar7 + 0x18))();
    if (param_1[0xe] != 0) {
      FUN_03be7370();
    }
    *(int *)(param_1 + 0x1a) = (int)param_1[0x1a] + 1;
  }
  return;
}

