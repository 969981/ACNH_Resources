
void FUN_0350c730(long param_1,undefined4 param_2)

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
  uint uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_80;
  long lStack_78;
  
  lVar2 = param_1 + 0x1c3a8;
  FUN_02aef540(lVar2);
  FUN_02aef7e0(lVar2);
  FUN_02aefa80(lVar2);
  local_80._0_2_ = 0x7e8;
  local_80._2_6_ = 0x4aa;
  lStack_78 = lVar2;
  FUN_02aee3a0(&local_80);
  FUN_02af0b10(lVar2,param_2);
  lVar2 = param_1 + 0x1c448;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c4e8) = uVar3;
    if (uVar4 != 1) {
      uVar10 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar10 + 1;
        if (uVar10 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0;
        }
        if (*(uint *)(param_1 + 0x1c4e0) <= uVar10) {
          uVar10 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c4e8) + (ulong)uVar10 * 2) = uVar3;
        uVar10 = uVar6;
      } while (uVar4 != uVar6);
      if ((uVar4 != 1) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c4e0))) {
        puVar12 = *(undefined2 **)(param_1 + 0x1c4e8);
        uVar14 = (ulong)(uVar4 >> 1);
        uVar13 = uVar14;
        do {
          uVar10 = (int)uVar14 * 2;
          uVar3 = puVar12[uVar13 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar10) {
            uVar6 = (uint)uVar13;
          }
          else {
            uVar11 = uVar13 & 0xffffffff;
            local_80._0_2_ = uVar3;
            do {
              if ((int)uVar10 < (int)uVar4) {
                uVar6 = FUN_02af5df0(puVar12 + (long)(int)uVar10 + -1);
                uVar5 = uVar10 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar10;
              }
              iVar7 = FUN_02af5df0(&local_80,puVar12 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar11;
              if (-1 < iVar7) break;
              uVar10 = uVar5 * 2;
              uVar11 = (ulong)uVar5;
              puVar12[(int)(uVar6 - 1)] = puVar12[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar10 <= (int)uVar4);
          }
          uVar14 = (ulong)((int)uVar14 - 1);
          puVar12[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
        uVar10 = uVar4 - 1;
        uVar3 = puVar12[uVar10];
        puVar12[uVar10] = *puVar12;
        while (local_80._0_2_ = uVar3, 2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          do {
            if ((int)uVar6 < (int)uVar10) {
              uVar8 = FUN_02af5df0(puVar12 + (long)(int)uVar6 + -1);
              uVar8 = uVar6 | uVar8 >> 0x1f;
            }
            else {
              uVar8 = uVar6;
            }
            iVar7 = uVar8 - 1;
            iVar9 = FUN_02af5df0(&local_80,puVar12 + iVar7);
            if (-1 < iVar9) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar8 * 2;
            puVar12[(int)(uVar5 - 1)] = puVar12[iVar7];
            uVar5 = uVar8;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar10 - 1;
          puVar12[iVar7] = uVar3;
          uVar3 = puVar12[uVar6];
          puVar12[uVar6] = *puVar12;
          uVar4 = uVar10;
          uVar10 = uVar6;
        }
        *puVar12 = uVar3;
      }
    }
  }
  lVar2 = param_1 + 0x1c400;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c4f8) = uVar3;
    if (uVar4 != 1) {
      uVar10 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar10 + 1;
        if (uVar10 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0;
        }
        if (*(uint *)(param_1 + 0x1c4f0) <= uVar10) {
          uVar10 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c4f8) + (ulong)uVar10 * 2) = uVar3;
        uVar10 = uVar6;
      } while (uVar4 != uVar6);
      if ((uVar4 != 1) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c4f0))) {
        puVar12 = *(undefined2 **)(param_1 + 0x1c4f8);
        uVar14 = (ulong)(uVar4 >> 1);
        uVar13 = uVar14;
        do {
          uVar10 = (int)uVar14 * 2;
          uVar3 = puVar12[uVar13 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar10) {
            uVar6 = (uint)uVar13;
          }
          else {
            uVar11 = uVar13 & 0xffffffff;
            local_80._0_2_ = uVar3;
            do {
              if ((int)uVar10 < (int)uVar4) {
                uVar6 = FUN_02b04a40(puVar12 + (long)(int)uVar10 + -1);
                uVar5 = uVar10 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar10;
              }
              iVar7 = FUN_02b04a40(&local_80,puVar12 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar11;
              if (-1 < iVar7) break;
              uVar10 = uVar5 * 2;
              uVar11 = (ulong)uVar5;
              puVar12[(int)(uVar6 - 1)] = puVar12[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar10 <= (int)uVar4);
          }
          uVar14 = (ulong)((int)uVar14 - 1);
          puVar12[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
        uVar10 = uVar4 - 1;
        uVar3 = puVar12[uVar10];
        puVar12[uVar10] = *puVar12;
        while (local_80._0_2_ = uVar3, 2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          do {
            if ((int)uVar6 < (int)uVar10) {
              uVar8 = FUN_02b04a40(puVar12 + (long)(int)uVar6 + -1);
              uVar8 = uVar6 | uVar8 >> 0x1f;
            }
            else {
              uVar8 = uVar6;
            }
            iVar7 = uVar8 - 1;
            iVar9 = FUN_02b04a40(&local_80,puVar12 + iVar7);
            if (-1 < iVar9) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar8 * 2;
            puVar12[(int)(uVar5 - 1)] = puVar12[iVar7];
            uVar5 = uVar8;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar10 - 1;
          puVar12[iVar7] = uVar3;
          uVar3 = puVar12[uVar6];
          puVar12[uVar6] = *puVar12;
          uVar4 = uVar10;
          uVar10 = uVar6;
        }
        *puVar12 = uVar3;
      }
    }
  }
  lVar2 = param_1 + 0x1c490;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c508) = uVar3;
    if (uVar4 != 1) {
      uVar10 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar10 + 1;
        if (uVar10 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0;
        }
        if (*(uint *)(param_1 + 0x1c500) <= uVar10) {
          uVar10 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c508) + (ulong)uVar10 * 2) = uVar3;
        uVar10 = uVar6;
      } while (uVar4 != uVar6);
      if ((uVar4 != 1) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c500))) {
        puVar12 = *(undefined2 **)(param_1 + 0x1c508);
        uVar14 = (ulong)(uVar4 >> 1);
        uVar13 = uVar14;
        do {
          uVar10 = (int)uVar14 * 2;
          uVar3 = puVar12[uVar13 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar10) {
            uVar6 = (uint)uVar13;
          }
          else {
            uVar11 = uVar13 & 0xffffffff;
            local_80._0_2_ = uVar3;
            do {
              if ((int)uVar10 < (int)uVar4) {
                uVar6 = FUN_02aee640(puVar12 + (long)(int)uVar10 + -1);
                uVar5 = uVar10 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar10;
              }
              iVar7 = FUN_02aee640(&local_80,puVar12 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar11;
              if (-1 < iVar7) break;
              uVar10 = uVar5 * 2;
              uVar11 = (ulong)uVar5;
              puVar12[(int)(uVar6 - 1)] = puVar12[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar10 <= (int)uVar4);
          }
          uVar14 = (ulong)((int)uVar14 - 1);
          puVar12[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
        uVar10 = uVar4 - 1;
        uVar3 = puVar12[uVar10];
        local_80 = CONCAT62(local_80._2_6_,uVar3);
        puVar12[uVar10] = *puVar12;
        while (2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          do {
            if ((int)uVar6 < (int)uVar10) {
              uVar8 = FUN_02aee640(puVar12 + (long)(int)uVar6 + -1);
              uVar8 = uVar6 | uVar8 >> 0x1f;
            }
            else {
              uVar8 = uVar6;
            }
            iVar7 = uVar8 - 1;
            iVar9 = FUN_02aee640(&local_80,puVar12 + iVar7);
            if (-1 < iVar9) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar8 * 2;
            puVar12[(int)(uVar5 - 1)] = puVar12[iVar7];
            uVar5 = uVar8;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar10 - 1;
          puVar12[iVar7] = uVar3;
          uVar3 = puVar12[uVar6];
          local_80 = CONCAT62(local_80._2_6_,uVar3);
          puVar12[uVar6] = *puVar12;
          uVar4 = uVar10;
          uVar10 = uVar6;
        }
        *puVar12 = uVar3;
      }
    }
  }
  return;
}

