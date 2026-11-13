
/* WARNING: Removing unreachable block (ram,0x0137a038) */
/* WARNING: Removing unreachable block (ram,0x0137a048) */

undefined8 FUN_01379ce0(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined4 local_b90;
  undefined4 uStack_b8c;
  undefined4 local_b88;
  undefined8 local_b80;
  long *local_b78;
  int *local_b70;
  int *local_b68;
  int local_b60 [2];
  long local_b58;
  long local_b50 [5];
  undefined1 auStack_b28 [1288];
  long local_620 [170];
  undefined **local_d0;
  undefined8 **ppuStack_c8;
  undefined8 *local_b0;
  undefined1 *puStack_a8;
  float *local_a0;
  float local_98;
  long local_90;
  
  local_b68 = local_b60;
  lVar13 = 0;
  do {
    lVar17 = lVar13 + 0x38;
    plVar7 = (long *)((long)local_b60 + lVar13 + 8);
    *plVar7 = (long)local_b50 + lVar13;
    *(long **)((long)local_b60 + lVar13) = plVar7;
    plVar7 = (long *)((long)local_b50 + lVar13 + 0x20);
    *plVar7 = (long)(auStack_b28 + lVar13);
    puVar10 = (undefined8 *)((long)local_b50 + lVar13 + 0x18);
    *puVar10 = plVar7;
    puVar15 = (undefined8 *)((long)local_b50 + lVar13 + 0x10);
    *puVar15 = puVar10;
    puVar10 = (undefined8 *)((long)local_b50 + lVar13 + 8);
    *puVar10 = puVar15;
    *(undefined8 **)((long)local_b50 + lVar13) = puVar10;
    lVar13 = lVar17;
  } while (lVar17 != 0x540);
  plVar7 = local_620 + 1;
  local_620[0] = 0;
  if (plVar7 == (long *)0x0) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xa9);
  }
  else {
    iVar9 = 0;
    uVar6 = 0;
    iVar8 = 0;
    local_b80 = 0xa900000000;
    local_b70 = local_b68;
    do {
      piVar3 = local_b70;
      if (iVar9 < local_b80._4_4_) {
        if (local_b70 != (int *)0x0) {
          local_b70 = *(int **)local_b70;
        }
        pfVar1 = (float *)((long)param_3 + ((long)((ulong)uVar6 << 0x20) >> 0x1d));
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        *piVar3 = iVar8;
        piVar3[1] = (int)(fVar19 + fVar20);
        iVar9 = (int)local_b80;
        if ((int)local_b80 < local_b80._4_4_) {
          plVar7[(int)local_b80] = (long)piVar3;
          iVar9 = (int)local_b80 + 1;
          local_b80 = CONCAT44(local_b80._4_4_,iVar9);
        }
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 1;
    } while (uVar6 != 0xa9);
    if (1 < iVar9) {
      uVar12 = 0;
      uVar6 = iVar9 - 1;
      do {
        if ((int)uVar6 <= (int)uVar12) break;
        lVar13 = plVar7[uVar12];
        uVar11 = (ulong)uVar12;
        if ((uVar6 - uVar12 & 1) == 0) {
          lVar17 = lVar13;
          uVar14 = uVar11;
        }
        else {
          uVar14 = uVar11 + 1;
          lVar17 = plVar7[uVar14];
          if (*(float *)(lVar17 + 4) < *(float *)(lVar13 + 4)) {
            plVar7[uVar14] = lVar13;
            plVar7[uVar11] = lVar17;
            lVar17 = lVar13;
          }
        }
        uVar16 = (ulong)uVar6;
        uVar6 = uVar12;
        if (~uVar11 + uVar16 != 0) {
          plVar18 = local_620 + uVar14 + 2;
          do {
            lVar13 = *plVar18;
            if (*(float *)(lVar17 + 4) <= *(float *)(lVar13 + 4)) {
              lVar17 = lVar13;
            }
            else {
              plVar18[-1] = lVar13;
              *plVar18 = lVar17;
              uVar6 = (uint)uVar14;
            }
            lVar13 = plVar18[1];
            if (*(float *)(lVar13 + 4) < *(float *)(lVar17 + 4)) {
              uVar6 = (uint)uVar14 + 1;
              *plVar18 = lVar13;
              plVar18[1] = lVar17;
            }
            else {
              lVar17 = lVar13;
            }
            uVar14 = uVar14 + 2;
            plVar18 = plVar18 + 2;
          } while (uVar16 != uVar14);
        }
        if ((int)uVar6 <= (int)uVar12) break;
        lVar13 = plVar7[uVar6];
        uVar14 = (ulong)uVar6;
        uVar12 = uVar6;
        do {
          lVar17 = local_620[uVar14];
          if (*(float *)(lVar13 + 4) < *(float *)(lVar17 + 4)) {
            uVar12 = (uint)uVar14;
            local_620[uVar14] = lVar13;
            plVar7[uVar14] = lVar17;
          }
          else {
            lVar13 = lVar17;
          }
          uVar14 = uVar14 - 1;
        } while ((long)uVar11 < (long)uVar14);
      } while (uVar12 != uVar6);
      iVar9 = (int)local_b80;
    }
    if (iVar9 != 0) {
      uVar6 = 0;
      plVar18 = local_620 + (long)(iVar9 + -1) + 2;
      local_b78 = plVar7;
      do {
        if (*(float *)(plVar18[-1] + 4) < 1.0 || 4 < uVar6) {
          return 0;
        }
        uVar2 = *(undefined4 *)(param_2 + 1);
        _local_b90 = CONCAT44(*(undefined4 *)plVar18[-1],(int)*param_2);
        local_a0 = param_3 + (ulong)*(uint *)plVar18[-1] * 2;
        if (0xa8 < *(uint *)plVar18[-1]) {
          local_a0 = param_3;
        }
        local_b88._1_1_ = (char)((uint)uVar2 >> 8);
        if (local_b88._1_1_ == '\0') {
          local_90 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xc0);
          if (local_90 != 0) {
            local_98 = local_a0[1];
            goto LAB_0137a064;
          }
        }
        else {
          local_90 = 0;
          local_98 = -0.0;
LAB_0137a064:
          local_98 = local_98 + *local_a0;
          bVar4 = false;
          bVar5 = true;
          if (-1.1920929e-07 <= local_98) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(local_98)) {
              bVar4 = local_98 == 1.1920929e-07;
              bVar5 = 1.1920929e-07 <= local_98;
            }
          }
          if (bVar5 && !bVar4) {
            *param_1 = 0;
            *(undefined4 *)(param_1 + 1) = 0;
            local_d0 = &PTR_LAB_049938c0;
            local_b88 = uVar2;
            ppuStack_c8 = &local_b0;
            local_b0 = param_1;
            puStack_a8 = (undefined1 *)&local_b90;
            FUN_01377ef0(&local_d0,&local_b90);
            uVar11 = FUN_01378470((long)param_1 + 0xc,param_1 + 3,param_1);
            if ((uVar11 & 1) != 0) {
              return 1;
            }
            plVar7 = local_b78;
          }
        }
        plVar18 = plVar18 + -1;
        uVar6 = uVar6 + 1;
      } while (plVar18 != plVar7);
    }
  }
  return 0;
}

