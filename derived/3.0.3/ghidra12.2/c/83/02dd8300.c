
void FUN_02dd8300(long param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined2 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_80;
  long lStack_78;
  
  lVar2 = param_1 + 0x1c3b8;
  FUN_02aef540(lVar2);
  FUN_02aef7e0(lVar2);
  FUN_02aefa80(lVar2);
  local_80._0_2_ = 0x7e8;
  local_80._2_6_ = 0x4aa;
  lStack_78 = lVar2;
  FUN_02aee3a0(&local_80);
  if (DAT_05739190 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(DAT_05739190 + 0x28);
  }
  if (*(char *)(lVar11 + 0xda8) == '\0') {
    bVar3 = 1;
  }
  else {
    bVar3 = (**(code **)(*(long *)(lVar11 + 0xda0) + 0x18))(lVar11 + 0xda0);
    *(undefined1 *)(lVar11 + 0xda8) = 0;
  }
  *(byte *)(lVar11 + 0xda9) = bVar3 & 1;
  FUN_02aefd20(lVar2,*(undefined4 *)(lVar11 + 0xdb4));
  FUN_02af0b10(lVar2,param_2);
  lVar2 = param_1 + 0x1c3c8;
  uVar5 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar5) {
    uVar4 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c4e8) = uVar4;
    if (uVar5 != 1) {
      uVar16 = 1;
      do {
        uVar6 = FUN_00da1ae4(lVar2);
        uVar7 = uVar16 + 1;
        if (uVar16 < uVar6) {
          uVar4 = FUN_00edf160(lVar2,uVar7);
        }
        else {
          uVar4 = 0;
        }
        if (*(uint *)(param_1 + 0x1c4e0) <= uVar16) {
          uVar16 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c4e8) + (ulong)uVar16 * 2) = uVar4;
        uVar16 = uVar7;
      } while (uVar5 != uVar7);
      if ((1 < (int)uVar5) && (uVar5 - 1 < *(uint *)(param_1 + 0x1c4e0))) {
        puVar13 = *(undefined2 **)(param_1 + 0x1c4e8);
        uVar15 = (ulong)(uVar5 >> 1);
        uVar14 = uVar15;
        do {
          uVar16 = (int)uVar15 * 2;
          uVar4 = puVar13[uVar14 - 1 & 0xffffffff];
          if ((int)uVar5 < (int)uVar16) {
            uVar7 = (uint)uVar14;
          }
          else {
            uVar12 = uVar14 & 0xffffffff;
            local_80._0_2_ = uVar4;
            do {
              if ((int)uVar16 < (int)uVar5) {
                uVar7 = FUN_02af7bb0(puVar13 + (long)(int)uVar16 + -1);
                uVar6 = uVar16 | uVar7 >> 0x1f;
              }
              else {
                uVar6 = uVar16;
              }
              iVar8 = FUN_02af7bb0(&local_80,puVar13 + (int)(uVar6 - 1));
              uVar7 = (uint)uVar12;
              if (-1 < iVar8) break;
              uVar16 = uVar6 * 2;
              uVar12 = (ulong)uVar6;
              puVar13[(int)(uVar7 - 1)] = puVar13[(int)(uVar6 - 1)];
              uVar7 = uVar6;
            } while ((int)uVar16 <= (int)uVar5);
          }
          uVar15 = (ulong)((int)uVar15 - 1);
          puVar13[(int)(uVar7 - 1)] = uVar4;
          bVar1 = 1 < (long)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
        uVar16 = uVar5 - 1;
        uVar4 = puVar13[uVar16];
        puVar13[uVar16] = *puVar13;
        while (local_80._0_2_ = uVar4, 2 < (int)uVar5) {
          uVar7 = 2;
          uVar6 = 1;
          do {
            if ((int)uVar7 < (int)uVar16) {
              uVar9 = FUN_02af7bb0(puVar13 + (long)(int)uVar7 + -1);
              uVar9 = uVar7 | uVar9 >> 0x1f;
            }
            else {
              uVar9 = uVar7;
            }
            iVar8 = uVar9 - 1;
            iVar10 = FUN_02af7bb0(&local_80,puVar13 + iVar8);
            if (-1 < iVar10) {
              iVar8 = uVar6 - 1;
              break;
            }
            uVar7 = uVar9 * 2;
            puVar13[(int)(uVar6 - 1)] = puVar13[iVar8];
            uVar6 = uVar9;
          } while ((int)uVar7 < (int)uVar5);
          uVar7 = uVar16 - 1;
          puVar13[iVar8] = uVar4;
          uVar4 = puVar13[uVar7];
          puVar13[uVar7] = *puVar13;
          uVar5 = uVar16;
          uVar16 = uVar7;
        }
        *puVar13 = uVar4;
      }
    }
  }
  lVar2 = param_1 + 0x1c458;
  uVar5 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar5) {
    uVar4 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c508) = uVar4;
    if (uVar5 != 1) {
      uVar16 = 1;
      do {
        uVar6 = FUN_00da1ae4(lVar2);
        uVar7 = uVar16 + 1;
        if (uVar16 < uVar6) {
          uVar4 = FUN_00edf160(lVar2,uVar7);
        }
        else {
          uVar4 = 0;
        }
        if (*(uint *)(param_1 + 0x1c500) <= uVar16) {
          uVar16 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c508) + (ulong)uVar16 * 2) = uVar4;
        uVar16 = uVar7;
      } while (uVar5 != uVar7);
      if ((1 < (int)uVar5) && (uVar5 - 1 < *(uint *)(param_1 + 0x1c500))) {
        puVar13 = *(undefined2 **)(param_1 + 0x1c508);
        uVar15 = (ulong)(uVar5 >> 1);
        uVar14 = uVar15;
        do {
          uVar16 = (int)uVar15 * 2;
          uVar4 = puVar13[uVar14 - 1 & 0xffffffff];
          if ((int)uVar5 < (int)uVar16) {
            uVar7 = (uint)uVar14;
          }
          else {
            uVar12 = uVar14 & 0xffffffff;
            local_80._0_2_ = uVar4;
            do {
              if ((int)uVar16 < (int)uVar5) {
                uVar7 = FUN_02af5df0(puVar13 + (long)(int)uVar16 + -1);
                uVar6 = uVar16 | uVar7 >> 0x1f;
              }
              else {
                uVar6 = uVar16;
              }
              iVar8 = FUN_02af5df0(&local_80,puVar13 + (int)(uVar6 - 1));
              uVar7 = (uint)uVar12;
              if (-1 < iVar8) break;
              uVar16 = uVar6 * 2;
              uVar12 = (ulong)uVar6;
              puVar13[(int)(uVar7 - 1)] = puVar13[(int)(uVar6 - 1)];
              uVar7 = uVar6;
            } while ((int)uVar16 <= (int)uVar5);
          }
          uVar15 = (ulong)((int)uVar15 - 1);
          puVar13[(int)(uVar7 - 1)] = uVar4;
          bVar1 = 1 < (long)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
        uVar16 = uVar5 - 1;
        uVar4 = puVar13[uVar16];
        puVar13[uVar16] = *puVar13;
        while (local_80._0_2_ = uVar4, 2 < (int)uVar5) {
          uVar7 = 2;
          uVar6 = 1;
          do {
            if ((int)uVar7 < (int)uVar16) {
              uVar9 = FUN_02af5df0(puVar13 + (long)(int)uVar7 + -1);
              uVar9 = uVar7 | uVar9 >> 0x1f;
            }
            else {
              uVar9 = uVar7;
            }
            iVar8 = uVar9 - 1;
            iVar10 = FUN_02af5df0(&local_80,puVar13 + iVar8);
            if (-1 < iVar10) {
              iVar8 = uVar6 - 1;
              break;
            }
            uVar7 = uVar9 * 2;
            puVar13[(int)(uVar6 - 1)] = puVar13[iVar8];
            uVar6 = uVar9;
          } while ((int)uVar7 < (int)uVar5);
          uVar7 = uVar16 - 1;
          puVar13[iVar8] = uVar4;
          uVar4 = puVar13[uVar7];
          puVar13[uVar7] = *puVar13;
          uVar5 = uVar16;
          uVar16 = uVar7;
        }
        *puVar13 = uVar4;
      }
    }
  }
  lVar2 = param_1 + 0x1c410;
  uVar5 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar5) {
    uVar4 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c4f8) = uVar4;
    if (uVar5 != 1) {
      uVar16 = 1;
      do {
        uVar6 = FUN_00da1ae4(lVar2);
        uVar7 = uVar16 + 1;
        if (uVar16 < uVar6) {
          uVar4 = FUN_00edf160(lVar2,uVar7);
        }
        else {
          uVar4 = 0;
        }
        if (*(uint *)(param_1 + 0x1c4f0) <= uVar16) {
          uVar16 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c4f8) + (ulong)uVar16 * 2) = uVar4;
        uVar16 = uVar7;
      } while (uVar5 != uVar7);
      if ((1 < (int)uVar5) && (uVar5 - 1 < *(uint *)(param_1 + 0x1c4f0))) {
        puVar13 = *(undefined2 **)(param_1 + 0x1c4f8);
        uVar15 = (ulong)(uVar5 >> 1);
        uVar14 = uVar15;
        do {
          uVar16 = (int)uVar15 * 2;
          uVar4 = puVar13[uVar14 - 1 & 0xffffffff];
          if ((int)uVar5 < (int)uVar16) {
            uVar7 = (uint)uVar14;
          }
          else {
            uVar12 = uVar14 & 0xffffffff;
            local_80._0_2_ = uVar4;
            do {
              if ((int)uVar16 < (int)uVar5) {
                uVar7 = FUN_02b04a40(puVar13 + (long)(int)uVar16 + -1);
                uVar6 = uVar16 | uVar7 >> 0x1f;
              }
              else {
                uVar6 = uVar16;
              }
              iVar8 = FUN_02b04a40(&local_80,puVar13 + (int)(uVar6 - 1));
              uVar7 = (uint)uVar12;
              if (-1 < iVar8) break;
              uVar16 = uVar6 * 2;
              uVar12 = (ulong)uVar6;
              puVar13[(int)(uVar7 - 1)] = puVar13[(int)(uVar6 - 1)];
              uVar7 = uVar6;
            } while ((int)uVar16 <= (int)uVar5);
          }
          uVar15 = (ulong)((int)uVar15 - 1);
          puVar13[(int)(uVar7 - 1)] = uVar4;
          bVar1 = 1 < (long)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
        uVar16 = uVar5 - 1;
        uVar4 = puVar13[uVar16];
        puVar13[uVar16] = *puVar13;
        while (local_80._0_2_ = uVar4, 2 < (int)uVar5) {
          uVar7 = 2;
          uVar6 = 1;
          do {
            if ((int)uVar7 < (int)uVar16) {
              uVar9 = FUN_02b04a40(puVar13 + (long)(int)uVar7 + -1);
              uVar9 = uVar7 | uVar9 >> 0x1f;
            }
            else {
              uVar9 = uVar7;
            }
            iVar8 = uVar9 - 1;
            iVar10 = FUN_02b04a40(&local_80,puVar13 + iVar8);
            if (-1 < iVar10) {
              iVar8 = uVar6 - 1;
              break;
            }
            uVar7 = uVar9 * 2;
            puVar13[(int)(uVar6 - 1)] = puVar13[iVar8];
            uVar6 = uVar9;
          } while ((int)uVar7 < (int)uVar5);
          uVar7 = uVar16 - 1;
          puVar13[iVar8] = uVar4;
          uVar4 = puVar13[uVar7];
          puVar13[uVar7] = *puVar13;
          uVar5 = uVar16;
          uVar16 = uVar7;
        }
        *puVar13 = uVar4;
      }
    }
  }
  lVar2 = param_1 + 0x1c4a0;
  uVar5 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar5) {
    uVar4 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c518) = uVar4;
    if (uVar5 != 1) {
      uVar16 = 1;
      do {
        uVar6 = FUN_00da1ae4(lVar2);
        uVar7 = uVar16 + 1;
        if (uVar16 < uVar6) {
          uVar4 = FUN_00edf160(lVar2,uVar7);
        }
        else {
          uVar4 = 0;
        }
        if (*(uint *)(param_1 + 0x1c510) <= uVar16) {
          uVar16 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c518) + (ulong)uVar16 * 2) = uVar4;
        uVar16 = uVar7;
      } while (uVar5 != uVar7);
      if ((1 < (int)uVar5) && (uVar5 - 1 < *(uint *)(param_1 + 0x1c510))) {
        puVar13 = *(undefined2 **)(param_1 + 0x1c518);
        uVar15 = (ulong)(uVar5 >> 1);
        uVar14 = uVar15;
        do {
          uVar16 = (int)uVar15 * 2;
          uVar4 = puVar13[uVar14 - 1 & 0xffffffff];
          if ((int)uVar5 < (int)uVar16) {
            uVar7 = (uint)uVar14;
          }
          else {
            uVar12 = uVar14 & 0xffffffff;
            local_80._0_2_ = uVar4;
            do {
              if ((int)uVar16 < (int)uVar5) {
                uVar7 = FUN_02aee640(puVar13 + (long)(int)uVar16 + -1);
                uVar6 = uVar16 | uVar7 >> 0x1f;
              }
              else {
                uVar6 = uVar16;
              }
              iVar8 = FUN_02aee640(&local_80,puVar13 + (int)(uVar6 - 1));
              uVar7 = (uint)uVar12;
              if (-1 < iVar8) break;
              uVar16 = uVar6 * 2;
              uVar12 = (ulong)uVar6;
              puVar13[(int)(uVar7 - 1)] = puVar13[(int)(uVar6 - 1)];
              uVar7 = uVar6;
            } while ((int)uVar16 <= (int)uVar5);
          }
          uVar15 = (ulong)((int)uVar15 - 1);
          puVar13[(int)(uVar7 - 1)] = uVar4;
          bVar1 = 1 < (long)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
        uVar16 = uVar5 - 1;
        uVar4 = puVar13[uVar16];
        local_80 = CONCAT62(local_80._2_6_,uVar4);
        puVar13[uVar16] = *puVar13;
        while (2 < (int)uVar5) {
          uVar7 = 2;
          uVar6 = 1;
          do {
            if ((int)uVar7 < (int)uVar16) {
              uVar9 = FUN_02aee640(puVar13 + (long)(int)uVar7 + -1);
              uVar9 = uVar7 | uVar9 >> 0x1f;
            }
            else {
              uVar9 = uVar7;
            }
            iVar8 = uVar9 - 1;
            iVar10 = FUN_02aee640(&local_80,puVar13 + iVar8);
            if (-1 < iVar10) {
              iVar8 = uVar6 - 1;
              break;
            }
            uVar7 = uVar9 * 2;
            puVar13[(int)(uVar6 - 1)] = puVar13[iVar8];
            uVar6 = uVar9;
          } while ((int)uVar7 < (int)uVar5);
          uVar7 = uVar16 - 1;
          puVar13[iVar8] = uVar4;
          uVar4 = puVar13[uVar7];
          local_80 = CONCAT62(local_80._2_6_,uVar4);
          puVar13[uVar7] = *puVar13;
          uVar5 = uVar16;
          uVar16 = uVar7;
        }
        *puVar13 = uVar4;
      }
    }
  }
  return;
}

