
void FUN_03ec10f0(uint *param_1,long *param_2,long param_3,uint *param_4,uint *param_5,uint *param_6
                 ,undefined2 *param_7,long param_8)

{
  bool bVar1;
  undefined2 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined *local_190;
  long lStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_7d;
  
  (**(code **)(*param_2 + 0xe0))(param_2,0);
  if (param_7 != (undefined2 *)0x0) {
    *(undefined4 *)(param_7 + 0x48) = 0;
  }
  uVar5 = (**(code **)(*param_2 + 0xa0))(param_2,0);
  uVar7 = *param_1;
  if ((int)uVar5 < (int)uVar7) {
    uVar9 = uVar7;
    if (*(int *)(*(long *)PTR_DAT_04bb4a70 + 0xcc) == 1) {
      local_7d = 0;
      lStack_188 = (long)&local_180 + 4;
      local_180 = CONCAT35(local_180._5_3_,0x100);
      local_190 = PTR_DAT_04bb21f8 + 0x10;
      lVar10 = *(long *)(*(long *)(param_8 + 0x10) + 8);
      FUN_038d1270(&local_190,"%s.as",lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8))
      ;
      uVar9 = *param_1;
    }
    if (1 < (int)uVar9) {
      plVar11 = *(long **)(param_1 + 2);
      uVar12 = (ulong)(uVar9 >> 1);
      do {
        uVar18 = (uint)uVar12 * 2;
        lVar10 = plVar11[uVar12 - 1 & 0xffffffff];
        if ((int)uVar9 < (int)uVar18) {
          uVar16 = (uint)uVar12;
        }
        else {
          uVar15 = uVar12 & 0xffffffff;
          do {
            if ((int)uVar18 < (int)uVar9) {
              lVar19 = (plVar11 + (int)uVar18)[-1];
              if (*(char *)(lVar19 + 0x1a) == '\0') {
                fVar20 = *(float *)(lVar19 + 0x14);
              }
              else {
                fVar20 = 100.0;
              }
              lVar19 = plVar11[(int)uVar18];
              if (*(char *)(lVar19 + 0x1a) == '\0') {
                fVar21 = *(float *)(lVar19 + 0x14);
              }
              else {
                fVar21 = 100.0;
              }
              uVar18 = uVar18 | fVar21 < fVar20;
              if (*(char *)(lVar10 + 0x1a) != '\0') goto LAB_03ec126c;
LAB_03ec12a4:
              fVar20 = *(float *)(lVar10 + 0x14);
              uVar17 = uVar18;
            }
            else {
              if (*(char *)(lVar10 + 0x1a) == '\0') goto LAB_03ec12a4;
LAB_03ec126c:
              fVar20 = 100.0;
              uVar17 = uVar18;
            }
            lVar19 = plVar11[(int)(uVar17 - 1)];
            uVar16 = (uint)uVar15;
            if (*(char *)(lVar19 + 0x1a) == '\0') {
              if (fVar20 <= *(float *)(lVar19 + 0x14)) break;
            }
            else if (fVar20 <= 100.0) break;
            plVar11[(int)(uVar16 - 1)] = lVar19;
            uVar18 = uVar17 * 2;
            uVar15 = (ulong)uVar17;
            uVar16 = uVar17;
          } while ((int)uVar18 <= (int)uVar9);
        }
        plVar11[(int)(uVar16 - 1)] = lVar10;
        bVar1 = 1 < (long)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
      uVar12 = (ulong)uVar9;
      uVar15 = uVar12 - 1;
      lVar10 = plVar11[uVar15 & 0xffffffff];
      plVar11[uVar15 & 0xffffffff] = *plVar11;
      if (2 < uVar9) {
        do {
          uVar9 = 2;
          uVar18 = 1;
          do {
            if ((int)uVar9 < (int)uVar15) {
              lVar19 = (plVar11 + (int)uVar9)[-1];
              if (*(char *)(lVar19 + 0x1a) == '\0') {
                fVar20 = *(float *)(lVar19 + 0x14);
              }
              else {
                fVar20 = 100.0;
              }
              lVar19 = plVar11[(int)uVar9];
              if (*(char *)(lVar19 + 0x1a) == '\0') {
                fVar21 = *(float *)(lVar19 + 0x14);
              }
              else {
                fVar21 = 100.0;
              }
              uVar16 = uVar9 | fVar21 < fVar20;
              if (*(char *)(lVar10 + 0x1a) != '\0') goto LAB_03ec14c0;
LAB_03ec14f8:
              fVar20 = *(float *)(lVar10 + 0x14);
            }
            else {
              uVar16 = uVar9;
              if (*(char *)(lVar10 + 0x1a) == '\0') goto LAB_03ec14f8;
LAB_03ec14c0:
              fVar20 = 100.0;
            }
            lVar19 = plVar11[(int)(uVar16 - 1)];
            if (*(char *)(lVar19 + 0x1a) == '\0') {
              fVar21 = *(float *)(lVar19 + 0x14);
            }
            else {
              fVar21 = 100.0;
            }
            lVar14 = (long)(int)(uVar18 - 1);
            if (fVar20 <= fVar21) goto LAB_03ec1460;
            plVar11[lVar14] = lVar19;
            uVar9 = uVar16 << 1;
            uVar18 = uVar16;
          } while ((long)(int)uVar9 < (long)uVar12);
          lVar14 = (long)(int)(uVar16 - 1);
LAB_03ec1460:
          plVar11[lVar14] = lVar10;
          uVar12 = uVar15 - 1 & 0xffffffff;
          lVar10 = plVar11[uVar12];
          plVar11[uVar12] = *plVar11;
          bVar1 = 2 < uVar15;
          uVar12 = uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      *plVar11 = lVar10;
    }
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_190 = (undefined *)0x0;
    lStack_188 = 0;
    if (0 < (int)uVar5) {
      uVar12 = 0;
      do {
        pbVar13 = *(byte **)(*(long *)(param_1 + 2) + uVar12 * 8);
        uVar15 = (ulong)*pbVar13;
        if (0x1f < *pbVar13) {
          uVar15 = 0;
        }
        *(float *)((long)&local_190 + uVar15 * 4) =
             *(float *)(pbVar13 + 0x14) + *(float *)((long)&local_190 + uVar15 * 4);
        *(short *)(pbVar13 + 6) = (short)uVar12;
        uVar12 = uVar12 + 1;
        pbVar13[0x1b] = 1;
      } while (uVar5 != uVar12);
    }
    uVar12 = (ulong)(int)uVar5;
    uVar15 = ~uVar12;
    if ((uVar7 - uVar5 & 1) != 0) {
      lVar10 = uVar12 * 8;
      uVar12 = uVar12 + 1;
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 2) + lVar10) + 0x1b) = 0;
    }
    if (uVar15 + (long)(int)uVar7 != 0) {
      do {
        lVar10 = uVar12 * 8;
        uVar12 = uVar12 + 2;
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 2) + lVar10) + 0x1b) = 0;
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 2) + lVar10 + 8) + 0x1b) = 0;
      } while ((long)(int)uVar7 != uVar12);
    }
    if (0 < (int)uVar5) {
      uVar12 = 0;
      do {
        if (uVar12 < *param_1) {
          pbVar13 = *(byte **)(*(long *)(param_1 + 2) + uVar12 * 8);
        }
        else {
          pbVar13 = (byte *)0x0;
        }
        bVar3 = *pbVar13;
        uVar15 = (ulong)bVar3;
        uVar9 = (uint)bVar3;
        if (*(uint *)(param_3 + 0x18) <= (uint)bVar3) {
          uVar9 = 0;
        }
        if (0x1f < bVar3) {
          uVar15 = 0;
        }
        if (*(long *)(pbVar13 + 8) == 0) {
          uVar8 = 0xffff;
        }
        else {
          uVar8 = *(undefined2 *)(*(long *)(pbVar13 + 8) + 6);
        }
        fVar20 = *(float *)(pbVar13 + 0x14) / *(float *)((long)&local_190 + uVar15 * 4);
        lVar10 = *(long *)(*(long *)(param_3 + 0x20) + (ulong)uVar9 * 0x10);
        (**(code **)(*param_2 + 0x30))
                  (fVar20,*(undefined4 *)(pbVar13 + 0x10),param_2,uVar12 & 0xffffffff,
                   *(undefined2 *)(pbVar13 + 2),*(undefined8 *)(*(long *)(lVar10 + 0x90) + 0x18),
                   pbVar13[0x18] != 0,uVar8);
        if (-1 < *(short *)(pbVar13 + 4)) {
          (**(code **)(*param_2 + 0xe0))(param_2,1);
          uVar9 = *(uint *)(param_7 + 0x48);
          if ((int)uVar9 < 0x18) {
            bVar3 = pbVar13[0x19];
            uVar8 = *(undefined2 *)(pbVar13 + 4);
            *(uint *)(param_7 + 0x48) = uVar9 + 1;
            puVar2 = param_7 + (ulong)uVar9 * 3;
            if (0x17 < uVar9) {
              puVar2 = param_7;
            }
            *puVar2 = (short)uVar12;
            puVar2[1] = uVar8;
            *(byte *)(puVar2 + 2) = bVar3;
          }
        }
        if (*(float *)(lVar10 + 0xb4) <= fVar20 && pbVar13[1] == 0) {
          *(short *)(lVar10 + 0xb0) = (short)uVar12;
          *(float *)(lVar10 + 0xb4) = fVar20;
        }
        uVar12 = uVar12 + 1;
      } while (uVar5 != uVar12);
    }
  }
  else if (0 < (int)uVar7) {
    uVar12 = 0;
    do {
      if (uVar12 < *param_1) {
        pbVar13 = *(byte **)(*(long *)(param_1 + 2) + uVar12 * 8);
      }
      else {
        pbVar13 = (byte *)0x0;
      }
      uVar9 = (uint)*pbVar13;
      if (*(uint *)(param_3 + 0x18) <= (uint)*pbVar13) {
        uVar9 = 0;
      }
      if (*(long *)(pbVar13 + 8) == 0) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *(undefined2 *)(*(long *)(pbVar13 + 8) + 6);
      }
      lVar10 = *(long *)(*(long *)(param_3 + 0x20) + (ulong)uVar9 * 0x10);
      (**(code **)(*param_2 + 0x30))
                (*(undefined4 *)(pbVar13 + 0x14),*(undefined4 *)(pbVar13 + 0x10),param_2,
                 uVar12 & 0xffffffff,*(undefined2 *)(pbVar13 + 2),
                 *(undefined8 *)(*(long *)(lVar10 + 0x90) + 0x18),pbVar13[0x18] != 0,uVar8);
      if (-1 < *(short *)(pbVar13 + 4)) {
        (**(code **)(*param_2 + 0xe0))(param_2,1);
        uVar9 = *(uint *)(param_7 + 0x48);
        if ((int)uVar9 < 0x18) {
          bVar3 = pbVar13[0x19];
          uVar8 = *(undefined2 *)(pbVar13 + 4);
          *(uint *)(param_7 + 0x48) = uVar9 + 1;
          puVar2 = param_7 + (ulong)uVar9 * 3;
          if (0x17 < uVar9) {
            puVar2 = param_7;
          }
          *puVar2 = (short)uVar12;
          puVar2[1] = uVar8;
          *(byte *)(puVar2 + 2) = bVar3;
        }
      }
      if (*(float *)(lVar10 + 0xb4) <= *(float *)(pbVar13 + 0x14) && pbVar13[1] == 0) {
        *(short *)(lVar10 + 0xb0) = (short)uVar12;
        *(undefined4 *)(lVar10 + 0xb4) = *(undefined4 *)(pbVar13 + 0x14);
      }
      uVar12 = uVar12 + 1;
      pbVar13[0x1b] = 1;
    } while (uVar7 != uVar12);
  }
  if ((int)uVar5 <= (int)uVar7) {
    uVar7 = uVar5;
  }
  *param_4 = uVar7;
  uVar7 = param_1[0x508];
  if (0 < (int)uVar7) {
    uVar12 = 0;
    do {
      if (uVar12 < param_1[0x508]) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x50a) + uVar12 * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar4 = *(undefined1 *)(lVar10 + 1);
      iVar6 = (**(code **)(*param_2 + 0xa0))(param_2,uVar4);
      if ((long)iVar6 <= (long)uVar12) {
        local_7d = 0;
        lStack_188 = (long)&local_180 + 4;
        local_180 = CONCAT35(local_180._5_3_,0x100);
        local_190 = PTR_DAT_04bb21f8 + 0x10;
        lVar10 = *(long *)(*(long *)(param_8 + 0x10) + 8);
        FUN_038d1270(&local_190,"%s.as",
                     lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
        uVar7 = (**(code **)(*param_2 + 0xa0))(param_2,uVar4);
        break;
      }
      (**(code **)(*param_2 + 0x38))
                (*(undefined4 *)(lVar10 + 4),param_2,uVar4,uVar12 & 0xffffffff,
                 *(undefined2 *)(lVar10 + 2));
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
  }
  *param_5 = uVar7;
  uVar5 = (**(code **)(*param_2 + 0xa0))(param_2,3);
  uVar7 = param_1[0x610];
  if ((int)uVar5 < (int)uVar7) {
    uVar9 = uVar7;
    if (*(int *)(*(long *)PTR_DAT_04bb4a70 + 0xd0) == 1) {
      local_7d = 0;
      lStack_188 = (long)&local_180 + 4;
      local_180 = CONCAT35(local_180._5_3_,0x100);
      local_190 = PTR_DAT_04bb21f8 + 0x10;
      lVar10 = *(long *)(*(long *)(param_8 + 0x10) + 8);
      FUN_038d1270(&local_190,"%s.as",lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8))
      ;
      uVar9 = param_1[0x610];
    }
    if (1 < (int)uVar9) {
      plVar11 = *(long **)(param_1 + 0x612);
      uVar12 = (ulong)(uVar9 >> 1);
      do {
        uVar18 = (uint)uVar12 * 2;
        lVar10 = plVar11[uVar12 - 1 & 0xffffffff];
        if ((int)uVar9 < (int)uVar18) {
          uVar16 = (uint)uVar12;
        }
        else {
          uVar15 = uVar12 & 0xffffffff;
          do {
            if ((int)uVar18 < (int)uVar9) {
              uVar17 = uVar18 | *(float *)(plVar11[(int)uVar18] + 0xc) <
                                *(float *)((plVar11 + (int)uVar18)[-1] + 0xc);
            }
            else {
              uVar17 = uVar18;
            }
            uVar16 = (uint)uVar15;
            if (*(float *)(lVar10 + 0xc) <= *(float *)(plVar11[(int)(uVar17 - 1)] + 0xc)) break;
            plVar11[(int)((uint)uVar15 - 1)] = plVar11[(int)(uVar17 - 1)];
            uVar18 = uVar17 * 2;
            uVar15 = (ulong)uVar17;
            uVar16 = uVar17;
          } while ((int)uVar18 <= (int)uVar9);
        }
        plVar11[(int)(uVar16 - 1)] = lVar10;
        bVar1 = 1 < (long)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
      uVar15 = (ulong)uVar9 - 1;
      uVar12 = uVar15 & 0xffffffff;
      lVar10 = plVar11[uVar12];
      plVar11[uVar12] = *plVar11;
      uVar12 = (ulong)uVar9;
      if (2 < uVar9) {
        do {
          uVar9 = 2;
          uVar18 = 1;
          do {
            if ((int)uVar9 < (int)uVar15) {
              uVar16 = uVar9 | *(float *)(plVar11[(int)uVar9] + 0xc) <
                               *(float *)((plVar11 + (int)uVar9)[-1] + 0xc);
            }
            else {
              uVar16 = uVar9;
            }
            lVar19 = (long)(int)(uVar18 - 1);
            if (*(float *)(lVar10 + 0xc) <= *(float *)(plVar11[(int)(uVar16 - 1)] + 0xc))
            goto LAB_03ec1b94;
            plVar11[lVar19] = plVar11[(int)(uVar16 - 1)];
            uVar9 = uVar16 << 1;
            uVar18 = uVar16;
          } while ((long)(int)uVar9 < (long)uVar12);
          lVar19 = (long)(int)(uVar16 - 1);
LAB_03ec1b94:
          plVar11[lVar19] = lVar10;
          uVar12 = uVar15 - 1 & 0xffffffff;
          lVar10 = plVar11[uVar12];
          plVar11[uVar12] = *plVar11;
          bVar1 = 2 < uVar15;
          uVar12 = uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      *plVar11 = lVar10;
    }
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_190 = (undefined *)0x0;
    lStack_188 = 0;
    if (0 < (int)uVar5) {
      uVar12 = 0;
      do {
        pbVar13 = *(byte **)(*(long *)(param_1 + 0x612) + uVar12 * 8);
        uVar15 = (ulong)*pbVar13;
        if (0x1f < *pbVar13) {
          uVar15 = 0;
        }
        *(float *)((long)&local_190 + uVar15 * 4) =
             *(float *)(pbVar13 + 0xc) + *(float *)((long)&local_190 + uVar15 * 4);
        *(short *)(pbVar13 + 4) = (short)uVar12;
        uVar12 = uVar12 + 1;
        pbVar13[0x10] = 1;
      } while (uVar5 != uVar12);
    }
    uVar12 = (ulong)(int)uVar5;
    uVar15 = ~uVar12;
    if ((uVar7 - uVar5 & 1) != 0) {
      lVar10 = uVar12 * 8;
      uVar12 = uVar12 + 1;
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x612) + lVar10) + 0x10) = 0;
    }
    if (uVar15 + (long)(int)uVar7 != 0) {
      do {
        lVar10 = uVar12 * 8;
        uVar12 = uVar12 + 2;
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x612) + lVar10) + 0x10) = 0;
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x612) + lVar10 + 8) + 0x10) = 0;
      } while ((long)(int)uVar7 != uVar12);
    }
    if (0 < (int)uVar5) {
      uVar12 = 0;
      do {
        pbVar13 = *(byte **)(*(long *)(param_1 + 0x612) + uVar12 * 8);
        uVar15 = (ulong)*pbVar13;
        if (0x1f < *pbVar13) {
          uVar15 = 0;
        }
        (**(code **)(*param_2 + 0x40))
                  (*(float *)(pbVar13 + 0xc) / *(float *)((long)&local_190 + uVar15 * 4),
                   *(undefined4 *)(pbVar13 + 8),param_2,uVar12 & 0xffffffff,
                   *(undefined2 *)(pbVar13 + 2));
        uVar12 = uVar12 + 1;
      } while (uVar5 != uVar12);
    }
  }
  else if (0 < (int)uVar7) {
    uVar12 = 0;
    do {
      if (uVar12 < param_1[0x610]) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x612) + uVar12 * 8);
      }
      else {
        lVar10 = 0;
      }
      (**(code **)(*param_2 + 0x40))
                (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 8),param_2,
                 uVar12 & 0xffffffff,*(undefined2 *)(lVar10 + 2));
      uVar12 = uVar12 + 1;
      *(undefined1 *)(lVar10 + 0x10) = 1;
    } while (uVar7 != uVar12);
  }
  if ((int)uVar5 <= (int)uVar7) {
    uVar7 = uVar5;
  }
  *param_6 = uVar7;
  return;
}

