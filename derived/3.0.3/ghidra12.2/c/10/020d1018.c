
/* WARNING: Removing unreachable block (ram,0x020d16c4) */
/* WARNING: Removing unreachable block (ram,0x020d16cc) */

void FUN_020d1018(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  byte bVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  long local_90 [4];
  undefined7 local_70;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  byte bStack_66;
  
  puVar10 = PTR_DAT_04bb47d0;
  iVar6 = *(int *)(param_1 + 0x2068);
  if (iVar6 != 2) {
    if (iVar6 != 1) {
      if (iVar6 != 0) {
        return;
      }
      pbVar1 = (byte *)(param_1 + 0x20ac);
      bVar12 = *pbVar1;
      if ((bVar12 & 0x14) != 0) {
        return;
      }
      piVar22 = *(int **)PTR_DAT_04bb47d0;
      if ((bVar12 & 1) != 0) {
        if ((bVar12 >> 3 & 1) == 0) {
          if (piVar22 == (int *)0x0) {
            return;
          }
          if (piVar22[2] != 2) {
            return;
          }
          uVar17 = FUN_035afdc0(piVar22,param_1 + 0x28,&local_a0,param_1 + 8);
          if (((uVar17 & 1) != 0) && (local_a0 == 2)) {
            *pbVar1 = *pbVar1 | 8;
            FUN_0207832c(*(undefined8 *)(param_1 + 0x20),param_1 + 0x28,param_1 + 0x206c,
                         param_1 + 0x2058);
            return;
          }
          bVar13 = *pbVar1 | 6;
        }
        else {
          if (*(int *)(param_1 + 0x38) == 0) {
            return;
          }
          lVar16 = *(long *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x38) < 1) {
            lVar16 = 0;
          }
          lVar20 = 0;
          if (lVar16 != 0) {
            lVar20 = lVar16 + -0x10;
          }
          FUN_03ebb268(*(long *)(param_1 + 0x20) + 0x50);
          lVar16 = *(long *)(param_1 + 0x20);
          if ((*(int *)(lVar16 + 0x58) != 3) &&
             (((*(float *)(lVar16 + 0x1c0) < 31.0 || (*(char *)(lVar16 + 0x1d1) == '\0')) ||
              ((*(int *)(lVar16 + 0x58) == 1 && (*(int *)(lVar16 + 0x9c) == 4)))))) {
            if (1 < *(int *)(param_1 + 0x38)) {
              FUN_020d1964(param_1 + 0x28,lVar20);
              lVar16 = *(long *)(param_1 + 0x20);
            }
            if (*(char *)(lVar16 + 0x1d1) != '\0') {
              if (*(int *)(lVar16 + 0x58) != 1) {
                return;
              }
              if (*(int *)(lVar16 + 0x9c) != 4) {
                return;
              }
            }
            *pbVar1 = *pbVar1 | 0x20;
            piVar22 = *(int **)puVar10;
            if (piVar22 == (int *)0x0) {
              return;
            }
            if (*piVar22 == 0 && piVar22[2] == 0) {
              return;
            }
            if (*piVar22 == *(int *)(param_1 + 8)) {
              *(undefined1 *)(piVar22 + 0x2c) = 1;
              return;
            }
            return;
          }
          if (*(int *)(lVar16 + 0x9c) != 3) {
            return;
          }
          bVar13 = *pbVar1 | 4;
        }
LAB_020d1658:
        *pbVar1 = bVar13;
        return;
      }
      if (piVar22 == (int *)0x0) {
        return;
      }
      if (*piVar22 != 0 || piVar22[2] != 0) {
        return;
      }
      bVar13 = bVar12 | 1;
      *pbVar1 = bVar13;
      fVar24 = *(float *)(*(long *)(param_1 + 0x10) + 0x278) + 2.5;
      fVar25 = *(float *)(*(long *)(param_1 + 0x10) + 0x280) + 2.5;
      uVar2 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0) & 0xffff;
      uVar3 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0) & 0xffff;
      uVar7 = (int)((float)(int)*(float *)(param_1 + 0x2058) / 5.0) -
              (uint)(*(float *)(param_1 + 0x2058) < 0.0);
      uVar8 = (int)((float)(int)*(float *)(param_1 + 0x2060) / 5.0) -
              (uint)(*(float *)(param_1 + 0x2060) < 0.0);
      if ((uVar7 == uVar2) && (uVar8 == uVar3)) {
        plVar23 = *(long **)(param_1 + 0x30);
        if (*(long **)(param_1 + 0x30) != (long *)(param_1 + 0x28)) {
          do {
            plVar5 = (long *)plVar23[1];
            plVar14 = plVar5;
            if (*plVar23 != 0) {
              *(long **)(*plVar23 + 8) = plVar5;
              plVar14 = (long *)plVar23[1];
            }
            if (plVar14 != (long *)0x0) {
              *plVar14 = *plVar23;
            }
            *plVar23 = 0;
            plVar23[1] = 0;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            plVar23 = plVar23 + -2;
            (**(code **)*plVar23)(plVar23);
            *plVar23 = *(long *)(param_1 + 0x40);
            *(long **)(param_1 + 0x40) = plVar23;
            plVar23 = plVar5;
          } while (plVar5 != (long *)(param_1 + 0x28));
          bVar13 = *pbVar1;
        }
        bVar13 = bVar13 | 0x20;
        goto LAB_020d1658;
      }
      if (*piVar22 != 0 || piVar22[2] != 0) {
        bVar13 = bVar12 | 7;
        goto LAB_020d1658;
      }
      plVar23 = *(long **)(param_1 + 0x30);
      puVar9 = (uint *)PTR_DAT_04bca408;
      while (PTR_DAT_04bca408 = (undefined *)puVar9, plVar23 != (long *)(param_1 + 0x28)) {
        plVar5 = (long *)plVar23[1];
        plVar14 = plVar5;
        if (*plVar23 != 0) {
          *(long **)(*plVar23 + 8) = plVar5;
          plVar14 = (long *)plVar23[1];
        }
        if (plVar14 != (long *)0x0) {
          *plVar14 = *plVar23;
        }
        *plVar23 = 0;
        plVar23[1] = 0;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        plVar23 = plVar23 + -2;
        (**(code **)*plVar23)(plVar23);
        *plVar23 = *(long *)(param_1 + 0x40);
        *(long **)(param_1 + 0x40) = plVar23;
        plVar23 = plVar5;
        puVar9 = (uint *)PTR_DAT_04bca408;
      }
      if (0 < (int)*puVar9) {
        lVar16 = 0;
        puVar18 = *(undefined8 **)(puVar9 + 4);
        do {
          puVar19 = *(undefined8 **)(*(long *)(puVar9 + 2) + lVar16 * 8);
          lVar16 = lVar16 + 1;
          *puVar19 = puVar18;
          *(undefined8 **)(puVar9 + 4) = puVar19;
          puVar18 = puVar19;
        } while (lVar16 < (int)*puVar9);
      }
      puVar10 = PTR_DAT_04bca410;
      *puVar9 = 0;
      puVar11 = PTR_DAT_04bca418;
      *(undefined8 *)puVar10 = 0;
      if (0 < *(int *)puVar11) {
        lVar16 = 0;
        puVar18 = *(undefined8 **)(puVar11 + 0x10);
        do {
          puVar19 = *(undefined8 **)(*(long *)(puVar11 + 8) + lVar16 * 8);
          lVar16 = lVar16 + 1;
          *puVar19 = puVar18;
          *(undefined8 **)(puVar11 + 0x10) = puVar19;
          puVar18 = puVar19;
        } while (lVar16 < *(int *)puVar11);
      }
      puVar10 = PTR_DAT_04bca420;
      *(undefined4 *)puVar11 = 0;
      lVar16 = 0;
      *(undefined1 **)puVar10 = &DAT_3f8000003f800000;
      *(undefined1 **)(puVar10 + 8) = &DAT_3f8000003f800000;
      *(undefined8 *)(puVar10 + 0x10) = 0x40c0000047c34f80;
      *(undefined8 *)(puVar10 + 0x18) = 0x4000000040400000;
      puVar10 = PTR_DAT_04bca428;
      do {
        puVar18 = (undefined8 *)(puVar10 + lVar16);
        lVar16 = lVar16 + 0x10;
        *puVar18 = 0x300000003;
        puVar18[1] = 0x300000003;
        puVar11 = PTR_DAT_04bca430;
      } while (lVar16 != 0x48000);
      piVar22[0x14] = 0;
      *(undefined1 *)(piVar22 + 0x2c) = 0;
      *(undefined8 *)(puVar11 + 0x10) = 0;
      *(undefined8 *)(puVar11 + 0x20) = 0;
      piVar22[0] = 0;
      piVar22[1] = 0;
      piVar22[2] = 0;
      uStack_68 = 0;
      uStack_67 = 1;
      local_90[0] = 0;
      local_90[1] = 0;
      local_70 = 0;
      uStack_69 = 0;
      *(undefined **)(piVar22 + 0x24) = PTR_DAT_04bca438 + 0x10;
      lVar16 = *(long *)(param_1 + 0x20);
      bStack_66 = *pbVar1 >> 6 & 1;
      local_90[2] = 0;
      local_90[3] = 0;
      if (*(char *)(lVar16 + 0x170) == '\0') {
        if (*(char *)(lVar16 + 0x171) != '\0') {
          lVar20 = 0;
          goto LAB_020d166c;
        }
      }
      else {
        local_90[0] = lVar16 + 0xa8;
        if (*(char *)(lVar16 + 0x171) != '\0') {
          lVar20 = 1;
LAB_020d166c:
          local_90[lVar20] = lVar16 + 0xd0;
        }
      }
      if (*(char *)(lVar16 + 0x172) != '\0') {
        lVar20 = 1;
        if (local_90[1] != 0) {
          lVar20 = 2;
        }
        lVar4 = 0;
        if (local_90[0] != 0) {
          lVar4 = lVar20;
        }
        local_90[lVar4] = lVar16 + 0xf8;
      }
      if (*(char *)(lVar16 + 0x173) != '\0') {
        lVar20 = 0;
        if (local_90[0] != 0) {
          if (local_90[1] == 0) {
            lVar20 = 1;
          }
          else if (local_90[2] == 0) {
            lVar20 = 2;
          }
          else {
            lVar20 = 3;
          }
        }
        local_90[lVar20] = lVar16 + 0x120;
      }
      if (*(char *)(lVar16 + 0x174) != '\0') {
        lVar20 = 0;
        if (local_90[0] != 0) {
          if (local_90[1] == 0) {
            lVar20 = 1;
          }
          else if (local_90[2] == 0) {
            lVar20 = 2;
          }
          else if (local_90[3] == 0) {
            lVar20 = 3;
          }
          else {
            if (CONCAT17(uStack_69,local_70) != 0) goto LAB_020d1744;
            lVar20 = 4;
          }
        }
        local_90[lVar20] = lVar16 + 0x148;
      }
