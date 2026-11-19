
void FUN_03bf3850(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  plVar3 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x10))();
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
    lVar11 = (long)*(int *)(param_1 + 0x1c);
    lVar12 = (long)*(undefined8 **)(param_1 + 0x10) - lVar11;
    do {
      *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x30;
      if (*(long *)(lVar12 + 0x28) != 0) {
        plVar4 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar12 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
        (**(code **)(*plVar4 + 0x10))();
        if (*(long **)(lVar12 + 0x58) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + 0x58) + 0x40))();
        }
        if (*(long *)(lVar12 + 0x80) != lVar12 + 0x78) {
          lVar13 = (long)*(int *)(lVar12 + 0x8c);
          plVar10 = (long *)(*(long *)(lVar12 + 0x80) - lVar13);
          do {
            (**(code **)(*plVar10 + 0x28))(plVar10);
            plVar10 = (long *)(*(long *)((long)plVar10 + lVar13 + 8) - lVar13);
          } while (plVar10 != (long *)((lVar12 + 0x78) - lVar13));
        }
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
    } while (lVar12 != (long)puVar1 - lVar11);
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != puVar1) {
    lVar11 = (long)*(int *)(param_1 + 0x1c);
    lVar12 = (long)puVar5 - lVar11;
    do {
      FUN_03be68a0(lVar12);
      lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
    } while (lVar12 != (long)puVar1 - lVar11);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
  }
  while (puVar5 != puVar1) {
    puVar7 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar7;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 8) = param_1 + 8;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  (**(code **)(*plVar3 + 0x18))();
  plVar3 = (long *)(param_1 + 0x88) + *(uint *)(param_1 + 0x80);
  if (1 < *(uint *)(param_1 + 0x80)) {
    plVar3 = (long *)(param_1 + 0x88);
  }
  lVar12 = *plVar3;
  if (lVar12 != 0) {
    uVar6 = *(uint *)(lVar12 + 0x30);
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        if (uVar6 <= uVar8) {
          uVar9 = 0;
        }
        lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + (ulong)uVar9 * 8);
        if (lVar11 != 0) {
          *(undefined8 *)(lVar11 + 0x30) = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0;
          *(undefined4 *)(lVar11 + 0x28) = 0;
          *(undefined1 *)(lVar11 + 0x38) = 0;
          uVar6 = *(uint *)(lVar12 + 0x30);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar6);
    }
    uVar6 = *(uint *)(lVar12 + 0x40);
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        if (uVar6 <= uVar8) {
          uVar9 = 0;
        }
        lVar11 = *(long *)(*(long *)(lVar12 + 0x48) + (ulong)uVar9 * 8);
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x24) = 0;
          *(undefined1 *)(lVar11 + 0x28) = 1;
          if (*(uint **)(lVar11 + 0x10) != (uint *)0x0) {
            uVar6 = **(uint **)(lVar11 + 0x10);
            if (0 < (int)uVar6) {
              uVar9 = 0;
              if (uVar6 != 1) {
                do {
                  uVar2 = uVar9;
                  if (**(uint **)(lVar11 + 0x10) <= uVar9) {
                    uVar2 = 0;
                  }
                  *(undefined1 *)
                   (*(long *)(*(uint **)(lVar11 + 0x10) + 2) + (ulong)uVar2 * 0x28 + 0x22) = 0;
                  uVar2 = 0;
                  if (uVar9 + 1 < **(uint **)(lVar11 + 0x10)) {
                    uVar2 = uVar9 + 1;
                  }
                  uVar9 = uVar9 + 2;
                  *(undefined1 *)
                   (*(long *)(*(uint **)(lVar11 + 0x10) + 2) + (ulong)uVar2 * 0x28 + 0x22) = 0;
                } while (uVar9 != (uVar6 & 0xfffffffe));
              }
              if ((uVar6 & 1) != 0) {
                if (**(uint **)(lVar11 + 0x10) <= uVar9) {
                  uVar9 = 0;
                }
                *(undefined1 *)
                 (*(long *)(*(uint **)(lVar11 + 0x10) + 2) + (ulong)uVar9 * 0x28 + 0x22) = 0;
              }
            }
          }
          uVar6 = *(uint *)(lVar12 + 0x40);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar6);
    }
    uVar6 = *(uint *)(lVar12 + 0x50);
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        if (uVar6 <= uVar8) {
          uVar9 = 0;
        }
        lVar11 = *(long *)(*(long *)(lVar12 + 0x58) + (ulong)uVar9 * 8);
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x24) = 0;
          *(undefined1 *)(lVar11 + 0x28) = 1;
          if (*(uint **)(lVar11 + 0x10) != (uint *)0x0) {
            uVar6 = **(uint **)(lVar11 + 0x10);
            if (0 < (int)uVar6) {
              uVar9 = 0;
              if (uVar6 != 1) {
                do {
                  uVar2 = uVar9;
                  if (**(uint **)(lVar11 + 0x10) <= uVar9) {
                    uVar2 = 0;
                  }
                  *(undefined1 *)
                   (*(long *)(*(uint **)(lVar11 + 0x10) + 2) + (ulong)uVar2 * 0x28 + 0x22) = 0;
                  uVar2 = 0;
                  if (uVar9 + 1 < **(uint **)(lVar11 + 0x10)) {
                    uVar2 = uVar9 + 1;
                  }
                  uVar9 = uVar9 + 2;
                  *(undefined1 *)
                   (*(long *)(*(uint **)(lVar11 + 0x10) + 2) + (ulong)uVar2 * 0x28 + 0x22) = 0;
                } while (uVar9 != (uVar6 & 0xfffffffe));
              }
              if ((uVar6 & 1) != 0) {
                if (**(uint **)(lVar11 + 0x10) <= uVar9) {
                  uVar9 = 0;
                }
                *(undefined1 *)
                 (*(long *)(*(uint **)(lVar11 + 0x10) + 2) + (ulong)uVar9 * 0x28 + 0x22) = 0;
              }
            }
          }
          uVar6 = *(uint *)(lVar12 + 0x50);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}

