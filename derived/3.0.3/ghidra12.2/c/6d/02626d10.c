
void FUN_02626d10(long param_1,int *param_2,uint param_3,ulong param_4)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined1 **ppuVar15;
  long *plVar16;
  long *local_c0a0;
  undefined1 *local_c098;
  int local_c090;
  long *local_c088;
  long *local_c080;
  int local_c078;
  long local_c070 [6];
  undefined1 auStack_c040 [49080];
  undefined8 uStack_88;
  uint local_6c;
  
  plVar13 = (long *)(param_1 + 0xdd7b0);
  local_6c = param_3;
  if (param_3 != 0) {
    local_c0a0 = (long *)((ulong)local_c0a0 & 0xffffffff00000000);
    if (1 < *(int *)(param_1 + 0xdd7c0)) {
      FUN_0263d350(*(undefined8 *)(param_1 + 0xdd7b8),*plVar13,*(int *)(param_1 + 0xdd7c0),
                   PTR_LAB_04a88258);
    }
  }
  local_c0a0 = (long *)CONCAT44(local_c0a0._4_4_,param_3);
  if ((1 < *(int *)(param_1 + 0xdd7c0)) && (param_3 < 4)) {
    FUN_0263d350(*(undefined8 *)(param_1 + 0xdd7b8),*plVar13,*(int *)(param_1 + 0xdd7c0),
                 (&PTR_LAB_04a88258)[(int)param_3]);
  }
  if (param_2 != (int *)0x0) {
    if (0 < *param_2) {
      lVar5 = 0;
      puVar6 = *(undefined8 **)(param_2 + 4);
      do {
        puVar10 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar5 * 8);
        lVar5 = lVar5 + 1;
        *puVar10 = puVar6;
        *(undefined8 **)(param_2 + 4) = puVar10;
        puVar6 = puVar10;
      } while (lVar5 < *param_2);
    }
    *param_2 = 0;
    if (local_6c == 0) {
      local_c090 = 0;
      ppuVar15 = &local_c098;
      local_c0a0 = (long *)&local_c0a0;
      local_c098 = (undefined1 *)&local_c0a0;
      puVar9 = auStack_c040;
      local_c088 = local_c070;
      for (lVar5 = 0x7fe; *(undefined1 **)(puVar9 + -0x30) = puVar9 + -0x18, lVar5 != 0;
          lVar5 = lVar5 + -2) {
        *(undefined1 **)(puVar9 + -0x18) = puVar9;
        puVar9 = puVar9 + 0x30;
      }
      plVar14 = *(long **)(param_1 + 0xdd7b8);
      local_c080 = local_c070;
      local_c078 = 0x800;
      uStack_88 = 0;
      if (plVar14 == plVar13) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        plVar16 = (long *)(param_1 + 0xdd7a8);
        plVar11 = plVar14 + -1;
        do {
          if ((param_4 & 1) == 0) {
LAB_02626f40:
            if ((*param_2 < param_2[1]) &&
               (FUN_00dbf7b0(param_2,*plVar11), plVar3 = local_c088, plVar2 = local_c0a0,
               iVar4 = local_c090, local_c090 < local_c078)) {
              if (local_c088 != (long *)0x0) {
                local_c088 = (long *)*local_c088;
              }
              *plVar3 = *plVar11;
              local_c0a0 = plVar3 + 1;
              *local_c0a0 = 0;
              plVar3[2] = (long)&local_c0a0;
              *local_c0a0 = (long)plVar2;
              if (plVar2 != (long *)0x0) {
                plVar2[1] = (long)local_c0a0;
              }
              iVar4 = local_c090 + 1;
              local_c090 = iVar4;
            }
          }
          else {
            puVar8 = (ushort *)*plVar11;
            uVar1 = *puVar8;
            if ((((uVar1 < 0x800) &&
                 ((*(byte *)(param_1 + 0xe97e0 + (ulong)(uVar1 >> 3)) >> (ulong)(uVar1 & 7) & 1) !=
                  0)) && (puVar8[4] != 0xfffe)) && ((char)puVar8[0x13] != '\0')) goto LAB_02626f40;
          }
          plVar14 = (long *)plVar14[1];
          plVar11 = plVar14 + -1;
        } while (plVar11 != plVar16);
        lVar5 = *(long *)(param_1 + 0xdd7b8);
        plVar14 = (long *)(lVar5 + -8);
        if (plVar14 != plVar16) {
          if ((param_4 & 1) == 0) {
            do {
              lVar5 = *(long *)(lVar5 + 8);
            } while ((long *)(lVar5 + -8) != plVar16);
          }
          else {
            do {
              puVar8 = *(ushort **)(lVar5 + -8);
              uVar1 = *puVar8;
              if (((uVar1 < 0x800) &&
                  ((*(byte *)(param_1 + 0xe97e0 + (ulong)(uVar1 >> 3)) >> (ulong)(uVar1 & 7) & 1) !=
                   0)) && ((puVar8[4] == 0xfffe || (char)puVar8[0x13] == '\0' &&
                           ((*param_2 < param_2[1] &&
                            (FUN_00dbf7b0(param_2), plVar2 = local_c088, plVar11 = local_c0a0,
                            iVar4 = local_c090, local_c090 < local_c078)))))) {
                if (local_c088 != (long *)0x0) {
                  local_c088 = (long *)*local_c088;
                }
                *plVar2 = *plVar14;
                local_c0a0 = plVar2 + 1;
                *local_c0a0 = 0;
                plVar2[2] = (long)&local_c0a0;
                *local_c0a0 = (long)plVar11;
                if (plVar11 != (long *)0x0) {
                  plVar11[1] = (long)local_c0a0;
                }
                iVar4 = local_c090 + 1;
                local_c090 = iVar4;
              }
              lVar5 = *(long *)(lVar5 + 8);
              plVar14 = (long *)(lVar5 + -8);
            } while (plVar14 != plVar16);
          }
        }
      }
      if ((long **)plVar13 != &local_c0a0) {
        iVar7 = *(int *)(param_1 + 0xdd7d8);
        if (iVar4 <= *(int *)(param_1 + 0xdd7d8)) {
          iVar7 = iVar4;
        }
        plVar14 = *(long **)(param_1 + 0xdd7b8);
        if (*(long **)(param_1 + 0xdd7b8) != plVar13) {
          do {
            plVar16 = (long *)plVar14[1];
            plVar11 = plVar16;
            if (*plVar14 != 0) {
              *(long **)(*plVar14 + 8) = plVar16;
              plVar11 = (long *)plVar14[1];
            }
            if (plVar11 != (long *)0x0) {
              *plVar11 = *plVar14;
            }
            *plVar14 = 0;
            plVar14[1] = 0;
            *(int *)(param_1 + 0xdd7c0) = *(int *)(param_1 + 0xdd7c0) + -1;
            plVar14[-1] = *(long *)(param_1 + 0xdd7c8);
            *(long **)(param_1 + 0xdd7c8) = plVar14 + -1;
            plVar14 = plVar16;
          } while (plVar16 != plVar13);
          iVar4 = local_c090;
        }
        if (iVar4 < 1) {
          local_c098 = (undefined1 *)0x0;
        }
        if ((((0 < iVar7) && (local_c098 != (undefined1 *)0x0)) &&
            (puVar6 = (undefined8 *)(local_c098 + -8), puVar6 != (undefined8 *)0x0)) &&
           (iVar4 = *(int *)(param_1 + 0xdd7c0), iVar4 < *(int *)(param_1 + 0xdd7d8))) {
          do {
            if (iVar4 < *(int *)(param_1 + 0xdd7d8)) {
              puVar10 = *(undefined8 **)(param_1 + 0xdd7c8);
              if (puVar10 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0xdd7c8) = *puVar10;
              }
              uVar12 = *puVar6;
              puVar10[2] = 0;
              plVar14 = puVar10 + 1;
              *plVar14 = 0;
              *puVar10 = uVar12;
              lVar5 = *plVar13;
              *plVar13 = (long)plVar14;
              puVar10[2] = plVar13;
              *plVar14 = lVar5;
              if (lVar5 != 0) {
                *(long **)(lVar5 + 8) = plVar14;
              }
              iVar4 = *(int *)(param_1 + 0xdd7c0) + 1;
              *(int *)(param_1 + 0xdd7c0) = iVar4;
            }
            if ((iVar7 < 2) || ((long **)puVar6[2] == &local_c0a0)) break;
            puVar6 = (undefined8 *)((undefined1 *)puVar6[2] + -8);
            iVar7 = iVar7 + -1;
          } while (puVar6 != (undefined8 *)0x0);
        }
      }
      do {
        puVar9 = *ppuVar15;
        ppuVar15 = (undefined1 **)(puVar9 + 8);
      } while ((long **)puVar9 != &local_c0a0);
    }
    else {
      plVar14 = *(long **)(param_1 + 0xdd7b8);
      if (plVar14 != plVar13) {
        plVar13 = (long *)(param_1 + 0xdd7a8);
        if ((param_4 & 1) == 0) {
          if (param_2[1] < 1) {
            do {
              plVar14 = (long *)plVar14[1];
            } while (plVar14 + -1 != plVar13);
          }
          else {
            plVar16 = plVar14 + -1;
            do {
              if (*param_2 < param_2[1]) {
                FUN_00dbf7b0(param_2,*plVar16);
              }
              plVar14 = (long *)plVar14[1];
              plVar16 = plVar14 + -1;
            } while (plVar16 != plVar13);
          }
        }
        else {
          do {
            uVar1 = *(ushort *)plVar14[-1];
            if (((uVar1 < 0x800) &&
                ((*(byte *)(param_1 + 0xe97e0 + (ulong)(uVar1 >> 3)) >> (ulong)(uVar1 & 7) & 1) != 0
                )) && (*param_2 < param_2[1])) {
              FUN_00dbf7b0(param_2);
            }
            plVar14 = (long *)plVar14[1];
          } while (plVar14 + -1 != plVar13);
        }
      }
    }
  }
  return;
}

