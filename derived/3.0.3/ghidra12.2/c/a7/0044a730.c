
void FUN_0044a730(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong *puVar24;
  undefined1 auVar25 [16];
  long local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  int local_74;
  long local_70;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 6));
  FUN_0043cf30();
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x4c6f8f8,0x10);
    if (bVar7) {
      cVar6 = ExclusiveMonitorsStatus();
      DAT_04c6f8f8 = DAT_04c6f8f8 + 1;
    }
  } while (cVar6 != '\0');
  local_74 = (int)param_1[0x22];
  uVar14 = local_74 + 1U & 3;
  if ((local_74 + 1U & 3) == 0) {
    uVar14 = uVar14 + 1;
  }
  *(uint *)(param_1 + 0x22) = uVar14;
  if (3 < DAT_04c6f6c8) {
    FUN_00444bc0(&local_b8,&DAT_04c6f678,4);
    local_70 = CONCAT44(local_70._4_4_,(int)param_1[5]);
    lVar11 = FUN_004446b0(&local_b8,"Inheritance State changing from {} to {} [{} lists]",
                          &DAT_048612d8,&local_74,param_1 + 0x22,&local_70);
    *(char **)(lVar11 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
    ;
    *(undefined8 *)(lVar11 + 0x30) = 0x4a1;
    FUN_00444c00(&local_b8);
  }
  puVar8 = PTR_DAT_048607b8;
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0x8000000000000000;
  iVar9 = (int)param_1[5];
  if (iVar9 < 1) {
    uVar15 = 0;
  }
  else {
    lVar11 = 0;
    do {
      puVar20 = *(ulong **)(param_1[4] + lVar11 * 8);
      if (puVar20 != (ulong *)0x0) {
        do {
          if (puVar20[1] != 0) {
            if ((uint)local_c0 == (local_c0._4_4_ & 0x3fffffff)) {
              FUN_00426990(puVar8,&local_c8,0x20);
            }
            iVar9 = (int)local_c0;
            puVar24 = local_c8 + (long)iVar9 * 4;
            *puVar24 = (ulong)puVar20;
            *(int *)(puVar24 + 1) = (int)lVar11;
            auVar25 = FUN_004273b0(puVar20[1]);
            *(undefined1 (*) [16])(puVar24 + 2) = auVar25;
            local_c0 = CONCAT44(local_c0._4_4_,iVar9 + 1);
            if ((*(byte *)puVar20[1] >> 3 & 1) == 0) {
              CallSupervisor(0x26);
            }
          }
          puVar20 = (ulong *)(*puVar20 & 0xfffffffffffffffc);
        } while (puVar20 != (ulong *)0x0);
        iVar9 = (int)param_1[5];
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar9);
    uVar15 = local_c0 & 0xffffffff;
    if ((uint)local_c0 + -1 != 0 && 0 < (int)(uint)local_c0) {
      FUN_0044c150(local_c8,0,(uint)local_c0 + -1);
      uVar15 = local_c0 & 0xffffffff;
    }
  }
  puVar8 = PTR_DAT_048607c0;
  uVar14 = (uint)uVar15;
  local_d8 = (long *)0x0;
  local_d0 = 0x8000000000000000;
  if (0 < (int)uVar14) {
    local_d8 = (long *)FUN_00426720(PTR_DAT_048607c0,uVar15,8,0,0,(long)&local_d0 + 4);
    uVar14 = (uint)local_c0;
  }
  local_e8 = 0;
  local_e0 = 0xffffffff00000000;
  if ((int)uVar14 < 0) {
    uVar14 = uVar14 + 1;
  }
  iVar9 = 8;
  do {
    bVar7 = iVar9 < (int)(uVar14 & 0xfffffffe);
    iVar9 = iVar9 << 1;
  } while (bVar7);
  FUN_0044b920(&local_e8,puVar8);
  if ((uint)local_c0 != 0) {
    puVar20 = (ulong *)*local_c8;
    uVar23 = local_c8[2];
    uVar22 = local_c8[3];
    if ((uint)local_d0 == (local_d0._4_4_ & 0x3fffffff)) {
      FUN_00426990(puVar8,&local_d8,8);
    }
    local_d8[(int)(uint)local_d0] = (long)puVar20;
    local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 + 1);
    if (1 < (int)(uint)local_c0) {
      lVar11 = 1;
      do {
        while( true ) {
          puVar13 = local_c8 + lVar11 * 4;
          puVar24 = (ulong *)*puVar13;
          uVar2 = puVar13[2];
          uVar3 = puVar13[3];
          if (puVar24[1] == puVar20[1]) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_00428d60(uVar2,uVar3,uVar23,uVar22);
          }
          uVar15 = *puVar24 | 2;
          if (iVar9 != 0) {
            uVar15 = *puVar24 & 0xfffffffffffffffd;
          }
          *puVar24 = uVar15;
          if (iVar9 == 0) break;
          if ((uint)local_d0 == (local_d0._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar8,&local_d8,8);
          }
          local_d8[(int)(uint)local_d0] = (long)puVar24;
          local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 + 1);
          lVar11 = lVar11 + 1;
          puVar20 = puVar24;
          uVar23 = uVar2;
          uVar22 = uVar3;
          if ((int)(uint)local_c0 <= lVar11) goto LAB_0044ab3c;
        }
        uVar15 = puVar20[1];
        uVar21 = puVar24[1];
        FUN_0043cff0(param_1 + 0x10,uVar15,uVar21);
        if ((int)local_e0._4_4_ < (int)local_e0 * 2) {
          FUN_0044b920(&local_e8,puVar8,local_e0._4_4_ * 2 + 2);
        }
        uVar14 = (int)uVar21 * -0x61c8864f;
        uVar4 = (int)(uVar21 >> 0x20) * -0x61c8864f;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar16 = (ulong)(local_e0._4_4_ &
                        (uVar14 + (uVar14 >> 2) + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4));
        uVar17 = *(ulong *)(local_e8 + uVar16 * 0x10);
        while (uVar17 != 0xffffffffffffffff) {
          if (uVar17 == uVar21) {
            iVar9 = 0;
            goto LAB_0044ab0c;
          }
          uVar16 = (ulong)((int)uVar16 + 1U & local_e0._4_4_);
          uVar17 = *(ulong *)(local_e8 + uVar16 * 0x10);
        }
        iVar9 = 1;
LAB_0044ab0c:
        local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + iVar9);
        uVar16 = -(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4;
        *(ulong *)(local_e8 + uVar16) = uVar21;
        *(ulong *)(local_e8 + uVar16 + 8) = uVar15;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)(uint)local_c0);
    }
  }
