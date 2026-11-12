
undefined8 FUN_009721a0(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined *local_80;
  uint local_78;
  uint uStack_74;
  
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  uVar13 = *(uint *)(param_2 + 0x14);
  if (uVar1 != uVar13) {
    uVar3 = *(uint *)(param_2 + 0x10);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    uVar11 = uVar3;
    uVar14 = uVar3;
    do {
      if ((((-1 < (int)uVar14) && (-1 < (int)uVar13)) &&
          (uVar4 = *(uint *)(param_1 + 0x38), uVar14 < uVar4)) &&
         (uVar5 = *(uint *)(param_1 + 0x3c), uVar13 < uVar5)) {
        if ((param_3 & 1) == 0) {
          local_80 = puVar2;
          local_78 = uVar14;
          uStack_74 = uVar13;
          FUN_00962530(param_1,&local_80,&local_b8);
          uVar4 = *(uint *)(param_1 + 0x38);
          uVar5 = *(uint *)(param_1 + 0x3c);
          uVar6 = local_b8;
          uVar7 = local_94;
        }
        else {
          uVar11 = uVar14 + uVar4 * uVar13;
          puVar9 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x34);
          if (*(uint *)(param_1 + 0x48) <= uVar11) {
            puVar9 = (undefined8 *)0x0;
          }
          local_b0 = *(float *)(puVar9 + 1);
          local_88 = *(undefined2 *)(puVar9 + 6);
          local_ac = (float)*(undefined8 *)((long)puVar9 + 0xc);
          fStack_a8 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0xc) >> 0x20);
          local_a4 = *(float *)((long)puVar9 + 0x14);
          local_98 = *(float *)(puVar9 + 4);
          local_86 = *(undefined1 *)((long)puVar9 + 0x32);
          local_8c = *(float *)((long)puVar9 + 0x2c);
          local_a0 = (float)puVar9[3];
          fStack_9c = (float)((ulong)puVar9[3] >> 0x20);
          local_85 = *(undefined1 *)((long)puVar9 + 0x33);
          uVar6 = *puVar9;
          uVar7 = *(undefined8 *)((long)puVar9 + 0x24);
        }
        local_b8._0_4_ = (float)uVar6;
        local_b8._4_4_ = (float)((ulong)uVar6 >> 0x20);
        if (((((uVar13 != 0) && (uVar11 = uVar13 - 1, uVar14 < uVar4)) &&
             ((uVar11 < uVar5 &&
              ((*(int *)(param_2 + 0x10) <= (int)uVar14 && ((int)uVar14 <= *(int *)(param_2 + 0x20))
               ))))) && (*(int *)(param_2 + 0x14) < (int)uVar13)) &&
           ((int)uVar11 <= *(int *)(param_2 + 0x24))) {
          lVar12 = *(long *)(param_1 + 0x60);
          uVar11 = uVar14 + uVar4 * uVar11;
          if ((((lVar12 == 0) || (*(uint *)(param_1 + 0x58) <= uVar11)) ||
              (*(char *)(lVar12 + (long)(int)uVar11 * 0x34 + 0x32) == '\a')) || ((param_3 & 1) != 0)
             ) {
            lVar12 = *(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x34;
            if (*(uint *)(param_1 + 0x48) <= uVar11) {
              lVar12 = 0;
            }
          }
          else {
            lVar12 = lVar12 + (long)(int)uVar11 * 0x34;
          }
          fVar15 = *(float *)(lVar12 + 0x20);
          if (1.25 < fVar15 - local_b8._4_4_) {
            return 1;
          }
          fVar18 = *(float *)(lVar12 + 0x1c);
          if (1.25 < fVar18 - local_b0) {
            return 1;
          }
          fVar19 = (float)local_b8;
          if (local_b0 <= (float)local_b8) {
            fVar19 = local_b0;
          }
          fVar20 = (float)local_b8;
          if ((float)local_b8 <= local_b0) {
            fVar20 = local_b0;
          }
          fVar17 = local_b8._4_4_;
          if (local_b0 <= local_b8._4_4_) {
            fVar17 = local_b0;
          }
          fVar21 = local_b8._4_4_;
          if (local_b8._4_4_ <= local_b0) {
            fVar21 = local_b0;
          }
          if (local_b8._4_4_ <= (float)local_b8) {
            fVar19 = fVar17;
          }
          if ((float)local_b8 <= local_b8._4_4_) {
            fVar20 = fVar21;
          }
          if (fVar20 - fVar19 < *(float *)(param_1 + 0x30)) {
            if (fVar15 - local_b8._4_4_ < -1.25) {
              return 1;
            }
            if (fVar18 - local_b0 < -1.25) {
              return 1;
            }
            fVar20 = *(float *)(lVar12 + 0x18);
            fVar19 = fVar20;
            if (fVar15 <= fVar20) {
              fVar19 = fVar15;
            }
            fVar17 = fVar20;
            if (fVar20 <= fVar15) {
              fVar17 = fVar15;
            }
            fVar21 = fVar18;
            if (fVar15 <= fVar18) {
              fVar21 = fVar15;
            }
            fVar16 = fVar18;
            if (fVar18 <= fVar15) {
              fVar16 = fVar15;
            }
            if (fVar18 <= fVar20) {
              fVar19 = fVar21;
            }
            if (fVar20 <= fVar18) {
              fVar17 = fVar16;
            }
            if (*(float *)(param_1 + 0x30) <= fVar17 - fVar19) {
              return 1;
            }
          }
        }
        if ((((uVar14 != 0) && (uVar11 = uVar14 - 1, uVar11 < uVar4)) &&
            (((uVar13 < uVar5 &&
              ((*(int *)(param_2 + 0x10) < (int)uVar14 && ((int)uVar11 <= *(int *)(param_2 + 0x20)))
              )) && (*(int *)(param_2 + 0x14) <= (int)uVar13)))) &&
           ((int)uVar13 <= *(int *)(param_2 + 0x24))) {
          lVar12 = *(long *)(param_1 + 0x60);
          uVar11 = uVar11 + uVar4 * uVar13;
          if ((((lVar12 == 0) || (*(uint *)(param_1 + 0x58) <= uVar11)) ||
              (*(char *)(lVar12 + (long)(int)uVar11 * 0x34 + 0x33) == '\a')) || ((param_3 & 1) != 0)
             ) {
            lVar12 = *(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x34;
            if (*(uint *)(param_1 + 0x48) <= uVar11) {
              lVar12 = 0;
            }
          }
          else {
            lVar12 = lVar12 + (long)(int)uVar11 * 0x34;
          }
          fVar15 = *(float *)(lVar12 + 0x2c);
          if (1.25 < fVar15 - fStack_a8) {
            return 1;
          }
          fVar18 = *(float *)(lVar12 + 0x28);
          if (1.25 < fVar18 - local_a4) {
            return 1;
          }
          fVar19 = local_ac;
          if (local_a4 <= local_ac) {
            fVar19 = local_a4;
          }
          fVar20 = local_ac;
          if (local_ac <= local_a4) {
            fVar20 = local_a4;
          }
          fVar17 = fStack_a8;
          if (local_a4 <= fStack_a8) {
            fVar17 = local_a4;
          }
          fVar21 = fStack_a8;
          if (fStack_a8 <= local_a4) {
            fVar21 = local_a4;
          }
          if (fStack_a8 <= local_ac) {
            fVar19 = fVar17;
          }
          if (local_ac <= fStack_a8) {
            fVar20 = fVar21;
          }
          if (fVar20 - fVar19 < *(float *)(param_1 + 0x30)) {
            if (fVar15 - fStack_a8 < -1.25) {
              return 1;
            }
            if (fVar18 - local_a4 < -1.25) {
              return 1;
            }
            fVar20 = *(float *)(lVar12 + 0x24);
            fVar19 = fVar20;
            if (fVar15 <= fVar20) {
              fVar19 = fVar15;
            }
            fVar17 = fVar20;
            if (fVar20 <= fVar15) {
              fVar17 = fVar15;
            }
            fVar21 = fVar18;
            if (fVar15 <= fVar18) {
              fVar21 = fVar15;
            }
            fVar16 = fVar18;
            if (fVar18 <= fVar15) {
              fVar16 = fVar15;
            }
            if (fVar18 <= fVar20) {
              fVar19 = fVar21;
            }
            if (fVar20 <= fVar18) {
              fVar17 = fVar16;
            }
            if (*(float *)(param_1 + 0x30) <= fVar17 - fVar19) {
              return 1;
            }
          }
        }
        if ((((uVar14 < uVar4) && (uVar11 = uVar13 + 1, uVar11 < uVar5)) &&
            ((*(int *)(param_2 + 0x10) <= (int)uVar14 &&
             (((int)uVar14 <= *(int *)(param_2 + 0x20) && (*(int *)(param_2 + 0x14) <= (int)uVar11))
             )))) && ((int)uVar13 < *(int *)(param_2 + 0x24))) {
          uVar11 = uVar14 + uVar4 * uVar11;
          if (((((*(long *)(param_1 + 0x60) == 0) || (*(uint *)(param_1 + 0x58) <= uVar11)) ||
               (pfVar10 = (float *)(*(long *)(param_1 + 0x60) + (long)(int)uVar11 * 0x34),
               *(char *)(pfVar10 + 0xc) == '\a')) || ((param_3 & 1) != 0)) &&
             (pfVar10 = (float *)(*(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x34),
             *(uint *)(param_1 + 0x48) <= uVar11)) {
            pfVar10 = (float *)0x0;
          }
          fVar15 = pfVar10[2];
          if (1.25 < fVar15 - fStack_9c) {
            return 1;
          }
          fVar18 = pfVar10[1];
          if (1.25 < fVar18 - local_98) {
            return 1;
          }
          fVar19 = local_a0;
          if (local_98 <= local_a0) {
            fVar19 = local_98;
          }
          fVar20 = local_a0;
          if (local_a0 <= local_98) {
            fVar20 = local_98;
          }
          fVar17 = fStack_9c;
          if (local_98 <= fStack_9c) {
            fVar17 = local_98;
          }
          fVar21 = fStack_9c;
          if (fStack_9c <= local_98) {
            fVar21 = local_98;
          }
          if (fStack_9c <= local_a0) {
            fVar19 = fVar17;
          }
          if (local_a0 <= fStack_9c) {
            fVar20 = fVar21;
          }
          if (fVar20 - fVar19 < *(float *)(param_1 + 0x30)) {
            if (fVar15 - fStack_9c < -1.25) {
              return 1;
            }
            if (fVar18 - local_98 < -1.25) {
              return 1;
            }
            fVar20 = *pfVar10;
            fVar19 = fVar20;
            if (fVar15 <= fVar20) {
              fVar19 = fVar15;
            }
            fVar17 = fVar20;
            if (fVar20 <= fVar15) {
              fVar17 = fVar15;
            }
            fVar21 = fVar18;
            if (fVar15 <= fVar18) {
              fVar21 = fVar15;
            }
            fVar16 = fVar18;
            if (fVar18 <= fVar15) {
              fVar16 = fVar15;
            }
            if (fVar18 <= fVar20) {
              fVar19 = fVar21;
            }
            if (fVar20 <= fVar18) {
              fVar17 = fVar16;
            }
            if (*(float *)(param_1 + 0x30) <= fVar17 - fVar19) {
              return 1;
            }
          }
        }
        uVar11 = uVar14 + 1;
        local_94._0_4_ = (float)uVar7;
        local_94._4_4_ = (float)((ulong)uVar7 >> 0x20);
        if (((uVar11 < uVar4) && (uVar13 < uVar5)) &&
           (((*(int *)(param_2 + 0x10) <= (int)uVar11 &&
             (((int)uVar14 < *(int *)(param_2 + 0x20) && (*(int *)(param_2 + 0x14) <= (int)uVar13)))
             ) && ((int)uVar13 <= *(int *)(param_2 + 0x24))))) {
          lVar12 = *(long *)(param_1 + 0x60);
          uVar11 = uVar11 + uVar4 * uVar13;
          if ((((lVar12 == 0) || (*(uint *)(param_1 + 0x58) <= uVar11)) ||
              (*(char *)(lVar12 + (long)(int)uVar11 * 0x34 + 0x31) == '\a')) || ((param_3 & 1) != 0)
             ) {
            lVar12 = *(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x34;
            if (*(uint *)(param_1 + 0x48) <= uVar11) {
              lVar12 = 0;
            }
          }
          else {
            lVar12 = lVar12 + (long)(int)uVar11 * 0x34;
          }
          fVar15 = *(float *)(lVar12 + 0x14);
          if (1.25 < fVar15 - local_94._4_4_) {
            return 1;
          }
          fVar18 = *(float *)(lVar12 + 0x10);
          if (1.25 < fVar18 - local_8c) {
            return 1;
          }
          fVar19 = (float)local_94;
          if (local_8c <= (float)local_94) {
            fVar19 = local_8c;
          }
          fVar20 = (float)local_94;
          if ((float)local_94 <= local_8c) {
            fVar20 = local_8c;
          }
          fVar17 = local_94._4_4_;
          if (local_8c <= local_94._4_4_) {
            fVar17 = local_8c;
          }
          fVar21 = local_94._4_4_;
          if (local_94._4_4_ <= local_8c) {
            fVar21 = local_8c;
          }
          if (local_94._4_4_ <= (float)local_94) {
            fVar19 = fVar17;
          }
          if ((float)local_94 <= local_94._4_4_) {
            fVar20 = fVar21;
          }
          if (fVar20 - fVar19 < *(float *)(param_1 + 0x30)) {
            if (fVar15 - local_94._4_4_ < -1.25) {
              return 1;
            }
            if (fVar18 - local_8c < -1.25) {
              return 1;
            }
            fVar20 = *(float *)(lVar12 + 0xc);
            fVar19 = fVar20;
            if (fVar15 <= fVar20) {
              fVar19 = fVar15;
            }
            fVar17 = fVar20;
            if (fVar20 <= fVar15) {
              fVar17 = fVar15;
            }
            fVar21 = fVar18;
            if (fVar15 <= fVar18) {
              fVar21 = fVar15;
            }
            fVar16 = fVar18;
            if (fVar18 <= fVar15) {
              fVar16 = fVar15;
            }
            if (fVar18 <= fVar20) {
              fVar19 = fVar21;
            }
            if (fVar20 <= fVar18) {
              fVar17 = fVar16;
            }
            if (*(float *)(param_1 + 0x30) <= fVar17 - fVar19) {
              return 1;
            }
          }
        }
        if ((((1.25 < local_ac - (float)local_b8) || (1.25 < fStack_a8 - local_b0)) ||
            ((local_ac - (float)local_b8 < -1.25 ||
             ((fStack_a8 - local_b0 < -1.25 || (1.25 < local_a0 - local_ac)))))) ||
           ((1.25 < fStack_9c - local_a4 ||
            (((((local_a0 - local_ac < -1.25 || (fStack_9c - local_a4 < -1.25)) ||
               (1.25 < (float)local_94 - local_a0)) ||
              ((1.25 < local_94._4_4_ - local_98 || ((float)local_94 - local_a0 < -1.25)))) ||
             ((local_94._4_4_ - local_98 < -1.25 ||
              ((local_b8._0_4_ = (float)local_b8 - (float)local_94, 1.25 < (float)local_b8 ||
               (1.25 < local_b8._4_4_ - local_8c)))))))))) {
          return 1;
        }
        bVar8 = true;
        if ((-1.25 <= local_b8._4_4_ - local_8c) && (bVar8 = false, !NAN((float)local_b8))) {
          bVar8 = (float)local_b8 < -1.25;
        }
        if (bVar8) {
          return 1;
        }
        uVar11 = *(uint *)(param_2 + 0x10);
        local_b8 = uVar6;
        local_94 = uVar7;
      }
      if ((int)uVar14 < *(int *)(param_2 + 0x20)) {
        uVar14 = uVar14 + 1;
      }
      else {
        uVar13 = uVar13 + 1;
        uVar14 = uVar11;
      }
    } while (uVar3 != uVar14 || uVar1 != uVar13);
  }
  return 0;
}