LAB_020d1744:
      uVar15 = *puVar9;
      uVar17 = (ulong)uVar15;
      if (0 < (int)uVar15) {
        puVar18 = *(undefined8 **)(puVar9 + 2);
        uVar21 = uVar17;
        do {
          if (*(undefined **)*puVar18 == PTR_LAB_04bc2578) goto LAB_020d17cc;
          uVar21 = uVar21 - 1;
          puVar18 = puVar18 + 1;
        } while (uVar21 != 0);
      }
      if ((int)uVar15 < (int)puVar9[1]) {
        puVar18 = *(undefined8 **)(puVar9 + 4);
        if (puVar18 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar9 + 4) = *puVar18;
        }
        *puVar18 = PTR_LAB_04bc2578;
        uVar15 = *puVar9;
        uVar17 = (ulong)uVar15;
        if ((int)uVar15 < (int)puVar9[1]) {
          *(undefined8 **)(*(long *)(puVar9 + 2) + (long)(int)uVar15 * 8) = puVar18;
          uVar17 = (ulong)(*puVar9 + 1);
          *puVar9 = *puVar9 + 1;
        }
      }
LAB_020d17cc:
      uVar15 = (uint)uVar17;
      if (0 < (int)uVar15) {
        puVar18 = *(undefined8 **)(puVar9 + 2);
        do {
          if (*(undefined **)*puVar18 == PTR_LAB_04bc2580) goto LAB_020d1850;
          uVar17 = uVar17 - 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
      if ((int)uVar15 < (int)puVar9[1]) {
        puVar18 = *(undefined8 **)(puVar9 + 4);
        if (puVar18 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar9 + 4) = *puVar18;
        }
        *puVar18 = PTR_LAB_04bc2580;
        uVar15 = *puVar9;
        if ((int)uVar15 < (int)puVar9[1]) {
          *(undefined8 **)(*(long *)(puVar9 + 2) + (long)(int)uVar15 * 8) = puVar18;
          uVar15 = *puVar9 + 1;
          *puVar9 = uVar15;
        }
      }
LAB_020d1850:
      if (0 < (int)uVar15) {
        puVar18 = *(undefined8 **)(puVar9 + 2);
        uVar17 = (ulong)uVar15;
        do {
          if (*(undefined **)*puVar18 == PTR_LAB_04bc2588) goto LAB_020d18d0;
          uVar17 = uVar17 - 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
      if ((int)uVar15 < (int)puVar9[1]) {
        puVar18 = *(undefined8 **)(puVar9 + 4);
        if (puVar18 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar9 + 4) = *puVar18;
        }
        *puVar18 = PTR_LAB_04bc2588;
        if ((int)*puVar9 < (int)puVar9[1]) {
          *(undefined8 **)(*(long *)(puVar9 + 2) + (long)(int)*puVar9 * 8) = puVar18;
          *puVar9 = *puVar9 + 1;
        }
      }
LAB_020d18d0:
      local_a0 = uVar2;
      uStack_9c = uVar3;
      local_98 = uVar7;
      uStack_94 = uVar8;
      FUN_035af7e0(piVar22,param_1 + 8,&local_a0);
      return;
    }
    pbVar1 = (byte *)(param_1 + 0x20ac);
    bVar12 = *pbVar1;
    if ((bVar12 & 0x24) != 0) {
      return;
    }
    if ((bVar12 & 1) == 0) {
      *pbVar1 = bVar12 | 1;
      uVar17 = FUN_0207846c(*(undefined8 *)(param_1 + 0x20),param_1 + 0x2058,param_1 + 0x206c);
      if ((uVar17 & 1) != 0) goto LAB_020d10f0;
LAB_020d1130:
      bVar12 = 4;
    }
    else {
LAB_020d10f0:
      FUN_03ebb268(*(long *)(param_1 + 0x20) + 0x50);
      lVar16 = *(long *)(param_1 + 0x20);
      if ((*(char *)(lVar16 + 0x1d1) != '\0') &&
         ((*(int *)(lVar16 + 0x58) != 1 || (*(int *)(lVar16 + 0x9c) != 4)))) {
        if (*(int *)(lVar16 + 0x9c) != 3) {
          return;
        }
        goto LAB_020d1130;
      }
      bVar12 = 0x20;
    }
    bVar12 = *pbVar1 | bVar12;
    goto LAB_020d113c;
  }
  pbVar1 = (byte *)(param_1 + 0x20ac);
  bVar12 = *pbVar1;
  if ((bVar12 >> 2 & 1) != 0) {
    return;
  }
  if ((bVar12 & 1) == 0) {
    *pbVar1 = bVar12 | 1;
    uVar17 = FUN_020781c8(*(undefined8 *)(param_1 + 0x20),param_1 + 0x2064,param_1 + 0x206c);
    if ((uVar17 & 1) != 0) goto LAB_020d1088;
  }
  else {
LAB_020d1088:
    FUN_03ebb268(*(long *)(param_1 + 0x20) + 0x50);
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x9c) != 3) {
      return;
    }
  }
  bVar12 = *pbVar1 | 4;
LAB_020d113c:
  *(byte *)(param_1 + 0x20ac) = bVar12;
  return;
}

