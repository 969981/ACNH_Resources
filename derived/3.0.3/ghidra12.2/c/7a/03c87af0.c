
void FUN_03c87af0(long *param_1,uint *param_2,long param_3,long *param_4,uint param_5)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  char cVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  long local_190;
  int local_188;
  undefined **local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  if (**(char **)(param_3 + 0x18) != '\0') {
    lVar1 = param_3 + 0x10;
    if (*(char *)(param_3 + 0x240) == '\0') {
      if (((param_5 & 1) == 0) || (uVar10 = FUN_03c85730(lVar1), (uVar10 & 1) == 0)) {
        (**(code **)(*(long *)(param_3 + 0x10) + 0x18))(lVar1);
        FUN_03b0d9a0(&local_180,param_4,*(undefined8 *)(param_3 + 0x18));
        if (local_180 != (undefined **)0x0) {
          plVar19 = param_1 + 2;
          uVar21 = *(uint *)((long)plVar19 + *(long *)(*plVar19 + -0x18));
          if (uVar21 < 8) {
            *(uint *)((long)plVar19 + *(long *)(*plVar19 + -0x18)) = uVar21 + 1;
            uVar21 = *(int *)((long)plVar19 + *(long *)(param_1[2] + -0x18)) - 1;
            plVar3 = param_1 + 4 + (ulong)uVar21 * 5;
            if (7 < uVar21) {
              plVar3 = param_1 + 4;
            }
            plVar8 = (long *)0x0;
            if ((param_5 & 1) == 0) {
              plVar8 = param_4;
            }
            *(undefined4 *)(plVar3 + 1) = 0;
            *(undefined4 *)(plVar3 + 3) = 0;
            *(undefined1 *)((long)plVar3 + 0x1c) = 0;
            *plVar3 = (long)&local_180;
            plVar3[2] = (long)plVar8;
            plVar8 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
            (**(code **)(*plVar8 + 0x10))();
            *param_2 = *(uint *)(plVar3 + 3);
            *(undefined1 *)(param_2 + 1) = *(undefined1 *)((long)plVar3 + 0x1c);
            *(int *)((long)plVar19 + *(long *)(param_1[2] + -0x18)) =
                 *(int *)((long)plVar19 + *(long *)(param_1[2] + -0x18)) + -1;
          }
          else {
            (**(code **)(*param_1 + 0x28))(param_1,9);
          }
        }
      }
    }
    else {
      uVar10 = (ulong)*(uint *)(param_4 + 1);
      if ((int)*(uint *)(param_4 + 1) < 1) {
        uVar21 = 0;
        bVar6 = false;
      }
      else {
        plVar19 = param_1 + 2;
        plVar3 = (long *)0x0;
        if ((param_5 & 1) == 0) {
          plVar3 = param_4;
        }
        uVar20 = 0;
        bVar6 = false;
        uVar21 = 0;
        do {
          local_170 = 0x100;
          local_6d = 0;
          local_16c[0] = 0;
          local_180 = &PTR_LAB_048f9a70;
          puVar12 = local_16c;
          local_178 = local_16c;
          if (uVar20 < (uVar10 & 0xffffffff)) {
            puVar11 = (undefined8 *)
                      (*(long *)(*param_4 + 0x18) + (long)*(int *)(*param_4 + 0x20) * 0x18);
            piVar14 = (int *)*puVar11;
            for (uVar13 = *piVar14 << 3 | 4; uVar13 < *(uint *)((long)puVar11 + 0xc);
                uVar13 = uVar13 + bVar4 + 5) {
              bVar4 = *(byte *)((long)piVar14 + (ulong)uVar13);
              uVar10 = (ulong)bVar4;
              if (uVar20 == *(uint *)((long)piVar14 + uVar10 + uVar13 + 1)) {
                if (bVar4 != 0) {
                  if (bVar4 < 8) {
                    uVar16 = 0;
                  }
                  else {
                    uVar17 = 0;
                    do {
                      puVar12 = (undefined1 *)((long)piVar14 + uVar17 + (ulong)(uVar13 + 1) + 3);
                      uVar16 = uVar17 + 8;
                      local_16c[uVar17] = puVar12[-3];
                      local_16c[uVar17 + 1] = puVar12[-2];
                      local_16c[uVar17 + 2] = puVar12[-1];
                      local_16c[uVar17 + 3] = *puVar12;
                      local_16c[uVar17 + 4] = puVar12[1];
                      local_16c[uVar17 + 5] = puVar12[2];
                      local_16c[uVar17 + 6] = puVar12[3];
                      local_16c[uVar17 + 7] = puVar12[4];
                      uVar17 = uVar16;
                    } while ((uVar10 & 0xf8) != uVar16);
                  }
                  uVar17 = uVar10 & 7;
                  if ((bVar4 & 7) != 0) {
                    puVar12 = (undefined1 *)((long)piVar14 + (uVar13 + 1) + uVar16);
                    puVar18 = local_16c + uVar16;
                    do {
                      uVar17 = uVar17 - 1;
                      *puVar18 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar18 = puVar18 + 1;
                    } while (uVar17 != 0);
                  }
                }
                puVar12 = local_16c + uVar10;
                goto LAB_03c87d04;
              }
            }
            if ((param_5 & 1) != 0) goto LAB_03c87c40;
LAB_03c87d18:
            (*(code *)local_180[3])(&local_180);
            puVar12 = local_178;
            (**(code **)(*(long *)(param_3 + 0x10) + 0x18))(lVar1);
            uVar10 = FUN_03c8cf90(puVar12,*(undefined8 *)(param_3 + 0x18));
            if ((uVar10 & 1) != 0) {
              if (uVar20 < *(uint *)(param_4 + 1)) {
                lVar15 = *param_4;
                iVar5 = *(int *)(lVar15 + 0x24);
                if (iVar5 == -1) goto LAB_03c87e10;
                piVar14 = *(int **)(*(long *)(lVar15 + 0x18) + (long)iVar5 * 0x18);
                if ((long)*piVar14 <= (long)uVar20) goto LAB_03c87e10;
                local_188 = -1;
                if ((ulong)(long)*(char *)(lVar15 + 0x10) < 3) {
                  piVar2 = piVar14 + uVar20 + 2;
                  if ((long)*piVar14 <= (long)(uVar20 + 1)) {
                    piVar2 = (int *)(*(long *)(lVar15 + 0x18) + (long)iVar5 * 0x18 + 0xc);
                  }
                  local_188 = (*piVar2 - piVar14[uVar20 + 1]) +
                              *(int *)(&DAT_041e92b8 + (long)*(char *)(lVar15 + 0x10) * 4) >> 1;
                }
                local_190 = (long)piVar14 + (ulong)(uint)piVar14[uVar20 + 1];
                uVar13 = *(uint *)((long)plVar19 + *(long *)(*plVar19 + -0x18));
                if (7 < uVar13) {
                  (**(code **)(*param_1 + 0x28))(param_1,9);
                  goto LAB_03c87e10;
                }
                *(uint *)((long)plVar19 + *(long *)(*plVar19 + -0x18)) = uVar13 + 1;
                uVar13 = *(int *)((long)plVar19 + *(long *)(param_1[2] + -0x18)) - 1;
                plVar8 = param_1 + 4 + (ulong)uVar13 * 5;
                if (7 < uVar13) {
                  plVar8 = param_1 + 4;
                }
                *plVar8 = (long)&local_190;
                *(undefined4 *)(plVar8 + 1) = 0;
                *(undefined4 *)(plVar8 + 3) = 0;
                *(undefined1 *)((long)plVar8 + 0x1c) = 0;
                plVar8[2] = (long)plVar3;
                plVar7 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
                (**(code **)(*plVar7 + 0x10))();
                uVar13 = *(uint *)(plVar8 + 3);
                cVar9 = *(char *)((long)plVar8 + 0x1c);
                *(int *)((long)plVar19 + *(long *)(param_1[2] + -0x18)) =
                     *(int *)((long)plVar19 + *(long *)(param_1[2] + -0x18)) + -1;
              }
              else {
LAB_03c87e10:
                cVar9 = '\0';
                uVar13 = 0;
              }
              if ((*(uint *)(param_1 + 1) & 0xf) != 0) {
                return;
              }
              if ((*(uint *)(param_1 + 1) >> 9 & 1) != 0) break;
              if (uVar13 <= uVar21) {
                uVar13 = uVar21;
              }
              bVar6 = cVar9 != '\0' || bVar6;
              uVar21 = uVar13;
            }
          }
          else {
LAB_03c87d04:
            *puVar12 = 0;
            if ((param_5 & 1) == 0) goto LAB_03c87d18;
LAB_03c87c40:
            uVar10 = FUN_03c85730(&local_180);
            if ((uVar10 & 1) == 0) goto LAB_03c87d18;
          }
          uVar10 = (ulong)(int)param_4[1];
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)uVar10);
      }
      *param_2 = uVar21;
      *(bool *)(param_2 + 1) = bVar6;
    }
  }
  return;
}

