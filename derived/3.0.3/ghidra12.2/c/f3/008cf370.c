
/* WARNING: Removing unreachable block (ram,0x008cf48c) */
/* WARNING: Removing unreachable block (ram,0x008cf47c) */
/* WARNING: Removing unreachable block (ram,0x008cf498) */
/* WARNING: Removing unreachable block (ram,0x008cf650) */
/* WARNING: Removing unreachable block (ram,0x008cf660) */
/* WARNING: Removing unreachable block (ram,0x008cf66c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_008cf370(long param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_f0;
  uint local_e8;
  uint local_e4;
  undefined *local_e0;
  undefined8 local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined *local_c8;
  uint local_c0;
  uint uStack_bc;
  int local_b4;
  int local_ac [4];
  float local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  
  nn::os::GetSystemTick();
  plVar20 = (long *)(param_1 + 0x37f78);
  uVar11 = (**(code **)(*plVar20 + 0x10))(plVar20);
  if (((uVar11 & 1) != 0) && (uVar11 = (**(code **)*plVar20)(plVar20,param_2), (uVar11 & 1) != 0)) {
    return 1;
  }
  plVar20 = (long *)PTR_DAT_04bb27a8;
  local_9c = param_2[7];
  local_ac[0] = (int)param_2[5] + 1;
  local_ac[2] = (int)param_2[6] + 2;
  iVar6 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
  iVar7 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
  local_b4 = 0;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) goto LAB_008cf52c;
  lVar16 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
  local_b4 = 0;
  if (lVar16 == 0) goto LAB_008cf52c;
  uVar15 = iVar6 - *(int *)(lVar16 + 0x28);
  uVar9 = *(uint *)(lVar16 + 0x18);
  uVar5 = iVar7 - *(int *)(lVar16 + 0x2c);
  if ((uVar15 < uVar9 && uVar5 <= *(uint *)(lVar16 + 0x1c)) &&
      (uVar9 <= uVar15 || *(uint *)(lVar16 + 0x1c) != uVar5)) {
    uVar15 = uVar15 + uVar9 * uVar5;
LAB_008cf510:
    if (*(uint *)(lVar16 + 0x30) <= uVar15) {
      uVar15 = 0;
    }
    puVar17 = (undefined8 *)(*(long *)(lVar16 + 0x38) + (long)(int)uVar15 * 0x68);
  }
  else {
    if (*(char *)(lVar16 + 0x88) != '\0') {
      uVar9 = iVar6 - *(int *)(lVar16 + 0x98);
      uVar15 = *(uint *)(lVar16 + 0xa0);
      uVar5 = iVar7 - *(int *)(lVar16 + 0x9c);
      if ((uVar9 < uVar15 && uVar5 <= *(uint *)(lVar16 + 0xa4)) &&
          (uVar15 <= uVar9 || *(uint *)(lVar16 + 0xa4) != uVar5)) {
        uVar15 = uVar9 + uVar15 * uVar5 + *(int *)(lVar16 + 0x8c);
        goto LAB_008cf510;
      }
    }
    puVar17 = &DAT_051a50f0;
  }
  local_b4 = (int)*(char *)(puVar17 + 2);
LAB_008cf52c:
  local_d8 = (undefined *)CONCAT44(iVar7,iVar6);
  local_e0 = PTR_DAT_04bb2018 + 0x10;
  uVar11 = FUN_01318310(&local_e0);
  if ((((uVar11 & 1) != 0) && (fVar22 = (float)FUN_01317db0(param_2), 5.0 < fVar22 - param_2[1])) &&
     (local_b4 != 0)) {
    local_b4 = local_b4 + -1;
  }
  puVar10 = PTR_DAT_04bb27c8;
  lVar16 = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  iVar12 = 1;
  do {
    iVar12 = iVar12 + iVar7;
    iVar8 = iVar6 - (int)param_2[4];
    iVar3 = (int)param_2[4] + iVar6;
    iVar4 = iVar8;
    if (iVar3 <= iVar8) {
      iVar4 = iVar3;
    }
    if (iVar8 <= iVar3) {
      iVar8 = iVar3;
    }
    iVar3 = local_ac[lVar16 * 2] + iVar12;
    iVar21 = iVar12;
    if (iVar3 <= iVar12) {
      iVar21 = iVar3;
    }
    if (iVar12 <= iVar3) {
      iVar12 = iVar3;
    }
    if (iVar12 + 1 != iVar21) {
      iVar19 = iVar4;
      do {
        iVar13 = 0;
        if (*(long *)(*plVar20 + 0x1f8) != 0) {
          lVar14 = *(long *)(*(long *)(*plVar20 + 0x1f8) + 0xb0);
          iVar13 = 0;
          if (lVar14 != 0) {
            uVar15 = iVar19 - *(int *)(lVar14 + 0x28);
            uVar9 = *(uint *)(lVar14 + 0x18);
            uVar5 = iVar21 - *(int *)(lVar14 + 0x2c);
            if ((uVar15 < uVar9 && uVar5 <= *(uint *)(lVar14 + 0x1c)) &&
                (uVar9 <= uVar15 || *(uint *)(lVar14 + 0x1c) != uVar5)) {
              uVar15 = uVar15 + uVar9 * uVar5;
LAB_008cf6e0:
              if (*(uint *)(lVar14 + 0x30) <= uVar15) {
                uVar15 = 0;
              }
              puVar17 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar15 * 0x68);
            }
            else if (*(char *)(lVar14 + 0x88) == '\0') {
              puVar17 = &DAT_051a50f0;
            }
            else {
              uVar15 = iVar19 - *(int *)(lVar14 + 0x98);
              uVar9 = iVar21 - *(int *)(lVar14 + 0x9c);
              puVar17 = &DAT_051a50f0;
              if (uVar15 < *(uint *)(lVar14 + 0xa0) && uVar9 < *(uint *)(lVar14 + 0xa4)) {
                uVar15 = uVar15 + *(uint *)(lVar14 + 0xa0) * uVar9 + *(int *)(lVar14 + 0x8c);
                goto LAB_008cf6e0;
              }
            }
            iVar13 = (int)*(char *)(puVar17 + 2);
          }
        }
        iVar18 = 0;
        if (iVar13 != 4) {
          iVar18 = iVar13;
        }
        if ((*(char *)(param_2 + 3) != '\0') && (iVar21 <= iVar7 + 3)) {
          fVar22 = (float)iVar19 * 10.0 + 2.5;
          fVar23 = (float)iVar21 * 10.0 + 2.5;
          fVar24 = (float)iVar19 * 10.0 + 10.0 + -2.5;
          fVar25 = (float)iVar21 * 10.0 + 10.0 + -2.5;
          local_c0 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
          uStack_bc = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
          uVar9 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
          uVar15 = local_c0;
          if ((int)uVar9 <= (int)local_c0) {
            uVar15 = uVar9;
          }
          if ((int)local_c0 <= (int)uVar9) {
            local_c0 = uVar9;
          }
          uVar9 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
          local_e4 = uStack_bc;
          if ((int)uVar9 <= (int)uStack_bc) {
            local_e4 = uVar9;
          }
          if ((int)uStack_bc <= (int)uVar9) {
            uStack_bc = uVar9;
          }
          uVar9 = uStack_bc + 1;
          local_e0 = puVar1;
          local_f0 = puVar2;
          local_d8 = puVar2;
          local_c8 = puVar2;
          uStack_cc = local_e4;
          local_e8 = uVar15;
          local_d0 = uVar15;
          while (uVar9 != local_e4) {
            do {
              local_90 = 0;
              local_8c = 8;
              local_98 = 0;
              local_98._0_4_ = 0x100;
              local_98._4_4_ = 0;
              local_8c = 8;
              local_90 = 0;
              lVar14 = *(long *)puVar10;
              if (((lVar14 != 0) && (*(long *)(lVar14 + 0xa8) != 0)) &&
                 (uVar11 = FUN_00949ac8(lVar14 + 0x28,&local_f0,&local_98), (uVar11 & 1) != 0)) {
                lVar14 = *(long *)puVar10;
                if (((((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0xa8), lVar14 != 0)) &&
                     (-1 < (int)local_e8)) &&
                    ((-1 < (int)local_e4 && (local_e8 < *(uint *)(lVar14 + 0x38))))) &&
                   ((local_e4 < *(uint *)(lVar14 + 0x3c) &&
                    ((uVar5 = local_e8 + *(uint *)(lVar14 + 0x38) * local_e4,
                     uVar5 < *(uint *)(lVar14 + 0x68) && (*(long *)(lVar14 + 0x70) != 0)))))) {
                  local_98._0_4_ = 3;
                  if ((*(uint *)(*(long *)(lVar14 + 0x70) + (long)(int)uVar5 * 4) >> 3 & 1) != 0)
                  goto LAB_008cf8f0;
                }
                uVar11 = FUN_01386380(&local_f0,0);
                if ((uVar11 & 1) == 0) {
                  iVar18 = iVar18 + 2;
                  goto LAB_008cf938;
                }
              }
LAB_008cf8f0:
              if ((int)local_e8 < (int)local_c0) {
                local_e8 = local_e8 + 1;
              }
              else {
                local_e4 = local_e4 + 1;
                local_e8 = local_d0;
              }
            } while (uVar15 != local_e8);
          }
LAB_008cf938:
          plVar20 = (long *)PTR_DAT_04bb27a8;
        }
        if (local_b4 < iVar18) {
          return 1;
        }
        if (iVar19 < iVar8) {
          iVar19 = iVar19 + 1;
        }
        else {
          iVar21 = iVar21 + 1;
          iVar19 = iVar4;
        }
      } while ((iVar4 != iVar19) || (iVar12 + 1 != iVar21));
    }
    if (local_b4 == 4) {
      return 0;
    }
    lVar16 = lVar16 + 1;
    local_b4 = local_b4 + 1;
    iVar12 = (iVar3 - iVar7) + 1;
    if (lVar16 == 3) {
      return 0;
    }
  } while( true );
}

