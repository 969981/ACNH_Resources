
void FUN_004063c0(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  int iVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar15 = (undefined8 *)*param_2;
  if ((undefined8 *)param_2[1] != puVar15) {
    puVar10 = (undefined8 *)param_2[1];
    do {
      puVar5 = puVar10 + -3;
      puVar18 = (undefined8 *)*puVar5;
      if (puVar18 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)puVar10[-2];
        puVar4 = puVar18;
        if (puVar9 != puVar18) {
          do {
            puVar9 = puVar9 + -7;
            (**(code **)*puVar9)(puVar9);
          } while (puVar9 != puVar18);
          puVar4 = (undefined8 *)*puVar5;
        }
        puVar10[-2] = puVar18;
        FUN_00187e4c(puVar4);
      }
      puVar10 = puVar5;
    } while (puVar5 != puVar15);
  }
  param_2[1] = (long)puVar15;
  lVar11 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar11 + 0x18) - lVar6) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    iVar2 = *(int *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 0x28) + lVar6);
    *(long *)(param_1 + 0x18) = lVar6 + 4;
    FUN_004066f0(param_2,iVar2);
    if (iVar2 != 0) {
      iVar17 = 0;
      puVar1 = PTR_DAT_04bd26e0 + 0x10;
      while (*(char *)(param_1 + 8) == '\0') {
        local_68 = 0;
        local_78 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        FUN_004002f0(param_1,&local_78);
        puVar10 = local_70;
        puVar15 = local_78;
        cVar3 = *(char *)(param_1 + 8);
        plVar20 = (long *)param_2[1];
        if (cVar3 == '\0') {
          if (plVar20 == (long *)param_2[2]) {
            FUN_00406870(param_2,&local_78);
            puVar10 = local_78;
            puVar15 = local_70;
          }
          else {
            *plVar20 = 0;
            plVar20[1] = 0;
            plVar20[2] = 0;
            if ((long)local_70 - (long)local_78 != 0) {
              lVar11 = (long)local_70 - (long)local_78 >> 3;
              if (0x492492492492492 < (ulong)(lVar11 * 0x6db6db6db6db6db7)) {
                auVar21 = FUN_00405918(plVar20);
                uVar8 = auVar21._8_8_;
                plVar20 = auVar21._0_8_;
                lVar11 = *plVar20;
                if ((ulong)((plVar20[2] - lVar11 >> 3) * -0x5555555555555555) < uVar8) {
                  if (0xaaaaaaaaaaaaaaa < uVar8) {
                    FUN_00406858(plVar20);
                    /* WARNING: Subroutine does not return */
                    FUN_01c67100("vector");
                  }
                  lVar13 = plVar20[1];
                  lVar7 = FUN_00187df4(uVar8 * 0x18);
                  lVar6 = lVar7 + uVar8 * 0x18;
                  puVar10 = (undefined8 *)*plVar20;
                  puVar5 = (undefined8 *)plVar20[1];
                  puVar15 = (undefined8 *)(lVar7 + (lVar13 - lVar11));
                  if (puVar5 == puVar10) {
                    *plVar20 = (long)puVar15;
                    plVar20[1] = (long)puVar15;
                    plVar20[2] = lVar6;
                  }
                  else {
                    puVar18 = puVar15;
                    do {
                      puVar9 = puVar18 + -3;
                      *puVar9 = 0;
                      puVar4 = puVar5 + -3;
                      uVar12 = *puVar4;
                      puVar18[-2] = 0;
                      uVar14 = puVar5[-2];
                      puVar18[-1] = 0;
                      *puVar9 = uVar12;
                      puVar18[-2] = uVar14;
                      puVar18[-1] = puVar5[-1];
                      puVar5[-2] = 0;
                      puVar5[-1] = 0;
                      *puVar4 = 0;
                      puVar18 = puVar9;
                      puVar5 = puVar4;
                    } while (puVar4 != puVar10);
                    puVar5 = (undefined8 *)*plVar20;
                    puVar10 = (undefined8 *)plVar20[1];
                    plVar20[2] = lVar6;
                    *plVar20 = (long)puVar9;
                    plVar20[1] = (long)puVar15;
                    if (puVar10 != puVar5) {
                      do {
                        puVar15 = puVar10 + -3;
                        puVar18 = (undefined8 *)*puVar15;
                        if (puVar18 != (undefined8 *)0x0) {
                          puVar9 = (undefined8 *)puVar10[-2];
                          puVar4 = puVar18;
                          if (puVar9 != puVar18) {
                            do {
                              puVar9 = puVar9 + -7;
                              (**(code **)*puVar9)(puVar9);
                            } while (puVar9 != puVar18);
                            puVar4 = (undefined8 *)*puVar15;
                          }
                          puVar10[-2] = puVar18;
                          FUN_00187e4c(puVar4);
                        }
                        puVar10 = puVar15;
                      } while (puVar15 != puVar5);
                    }
                  }
                  if (puVar5 != (undefined8 *)0x0) {
                    FUN_00187e4c(puVar5);
                    return;
                  }
                }
                return;
              }
              lVar6 = FUN_00187df4();
              *plVar20 = lVar6;
              plVar20[2] = lVar6 + lVar11 * 8;
              lVar11 = 0;
              do {
                puVar5 = (undefined8 *)(lVar6 + lVar11);
                lVar7 = lVar11 + 0x38;
                *(undefined2 *)(puVar5 + 1) = *(undefined2 *)((long)puVar15 + lVar11 + 8);
                *(undefined1 *)(puVar5 + 3) = *(undefined1 *)((long)puVar15 + lVar11 + 0x18);
                puVar5[4] = *(undefined8 *)((long)puVar15 + lVar11 + 0x20);
                *(undefined4 *)(puVar5 + 5) = *(undefined4 *)((long)puVar15 + lVar11 + 0x28);
                uVar12 = *(undefined8 *)((long)puVar15 + lVar11 + 0x30);
                puVar5[2] = puVar1;
                *puVar5 = &DAT_048518f0;
                puVar5[6] = uVar12;
                lVar11 = lVar7;
              } while ((undefined8 *)((long)puVar15 + lVar7) != puVar10);
              plVar20[1] = lVar6 + lVar7;
            }
            param_2[1] = (long)(plVar20 + 3);
            puVar10 = local_78;
            puVar15 = local_70;
          }
        }
        else {
          plVar19 = (long *)*param_2;
          if (plVar20 != plVar19) {
            do {
              plVar16 = plVar20 + -3;
              puVar15 = (undefined8 *)*plVar16;
              if (puVar15 != (undefined8 *)0x0) {
                puVar10 = (undefined8 *)plVar20[-2];
                puVar5 = puVar15;
                if (puVar10 != puVar15) {
                  do {
                    puVar10 = puVar10 + -7;
                    (**(code **)*puVar10)(puVar10);
                  } while (puVar10 != puVar15);
                  puVar5 = (undefined8 *)*plVar16;
                }
                plVar20[-2] = (long)puVar15;
                FUN_00187e4c(puVar5);
              }
              plVar20 = plVar16;
            } while (plVar16 != plVar19);
          }
          param_2[1] = (long)plVar19;
          puVar10 = local_78;
          puVar15 = local_70;
        }
        if (puVar10 != (undefined8 *)0x0) {
          local_78 = puVar10;
          local_70 = puVar15;
          while (puVar15 != puVar10) {
            puVar15 = puVar15 + -7;
            (**(code **)*puVar15)(puVar15);
          }
          local_70 = puVar10;
          FUN_00187e4c(local_78);
        }
        if (cVar3 != '\0') {
          return;
        }
        iVar17 = iVar17 + 1;
        if (iVar17 == iVar2) {
          return;
        }
      }
    }
  }
  return;
}

