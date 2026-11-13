
void FUN_0147ddd0(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 ****ppppuStack_130;
  undefined4 local_128;
  undefined8 ***local_120 [3];
  undefined8 **local_108 [3];
  undefined8 *local_f0 [3];
  undefined8 local_d8 [3];
  int local_bc;
  undefined8 local_b8;
  float local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  
  fVar3 = *(float *)(param_1 + 0x2d0);
  if (*(int *)(param_1 + 0x900) == 4) {
    uVar18 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4) ^ 0x80000000;
  }
  else if (*(int *)(param_1 + 0x900) == 3) {
    uVar18 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x40000000;
  }
  else {
    uVar18 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  }
  FUN_01473944(&local_158,param_1);
  local_b8._0_4_ = uVar18 + 0x20000000 >> 0x1e;
  iVar14 = (int)local_150;
  iVar10 = local_150._4_4_;
  if (3 < (int)fVar3 - 2U) {
    iVar10 = (int)local_150;
    iVar14 = local_150._4_4_;
    if (((uint)local_b8 & 0x80000001) != 1) {
      iVar10 = local_150._4_4_;
      iVar14 = (int)local_150;
    }
  }
  iVar4 = *(int *)(param_1 + 0x2c8);
  iVar5 = *(int *)(param_1 + 0x2cc);
  local_148 = (undefined8 *)0x0;
  local_138 = (undefined8 ****)0x0;
  local_a4 = fVar3;
  FUN_0147e698(param_1,&local_158,param_3);
  local_a0 = 0.0;
  uVar17 = *(uint *)(param_3 + 0x18);
  fVar20 = (float)local_148._4_4_ * 5.0 + (float)local_138._4_4_ * 5.0 + 5.0;
  fVar21 = fVar20 * 0.5;
  local_a4 = ((float)(int)local_148 * 5.0 + (float)(int)local_138 * 5.0 + 5.0) * 0.5;
  local_9c = fVar21;
  if (uVar17 - 2 < 4) {
    lVar13 = *(long *)PTR_DAT_04bb2720;
    local_b8._0_4_ = uVar17;
    if (lVar13 == 0) {
      puVar16 = &DAT_055c04a0;
    }
    else {
      puVar16 = &DAT_055c04a0;
      if (*(long *)(lVar13 + 0x330) != 0) {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
        iVar9 = FUN_006bd550(*puVar16,0);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar16 = &DAT_055c04a0;
        }
      }
    }
    local_a4 = (float)FUN_0153e6b0(&local_a4,uVar17,*(undefined4 *)(puVar16 + 7));
    uVar17 = *(uint *)(param_3 + 0x18);
    local_a0 = fVar20;
    local_9c = fVar21;
  }
  else {
    local_a0 = 40.0;
    if (uVar17 != 7) {
      local_a0 = 0.0;
    }
  }
  local_b8._0_4_ = uVar17;
  if (uVar17 < 2) {
    lVar13 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0xa8) == 0)) || (*(char *)(lVar13 + 0x11c8) != '\0'))
    {
      local_a0 = -500.0;
    }
    else {
      local_a0 = (float)FUN_0093a950(lVar13 + 0x28,&local_a4,0);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_a4);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))
            (*(long **)(param_1 + 0x68),(int *)(param_3 + 0x14));
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_3 + 0x18);
  fVar20 = *(float *)(param_3 + 8);
  fVar21 = *(float *)(param_3 + 0x10);
  local_158 = (undefined *)CONCAT44(local_158._4_4_,*(int *)(param_3 + 0x18));
  local_b8 = CONCAT44(local_b8._4_4_,*(int *)(param_3 + 0x14) + 0x20000000U >> 0x1e);
  if (*(int *)(param_3 + 0x18) - 2U < 4) {
    local_b8 = (ulong)local_b8._4_4_ << 0x20;
  }
  FUN_01473944(&local_158,param_1);
  iVar9 = (int)local_150;
  iVar6 = local_150._4_4_;
  if (((uint)local_b8 & 0x80000001) != 1) {
    iVar9 = local_150._4_4_;
    iVar6 = (int)local_150;
  }
  fVar20 = fVar20 - ((float)iVar6 * 0.5 * 5.0 + -2.5);
  fVar21 = fVar21 - ((float)iVar9 * 0.5 * 5.0 + -2.5);
  *(uint *)(param_1 + 0x2c8) = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  *(uint *)(param_1 + 0x2cc) = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  FUN_01479214(param_1);
  local_bc = uVar18 - *(int *)(param_3 + 0x14);
  local_b0 = ((float)iVar5 * 5.0 + (float)(iVar10 + iVar5 + -1) * 5.0 + 5.0) * 0.5 - local_9c;
  local_b8 = CONCAT44(0.0 - local_a0,
                      ((float)iVar4 * 5.0 + (float)(iVar14 + iVar4 + -1) * 5.0 + 5.0) * 0.5 -
                      local_a4);
  FUN_014786e0(param_1);
  puVar7 = PTR_DAT_04bb3238;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)puVar7;
  FUN_014788dc(param_1);
  FUN_01478ae0(param_1,fVar3);
  if (*(int *)(param_1 + 0x2d4) != 0) {
    local_b8 = 0;
    local_b0 = 0.0;
    local_bc = 0;
  }
  if (*(int *)(param_1 + 0x300) != 0) {
    local_158 = PTR_DAT_04bbcda0 + 0x10;
    local_138 = local_120;
    local_120[0] = local_108;
    local_108[0] = local_f0;
    local_f0[0] = local_d8;
    local_140 = 0;
    local_d8[0] = 0;
    local_128 = 4;
    local_150 = &local_150;
    local_148 = &local_150;
    ppppuStack_130 = local_138;
    FUN_0147a740(&local_150,param_1 + 0x2f0);
    puVar8 = PTR_DAT_04bb3350;
    puVar7 = PTR_DAT_04bb27c0;
    if (local_148 != &local_150) {
      ppuVar15 = (undefined **)(local_148 + -1);
      puVar1 = PTR_DAT_04bb3290 + 0x10;
      puVar16 = local_148;
      do {
        lVar13 = *(long *)puVar7;
        if (lVar13 != 0) {
          uVar18 = *(uint *)ppuVar15;
          if (((uVar18 == 0) ||
              (plVar19 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                   ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
             (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar18))))
          {
            plVar19 = (long *)0x0;
          }
          if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
            lVar13 = *(long *)puVar7;
            iVar10 = (**(code **)(*plVar12 + 0x60))();
            if (iVar10 < 0x11) {
              uVar18 = 1;
            }
            else {
              uVar18 = *(uint *)(lVar13 + 0x5e8);
              if (4 < uVar18) goto LAB_0147e300;
              uVar18 = 0x1aU >> (ulong)(uVar18 & 0x1f) & 1;
            }
          }
          else {
LAB_0147e300:
            uVar18 = 0;
          }
          if (plVar19 != (long *)0x0) {
            lVar13 = plVar19[0x2a];
            uVar17 = *(uint *)(plVar19 + 0x49);
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar10 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar11 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb5920);
            if ((((int)lVar13 == 1) && ((uVar11 & uVar18) != 0)) && ((uVar17 >> 4 & 1) != 0)) {
              FUN_014752c0(plVar19,(int)plVar19[0x5a],&local_b8,&local_bc,1);
              FUN_0147a0b8(plVar19,(int)plVar19[0x5a],&local_b8,&local_bc,1);
            }
          }
        }
        puVar16 = (undefined8 *)puVar16[1];
        ppuVar15 = (undefined **)(puVar16 + -1);
      } while (ppuVar15 != &local_158);
    }
    puVar16 = &local_150;
    do {
      puVar16 = (undefined8 *)puVar16[1];
    } while (puVar16 != &local_150);
  }
  puVar7 = PTR_DAT_04bbcda0;
  local_158 = (undefined *)CONCAT44(local_158._4_4_,param_2);
  local_a8 = *(int *)(param_1 + 0x900);
  iVar10 = local_a8;
  if (local_a8 != 5) {
    FUN_01475014(param_1,fVar3,&local_b8,&local_bc,1);
    iVar10 = *(int *)(param_1 + 0x900);
  }
  if (iVar10 != (int)local_158) {
    FUN_03ebb160(param_1 + 0x8f8);
  }
  if (*(int *)(param_1 + 0x300) != 0) {
    local_158 = puVar7 + 0x10;
    local_140 = 0;
    local_138 = local_120;
    local_120[0] = local_108;
    local_108[0] = local_f0;
    local_f0[0] = local_d8;
    local_d8[0] = 0;
    local_128 = 4;
    local_150 = &local_150;
    local_148 = &local_150;
    ppppuStack_130 = local_138;
    FUN_0147a740(&local_150,param_1 + 0x2f0);
    puVar1 = PTR_DAT_04bb5920;
    puVar8 = PTR_DAT_04bb3350;
    puVar7 = PTR_DAT_04bb27c0;
    if (local_148 != &local_150) {
      ppuVar15 = (undefined **)(local_148 + -1);
      puVar2 = PTR_DAT_04bb3290 + 0x10;
      puVar16 = local_148;
      do {
        lVar13 = *(long *)puVar7;
        if (lVar13 != 0) {
          uVar18 = *(uint *)ppuVar15;
          if (((uVar18 == 0) ||
              (plVar19 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                   ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
             (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar18))))
          {
            plVar19 = (long *)0x0;
          }
          if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
            lVar13 = *(long *)puVar7;
            iVar10 = (**(code **)(*plVar12 + 0x60))();
            if (iVar10 < 0x11) {
              uVar18 = 1;
            }
            else {
              uVar18 = *(uint *)(lVar13 + 0x5e8);
              if (4 < uVar18) goto LAB_0147e570;
              uVar18 = 0x1aU >> (ulong)(uVar18 & 0x1f) & 1;
            }
          }
          else {
LAB_0147e570:
            uVar18 = 0;
          }
          if (plVar19 != (long *)0x0) {
            lVar13 = plVar19[0x2a];
            uVar17 = *(uint *)(plVar19 + 0x49);
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar10 != 0)) {
              *(undefined **)puVar1 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar11 = (**(code **)(*plVar19 + 0x20))(plVar19,puVar1);
            if ((((int)lVar13 == 1) && ((uVar11 & uVar18) != 0)) && ((uVar17 >> 4 & 1) != 0)) {
              iVar10 = (int)plVar19[0x120];
              local_ac = iVar10;
              local_a8 = param_2;
              if (iVar10 != 5) {
                FUN_01475014(plVar19,(int)plVar19[0x5a],&local_b8,&local_bc,1);
                iVar10 = (int)plVar19[0x120];
              }
              if (iVar10 != local_a8) {
                FUN_03ebb160(plVar19 + 0x11f);
              }
            }
          }
        }
        puVar16 = (undefined8 *)puVar16[1];
        ppuVar15 = (undefined **)(puVar16 + -1);
      } while (ppuVar15 != &local_158);
    }
    puVar16 = &local_150;
    do {
      puVar16 = (undefined8 *)puVar16[1];
    } while (puVar16 != &local_150);
  }
  return;
}

