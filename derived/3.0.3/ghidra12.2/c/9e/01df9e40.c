
/* WARNING: Removing unreachable block (ram,0x01df9e88) */

void FUN_01df9e40(void)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (DAT_05574040 != 0) {
    local_68 = CONCAT44(local_68._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       lVar5 != 0)) {
      if ((*(long *)(lVar5 + 0x5d9500) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x5d9500) + 0x10), puVar6 == (undefined8 *)0x0
         )) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      lVar8 = *(long *)(DAT_0538adc8 + 0x270);
      if (lVar8 != 0) {
        uVar10 = (ulong)*(uint *)(lVar8 + 0x10);
        if (1 < *(uint *)(lVar8 + 0x10)) {
          uVar10 = 0;
        }
        uVar2 = *(uint *)(*(long *)(lVar8 + uVar10 * 8) + 0x28);
        if (0 < (int)uVar2) {
          uVar15 = 0;
          do {
            lVar8 = *(long *)(DAT_0538adc8 + 0x270);
            if (lVar8 != 0) {
              uVar10 = (ulong)*(uint *)(lVar8 + 0x10);
              if (1 < *(uint *)(lVar8 + 0x10)) {
                uVar10 = 0;
              }
              lVar8 = *(long *)(lVar8 + uVar10 * 8);
              if (((int)uVar15 < *(int *)(lVar8 + 0x28)) && (*(long *)(lVar8 + 0x18) != 0)) {
                uVar9 = uVar15;
                if (*(uint *)(lVar8 + 0x10) <= uVar15) {
                  uVar9 = 0;
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0x18) + (ulong)uVar9 * 0x58);
                if (lVar8 != 0) {
                  if ((*(long *)(lVar5 + 0x5d9500) != 0) &&
                     (plVar7 = *(long **)(*(long *)(lVar5 + 0x5d9500) + 0x20), plVar7 != (long *)0x0
                     )) {
                    local_68 = *(long *)(lVar5 + 0x5d94e0);
                    local_60 = *(undefined8 *)(lVar5 + 0x5d94e8);
                    uStack_58 = 0x640;
                    (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
                  }
                  plVar7 = (long *)(*(long *)(lVar5 + 0x5d94e8) + *(long *)(lVar5 + 0x5d94e0));
                  if ((*plVar7 == 0) || (*plVar7 != lVar8)) {
                    uVar10 = 0;
                    do {
                      uVar11 = uVar10 + 1;
                      lVar14 = *(long *)((long)plVar7 +
                                        (-(uVar11 >> 0x1f & 1) & 0xfffffff000000000 |
                                        uVar11 * 0x10 & 0xffffffff0));
                      uVar10 = uVar11 & 0xffffffff;
                      if (lVar14 != 0 && lVar14 == lVar8) break;
                      uVar11 = uVar10 + 1;
                      if ((int)uVar11 == 100) goto LAB_01df9f30;
                      lVar14 = *(long *)((long)plVar7 +
                                        (-(uVar11 >> 0x1f & 1) & 0xfffffff000000000 |
                                        uVar11 * 0x10 & 0xffffffff0));
                      uVar10 = uVar11 & 0xffffffff;
                    } while (lVar14 == 0 || lVar14 != lVar8);
                    if (-1 < (int)(uint)uVar11) {
                      if (99 < (uint)uVar11) goto LAB_01df9fd0;
                      if ((*(byte *)(plVar7 + uVar10 * 2 + 1) & 1) != 0) goto LAB_01df9f30;
                      goto LAB_01df9fdc;
                    }
                  }
                  else {
                    uVar11 = 0;
LAB_01df9fd0:
                    if ((*(byte *)(plVar7 + 1) & 1) == 0) {
LAB_01df9fdc:
                      uVar9 = (uint)uVar11;
                      if (uVar9 < 99) {
                        iVar12 = uVar9 + 2;
                        plVar13 = plVar7 + (ulong)(uVar9 + 1) * 2 + 1;
                        do {
                          uVar10 = uVar11 & 0xffffffff;
                          uVar9 = (uint)uVar11;
                          uVar11 = (ulong)(uVar9 + 1);
                          plVar1 = plVar7 + uVar10 * 2;
                          if (99 < uVar9) {
                            plVar1 = plVar7;
                          }
                          bVar3 = iVar12 != 100;
                          iVar12 = iVar12 + 1;
                          *plVar1 = plVar13[-1];
                          *(char *)(plVar1 + 1) = (char)*plVar13;
                          plVar13 = plVar13 + 2;
                        } while (bVar3);
                      }
                      plVar7[0xc6] = 0;
                      *(undefined1 *)(plVar7 + 199) = 0;
                    }
                  }
                }
              }
            }
LAB_01df9f30:
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar2);
        }
      }
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x5d9500) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x5d9500) + 0x18), puVar6 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar6)();
      }
    }
  }
  return;
}

