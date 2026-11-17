
void FUN_02d22580(long param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 local_80;
  long lStack_78;
  
  lVar2 = param_1 + 0x1c3d0;
  FUN_02aef540(lVar2);
  FUN_02aef7e0(lVar2);
  FUN_02aefa80(lVar2);
  local_80._0_2_ = 0x7e8;
  local_80._2_6_ = 0x4aa;
  lStack_78 = lVar2;
  FUN_02aee3a0(&local_80);
  FUN_02aefd20(lVar2,*(undefined4 *)(param_1 + 0x56f1c));
  FUN_02af0b10(lVar2,param_2);
  lVar2 = param_1 + 0x1c3e0;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c500) = uVar3;
    if (uVar4 != 1) {
      uVar14 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar14 + 1;
        if (uVar14 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0;
        }
        if (*(uint *)(param_1 + 0x1c4f8) <= uVar14) {
          uVar14 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c500) + (ulong)uVar14 * 2) = uVar3;
        uVar14 = uVar6;
      } while (uVar4 != uVar6);
      if ((1 < (int)uVar4) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c4f8))) {
        puVar11 = *(undefined2 **)(param_1 + 0x1c500);
        uVar13 = (ulong)(uVar4 >> 1);
        uVar12 = uVar13;
        do {
          uVar14 = (int)uVar13 * 2;
          uVar3 = puVar11[uVar12 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar14) {
            uVar6 = (uint)uVar12;
          }
          else {
            uVar10 = uVar12 & 0xffffffff;
            local_80._0_2_ = uVar3;
            do {
              if ((int)uVar14 < (int)uVar4) {
                uVar6 = FUN_02af7bb0(puVar11 + (long)(int)uVar14 + -1);
                uVar5 = uVar14 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar14;
              }
              iVar7 = FUN_02af7bb0(&local_80,puVar11 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar10;
              if (-1 < iVar7) break;
              uVar14 = uVar5 * 2;
              uVar10 = (ulong)uVar5;
              puVar11[(int)(uVar6 - 1)] = puVar11[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar14 <= (int)uVar4);
          }
          uVar13 = (ulong)((int)uVar13 - 1);
          puVar11[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
        uVar14 = uVar4 - 1;
        uVar3 = puVar11[uVar14];
        puVar11[uVar14] = *puVar11;
        while (local_80._0_2_ = uVar3, 2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          do {
            if ((int)uVar6 < (int)uVar14) {
              uVar8 = FUN_02af7bb0(puVar11 + (long)(int)uVar6 + -1);
              uVar8 = uVar6 | uVar8 >> 0x1f;
            }
            else {
              uVar8 = uVar6;
            }
            iVar7 = uVar8 - 1;
            iVar9 = FUN_02af7bb0(&local_80,puVar11 + iVar7);
            if (-1 < iVar9) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar8 * 2;
            puVar11[(int)(uVar5 - 1)] = puVar11[iVar7];
            uVar5 = uVar8;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar14 - 1;
          puVar11[iVar7] = uVar3;
          uVar3 = puVar11[uVar6];
          puVar11[uVar6] = *puVar11;
          uVar4 = uVar14;
          uVar14 = uVar6;
        }
        *puVar11 = uVar3;
      }
    }
  }
  lVar2 = param_1 + 0x1c470;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c520) = uVar3;
    if (uVar4 != 1) {
      uVar14 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar14 + 1;
        if (uVar14 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0;
        }
        if (*(uint *)(param_1 + 0x1c518) <= uVar14) {
          uVar14 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c520) + (ulong)uVar14 * 2) = uVar3;
        uVar14 = uVar6;
      } while (uVar4 != uVar6);
      if ((1 < (int)uVar4) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c518))) {
        puVar11 = *(undefined2 **)(param_1 + 0x1c520);
        uVar13 = (ulong)(uVar4 >> 1);
        uVar12 = uVar13;
        do {
          uVar14 = (int)uVar13 * 2;
          uVar3 = puVar11[uVar12 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar14) {
            uVar6 = (uint)uVar12;
          }
          else {
            uVar10 = uVar12 & 0xffffffff;
            local_80._0_2_ = uVar3;
            do {
              if ((int)uVar14 < (int)uVar4) {
                uVar6 = FUN_02af5df0(puVar11 + (long)(int)uVar14 + -1);
                uVar5 = uVar14 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar14;
              }
              iVar7 = FUN_02af5df0(&local_80,puVar11 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar10;
              if (-1 < iVar7) break;
              uVar14 = uVar5 * 2;
              uVar10 = (ulong)uVar5;
              puVar11[(int)(uVar6 - 1)] = puVar11[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar14 <= (int)uVar4);
          }
          uVar13 = (ulong)((int)uVar13 - 1);
          puVar11[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
        uVar14 = uVar4 - 1;
        uVar3 = puVar11[uVar14];
        puVar11[uVar14] = *puVar11;
        while (local_80._0_2_ = uVar3, 2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          do {
            if ((int)uVar6 < (int)uVar14) {
              uVar8 = FUN_02af5df0(puVar11 + (long)(int)uVar6 + -1);
              uVar8 = uVar6 | uVar8 >> 0x1f;
            }
            else {
              uVar8 = uVar6;
            }
            iVar7 = uVar8 - 1;
            iVar9 = FUN_02af5df0(&local_80,puVar11 + iVar7);
            if (-1 < iVar9) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar8 * 2;
            puVar11[(int)(uVar5 - 1)] = puVar11[iVar7];
            uVar5 = uVar8;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar14 - 1;
          puVar11[iVar7] = uVar3;
          uVar3 = puVar11[uVar6];
          puVar11[uVar6] = *puVar11;
          uVar4 = uVar14;
          uVar14 = uVar6;
        }
        *puVar11 = uVar3;
      }
    }
  }
  lVar2 = param_1 + 0x1c428;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c510) = uVar3;
    if (uVar4 != 1) {
      uVar14 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar14 + 1;
        if (uVar14 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0;
        }
        if (*(uint *)(param_1 + 0x1c508) <= uVar14) {
          uVar14 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c510) + (ulong)uVar14 * 2) = uVar3;
        uVar14 = uVar6;
      } while (uVar4 != uVar6);
      if ((1 < (int)uVar4) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c508))) {
        puVar11 = *(undefined2 **)(param_1 + 0x1c510);
        uVar13 = (ulong)(uVar4 >> 1);
        uVar12 = uVar13;
        do {
          uVar14 = (int)uVar13 * 2;
          uVar3 = puVar11[uVar12 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar14) {
            uVar6 = (uint)uVar12;
          }
          else {
            uVar10 = uVar12 & 0xffffffff;
            local_80._0_2_ = uVar3;
            do {
              if ((int)uVar14 < (int)uVar4) {
                uVar6 = FUN_02b04a40(puVar11 + (long)(int)uVar14 + -1);
                uVar5 = uVar14 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar14;
              }
              iVar7 = FUN_02b04a40(&local_80,puVar11 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar10;
              if (-1 < iVar7) break;
              uVar14 = uVar5 * 2;
              uVar10 = (ulong)uVar5;
              puVar11[(int)(uVar6 - 1)] = puVar11[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar14 <= (int)uVar4);
          }
          uVar13 = (ulong)((int)uVar13 - 1);
          puVar11[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
        uVar14 = uVar4 - 1;
        uVar3 = puVar11[uVar14];
        puVar11[uVar14] = *puVar11;
        while (local_80._0_2_ = uVar3, 2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          do {
            if ((int)uVar6 < (int)uVar14) {
              uVar8 = FUN_02b04a40(puVar11 + (long)(int)uVar6 + -1);
              uVar8 = uVar6 | uVar8 >> 0x1f;
            }
            else {
              uVar8 = uVar6;
            }
            iVar7 = uVar8 - 1;
            iVar9 = FUN_02b04a40(&local_80,puVar11 + iVar7);
            if (-1 < iVar9) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar8 * 2;
            puVar11[(int)(uVar5 - 1)] = puVar11[iVar7];
            uVar5 = uVar8;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar14 - 1;
          puVar11[iVar7] = uVar3;
          uVar3 = puVar11[uVar6];
          puVar11[uVar6] = *puVar11;
          uVar4 = uVar14;
          uVar14 = uVar6;
        }
        *puVar11 = uVar3;
      }
    }
  }
  lVar2 = param_1 + 0x1c4b8;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c530) = uVar3;
    if (uVar4 != 1) {
      uVar14 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar14 + 1;
        if (uVar14 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0;
        }
        if (*(uint *)(param_1 + 0x1c528) <= uVar14) {
          uVar14 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c530) + (ulong)uVar14 * 2) = uVar3;
        uVar14 = uVar6;
      } while (uVar4 != uVar6);
      if ((1 < (int)uVar4) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c528))) {
        puVar11 = *(undefined2 **)(param_1 + 0x1c530);
        uVar13 = (ulong)(uVar4 >> 1);
        uVar12 = uVar13;
        do {
          uVar14 = (int)uVar13 * 2;
          uVar3 = puVar11[uVar12 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar14) {
            uVar6 = (uint)uVar12;
          }
          else {
            uVar10 = uVar12 & 0xffffffff;
            local_80._0_2_ = uVar3;
            do {
              if ((int)uVar14 < (int)uVar4) {
                uVar6 = FUN_02aee640(puVar11 + (long)(int)uVar14 + -1);
                uVar5 = uVar14 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar14;
              }
              iVar7 = FUN_02aee640(&local_80,puVar11 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar10;
              if (-1 < iVar7) break;
              uVar14 = uVar5 * 2;
              uVar10 = (ulong)uVar5;
              puVar11[(int)(uVar6 - 1)] = puVar11[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar14 <= (int)uVar4);
          }
          uVar13 = (ulong)((int)uVar13 - 1);
          puVar11[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
        uVar14 = uVar4 - 1;
        uVar3 = puVar11[uVar14];
        local_80 = CONCAT62(local_80._2_6_,uVar3);
        puVar11[uVar14] = *puVar11;
        while (2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          do {
            if ((int)uVar6 < (int)uVar14) {
              uVar8 = FUN_02aee640(puVar11 + (long)(int)uVar6 + -1);
              uVar8 = uVar6 | uVar8 >> 0x1f;
            }
            else {
              uVar8 = uVar6;
            }
            iVar7 = uVar8 - 1;
            iVar9 = FUN_02aee640(&local_80,puVar11 + iVar7);
            if (-1 < iVar9) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar8 * 2;
            puVar11[(int)(uVar5 - 1)] = puVar11[iVar7];
            uVar5 = uVar8;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar14 - 1;
          puVar11[iVar7] = uVar3;
          uVar3 = puVar11[uVar6];
          local_80 = CONCAT62(local_80._2_6_,uVar3);
          puVar11[uVar6] = *puVar11;
          uVar4 = uVar14;
          uVar14 = uVar6;
        }
        *puVar11 = uVar3;
      }
    }
  }
  return;
}