LAB_0044ab3c:
  lVar11 = FUN_0044b1f0(&local_d8,0,(uint)local_d0 + -1);
  param_1[3] = lVar11;
  uVar14 = *(uint *)(param_1 + 0x22);
  local_b8 = 0;
  local_b0 = 0x8000000000000000;
  if (0 < (int)(uint)local_d0) {
    local_b8 = FUN_00426720(puVar8,local_d0 & 0xffffffff,0x18,0,0,(long)&local_b0 + 4);
  }
  local_70 = 0;
  local_68 = 0xffffffff00000000;
  iVar9 = 8;
  do {
    bVar7 = iVar9 < (int)((uint)local_d0 * 2);
    iVar9 = iVar9 << 1;
  } while (bVar7);
  FUN_0044b920(&local_70,puVar8);
  if (0 < (int)(uint)local_d0) {
    lVar11 = 0;
    do {
      FUN_0044b580(*(undefined8 *)(local_d8[lVar11] + 8),&local_b8,&local_70,&local_e8);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)(uint)local_d0);
  }
  uVar15 = local_b0 & 0xffffffff;
  iVar9 = (uint)local_d0;
  if (0 < (int)local_b0) {
    uVar21 = 0;
    uVar10 = 0;
    lVar11 = 8;
    do {
      while (*(int *)(local_b8 + lVar11) == -1) {
        uVar10 = FUN_0044b860(uVar21 & 0xffffffff,&local_b8,uVar10,uVar14);
        uVar15 = local_b0 & 0xffffffff;
        uVar21 = uVar21 + 1;
        lVar11 = lVar11 + 0x18;
        if ((long)(int)local_b0 <= (long)uVar21) goto LAB_0044ac68;
      }
      uVar21 = uVar21 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((long)uVar21 < (long)(int)uVar15);
LAB_0044ac68:
    iVar9 = (uint)local_d0;
  }
  if (iVar9 != 0) {
    plVar1 = local_d8 + iVar9;
    plVar19 = local_d8;
    do {
      uVar23 = *(undefined8 *)(*plVar19 + 8);
      plVar12 = (long *)FUN_00426e90(uVar23,0x2000);
      if ((plVar12 != (long *)0x0) && (((uint)*plVar12 & 3) != uVar14)) {
        lVar11 = FUN_0044f820(uVar23);
        if (0 < (int)local_e0._4_4_) {
          uVar4 = (int)lVar11 * -0x61c8864f;
          uVar5 = (int)((ulong)lVar11 >> 0x20) * -0x61c8864f;
          uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar15 = (ulong)((uVar4 + (uVar4 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) &
                          local_e0._4_4_);
          lVar18 = *(long *)(local_e8 + uVar15 * 0x10);
          if (lVar18 != -1) {
            if (lVar18 != lVar11) {
              do {
                uVar15 = (ulong)((int)uVar15 + 1U & local_e0._4_4_);
                lVar18 = *(long *)(local_e8 + uVar15 * 0x10);
                if (lVar18 == -1) goto LAB_0044ad34;
              } while (lVar18 != lVar11);
            }
            lVar11 = *(long *)(local_e8 + uVar15 * 0x10 + 8);
          }
        }
LAB_0044ad34:
        puVar13 = (undefined8 *)FUN_00426e90(lVar11,0x2000);
        *plVar12 = (long)(int)*puVar13;
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar1);
  }
  if (0 < local_68._4_4_) {
    lVar11 = 0;
    uVar15 = (ulong)(local_68._4_4_ + 1);
    do {
      if (*(long *)(local_70 + lVar11) != -1) {
        *(undefined8 *)(local_70 + lVar11) = 0xffffffffffffffff;
      }
      uVar15 = uVar15 - 1;
      lVar11 = lVar11 + 0x10;
    } while (uVar15 != 0);
  }
  iVar9 = (int)local_68;
  local_68 = local_68 & 0xffffffff80000000;
  if ((-1 < iVar9) && (local_70 != 0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_70,(long)(local_68._4_4_ * 0x10 + 0x10));
  }
  uVar15 = local_b0;
  uVar14 = local_b0._4_4_;
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  if ((-1 < (long)uVar15) && (local_b8 != 0)) {
    FUN_00421f90(puVar8,local_b8,0x18,uVar14 & 0x3fffffff);
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x4c6f8f8,0x10);
    if (bVar7) {
      cVar6 = ExclusiveMonitorsStatus();
      DAT_04c6f8f8 = DAT_04c6f8f8 + 1;
    }
  } while (cVar6 != '\0');
  (**(code **)(*param_1 + 0x50))(param_1);
  if (0 < (int)local_e0._4_4_) {
    lVar11 = 0;
    uVar15 = (ulong)(local_e0._4_4_ + 1);
    do {
      if (*(long *)(local_e8 + lVar11) != -1) {
        *(undefined8 *)(local_e8 + lVar11) = 0xffffffffffffffff;
      }
      uVar15 = uVar15 - 1;
      lVar11 = lVar11 + 0x10;
    } while (uVar15 != 0);
  }
  iVar9 = (int)local_e0;
  local_e0 = local_e0 & 0xffffffff80000000;
  if ((-1 < iVar9) && (local_e8 != 0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_e8,(long)(int)(local_e0._4_4_ * 0x10 + 0x10))
    ;
  }
  uVar15 = local_d0;
  uVar14 = local_d0._4_4_;
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  if ((-1 < (long)uVar15) && (local_d8 != (long *)0x0)) {
    FUN_00421f90(puVar8,local_d8,8,uVar14 & 0x3fffffff);
  }
  uVar15 = local_c0;
  uVar14 = local_c0._4_4_;
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  if ((-1 < (long)uVar15) && (local_c8 != (undefined8 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_c8,0x20,uVar14 & 0x3fffffff);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 6));
  return;
}

