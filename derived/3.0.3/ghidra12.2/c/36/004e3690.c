
/* WARNING: Removing unreachable block (ram,0x004e3dd8) */

void FUN_004e3690(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong *puVar29;
  long lVar30;
  long lVar31;
  undefined4 local_350 [2];
  long local_348;
  long lStack_340;
  ulong local_338;
  int local_330;
  long local_328;
  long lStack_320;
  ulong local_318;
  undefined8 local_310;
  long lStack_308;
  ulong local_300;
  long local_2f8;
  undefined8 local_2f0;
  code *local_248;
  undefined1 *local_240;
  undefined1 *local_1c8;
  undefined1 *local_1b0;
  undefined1 *local_180;
  undefined1 *local_170;
  long local_70;
  
  lVar23 = *param_2;
  lVar27 = param_2[1];
  local_348 = lVar23;
  iVar6 = FUN_00470770(param_1 + 0x48,&local_348,&local_2f8);
  puVar3 = PTR_DAT_048607b8;
  if (iVar6 < 0) {
    iVar6 = *(int *)(param_1 + 0x1f8);
    local_348 = (long)iVar6;
    local_2f8 = lVar23;
    FUN_00470440(param_1 + 0x48,PTR_DAT_048607b8,&local_2f8,&local_348);
    uVar17 = *(uint *)(param_1 + 0x1f8);
    if (uVar17 == (*(uint *)(param_1 + 0x1fc) & 0x3fffffff)) {
      FUN_00426990(puVar3,param_1 + 0x1f0,0x10);
      uVar17 = *(uint *)(param_1 + 0x1f8);
    }
    *(uint *)(param_1 + 0x1f8) = uVar17 + 1;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar17 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x8000000000000000;
    if (0 < *(int *)(param_1 + 0x230)) {
      uVar15 = 0;
      do {
        plVar18 = (long *)(*(long *)(param_1 + 0x228) + uVar15 * 0x18);
        lVar28 = *plVar18;
        lVar31 = plVar18[1];
        if (lVar31 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = FUN_00428370(lVar31);
          if ((uVar19 & 1) != 0) {
            FUN_0043dd30(uVar19 & 0xfffffffffffffffe);
          }
        }
        if (lVar28 != 0 && lVar27 == lVar31) {
          iVar7 = FUN_00426fc0(lVar23);
          uVar12 = (**(code **)(*(long *)(param_1 + 0x248) + 0x10))(param_1 + 0x248,(long)iVar7,0);
          FUN_0043a4d0(uVar12,0,iVar7);
          uVar13 = FUN_00461bf0(param_1 + 0x2d8,lVar27,lVar23);
          FUN_00466aa0(&local_2f8);
          local_240 = &LAB_00466dc0;
          local_248 = FUN_00466d40;
          local_1b0 = &LAB_00466eb0;
          local_1c8 = &LAB_00466e30;
          local_170 = &LAB_00467090;
          local_180 = &LAB_00467010;
          local_70 = param_1;
          uVar8 = FUN_00426fc0(lVar27);
          FUN_004dcdd0(&local_2f8,uVar13,uVar12,iVar7,lVar28,uVar8,uVar8,iVar7,1);
          local_310 = uVar12;
          lStack_308 = lVar23;
          if (lVar23 == 0) {
            local_300 = 0;
          }
          else {
            local_300 = FUN_00428370(lVar23);
            if ((local_300 & 1) != 0) {
              FUN_0043dd30(local_300 & 0xfffffffffffffffe);
            }
          }
          FUN_004d9dc0(param_1,&local_310,1,0,uVar15 & 0xffffffff,0xffffffff);
          if ((local_300 & 1) != 0) {
            FUN_0043dd50(local_300 & 0xfffffffffffffffe);
          }
          *(undefined4 *)(*(long *)(param_1 + 0x2a0) + uVar15 * 4) = 1;
          if (lVar23 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = FUN_00428370(lVar23);
            if ((uVar14 & 1) != 0) {
              FUN_0043dd30(uVar14 & 0xfffffffffffffffe);
            }
          }
          local_338 = local_338 & 0xffffffffffffff00;
          local_348 = 0;
          lStack_340 = 0;
          uVar16 = *(uint *)(param_1 + 0x230);
          uVar17 = uVar16;
          if ((long)(int)uVar16 <= (long)uVar15) {
            uVar17 = (int)uVar15 + 1;
          }
          if ((int)(*(uint *)(param_1 + 0x234) & 0x3fffffff) < (int)uVar17) {
            uVar13 = FUN_00426720(puVar3,uVar17,0x18,*(undefined8 *)(param_1 + 0x228),
                                  (long)(int)uVar16,param_1 + 0x234);
            uVar16 = *(uint *)(param_1 + 0x230);
            *(undefined8 *)(param_1 + 0x228) = uVar13;
          }
          if (uVar17 - uVar16 == 0 || (int)uVar17 < (int)uVar16) {
            if ((int)uVar17 < (int)uVar16) {
              *(uint *)(param_1 + 0x230) = uVar17;
            }
          }
          else {
            plVar18 = (long *)(*(long *)(param_1 + 0x228) + (long)(int)uVar16 * 0x18);
            uVar2 = uVar17 - uVar16 & 7;
            *(uint *)(param_1 + 0x230) = uVar17;
            if (6 < uVar17 + ~uVar16) {
              iVar7 = (uVar16 + uVar2) - uVar17;
              plVar20 = plVar18;
              do {
                *plVar20 = local_348;
                plVar20[1] = lStack_340;
                *(undefined4 *)(plVar20 + 2) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0x14) = 0;
                plVar20[3] = local_348;
                plVar20[4] = lStack_340;
                *(undefined4 *)(plVar20 + 5) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0x2c) = 0;
                plVar20[6] = local_348;
                plVar20[7] = lStack_340;
                *(undefined4 *)(plVar20 + 8) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0x44) = 0;
                plVar20[9] = local_348;
                plVar20[10] = lStack_340;
                *(undefined4 *)(plVar20 + 0xb) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0x5c) = 0;
                plVar20[0xc] = local_348;
                plVar20[0xd] = lStack_340;
                *(undefined4 *)(plVar20 + 0xe) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0x74) = 0;
                plVar20[0xf] = local_348;
                plVar20[0x10] = lStack_340;
                *(undefined4 *)(plVar20 + 0x11) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0x8c) = 0;
                plVar20[0x12] = local_348;
                plVar20[0x13] = lStack_340;
                *(undefined4 *)(plVar20 + 0x14) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0xa4) = 0;
                plVar18 = plVar20 + 0x18;
                plVar20[0x15] = local_348;
                plVar20[0x16] = lStack_340;
                *(undefined4 *)(plVar20 + 0x17) = (undefined4)local_338;
                *(undefined4 *)((long)plVar20 + 0xbc) = 0;
                iVar7 = iVar7 + 8;
                plVar20 = plVar18;
              } while (iVar7 != 0);
            }
            if (uVar2 != 0) {
              iVar7 = -uVar2;
              do {
                *plVar18 = local_348;
                plVar18[1] = lStack_340;
                *(undefined4 *)(plVar18 + 2) = (undefined4)local_338;
                *(undefined4 *)((long)plVar18 + 0x14) = 0;
                iVar7 = iVar7 + 1;
                plVar18 = plVar18 + 3;
              } while (iVar7 != 0);
            }
          }
          *(undefined8 *)(*(long *)(param_1 + 0x228) + uVar15 * 0x18) = uVar12;
          *(long *)(*(long *)(param_1 + 0x228) + uVar15 * 0x18 + 8) = lVar23;
          if ((uVar14 & 1) != 0) {
            FUN_0043dd50(uVar14 & 0xfffffffffffffffe);
          }
        }
        if ((uVar19 & 1) != 0) {
          FUN_0043dd50(uVar19 & 0xfffffffffffffffe);
        }
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)*(int *)(param_1 + 0x230));
    }
    if (0 < *(int *)(param_1 + 0x240)) {
      lVar28 = 0;
      uVar15 = 0;
      do {
        lVar26 = *(long *)(param_1 + 0x238);
        plVar18 = (long *)(lVar26 + lVar28);
        lVar25 = *plVar18;
        lVar31 = plVar18[1];
        uVar19 = plVar18[2];
        if ((uVar19 & 1) == 0) {
          uVar14 = uVar19;
          if ((uVar19 & 1) != 0) goto LAB_004e3b1c;
LAB_004e3d08:
          iVar9 = *(int *)(lVar26 + lVar28 + 0x18);
          iVar7 = -iVar9;
          if (-1 < iVar9) {
            iVar7 = iVar9;
          }
        }
        else {
          uVar14 = uVar19 & 0xfffffffffffffffe;
          FUN_0043dd30(uVar14);
          FUN_0043dd30(uVar14);
          FUN_0043dd50(uVar14);
          lVar26 = *(long *)(param_1 + 0x238);
          uVar14 = *(ulong *)(lVar26 + lVar28 + 0x10);
          if ((uVar14 & 1) == 0) goto LAB_004e3d08;
LAB_004e3b1c:
          FUN_0043dd30(uVar14 & 0xfffffffffffffffe);
          iVar9 = *(int *)(lVar26 + lVar28 + 0x18);
          iVar7 = -iVar9;
          if (-1 < iVar9) {
            iVar7 = iVar9;
          }
          FUN_0043dd50(uVar14 & 0xfffffffffffffffe);
        }
        if ((lVar25 != 0) && (lVar31 == lVar27)) {
          iVar9 = FUN_00426fc0(*param_2);
          iVar9 = iVar9 * iVar7;
          lVar31 = (**(code **)(*(long *)(param_1 + 0x248) + 0x10))(param_1 + 0x248,(long)iVar9,0);
          FUN_0043a4d0(lVar31,0,iVar9);
          uVar12 = FUN_00461bf0(param_1 + 0x2d8,lVar27,lVar23);
          FUN_00466aa0(&local_2f8);
          local_240 = &LAB_00466dc0;
          local_248 = FUN_00466d40;
          local_1b0 = &LAB_00466eb0;
          local_1c8 = &LAB_00466e30;
          local_170 = &LAB_00467090;
          local_180 = &LAB_00467010;
          local_70 = param_1;
          if (iVar7 != 0) {
            iVar10 = FUN_00426fc0(lVar27);
            uVar8 = FUN_00426fc0(lVar23);
            uVar11 = FUN_00426fc0(lVar27);
            FUN_004dcdd0(&local_2f8,uVar12,lVar31,iVar9,lVar25,iVar10 * iVar7,uVar8,uVar11,iVar7);
          }
          local_328 = lVar31;
          lStack_320 = lVar23;
          if (lVar23 == 0) {
            local_318 = 0;
          }
          else {
            local_318 = FUN_00428370(lVar23);
            if ((local_318 & 1) != 0) {
              FUN_0043dd30(local_318 & 0xfffffffffffffffe);
            }
          }
          uVar8 = FUN_00426fc0(lVar23);
          FUN_004d9dc0(param_1,&local_328,iVar7,uVar8,0xffffffff,uVar15 & 0xffffffff);
          if ((local_318 & 1) != 0) {
            FUN_0043dd50(local_318 & 0xfffffffffffffffe);
          }
          *(undefined4 *)(*(long *)(param_1 + 0x2b0) + uVar15 * 4) = 1;
          local_348 = lVar31;
          lStack_340 = lVar23;
          if (lVar23 == 0) {
            local_338 = 0;
          }
          else {
            local_338 = FUN_00428370(lVar23);
            if ((local_338 & 1) != 0) {
              uVar14 = local_338 & 0xfffffffffffffffe;
              FUN_0043dd30(uVar14);
              local_330 = iVar7;
              FUN_004dae00(param_1 + 0x210,uVar15 & 0xffffffff,&local_348);
              FUN_0043dd50(uVar14);
              goto joined_r0x004e3cd4;
            }
          }
          local_330 = iVar7;
          FUN_004dae00(param_1 + 0x210,uVar15 & 0xffffffff,&local_348);
        }
joined_r0x004e3cd4:
        if ((uVar19 & 1) != 0) {
          FUN_0043dd50(uVar19 & 0xfffffffffffffffe);
        }
        uVar15 = uVar15 + 1;
        lVar28 = lVar28 + 0x20;
      } while ((long)uVar15 < (long)*(int *)(param_1 + 0x240));
    }
  }
  else {
    iVar6 = (int)local_2f8;
  }
  if (iVar6 < 0) {
    return;
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x1f0) + (long)iVar6 * 0x10);
  puVar22 = (uint *)(plVar18 + 1);
  uVar17 = *puVar22;
  uVar19 = (ulong)uVar17;
  uVar15 = uVar19;
  if (0 < (int)uVar17) {
    if (uVar17 == 1) {
      lVar23 = 0;
      uVar16 = 1;
    }
    else {
      lVar23 = 0;
      uVar15 = (ulong)uVar17;
      piVar24 = (int *)(*plVar18 + 0x20);
      do {
        lVar23 = lVar23 + 2;
        uVar16 = *piVar24 + piVar24[-6] + (int)uVar15;
        uVar15 = (ulong)uVar16;
        piVar24 = piVar24 + 0xc;
      } while (uVar19 - (uVar19 & 1) != lVar23);
      if ((uVar17 & 1) == 0) goto LAB_004e3e1c;
    }
    uVar15 = (ulong)(*(int *)(*plVar18 + lVar23 * 0x18 + 8) + uVar16);
  }
