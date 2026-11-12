
undefined8 FUN_00949bd0(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  float *pfVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_12c [3];
  float local_120;
  float local_11c;
  float fStack_118;
  float local_114;
  float fStack_110;
  float local_10c;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  long local_d0;
  float local_c8;
  float local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined1 local_84 [4];
  
  *(undefined4 *)(param_2 + 0xa8) = 0;
  local_a8 = 0;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar16 + 7);
  local_a0 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb2010;
  local_a0 = local_a0 & 1;
  local_b0 = PTR_DAT_04bb3140 + 0x10;
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = 0;
  pfVar9 = (float *)FUN_01a5190c(&local_b0,0,param_3,&local_c0);
  puVar11 = PTR_DAT_04bb43c0;
  local_c4 = pfVar9[1];
  local_c8 = *pfVar9;
  if (*(char *)(param_2 + 0xa2) == '\0') {
LAB_00949f44:
    lVar15 = *(long *)PTR_DAT_04bbbc68;
    if (((lVar15 == 0) ||
        ((((*(long *)(lVar15 + 0xb0) == 0 || (*(long *)(*(long *)(lVar15 + 0xb0) + 8) == 0)) ||
          (*(long *)(lVar15 + 0x488) == 0)) ||
         ((*(long *)(*(long *)(lVar15 + 0x488) + 8) == 0 || (*(long *)(lVar15 + 0x2b0) == 0)))))) ||
       (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) == 0)) goto LAB_0094a518;
    uVar8 = FUN_0277d6c4(&local_c8);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0094a518;
    if ((*(char *)(param_2 + 0xa3) != '\0') && (iVar7 = FUN_0277ebd0(&local_c8), iVar7 == 2)) {
      FUN_0124c030(&local_e0,&local_c8);
      fVar21 = 0.0;
      if ((local_d0 != 0) &&
         (pfVar9 = (float *)FUN_01246470(local_d0,0,0xc315945,*(undefined8 *)PTR_DAT_04bbbca8),
         pfVar9 != (float *)0x0)) {
        fVar21 = *pfVar9;
      }
      if (((fVar21 < -1.1920929e-07) || (1.1920929e-07 < fVar21)) &&
         (iVar7 = FUN_0277d6c4(&local_c8), iVar7 != 0xea79)) {
        iVar3 = *(int *)(PTR_DAT_04bb2e10 + 8);
        iVar4 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
        iVar7 = iVar3;
        if (0 < iVar3) {
          iVar7 = 1;
        }
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        iVar2 = iVar4;
        if (0 < iVar4) {
          iVar2 = 1;
        }
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        sVar5 = *(short *)PTR_DAT_04bb6298;
        local_114 = ((float)iVar7 * 5.0 + (float)iVar3 * 5.0 + 5.0) * 0.5 +
                    (float)(int)local_b8 * 5.0;
        local_10c = ((float)iVar2 * 5.0 + (float)iVar4 * 5.0 + 5.0) * 0.5 +
                    (float)local_b8._4_4_ * 5.0;
        if (sVar5 == -1) {
          uVar20 = 7;
        }
        else {
          local_108 = (undefined *)CONCAT44(local_108._4_4_,1);
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar20 = 7;
          if ((*puVar1 & 2) != 0) {
            uVar20 = 5;
          }
        }
        local_108 = (undefined *)CONCAT44(local_108._4_4_,uVar20);
        nn::os::LockMutex((MutexType *)(param_1 + 0x28));
        if (*(long *)(param_1 + 0x50) == param_1 + 0x48) {
          fVar22 = -500.0;
        }
        else {
          lVar15 = (long)*(int *)(param_1 + 0x5c);
          plVar17 = (long *)(*(long *)(param_1 + 0x50) - lVar15);
          fVar22 = -500.0;
          do {
            local_120 = (float)((uint)local_120 & 0xffffff00);
            fVar24 = (float)(**(code **)(*plVar17 + 0x30))
                                      (plVar17,&local_114,&local_108,0,&local_120);
            if (fVar24 <= fVar22) {
              fVar24 = fVar22;
            }
            fVar22 = fVar24;
            plVar17 = (long *)(*(long *)((long)plVar17 + lVar15 + 8) - lVar15);
          } while (plVar17 != (long *)((param_1 + 0x48) - lVar15));
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
        fStack_110 = fVar22;
        uVar20 = FUN_0277edd4(&local_c8,param_3);
        local_100 = (undefined *)CONCAT44(fStack_110,local_114);
        local_f8 = CONCAT44(uVar20,local_10c);
        local_f0 = (undefined *)CONCAT44(local_f0._4_4_,fVar21);
        local_108 = PTR_DAT_04bb2c98 + 0x10;
        uVar10 = FUN_006ee078(&local_108,param_2,&local_120,local_12c);
        if ((uVar10 & 1) != 0) {
          FUN_0094b1cc(param_2,&local_120,local_12c,0x80000,PTR_DAT_04bb3238);
        }
      }
      goto LAB_0094a518;
    }
    if ((*(char *)(param_2 + 0xa4) == '\0') || (iVar7 = FUN_0277ebd0(&local_c8), iVar7 != 1))
    goto LAB_0094a518;
    FUN_0124c030(&local_108,&local_c8);
    fVar21 = 0.0;
    if ((local_f8 != 0) &&
       (pfVar9 = (float *)FUN_01246470(local_f8,0,0xc315945,*(undefined8 *)PTR_DAT_04bbbca8),
       pfVar9 != (float *)0x0)) {
      fVar21 = *pfVar9;
    }
    if (((-1.1920929e-07 <= fVar21) && (fVar21 <= 1.1920929e-07)) ||
       (iVar7 = FUN_0277d6c4(&local_c8), iVar7 == 0xea79)) goto LAB_0094a518;
    iVar3 = *(int *)(PTR_DAT_04bb2e10 + 8);
    iVar4 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
    iVar7 = iVar3;
    if (0 < iVar3) {
      iVar7 = 1;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    iVar2 = iVar4;
    if (0 < iVar4) {
      iVar2 = 1;
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar22 = (float)iVar3 * 5.0 + 5.0;
    fVar24 = (float)iVar4 * 5.0 + 5.0;
    local_e0 = (undefined *)
               CONCAT44(local_e0._4_4_,
                        ((float)iVar7 * 5.0 + fVar22) * 0.5 + (float)(int)local_b8 * 5.0);
    local_d8 = ((float)iVar2 * 5.0 + fVar24) * 0.5 + (float)local_b8._4_4_ * 5.0;
    uVar20 = FUN_0093a950(param_1,&local_e0,0);
    local_e0 = (undefined *)CONCAT44(uVar20,(float)local_e0);
    local_114 = fVar22 - (float)iVar7 * 5.0;
    local_10c = fVar24 - (float)iVar2 * 5.0;
    fStack_110 = fVar21;
    iVar7 = FUN_0277ebd0(&local_c8);
    uVar14 = 0x400000;
    if (iVar7 != 1) {
      uVar14 = 0x80000;
    }
    pfVar9 = &local_114;
    pfVar13 = (float *)&local_e0;
    puVar11 = PTR_DAT_04bb3238;
  }
  else {
    lVar18 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_c8);
    lVar15 = *(long *)puVar11;
    if (lVar15 == 0) goto LAB_00949f44;
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_00949f44;
    local_d0 = 0;
    local_e0 = PTR_DAT_04bc0510 + 0x10;
    local_d8 = local_c8;
    fStack_d4 = local_c4;
    uVar8 = FUN_0277d6c4(&local_d8);
    if (*(long *)puVar11 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_c8);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8);
          if (lVar15 != 0) {
            local_d0 = lVar15;
          }
        }
      }
    }
    uVar10 = FUN_01ae59b0(&local_e0);
    if ((uVar10 & 1) == 0) goto LAB_0094a518;
    FUN_014fbd50(&local_b0,0,&local_c0);
    local_12c[0] = 0.0;
    FUN_01501d00(&local_b0,local_12c,param_3,0);
    if ((-1.1920929e-07 <= local_12c[0]) && (local_12c[0] <= 1.1920929e-07)) goto LAB_0094a518;
    iVar7 = FUN_0277ebd0(&local_c8);
    local_108 = (undefined *)CONCAT44(local_108._4_4_,iVar7);
    if (iVar7 == 0) goto LAB_0094a518;
    puVar11 = (undefined *)FUN_014fbd50(&local_b0,0,&local_c0);
    local_100 = puVar6 + 0x10;
    local_f8 = 0;
    local_e8 = 0;
    local_108 = PTR_DAT_04bbc1a0 + 0x10;
    local_f0 = local_100;
    FUN_01afb480(&local_e0,&local_108);
    sVar5 = *(short *)PTR_DAT_04bb6298;
    fVar21 = (float)(int)local_f8;
    fVar22 = (float)local_f8._4_4_;
    fVar24 = (float)local_e8._4_4_ * 5.0 + 5.0;
    fVar25 = (float)(int)local_e8 * 5.0 + 5.0;
    local_10c = (fVar22 * 5.0 + fVar24) * 0.5 + (float)local_b8._4_4_ * 5.0;
    local_114 = (fVar21 * 5.0 + fVar25) * 0.5 + (float)(int)local_b8 * 5.0;
    if (sVar5 == -1) {
      local_120 = 9.80909e-45;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      local_120 = 9.80909e-45;
      if ((*puVar1 & 2) != 0) {
        local_120 = 7.00649e-45;
      }
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    if (*(long *)(param_1 + 0x50) == param_1 + 0x48) {
      fVar23 = -500.0;
    }
    else {
      lVar15 = (long)*(int *)(param_1 + 0x5c);
      plVar17 = (long *)(*(long *)(param_1 + 0x50) - lVar15);
      fVar23 = -500.0;
      do {
        local_84[0] = 0;
        fVar19 = (float)(**(code **)(*plVar17 + 0x30))(plVar17,&local_114,&local_120,0,local_84);
        if (fVar19 <= fVar23) {
          fVar19 = fVar23;
        }
        fVar23 = fVar19;
        plVar17 = (long *)(*(long *)((long)plVar17 + lVar15 + 8) - lVar15);
      } while (plVar17 != (long *)((param_1 + 0x48) - lVar15));
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
    local_120 = fVar25 - fVar21 * 5.0;
    fStack_118 = fVar24 - fVar22 * 5.0;
    local_11c = local_12c[0];
    fStack_110 = fVar23;
    iVar7 = FUN_0277ebd0(&local_c8);
    if (iVar7 != 1) {
      iVar7 = FUN_0277ebd0(&local_c8);
      if (iVar7 == 4) {
        FUN_0094ac88(param_2,param_3,&local_120,&local_114,puVar11);
      }
      else {
        iVar7 = FUN_0277ebd0(&local_c8);
        if (iVar7 == 3) {
          iVar7 = FUN_01aee3b4(&local_e0);
          if (iVar7 == 4) {
            FUN_0094add8(param_2,param_3,&local_120,&local_114,puVar11);
          }
          else {
            iVar7 = FUN_01aee3b4(&local_e0);
            if (iVar7 == 8) {
              FUN_0094af34(param_2,param_3,&local_120,&local_114,puVar11);
            }
            else {
              FUN_01aee3b4(&local_e0);
              FUN_0094b090(param_2,param_3,&local_120,&local_114,puVar11);
            }
          }
        }
      }
      goto LAB_0094a518;
    }
    pfVar9 = &local_120;
    pfVar13 = &local_114;
    uVar14 = 0x100000;
  }
  FUN_0094a78c(param_2,param_3,pfVar9,PTR_DAT_04bb2150,pfVar13,uVar14,puVar11);
LAB_0094a518:
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x50) != param_1 + 0x48) {
    lVar15 = (long)*(int *)(param_1 + 0x5c);
    plVar17 = (long *)(*(long *)(param_1 + 0x50) - lVar15);
    do {
      if ((*(char *)(param_1 + 0x60) != '\0') || (*(char *)((long)plVar17 + 0x24) == '\0')) {
        local_108 = (undefined *)CONCAT44(local_108._4_4_,(int)plVar17[4]);
        (**(code **)(*plVar17 + 0x50))(plVar17,param_2,param_3,&local_108);
      }
      plVar17 = (long *)(*(long *)((long)plVar17 + lVar15 + 8) - lVar15);
    } while (plVar17 != (long *)((param_1 + 0x48) - lVar15));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  if (*(int *)(param_2 + 0xa8) < 1) {
    uVar14 = 0;
  }
  else {
    uVar10 = 0;
    uVar14 = 0;
    fVar21 = *(float *)(param_2 + 0x10) - *(float *)(param_2 + 0x1c);
    fVar22 = *(float *)(param_2 + 8) - *(float *)(param_2 + 0x14);
    fVar24 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x18);
    fVar21 = SQRT(fVar24 * fVar24 + fVar22 * fVar22 + fVar21 * fVar21);
    lVar15 = param_2 + 0xb0;
    do {
      lVar18 = lVar15;
      if (0x3f < uVar10) {
        lVar18 = param_2 + 0xb0;
      }
      uVar12 = FUN_006ef150(lVar18 + 8,param_2,&local_108);
      if ((uVar12 & 1) != 0) {
        fVar24 = *(float *)(param_2 + 0xc) - local_108._4_4_;
        fVar22 = *(float *)(param_2 + 8) - (float)local_108;
        fVar25 = *(float *)(param_2 + 0x10) - local_100._0_4_;
        fVar22 = SQRT(fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25);
        if (fVar22 < fVar21) {
          uVar20 = *(undefined4 *)(lVar18 + 0x50);
          uVar8 = *(uint *)(lVar18 + 0x54);
          *(undefined1 *)(param_2 + 0xa0) = 1;
          uVar14 = *(undefined8 *)(lVar18 + 0x10);
          *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(lVar18 + 0x18);
          *(undefined8 *)(param_2 + 0x28) = uVar14;
          uVar14 = *(undefined8 *)(lVar18 + 0x1c);
          fVar21 = *(float *)(param_2 + 0x28);
          fVar24 = *(float *)(param_2 + 0x2c);
          *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(lVar18 + 0x24);
          *(undefined8 *)(param_2 + 0x34) = uVar14;
          uVar14 = *(undefined8 *)(lVar18 + 0x28);
          fVar25 = *(float *)(param_2 + 0x30);
          fVar26 = *(float *)(param_2 + 0x34) - fVar21;
          *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(lVar18 + 0x30);
          *(undefined8 *)(param_2 + 0x40) = uVar14;
          fVar19 = *(float *)(param_2 + 0x3c) - fVar25;
          fVar27 = *(float *)(param_2 + 0x38) - fVar24;
          fVar28 = *(float *)(param_2 + 0x44) - fVar24;
          fVar29 = *(float *)(param_2 + 0x40) - fVar21;
          fVar30 = *(float *)(param_2 + 0x48) - fVar25;
          fVar23 = -(fVar19 * fVar28) + fVar30 * fVar27;
          fVar19 = -(fVar26 * fVar30) + fVar29 * fVar19;
          fVar26 = -(fVar27 * fVar29) + fVar28 * fVar26;
          fVar27 = SQRT(fVar19 * fVar19 + fVar23 * fVar23 + fVar26 * fVar26);
          if (0.0 < fVar27) {
            fVar27 = 1.0 / fVar27;
            fVar23 = fVar23 * fVar27;
            fVar19 = fVar19 * fVar27;
            fVar26 = fVar26 * fVar27;
          }
          *(float *)(param_2 + 0x58) = fVar23;
          *(float *)(param_2 + 0x5c) = fVar19;
          uVar14 = 1;
          *(undefined4 *)(param_2 + 0x68) = uVar20;
          *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) | uVar8;
          *(float *)(param_2 + 0x60) = fVar26;
          *(float *)(param_2 + 100) = -(fVar26 * fVar25) - (fVar24 * fVar19 + fVar21 * fVar23);
          uVar20 = *(undefined4 *)(lVar18 + 0x58);
          *(float *)(param_2 + 0x74) = (float)local_108;
          *(float *)(param_2 + 0x78) = local_108._4_4_;
          *(float *)(param_2 + 0x7c) = local_100._0_4_;
          *(undefined4 *)(param_2 + 0x70) = uVar20;
          *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 8);
          *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_3 + 0xc);
          fVar21 = fVar22;
        }
      }
      uVar10 = uVar10 + 1;
      lVar15 = lVar15 + 0x90;
    } while ((long)uVar10 < (long)*(int *)(param_2 + 0xa8));
  }
  return uVar14;
}

