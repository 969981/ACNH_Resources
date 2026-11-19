
void FUN_039715a0(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  int local_28b8;
  long local_28a8 [256];
  uint local_20a8 [2];
  undefined1 *local_20a0;
  undefined1 local_2098 [2048];
  undefined8 local_1898;
  undefined1 *local_1890;
  undefined1 auStack_1888 [2048];
  undefined8 local_1088;
  undefined1 *local_1080;
  undefined1 auStack_1078 [2048];
  int local_878;
  int iStack_874;
  undefined1 *local_870;
  undefined1 auStack_868 [2056];
  
  bVar3 = *(byte *)(param_1 + 0x53a);
  uVar20 = 0;
  if (bVar3 != 0) {
    uVar20 = (uint)*(byte *)(param_1 + 0x539) / (uint)bVar3;
  }
  if ((uint)*(byte *)(param_1 + 0x539) == uVar20 * bVar3 && *(char *)(param_1 + 0x194) == '\x01') {
    iVar11 = *(int *)(param_1 + 0x10);
    local_1890 = auStack_1888;
    local_1080 = auStack_1078;
    local_870 = auStack_868;
    local_20a0 = local_2098;
    local_20a8[0] = 0;
    local_20a8[1] = 0x100;
    local_1898 = 0x10000000000;
    local_1088 = 0x10000000000;
    local_878 = 0;
    iStack_874 = 0x100;
    if (iVar11 != 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      if ((param_2 & 1) == 0) {
        uVar20 = 0;
        uVar14 = 0;
        do {
          if ((param_3 >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
            lVar19 = *(long *)(lVar8 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
            if (*(int *)(lVar19 + 0x6b8) == 0) {
              iVar10 = 0x7ffffffe;
            }
            else {
              lVar21 = (long)*(int *)(lVar19 + 0x6b8) << 3;
              puVar15 = *(undefined8 **)(lVar19 + 0x6c0);
              iVar18 = 0x7fffffff;
              do {
                plVar17 = (long *)*puVar15;
                (**(code **)(*plVar17 + 0x98))(plVar17);
                plVar16 = (long *)plVar17[0x19];
                iVar10 = (int)plVar17[0x13];
                plVar16[5] = lVar19;
                *(int *)(plVar16 + 6) = iVar10;
                (**(code **)(*plVar16 + 0x10))();
                plVar16 = (long *)plVar17[0x1a];
                *(int *)(plVar16 + 6) = iVar10 + -1;
                plVar16[5] = lVar19;
                (**(code **)(*plVar16 + 0x10))();
                if (iVar18 <= iVar10) {
                  iVar10 = iVar18;
                }
                lVar21 = lVar21 + -8;
                puVar15 = puVar15 + 1;
                iVar18 = iVar10;
              } while (lVar21 != 0);
              iVar10 = iVar10 + -1;
            }
            plVar16 = *(long **)(lVar19 + 0x6d0);
            plVar16[5] = lVar19;
            *(int *)(plVar16 + 6) = iVar10;
            (**(code **)(*plVar16 + 0x10))();
            plVar16 = (long *)(*(long *)(lVar19 + 0x6d0) +
                              (ulong)(1 < *(uint *)(lVar19 + 0x6c8)) * 0x38);
            plVar16[5] = lVar19;
            *(int *)(plVar16 + 6) = iVar10;
            (**(code **)(*plVar16 + 0x10))();
          }
          uVar9 = uVar14 + 1;
          uVar20 = uVar20 + 1;
          uVar14 = uVar9 & 0xffffffff;
        } while (iVar11 != (int)uVar9);
      }
      else {
        uVar20 = 0;
        uVar14 = 0;
        do {
          if ((param_3 >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
            local_28b8 = 0;
            lVar19 = *(long *)(lVar8 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
            if (*(int *)(lVar19 + 0x6b8) == 0) {
              lVar21 = *(long *)(lVar19 + 0x6d0);
              iVar10 = 0x7ffffffe;
              *(long *)(lVar21 + 0x28) = lVar19;
              *(undefined4 *)(lVar21 + 0x30) = 0x7ffffffe;
LAB_03971790:
              local_28a8[local_28b8] = lVar21;
              local_28b8 = local_28b8 + 1;
            }
            else {
              puVar15 = *(undefined8 **)(lVar19 + 0x6c0);
              lVar21 = (long)*(int *)(lVar19 + 0x6b8) << 3;
              iVar18 = 0x7fffffff;
              do {
                plVar16 = (long *)*puVar15;
                (**(code **)(*plVar16 + 0x98))(plVar16);
                iVar10 = (int)plVar16[0x13];
                lVar12 = plVar16[0x19];
                *(long *)(lVar12 + 0x28) = lVar19;
                *(int *)(lVar12 + 0x30) = iVar10;
                if (local_28b8 < 0x100) {
                  local_28a8[local_28b8] = lVar12;
                  local_28b8 = local_28b8 + 1;
                }
                lVar12 = plVar16[0x1a];
                *(long *)(lVar12 + 0x28) = lVar19;
                *(int *)(lVar12 + 0x30) = iVar10 + -1;
                if (local_28b8 < 0x100) {
                  local_28a8[local_28b8] = lVar12;
                  local_28b8 = local_28b8 + 1;
                }
                puVar15 = puVar15 + 1;
                if (iVar18 <= iVar10) {
                  iVar10 = iVar18;
                }
                lVar21 = lVar21 + -8;
                iVar18 = iVar10;
              } while (lVar21 != 0);
              iVar10 = iVar10 + -1;
              lVar21 = *(long *)(lVar19 + 0x6d0);
              *(long *)(lVar21 + 0x28) = lVar19;
              *(int *)(lVar21 + 0x30) = iVar10;
              if (local_28b8 < 0x100) goto LAB_03971790;
            }
            lVar21 = *(long *)(lVar19 + 0x6d0);
            uVar9 = (ulong)(1 < *(uint *)(lVar19 + 0x6c8));
            lVar12 = lVar21 + uVar9 * 0x38;
            *(long *)(lVar12 + 0x28) = lVar19;
            *(int *)(lVar12 + 0x30) = iVar10;
            if (local_28b8 < 0x100) {
              local_28a8[local_28b8] = lVar21 + uVar9 * 0x38;
              local_28b8 = local_28b8 + 1;
            }
            if (local_28b8 != 0) {
              lVar19 = (long)local_28b8 << 3;
              plVar16 = local_28a8;
              do {
                iVar10 = *(int *)(*plVar16 + 0x30);
                uVar9 = (ulong)(iVar10 <= *(int *)(param_1 + 0x4cc));
                if (iVar10 <= *(int *)(param_1 + 0x4d0)) {
                  uVar9 = 2;
                }
                puVar13 = local_20a8 + uVar9 * 0x204;
                if ((int)*puVar13 < (int)local_20a8[uVar9 * 0x204 + 1]) {
                  *(long *)(*(long *)(local_20a8 + uVar9 * 0x204 + 2) + (long)(int)*puVar13 * 8) =
                       *plVar16;
                  *puVar13 = *puVar13 + 1;
                }
                plVar16 = plVar16 + 1;
                lVar19 = lVar19 + -8;
              } while (lVar19 != 0);
            }
          }
          uVar9 = uVar14 + 1;
          uVar20 = uVar20 + 1;
          uVar14 = uVar9 & 0xffffffff;
        } while (iVar11 != (int)uVar9);
      }
    }
    if (((param_2 & 1) != 0) && (iVar11 = *(int *)(param_1 + 0x10), iVar11 != 0)) {
      lVar8 = *(long *)(param_1 + 0x18);
      uVar14 = 0;
      do {
        lVar19 = *(long *)(lVar8 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
        uVar20 = *(uint *)(lVar19 + 0x6b8);
        if (uVar20 != 0) {
          plVar16 = *(long **)(lVar19 + 0x6c0);
          if ((uVar20 & 1) == 0) {
            plVar17 = plVar16;
          }
          else {
            lVar21 = *(long *)(*plVar16 + 0xd8);
            uVar2 = *(undefined4 *)(*plVar16 + 0x98);
            *(long *)(lVar21 + 0x28) = lVar19;
            *(undefined4 *)(lVar21 + 0x30) = uVar2;
            if (local_878 < iStack_874) {
              *(long *)(local_870 + (long)local_878 * 8) = lVar21;
              local_878 = local_878 + 1;
            }
            plVar17 = plVar16 + 1;
          }
          if (((long)(int)uVar20 - 1U & 0x1fffffffffffffff) != 0) {
            do {
              lVar21 = *(long *)(*plVar17 + 0xd8);
              uVar2 = *(undefined4 *)(*plVar17 + 0x98);
              *(long *)(lVar21 + 0x28) = lVar19;
              *(undefined4 *)(lVar21 + 0x30) = uVar2;
              if (local_878 < iStack_874) {
                *(long *)(local_870 + (long)local_878 * 8) = lVar21;
                local_878 = local_878 + 1;
              }
              lVar21 = *(long *)(plVar17[1] + 0xd8);
              uVar2 = *(undefined4 *)(plVar17[1] + 0x98);
              *(long *)(lVar21 + 0x28) = lVar19;
              *(undefined4 *)(lVar21 + 0x30) = uVar2;
              if (local_878 < iStack_874) {
                *(long *)(local_870 + (long)local_878 * 8) = lVar21;
                local_878 = local_878 + 1;
              }
              plVar17 = plVar17 + 2;
            } while (plVar17 != plVar16 + (int)uVar20);
          }
        }
        uVar9 = uVar14 + 1;
        uVar14 = uVar9 & 0xffffffff;
      } while (iVar11 != (int)uVar9);
    }
    lVar8 = 0;
    iVar11 = 0;
    do {
      uVar20 = local_20a8[lVar8 * 0x204];
      plVar16 = *(long **)(local_20a8 + lVar8 * 0x204 + 2);
      if (1 < (int)uVar20) {
        uVar14 = (ulong)(uVar20 >> 1);
        do {
          uVar7 = (uint)uVar14 * 2;
          lVar19 = plVar16[uVar14 - 1 & 0xffffffff];
          if ((int)uVar20 < (int)uVar7) {
            uVar5 = (uint)uVar14;
          }
          else {
            uVar9 = uVar14 & 0xffffffff;
            do {
              if ((int)uVar7 < (int)uVar20) {
                uVar6 = uVar7 | *(int *)(plVar16[(int)uVar7] + 0x30) <
                                *(int *)((plVar16 + (int)uVar7)[-1] + 0x30);
              }
              else {
                uVar6 = uVar7;
              }
              uVar5 = (uint)uVar9;
              if (*(int *)(lVar19 + 0x30) <= *(int *)(plVar16[(int)(uVar6 - 1)] + 0x30)) break;
              plVar16[(int)((uint)uVar9 - 1)] = plVar16[(int)(uVar6 - 1)];
              uVar7 = uVar6 * 2;
              uVar9 = (ulong)uVar6;
              uVar5 = uVar6;
            } while ((int)uVar7 <= (int)uVar20);
          }
          plVar16[(int)(uVar5 - 1)] = lVar19;
          bVar1 = 1 < (long)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
        uVar14 = (ulong)uVar20 - 1;
        uVar9 = uVar14 & 0xffffffff;
        lVar19 = plVar16[uVar9];
        plVar16[uVar9] = *plVar16;
        uVar9 = (ulong)uVar20;
        if (2 < uVar20) {
          do {
            uVar4 = uVar14;
            uVar20 = 2;
            uVar7 = 1;
            do {
              if ((int)uVar20 < (int)uVar4) {
                uVar5 = uVar20 | *(int *)(plVar16[(int)uVar20] + 0x30) <
                                 *(int *)((plVar16 + (int)uVar20)[-1] + 0x30);
              }
              else {
                uVar5 = uVar20;
              }
              lVar21 = (long)(int)(uVar7 - 1);
              if (*(int *)(lVar19 + 0x30) <= *(int *)(plVar16[(int)(uVar5 - 1)] + 0x30))
              goto LAB_03971c54;
              plVar16[lVar21] = plVar16[(int)(uVar5 - 1)];
              uVar20 = uVar5 << 1;
              uVar7 = uVar5;
            } while ((long)(int)uVar20 < (long)uVar9);
            lVar21 = (long)(int)(uVar5 - 1);
LAB_03971c54:
            plVar16[lVar21] = lVar19;
            uVar14 = uVar4 - 1 & 0xffffffff;
            lVar19 = plVar16[uVar14];
            plVar16[uVar14] = *plVar16;
            uVar14 = uVar4 - 1;
            uVar9 = uVar4;
          } while (2 < uVar4);
        }
        *plVar16 = lVar19;
        plVar16 = *(long **)(local_20a8 + lVar8 * 0x204 + 2);
        uVar20 = local_20a8[lVar8 * 0x204];
      }
      if (uVar20 != 0) {
        lVar19 = param_1 + 0x1a8 + (long)iVar11 * 200;
        plVar17 = plVar16;
        if (((long)(int)uVar20 & 1U) != 0) {
          lVar21 = *plVar16;
          *(undefined4 *)(lVar19 + 0x74) = 3;
          uVar7 = *(uint *)(lVar19 + 0xc0);
          if (uVar7 < *(uint *)(lVar19 + 0xb0)) {
            *(uint *)(lVar19 + 0xc0) = uVar7 + 1;
            *(long *)(*(long *)(lVar19 + 0xb8) + (long)(int)uVar7 * 8) = lVar21;
          }
          plVar17 = plVar16 + 1;
        }
        if (((long)(int)uVar20 - 1U & 0x1fffffffffffffff) != 0) {
          do {
            lVar21 = *plVar17;
            *(undefined4 *)(lVar19 + 0x74) = 3;
            uVar7 = *(uint *)(lVar19 + 0xc0);
            if (uVar7 < *(uint *)(lVar19 + 0xb0)) {
              *(uint *)(lVar19 + 0xc0) = uVar7 + 1;
              *(long *)(*(long *)(lVar19 + 0xb8) + (long)(int)uVar7 * 8) = lVar21;
            }
            lVar21 = plVar17[1];
            *(undefined4 *)(lVar19 + 0x74) = 3;
            uVar7 = *(uint *)(lVar19 + 0xc0);
            if (uVar7 < *(uint *)(lVar19 + 0xb0)) {
              *(uint *)(lVar19 + 0xc0) = uVar7 + 1;
              *(long *)(*(long *)(lVar19 + 0xb8) + (long)(int)uVar7 * 8) = lVar21;
            }
            plVar17 = plVar17 + 2;
          } while (plVar17 != plVar16 + (int)uVar20);
        }
      }
      lVar8 = lVar8 + 1;
      iVar11 = iVar11 + 1;
    } while (lVar8 != 4);
  }
  return;
}