LAB_004e3e1c:
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < (int)uVar15) {
    lVar23 = FUN_00426720(PTR_DAT_048607c0,uVar15,0x18,*param_3,(int)param_3[1]);
    *param_3 = lVar23;
    uVar19 = (ulong)*puVar22;
  }
  puVar4 = PTR_DAT_048607c0;
  puVar3 = PTR_DAT_048607b8;
  if (0 < (int)uVar19) {
    lVar23 = 0;
    do {
      iVar6 = *(int *)(*plVar18 + lVar23 * 0x18 + 8);
      if (0 < iVar6) {
        plVar20 = (long *)(*plVar18 + lVar23 * 0x18);
        iVar9 = *(int *)((long)plVar20 + 0xc);
        lVar27 = *plVar20;
        iVar7 = 0;
        do {
          local_2f8 = 0;
          local_2f0 = -0x8000000000000000;
          local_350[0] = *(undefined4 *)(*plVar18 + lVar23 * 0x18 + 0x10);
          FUN_004e4720(param_1,local_350,&local_2f8);
          lVar28 = lVar27;
          if (0 < (int)local_2f0) {
            lVar25 = 0;
            lVar31 = 0;
            do {
              lVar26 = local_2f8;
              lVar30 = *param_2;
              if (lVar30 == 0) {
                uVar15 = 0;
              }
              else {
                uVar15 = FUN_00428370(lVar30);
                if ((uVar15 & 1) != 0) {
                  FUN_0043dd30(uVar15 & 0xfffffffffffffffe);
                }
              }
              lVar21 = *(long *)(lVar26 + lVar25);
              if (lVar28 == 0 && lVar21 == 0) {
                bVar5 = true;
              }
              else if (lVar21 == lVar28) {
                bVar5 = *(long *)(lVar26 + lVar25 + 8) == lVar30;
              }
              else {
                bVar5 = false;
              }
              if ((uVar15 & 1) != 0) {
                FUN_0043dd50(uVar15 & 0xfffffffffffffffe);
              }
              if (bVar5) {
                lVar28 = *(long *)(local_2f8 + lVar25 + 0x18);
              }
              lVar31 = lVar31 + 1;
              lVar25 = lVar25 + 0x30;
            } while (lVar31 < (int)local_2f0);
          }
          uVar17 = *(uint *)(param_3 + 1);
          if (uVar17 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar4,param_3,0x18);
            uVar17 = *(uint *)(param_3 + 1);
          }
          plVar20 = (long *)(*param_3 + (long)(int)uVar17 * 0x18);
          *(uint *)(param_3 + 1) = uVar17 + 1;
          *(undefined4 *)(plVar20 + 2) = 0;
          uVar8 = *(undefined4 *)(*plVar18 + lVar23 * 0x18 + 0x10);
          *plVar20 = lVar28;
          plVar20[1] = 1;
          *(undefined4 *)(plVar20 + 2) = uVar8;
          if (0 < (int)local_2f0) {
            puVar29 = (ulong *)(local_2f8 + (long)(int)local_2f0 * 0x30 + -0x20);
            iVar10 = (int)local_2f0;
            do {
              while ((puVar29[3] & 1) != 0) {
                FUN_0043dd50(puVar29[3] & 0xfffffffffffffffe);
                uVar15 = *puVar29;
                if ((uVar15 & 1) != 0) goto LAB_004e404c;
LAB_004e402c:
                iVar10 = iVar10 + -1;
                puVar29 = puVar29 + -6;
                if (iVar10 == 0) goto LAB_004e4060;
              }
              uVar15 = *puVar29;
              if ((uVar15 & 1) == 0) goto LAB_004e402c;
LAB_004e404c:
              FUN_0043dd50(uVar15 & 0xfffffffffffffffe);
              iVar10 = iVar10 + -1;
              puVar29 = puVar29 + -6;
            } while (iVar10 != 0);
          }
LAB_004e4060:
          lVar28 = local_2f0;
          uVar17 = local_2f0._4_4_;
          local_2f0 = (ulong)local_2f0._4_4_ << 0x20;
          if ((-1 < lVar28) && (local_2f8 != 0)) {
            FUN_00421f90(puVar3,local_2f8,0x30,uVar17 & 0x3fffffff);
          }
          lVar27 = lVar27 + iVar9;
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar6);
        uVar19 = (ulong)*puVar22;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uVar19);
  }
  return;
}

