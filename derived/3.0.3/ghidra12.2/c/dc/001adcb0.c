
void FUN_001adcb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  short sVar13;
  bool bVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  char *pcVar33;
  ulonglong uVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  undefined *puVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  ulong local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  undefined *local_d8;
  undefined1 local_d0 [16];
  undefined1 *local_c0;
  undefined8 uStack_b8;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 auStack_98 [8];
  undefined **local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  
  plVar36 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar18 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar16 = *puVar18;
    if (uVar16 != 0) {
      lVar22 = **(long **)(PTR_DAT_04bcb900 + 0xa0);
      if ((ulong)((*(long **)(PTR_DAT_04bcb900 + 0xa0))[1] - lVar22 >> 3) <= (ulong)uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar36 = (long *)(*(long *)(lVar22 + (ulong)uVar16 * 8) + 0x20);
    }
  }
  if ((*plVar36 == 0) || (lVar22 = *(long *)(*plVar36 + 0x10), lVar22 == 0)) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x10);
  }
  (**(code **)(*(long *)(lVar22 + 0x78) + 0x10))();
  plVar36 = (long *)(param_1 + 0x198);
  if (*(long *)(param_1 + 0x1a8) != 0) {
    lVar25 = *(long *)(param_1 + 0x198);
    plVar32 = *(long **)(param_1 + 0x1a0);
    lVar28 = *plVar32;
    *(undefined8 *)(lVar28 + 8) = *(undefined8 *)(lVar25 + 8);
    **(long **)(lVar25 + 8) = lVar28;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    while (plVar32 != plVar36) {
      plVar32 = (long *)plVar32[1];
      FUN_00187e4c();
    }
  }
  plVar32 = (long *)(param_1 + 0x1b0);
  if (*(long *)(param_1 + 0x1c0) != 0) {
    lVar25 = *(long *)(param_1 + 0x1b0);
    plVar5 = *(long **)(param_1 + 0x1b8);
    lVar28 = *plVar5;
    *(undefined8 *)(lVar28 + 8) = *(undefined8 *)(lVar25 + 8);
    **(long **)(lVar25 + 8) = lVar28;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    while (plVar5 != plVar32) {
      plVar37 = (long *)plVar5[1];
      (**(code **)plVar5[2])();
      FUN_00187e4c(plVar5);
      plVar5 = plVar37;
    }
  }
  plVar5 = (long *)(param_1 + 0x58);
  if (*(long **)(param_1 + 0x60) != plVar5) {
    plVar37 = (long *)(param_1 + 0x78);
    puVar38 = PTR_DAT_04bcc2d8 + 0x10;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    puVar2 = PTR_DAT_04bcc3f8 + 0x10;
    pcVar33 = PTR_DAT_04bcb908;
    plVar41 = *(long **)(param_1 + 0x60);
    do {
      while ((FUN_00187810(auStack_98), (int)plVar41[0x12] == -1 &&
             (*(uint *)((long)plVar41 + 0xa4) < *(uint *)(plVar41 + 0x15)))) {
        plVar40 = plVar41 + 1;
        plVar41 = (long *)*plVar40;
        if ((long *)*plVar40 == plVar5) goto LAB_001ae3d8;
      }
      FUN_00187aac();
      uVar21 = FUN_00187db0();
      FUN_001896d4(uVar21,2);
      FUN_00187aac();
      uVar21 = FUN_00187db0();
      FUN_001896e4(uVar21,2);
      plVar40 = plVar41 + 3;
      if ((int)plVar41[0x12] == -1) {
        uVar20 = FUN_001af5d0(param_1,plVar40,1);
        if (((uVar20 & 1) == 0) || (lVar25 = FUN_001b8fa0(plVar40,"probeinit",0), lVar25 != 0)) {
          plVar24 = (long *)FUN_00187df4(0xb0);
          *plVar24 = 0;
          plVar24[2] = (long)puVar2;
          FUN_001b8358(plVar24 + 3,plVar40);
          plVar24[0x11] = plVar41[0x11];
          lVar25 = plVar41[0x12];
          lVar28 = plVar41[0x13];
          lVar29 = plVar41[0x14];
          lVar19 = plVar41[0x15];
          plVar24[1] = (long)plVar37;
          *(int *)(plVar24 + 0x15) = (int)lVar19;
          plVar24[0x13] = lVar28;
          plVar24[0x14] = lVar29;
          plVar24[0x12] = lVar25;
          lVar25 = *plVar37;
          *plVar24 = lVar25;
          *(long **)(lVar25 + 8) = plVar24;
          *plVar37 = (long)plVar24;
          plVar40 = (long *)(param_1 + 0x88);
        }
        else {
          plVar24 = (long *)FUN_00187df4(0x80);
          *plVar24 = 0;
          FUN_001b8358(plVar24 + 2,plVar40);
          plVar24[1] = (long)plVar32;
          lVar25 = *plVar32;
          *plVar24 = lVar25;
          *(long **)(lVar25 + 8) = plVar24;
          *plVar32 = (long)plVar24;
          plVar40 = (long *)(param_1 + 0x1c0);
        }
        *plVar40 = *plVar40 + 1;
        plVar40 = (long *)(PTR_DAT_04bcb900 + 0x18);
        if (*pcVar33 != '\0') {
          puVar18 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar16 = *puVar18;
          if (uVar16 != 0) {
            lVar25 = **(long **)(PTR_DAT_04bcb900 + 0xa0);
            if ((ulong)((*(long **)(PTR_DAT_04bcb900 + 0xa0))[1] - lVar25 >> 3) <= (ulong)uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            }
            plVar40 = (long *)(*(long *)(lVar25 + (ulong)uVar16 * 8) + 0x10);
          }
        }
        if ((*plVar40 == 0) || (lVar25 = *(long *)(*plVar40 + 0x10), lVar25 == 0)) {
          lVar25 = 0;
        }
        else {
          lVar25 = *(long *)(lVar25 + 0xe8);
        }
        local_100 = 0;
        uStack_e8 = 0x10;
        local_110 = puVar38;
        local_108 = puVar1;
        local_f0 = &local_100;
        FUN_0018b070(&local_108,*(undefined8 *)(lVar25 + 0x168),0xffffffffffffffff);
        local_e0 = *(undefined2 *)(lVar25 + 0x178);
        local_d0[0] = 0;
        uStack_b8 = 0x10;
        local_d8 = puVar1;
        local_c0 = local_d0;
        FUN_0018b070(&local_d8,*(undefined8 *)(lVar25 + 0x198),0xffffffffffffffff);
        local_a0 = *(undefined1 *)(lVar25 + 0x1b8);
        uStack_a8 = *(undefined8 *)(lVar25 + 0x1b0);
        iStack_ac = (int)((ulong)*(undefined8 *)(lVar25 + 0x1a8) >> 0x20);
        if (iStack_ac == 2) {
          plVar40 = (long *)(PTR_DAT_04bcb900 + 0x18);
          if (*pcVar33 != '\0') {
            puVar18 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
            uVar16 = *puVar18;
            if (uVar16 != 0) {
              lVar25 = **(long **)(PTR_DAT_04bcb900 + 0xa0);
              if ((ulong)((*(long **)(PTR_DAT_04bcb900 + 0xa0))[1] - lVar25 >> 3) <= (ulong)uVar16)
              {
                    /* WARNING: Subroutine does not return */
                FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                             ,0x47,0xe0000003,0);
              }
              plVar40 = (long *)(*(long *)(lVar25 + (ulong)uVar16 * 8) + 0x10);
            }
          }
          lVar25 = (**(code **)(**(long **)(*(long *)(*plVar40 + 0x10) + 0xe8) + 0x80))();
          if ((*(char *)(lVar25 + 0x10) != '\0') &&
             (uVar20 = FUN_0018b44c(*(undefined8 *)(param_1 + 0x180),&DAT_0407ebb1),
             (uVar20 & 1) == 0)) {
            sVar13 = *(short *)(param_1 + 400);
            FUN_001abf78(&local_110);
            if (sVar13 != 0) {
              lVar25 = *(long *)(param_1 + 0x40);
              *(undefined1 *)(param_1 + 0x192) = 1;
              for (; lVar25 != param_1 + 0x38; lVar25 = *(long *)(lVar25 + 8)) {
                lVar28 = lVar25 + 0x10;
                lVar19 = FUN_001b8fa0(lVar28,&DAT_0410a6d5,0);
                if ((lVar19 == 0) &&
                   (uVar16 = FUN_001b8fa0(lVar28,&DAT_0410a6b7,0), (uVar16 >> 1 & 1) != 0)) {
                  FUN_001b8e80(&local_110,lVar28,&DAT_0410a6d5,1);
                  local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
                  local_f0 = (undefined1 *)0x10;
                  puVar3 = PTR_DAT_04bc0ec8 + 0x10;
                  local_110 = puVar3;
                  local_f8 = &local_108;
                  FUN_0018b070(&local_110,&DAT_0410a6bc,0xffffffffffffffff);
                  FUN_001dd950(lVar25 + 0x40,&local_110);
                  local_110 = puVar3;
                  FUN_0018b1a0(&local_110);
                  local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
                  local_f0 = &DAT_00000010;
                  local_110 = puVar3;
                  local_f8 = &local_108;
                  FUN_0018b070(&local_110,&DAT_0410a6bc,0xffffffffffffffff);
                  local_90 = &local_110;
                  lVar19 = FUN_001dda60(lVar25 + 0x40,&local_110,PTR_piecewise_construct_04bcbf80,
                                        &local_90,&local_64);
                  FUN_00189504(lVar19 + 0x48,param_1 + 0x168);
                  pcVar33 = PTR_DAT_04bcb908;
                  local_110 = puVar3;
                  FUN_0018b1a0(&local_110);
                  FUN_001b8e80(&local_110,lVar28,&DAT_0410a6cb,*(undefined2 *)(param_1 + 400));
                }
              }
            }
            goto LAB_001adf64;
          }
        }
        FUN_001abf78(&local_110);
      }
      else {
        uVar15 = FUN_001b8fa0(plVar40,"RVCID",0);
        plVar24 = (long *)FUN_00187df4(0x18);
        *(undefined4 *)(plVar24 + 2) = uVar15;
        *plVar24 = 0;
        plVar24[1] = (long)plVar36;
        lVar25 = *(long *)(param_1 + 0x198);
        *plVar24 = lVar25;
        *(long **)(lVar25 + 8) = plVar24;
        *(long **)(param_1 + 0x198) = plVar24;
        *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
        plVar24 = (long *)FUN_00187df4(0xb0);
        *plVar24 = 0;
        plVar24[2] = (long)(PTR_DAT_04bcc3f8 + 0x10);
        FUN_001b8358(plVar24 + 3,plVar40);
        plVar24[0x11] = plVar41[0x11];
        lVar19 = plVar41[0x14];
        lVar25 = plVar41[0x13];
        lVar28 = plVar41[0x15];
        plVar24[0x12] = plVar41[0x12];
        *(int *)(plVar24 + 0x15) = (int)lVar28;
        plVar24[0x13] = lVar25;
        plVar24[0x14] = lVar19;
        plVar24[1] = (long)plVar37;
        lVar25 = *(long *)(param_1 + 0x78);
        *plVar24 = lVar25;
        *(long **)(lVar25 + 8) = plVar24;
        *(long **)(param_1 + 0x78) = plVar24;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
      }
LAB_001adf64:
      lVar25 = *plVar41;
      plVar40 = (long *)plVar41[1];
      *(long **)(lVar25 + 8) = plVar40;
      *(long *)plVar41[1] = lVar25;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
      (**(code **)plVar41[2])(plVar41 + 2);
      FUN_00187e4c(plVar41);
      plVar41 = plVar40;
    } while (plVar40 != plVar5);
  }
LAB_001ae3d8:
  plVar37 = *(long **)(param_1 + 0x1a0);
  if (plVar37 != plVar36) {
    plVar41 = (long *)(param_1 + 0x38);
    puVar38 = PTR_DAT_04bc0ec8;
    if (*(long **)(param_1 + 0x40) != plVar41) {
      ppuVar4 = (undefined **)(PTR_DAT_04bc0ec8 + 0x10);
      do {
        plVar40 = *(long **)(param_1 + 0x40);
joined_r0x001ae438:
        if (plVar40 != plVar41) {
          do {
            plVar24 = plVar40 + 2;
            if ((char)plVar40[0xf] == '\0') {
              FUN_001b8590(plVar24);
            }
            local_88[0] = 0;
            uStack_70 = 0x10;
            local_90 = ppuVar4;
            local_78 = local_88;
            FUN_0018b070(&local_90,"RVCID",0xffffffffffffffff);
            plVar39 = plVar40 + 6;
            plVar27 = (long *)*plVar39;
            if (plVar27 == (long *)0x0) {
LAB_001ae4dc:
              plVar35 = plVar40 + 9;
              plVar27 = (long *)*plVar35;
              if (plVar27 != (long *)0x0) {
                plVar23 = plVar35;
                do {
                  uVar20 = FUN_0018b4e0(plVar27 + 4,&local_90);
                  plVar31 = plVar27 + 1;
                  if ((uVar20 & 1) == 0) {
                    plVar23 = plVar27;
                    plVar31 = plVar27;
                  }
                  plVar27 = (long *)*plVar31;
                } while (plVar27 != (long *)0x0);
                if ((plVar23 != plVar35) &&
                   (uVar20 = FUN_0018b4e0(&local_90,plVar23 + 4), (uVar20 & 1) == 0)) {
                  uVar34 = strtoull((char *)plVar23[0xc],(char **)0x0,10);
                  if ((char)plVar40[0xf] == '\0') {
                    FUN_001b8590(plVar24);
                  }
                  puVar38 = puVar38 + 0x10;
                  local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
                  local_f0 = (undefined1 *)0x10;
                  local_110 = puVar38;
                  local_f8 = &local_108;
                  FUN_0018b070(&local_110,"RVCID",0xffffffffffffffff);
                  plVar27 = (long *)plVar40[9];
                  if (plVar27 != (long *)0x0) {
                    plVar23 = plVar35;
                    do {
                      uVar20 = FUN_0018b4e0(plVar27 + 4,&local_110);
                      plVar31 = plVar27 + 1;
                      if ((uVar20 & 1) == 0) {
                        plVar23 = plVar27;
                        plVar31 = plVar27;
                      }
                      plVar27 = (long *)*plVar31;
                    } while (plVar27 != (long *)0x0);
                    if (plVar23 != plVar35) {
                      uVar20 = FUN_0018b4e0(&local_110,plVar23 + 4);
                      puVar1 = PTR_DAT_04bc0ec8;
                      if ((uVar20 & 1) == 0) {
                        plVar27 = (long *)plVar23[1];
                        plVar35 = plVar23;
                        if ((long *)plVar23[1] == (long *)0x0) {
                          do {
                            plVar31 = (long *)plVar35[2];
                            bVar14 = (long *)*plVar31 != plVar35;
                            plVar35 = plVar31;
                          } while (bVar14);
                        }
                        else {
                          do {
                            plVar31 = plVar27;
                            plVar27 = (long *)*plVar31;
                          } while ((long *)*plVar31 != (long *)0x0);
                        }
                        if ((long *)plVar40[8] == plVar23) {
                          plVar40[8] = (long)plVar31;
                        }
                        plVar40[10] = plVar40[10] + -1;
                        FUN_00192390(plVar40[9],plVar23);
                        plVar23[9] = (long)(puVar1 + 0x10);
                        FUN_0018b1a0();
                        plVar23[4] = (long)(puVar1 + 0x10);
                        FUN_0018b1a0(plVar23 + 4);
                        FUN_00187e4c(plVar23);
                      }
                    }
                  }
                  local_110 = puVar38;
                  FUN_0018b1a0(&local_110);
                  local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
                  local_f0 = &DAT_00000010;
                  local_110 = puVar38;
                  local_f8 = &local_108;
                  FUN_0018b070(&local_110,"RVCID",0xffffffffffffffff);
                  puVar38 = PTR_DAT_04bc0ec8;
                  plVar27 = plVar39;
                  plVar35 = plVar39;
                  if ((long *)plVar40[6] != (long *)0x0) {
                    plVar23 = (long *)plVar40[6];
                    do {
                      while( true ) {
                        plVar27 = plVar23;
                        uVar20 = FUN_0018b4e0(&local_110,plVar27 + 4);
                        if ((uVar20 & 1) != 0) break;
                        uVar20 = FUN_0018b4e0(plVar27 + 4,&local_110);
                        if ((uVar20 & 1) == 0) {
                          plVar23 = (long *)*plVar35;
                          if (plVar23 != (long *)0x0) goto LAB_001ae984;
                          goto LAB_001ae70c;
                        }
                        plVar35 = plVar27 + 1;
                        plVar23 = (long *)*plVar35;
                        if ((long *)*plVar35 == (long *)0x0) goto LAB_001ae70c;
                      }
                      plVar23 = (long *)*plVar27;
                      plVar35 = plVar27;
                    } while ((long *)*plVar27 != (long *)0x0);
                  }
LAB_001ae70c:
                  plVar23 = (long *)FUN_00187df4(0x50);
                  plVar23[4] = (long)(puVar38 + 0x10);
                  plVar31 = plVar23 + 5;
                  *(undefined1 *)plVar31 = 0;
                  plVar23[7] = (long)plVar31;
                  plVar23[8] = 0x10;
                  if (&local_110 != (undefined **)(plVar23 + 4)) {
                    *(undefined4 *)(plVar23 + 5) = (undefined4)local_108;
                    *(undefined4 *)((long)plVar23 + 0x2c) = local_108._4_4_;
                    lVar25 = plVar23[6];
                    *(undefined1 *)(plVar23 + 6) = local_100;
                    uVar6 = *(undefined1 *)((long)plVar23 + 0x31);
                    local_108 = (undefined *)((ulong)*(uint7 *)((long)plVar23 + 0x29) << 8);
                    *(undefined1 *)((long)plVar23 + 0x31) = local_ff;
                    uVar7 = *(undefined1 *)((long)plVar23 + 0x32);
                    *(undefined1 *)((long)plVar23 + 0x32) = local_fe;
                    uVar8 = *(undefined1 *)((long)plVar23 + 0x33);
                    *(undefined1 *)((long)plVar23 + 0x33) = local_fd;
                    uVar9 = *(undefined1 *)((long)plVar23 + 0x34);
                    *(undefined1 *)((long)plVar23 + 0x34) = local_fc;
                    uVar10 = *(undefined1 *)((long)plVar23 + 0x35);
                    *(undefined1 *)((long)plVar23 + 0x35) = local_fb;
                    uVar11 = *(undefined1 *)((long)plVar23 + 0x36);
                    *(undefined1 *)((long)plVar23 + 0x36) = local_fa;
                    uVar12 = *(undefined1 *)((long)plVar23 + 0x37);
                    *(undefined1 *)((long)plVar23 + 0x37) = local_f9;
                    plVar23[7] = (long)local_f8;
                    plVar23[8] = (long)local_f0;
                    bVar14 = local_f8 == &local_108;
                    local_f0 = &DAT_00000010;
                    local_100 = (char)lVar25;
                    local_ff = uVar6;
                    local_fe = uVar7;
                    local_fd = uVar8;
                    local_fc = uVar9;
                    local_fb = uVar10;
                    local_fa = uVar11;
                    local_f9 = uVar12;
                    local_f8 = &local_108;
                    if (bVar14) {
                      plVar23[7] = (long)plVar31;
                    }
                  }
                  plVar23[9] = 0;
                  *plVar23 = 0;
                  plVar23[1] = 0;
                  plVar23[2] = (long)plVar27;
                  *plVar35 = (long)plVar23;
                  plVar27 = plVar23;
                  if (*(long *)plVar40[5] != 0) {
                    plVar40[5] = *(long *)plVar40[5];
                    plVar27 = (long *)*plVar35;
                  }
                  plVar39 = (long *)*plVar39;
                  bVar14 = plVar27 == plVar39;
                  *(bool *)(plVar27 + 3) = bVar14;
joined_r0x001ae83c:
                  if ((bVar14) || (plVar35 = (long *)plVar27[2], (char)plVar35[3] != '\0'))
                  goto LAB_001ae978;
                  plVar31 = (long *)plVar35[2];
                  plVar30 = (long *)*plVar31;
                  if (plVar30 != plVar35) {
                    if ((plVar30 == (long *)0x0) || (plVar30 = plVar30 + 3, (char)*plVar30 != '\0'))
                    {
                      if ((long *)*plVar35 == plVar27) {
                        lVar25 = plVar27[1];
                        *plVar35 = lVar25;
                        if (lVar25 != 0) {
                          *(long **)(lVar25 + 0x10) = plVar35;
                          plVar31 = (long *)plVar35[2];
                        }
                        plVar27[2] = (long)plVar31;
                        ((undefined8 *)plVar35[2])[*(long **)plVar35[2] != plVar35] = plVar27;
                        plVar27[1] = (long)plVar35;
                        plVar35[2] = (long)plVar27;
                        plVar31 = (long *)plVar27[2];
                        *(undefined1 *)(plVar27 + 3) = 1;
                        plVar35 = (long *)plVar31[1];
                        *(undefined1 *)(plVar31 + 3) = 0;
                        lVar25 = *plVar35;
                        plVar31[1] = lVar25;
                      }
                      else {
                        *(undefined1 *)(plVar35 + 3) = 1;
                        plVar35 = (long *)plVar31[1];
                        *(undefined1 *)(plVar31 + 3) = 0;
                        lVar25 = *plVar35;
                        plVar31[1] = lVar25;
                      }
                      if (lVar25 != 0) {
                        *(long **)(lVar25 + 0x10) = plVar31;
                      }
                      plVar35[2] = plVar31[2];
                      ((undefined8 *)plVar31[2])[*(long **)plVar31[2] != plVar31] = plVar35;
                      *plVar35 = (long)plVar31;
                      goto LAB_001ae974;
                    }
LAB_001ae844:
                    bVar14 = plVar31 == plVar39;
                    *(undefined1 *)(plVar35 + 3) = 1;
                    *(bool *)(plVar31 + 3) = bVar14;
                    *(char *)plVar30 = '\x01';
                    plVar27 = plVar31;
                    goto joined_r0x001ae83c;
                  }
                  if ((plVar31[1] != 0) &&
                     (plVar30 = (long *)(plVar31[1] + 0x18), *(char *)plVar30 == '\0'))
                  goto LAB_001ae844;
                  if ((long *)*plVar35 == plVar27) {
                    *(undefined1 *)(plVar35 + 3) = 1;
                    *(undefined1 *)(plVar31 + 3) = 0;
                    lVar25 = plVar35[1];
                    *plVar31 = lVar25;
                  }
                  else {
                    plVar39 = (long *)plVar35[1];
                    lVar25 = *plVar39;
                    plVar35[1] = lVar25;
                    if (lVar25 != 0) {
                      *(long **)(lVar25 + 0x10) = plVar35;
                      plVar31 = (long *)plVar35[2];
                    }
                    plVar39[2] = (long)plVar31;
                    ((undefined8 *)plVar35[2])[*(long **)plVar35[2] != plVar35] = plVar39;
                    *plVar39 = (long)plVar35;
                    plVar35[2] = (long)plVar39;
                    plVar31 = (long *)plVar39[2];
                    plVar35 = (long *)*plVar31;
                    *(undefined1 *)(plVar39 + 3) = 1;
                    *(undefined1 *)(plVar31 + 3) = 0;
                    lVar25 = plVar35[1];
                    *plVar31 = lVar25;
                  }
                  if (lVar25 != 0) {
                    *(long **)(lVar25 + 0x10) = plVar31;
                  }
                  plVar35[2] = plVar31[2];
                  ((undefined8 *)plVar31[2])[*(long **)plVar31[2] != plVar31] = plVar35;
                  plVar35[1] = (long)plVar31;
LAB_001ae974:
                  plVar31[2] = (long)plVar35;
LAB_001ae978:
                  plVar40[7] = plVar40[7] + 1;
LAB_001ae984:
                  plVar23[9] = uVar34;
                  local_110 = puVar38 + 0x10;
                  FUN_0018b1a0(&local_110);
                  *(undefined1 *)((long)plVar40 + 0x79) = 0;
                  local_64 = 0x10001;
                  FUN_0018aa70(&local_110,&local_64);
                  goto LAB_001ae9b4;
                }
              }
              uVar34 = 0;
            }
            else {
              plVar35 = plVar39;
              do {
                uVar20 = FUN_0018b4e0(plVar27 + 4,&local_90);
                plVar23 = plVar27 + 1;
                if ((uVar20 & 1) == 0) {
                  plVar35 = plVar27;
                  plVar23 = plVar27;
                }
                plVar27 = (long *)*plVar23;
              } while (plVar27 != (long *)0x0);
              if ((plVar35 == plVar39) ||
                 (uVar20 = FUN_0018b4e0(&local_90,plVar35 + 4), (uVar20 & 1) != 0))
              goto LAB_001ae4dc;
              uVar34 = plVar35[9];
            }
LAB_001ae9b4:
            local_90 = (undefined **)(puVar38 + 0x10);
            FUN_0018b1a0(&local_90);
            if ((int)plVar37[2] == (int)uVar34) goto code_r0x001ae9d0;
            plVar40 = (long *)plVar40[1];
            if (plVar40 == plVar41) break;
          } while( true );
        }
        plVar37 = (long *)plVar37[1];
        if (plVar37 == plVar36) {
          plVar37 = *(long **)(param_1 + 0x1a0);
          goto LAB_001aeabc;
        }
      } while( true );
    }
    plVar41 = plVar37;
    do {
      plVar41 = (long *)plVar41[1];
    } while (plVar41 != plVar36);
LAB_001aeabc:
    if (plVar37 != plVar36) {
      if (*(long **)(param_1 + 0x150) == (long *)(param_1 + 0x158)) {
        do {
          plVar37 = (long *)plVar37[1];
        } while (plVar37 != plVar36);
      }
      else {
        ppuVar4 = (undefined **)(puVar38 + 0x10);
        do {
          plVar41 = *(long **)(param_1 + 0x150);
          while (plVar41 != (long *)(param_1 + 0x158)) {
            plVar40 = plVar41 + 6;
            if ((char)plVar41[0x13] == '\0') {
              FUN_001b8590(plVar40);
            }
            local_88[0] = 0;
            uStack_70 = 0x10;
            local_90 = ppuVar4;
            local_78 = local_88;
            FUN_0018b070(&local_90,"RVCID",0xffffffffffffffff);
            plVar24 = plVar41 + 10;
            plVar39 = (long *)*plVar24;
            if (plVar39 == (long *)0x0) {
LAB_001aebcc:
              plVar27 = plVar41 + 0xd;
              plVar39 = (long *)*plVar27;
              if (plVar39 != (long *)0x0) {
                plVar35 = plVar27;
                do {
                  uVar20 = FUN_0018b4e0(plVar39 + 4,&local_90);
                  plVar23 = plVar39 + 1;
                  if ((uVar20 & 1) == 0) {
                    plVar35 = plVar39;
                    plVar23 = plVar39;
                  }
                  plVar39 = (long *)*plVar23;
                } while (plVar39 != (long *)0x0);
                if ((plVar35 != plVar27) &&
                   (uVar20 = FUN_0018b4e0(&local_90,plVar35 + 4), (uVar20 & 1) == 0)) {
                  uVar34 = strtoull((char *)plVar35[0xc],(char **)0x0,10);
                  if ((char)plVar41[0x13] == '\0') {
                    FUN_001b8590(plVar40);
                  }
                  puVar38 = puVar38 + 0x10;
                  local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
                  local_f0 = (undefined1 *)0x10;
                  local_110 = puVar38;
                  local_f8 = &local_108;
                  FUN_0018b070(&local_110,"RVCID",0xffffffffffffffff);
                  plVar39 = (long *)plVar41[0xd];
                  if (plVar39 != (long *)0x0) {
                    plVar35 = plVar27;
                    do {
                      uVar20 = FUN_0018b4e0(plVar39 + 4,&local_110);
                      plVar23 = plVar39 + 1;
                      if ((uVar20 & 1) == 0) {
                        plVar35 = plVar39;
                        plVar23 = plVar39;
                      }
                      plVar39 = (long *)*plVar23;
                    } while (plVar39 != (long *)0x0);
                    if (plVar35 != plVar27) {
                      uVar20 = FUN_0018b4e0(&local_110,plVar35 + 4);
                      puVar1 = PTR_DAT_04bc0ec8;
                      if ((uVar20 & 1) == 0) {
                        plVar39 = (long *)plVar35[1];
                        plVar27 = plVar35;
                        if ((long *)plVar35[1] == (long *)0x0) {
                          do {
                            plVar23 = (long *)plVar27[2];
                            bVar14 = (long *)*plVar23 != plVar27;
                            plVar27 = plVar23;
                          } while (bVar14);
                        }
                        else {
                          do {
                            plVar23 = plVar39;
                            plVar39 = (long *)*plVar23;
                          } while ((long *)*plVar23 != (long *)0x0);
                        }
                        if ((long *)plVar41[0xc] == plVar35) {
                          plVar41[0xc] = (long)plVar23;
                        }
                        plVar41[0xe] = plVar41[0xe] + -1;
                        FUN_00192390(plVar41[0xd],plVar35);
                        plVar35[9] = (long)(puVar1 + 0x10);
                        FUN_0018b1a0();
                        plVar35[4] = (long)(puVar1 + 0x10);
                        FUN_0018b1a0(plVar35 + 4);
                        FUN_00187e4c(plVar35);
                      }
                    }
                  }
                  local_110 = puVar38;
                  FUN_0018b1a0(&local_110);
                  local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
                  local_f0 = &DAT_00000010;
                  local_110 = puVar38;
                  local_f8 = &local_108;
                  FUN_0018b070(&local_110,"RVCID",0xffffffffffffffff);
                  puVar38 = PTR_DAT_04bc0ec8;
                  plVar39 = plVar24;
                  plVar27 = plVar24;
                  if ((long *)plVar41[10] != (long *)0x0) {
                    plVar35 = (long *)plVar41[10];
                    do {
                      while( true ) {
                        plVar39 = plVar35;
                        uVar20 = FUN_0018b4e0(&local_110,plVar39 + 4);
                        if ((uVar20 & 1) != 0) break;
                        uVar20 = FUN_0018b4e0(plVar39 + 4,&local_110);
                        if ((uVar20 & 1) == 0) {
                          plVar35 = (long *)*plVar27;
                          if (plVar35 != (long *)0x0) goto LAB_001af074;
                          goto LAB_001aedfc;
                        }
                        plVar27 = plVar39 + 1;
                        plVar35 = (long *)*plVar27;
                        if ((long *)*plVar27 == (long *)0x0) goto LAB_001aedfc;
                      }
                      plVar35 = (long *)*plVar39;
                      plVar27 = plVar39;
                    } while ((long *)*plVar39 != (long *)0x0);
                  }
LAB_001aedfc:
                  plVar35 = (long *)FUN_00187df4(0x50);
                  plVar35[4] = (long)(puVar38 + 0x10);
                  plVar23 = plVar35 + 5;
                  *(undefined1 *)plVar23 = 0;
                  plVar35[7] = (long)plVar23;
                  plVar35[8] = 0x10;
                  if (&local_110 != (undefined **)(plVar35 + 4)) {
                    *(undefined4 *)(plVar35 + 5) = (undefined4)local_108;
                    *(undefined4 *)((long)plVar35 + 0x2c) = local_108._4_4_;
                    lVar25 = plVar35[6];
                    *(undefined1 *)(plVar35 + 6) = local_100;
                    uVar6 = *(undefined1 *)((long)plVar35 + 0x31);
                    local_108 = (undefined *)((ulong)*(uint7 *)((long)plVar35 + 0x29) << 8);
                    *(undefined1 *)((long)plVar35 + 0x31) = local_ff;
                    uVar7 = *(undefined1 *)((long)plVar35 + 0x32);
                    *(undefined1 *)((long)plVar35 + 0x32) = local_fe;
                    uVar8 = *(undefined1 *)((long)plVar35 + 0x33);
                    *(undefined1 *)((long)plVar35 + 0x33) = local_fd;
                    uVar9 = *(undefined1 *)((long)plVar35 + 0x34);
                    *(undefined1 *)((long)plVar35 + 0x34) = local_fc;
                    uVar10 = *(undefined1 *)((long)plVar35 + 0x35);
                    *(undefined1 *)((long)plVar35 + 0x35) = local_fb;
                    uVar11 = *(undefined1 *)((long)plVar35 + 0x36);
                    *(undefined1 *)((long)plVar35 + 0x36) = local_fa;
                    uVar12 = *(undefined1 *)((long)plVar35 + 0x37);
                    *(undefined1 *)((long)plVar35 + 0x37) = local_f9;
                    plVar35[7] = (long)local_f8;
                    plVar35[8] = (long)local_f0;
                    bVar14 = local_f8 == &local_108;
                    local_f0 = &DAT_00000010;
                    local_100 = (char)lVar25;
                    local_ff = uVar6;
                    local_fe = uVar7;
                    local_fd = uVar8;
                    local_fc = uVar9;
                    local_fb = uVar10;
                    local_fa = uVar11;
                    local_f9 = uVar12;
                    local_f8 = &local_108;
                    if (bVar14) {
                      plVar35[7] = (long)plVar23;
                    }
                  }
                  plVar35[9] = 0;
                  *plVar35 = 0;
                  plVar35[1] = 0;
                  plVar35[2] = (long)plVar39;
                  *plVar27 = (long)plVar35;
                  plVar39 = plVar35;
                  if (*(long *)plVar41[9] != 0) {
                    plVar41[9] = *(long *)plVar41[9];
                    plVar39 = (long *)*plVar27;
                  }
                  plVar24 = (long *)*plVar24;
                  bVar14 = plVar39 == plVar24;
                  *(bool *)(plVar39 + 3) = bVar14;
joined_r0x001aef2c:
                  if ((bVar14) || (plVar27 = (long *)plVar39[2], (char)plVar27[3] != '\0'))
                  goto LAB_001af068;
                  plVar23 = (long *)plVar27[2];
                  plVar31 = (long *)*plVar23;
                  if (plVar31 != plVar27) {
                    if ((plVar31 == (long *)0x0) || (plVar31 = plVar31 + 3, (char)*plVar31 != '\0'))
                    {
                      if ((long *)*plVar27 == plVar39) {
                        lVar25 = plVar39[1];
                        *plVar27 = lVar25;
                        if (lVar25 != 0) {
                          *(long **)(lVar25 + 0x10) = plVar27;
                          plVar23 = (long *)plVar27[2];
                        }
                        plVar39[2] = (long)plVar23;
                        ((undefined8 *)plVar27[2])[*(long **)plVar27[2] != plVar27] = plVar39;
                        plVar39[1] = (long)plVar27;
                        plVar27[2] = (long)plVar39;
                        plVar23 = (long *)plVar39[2];
                        *(undefined1 *)(plVar39 + 3) = 1;
                        plVar27 = (long *)plVar23[1];
                        *(undefined1 *)(plVar23 + 3) = 0;
                        lVar25 = *plVar27;
                        plVar23[1] = lVar25;
                      }
                      else {
                        *(undefined1 *)(plVar27 + 3) = 1;
                        plVar27 = (long *)plVar23[1];
                        *(undefined1 *)(plVar23 + 3) = 0;
                        lVar25 = *plVar27;
                        plVar23[1] = lVar25;
                      }
                      if (lVar25 != 0) {
                        *(long **)(lVar25 + 0x10) = plVar23;
                      }
                      plVar27[2] = plVar23[2];
                      ((undefined8 *)plVar23[2])[*(long **)plVar23[2] != plVar23] = plVar27;
                      *plVar27 = (long)plVar23;
                      goto LAB_001af064;
                    }
LAB_001aef34:
                    bVar14 = plVar23 == plVar24;
                    *(undefined1 *)(plVar27 + 3) = 1;
                    *(bool *)(plVar23 + 3) = bVar14;
                    *(char *)plVar31 = '\x01';
                    plVar39 = plVar23;
                    goto joined_r0x001aef2c;
                  }
                  if ((plVar23[1] != 0) &&
                     (plVar31 = (long *)(plVar23[1] + 0x18), *(char *)plVar31 == '\0'))
                  goto LAB_001aef34;
                  if ((long *)*plVar27 == plVar39) {
                    *(undefined1 *)(plVar27 + 3) = 1;
                    *(undefined1 *)(plVar23 + 3) = 0;
                    lVar25 = plVar27[1];
                    *plVar23 = lVar25;
                  }
                  else {
                    plVar24 = (long *)plVar27[1];
                    lVar25 = *plVar24;
                    plVar27[1] = lVar25;
                    if (lVar25 != 0) {
                      *(long **)(lVar25 + 0x10) = plVar27;
                      plVar23 = (long *)plVar27[2];
                    }
                    plVar24[2] = (long)plVar23;
                    ((undefined8 *)plVar27[2])[*(long **)plVar27[2] != plVar27] = plVar24;
                    *plVar24 = (long)plVar27;
                    plVar27[2] = (long)plVar24;
                    plVar23 = (long *)plVar24[2];
                    plVar27 = (long *)*plVar23;
                    *(undefined1 *)(plVar24 + 3) = 1;
                    *(undefined1 *)(plVar23 + 3) = 0;
                    lVar25 = plVar27[1];
                    *plVar23 = lVar25;
                  }
                  if (lVar25 != 0) {
                    *(long **)(lVar25 + 0x10) = plVar23;
                  }
                  plVar27[2] = plVar23[2];
                  ((undefined8 *)plVar23[2])[*(long **)plVar23[2] != plVar23] = plVar27;
                  plVar27[1] = (long)plVar23;
LAB_001af064:
                  plVar23[2] = (long)plVar27;
LAB_001af068:
                  plVar41[0xb] = plVar41[0xb] + 1;
LAB_001af074:
                  plVar35[9] = uVar34;
                  local_110 = puVar38 + 0x10;
                  FUN_0018b1a0(&local_110);
                  *(undefined1 *)((long)plVar41 + 0x99) = 0;
                  local_64 = 0x10001;
                  FUN_0018aa70(&local_110,&local_64);
                  goto LAB_001af0a4;
                }
              }
              uVar34 = 0;
            }
            else {
              plVar27 = plVar24;
              do {
                uVar20 = FUN_0018b4e0(plVar39 + 4,&local_90);
                plVar35 = plVar39 + 1;
                if ((uVar20 & 1) == 0) {
                  plVar27 = plVar39;
                  plVar35 = plVar39;
                }
                plVar39 = (long *)*plVar35;
              } while (plVar39 != (long *)0x0);
              if ((plVar27 == plVar24) ||
                 (uVar20 = FUN_0018b4e0(&local_90,plVar27 + 4), (uVar20 & 1) != 0))
              goto LAB_001aebcc;
              uVar34 = plVar27[9];
            }
LAB_001af0a4:
            local_90 = (undefined **)(puVar38 + 0x10);
            FUN_0018b1a0(&local_90);
            if ((int)plVar37[2] == (int)uVar34) {
              FUN_00187aac();
              uVar21 = FUN_00187db0();
              FUN_001896d4(uVar21,2);
              FUN_00187aac();
              uVar21 = FUN_00187db0();
              FUN_001896e4(uVar21,2);
              plVar24 = (long *)plVar41[1];
              plVar39 = plVar41;
              plVar27 = plVar24;
              if (plVar24 == (long *)0x0) {
                do {
                  plVar35 = (long *)plVar39[2];
                  bVar14 = (long *)*plVar35 != plVar39;
                  plVar39 = plVar35;
                } while (bVar14);
              }
              else {
                do {
                  plVar35 = plVar27;
                  plVar27 = (long *)*plVar35;
                } while ((long *)*plVar35 != (long *)0x0);
              }
              plVar39 = plVar41;
              if (plVar24 == (long *)0x0) {
                do {
                  plVar27 = (long *)plVar39[2];
                  bVar14 = (long *)*plVar27 != plVar39;
                  plVar39 = plVar27;
                } while (bVar14);
              }
              else {
                do {
                  plVar27 = plVar24;
                  plVar24 = (long *)*plVar27;
                } while ((long *)*plVar27 != (long *)0x0);
              }
              if (*(long **)(param_1 + 0x150) == plVar41) {
                *(long **)(param_1 + 0x150) = plVar27;
              }
              *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -1;
              FUN_00192390(*(undefined8 *)(param_1 + 0x158),plVar41);
              FUN_001b8504(plVar40);
              FUN_00187e4c(plVar41);
              plVar41 = plVar35;
            }
            else {
              plVar40 = (long *)plVar41[1];
              plVar24 = plVar41;
              if ((long *)plVar41[1] == (long *)0x0) {
                do {
                  plVar41 = (long *)plVar24[2];
                  bVar14 = (long *)*plVar41 != plVar24;
                  plVar24 = plVar41;
                } while (bVar14);
              }
              else {
                do {
                  plVar41 = plVar40;
                  plVar40 = (long *)*plVar41;
                } while ((long *)*plVar41 != (long *)0x0);
              }
            }
          }
          plVar37 = (long *)plVar37[1];
        } while (plVar37 != plVar36);
      }
    }
  }
  if ((*(long *)(param_1 + 0x1a8) != 0) && (plVar37 = *(long **)(param_1 + 0x60), plVar37 != plVar5)
     ) {
    puVar38 = PTR_DAT_04bcc3f8 + 0x10;
    do {
      plVar41 = *(long **)(param_1 + 0x1a0);
      iVar17 = FUN_001b8fa0(plVar37 + 3,"RVCID",0);
      if (plVar41 != plVar36) {
        do {
          if ((int)plVar41[2] == iVar17) {
            if (plVar41 != plVar36) {
              FUN_00187aac();
              uVar21 = FUN_00187db0();
              FUN_001896d4(uVar21,2);
              FUN_00187aac();
              uVar21 = FUN_00187db0();
              FUN_001896e4(uVar21,2);
              plVar41 = (long *)FUN_00187df4(0xb0);
              *plVar41 = 0;
              plVar41[2] = (long)puVar38;
              FUN_001b8358(plVar41 + 3,plVar37 + 3);
              plVar41[0x11] = plVar37[0x11];
              lVar25 = plVar37[0x12];
              lVar28 = plVar37[0x13];
              lVar29 = plVar37[0x14];
              lVar19 = plVar37[0x15];
              plVar41[1] = param_1 + 0x78;
              *(int *)(plVar41 + 0x15) = (int)lVar19;
              plVar41[0x13] = lVar28;
              plVar41[0x14] = lVar29;
              plVar41[0x12] = lVar25;
              lVar25 = *(long *)(param_1 + 0x78);
              *plVar41 = lVar25;
              *(long **)(lVar25 + 8) = plVar41;
              *(long **)(param_1 + 0x78) = plVar41;
              *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
              lVar25 = *plVar37;
              plVar41 = (long *)plVar37[1];
              *(long **)(lVar25 + 8) = plVar41;
              *(long *)plVar37[1] = lVar25;
              *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
              (**(code **)plVar37[2])(plVar37 + 2);
              FUN_00187e4c(plVar37);
              lVar25 = *(long *)(param_1 + 0x1a8);
              plVar37 = plVar41;
              goto joined_r0x001af37c;
            }
            break;
          }
          plVar41 = (long *)plVar41[1];
        } while (plVar41 != plVar36);
      }
      plVar37 = (long *)plVar37[1];
      lVar25 = *(long *)(param_1 + 0x1a8);
joined_r0x001af37c:
    } while ((lVar25 != 0) && (plVar37 != plVar5));
  }
  for (plVar36 = *(long **)(param_1 + 0x80); plVar36 != (long *)(param_1 + 0x78);
      plVar36 = (long *)plVar36[1]) {
    while (FUN_00187810(&local_118), (ulong)plVar36[0x11] < local_118) {
      FUN_00187aac();
      uVar21 = FUN_00187db0();
      FUN_001896d4(uVar21,2);
      FUN_00187aac();
      uVar21 = FUN_00187db0();
      FUN_001896e4(uVar21,2);
      lVar25 = *plVar36;
      plVar5 = (long *)plVar36[1];
      *(long **)(lVar25 + 8) = plVar5;
      *(long *)plVar36[1] = lVar25;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
      (**(code **)plVar36[2])();
      FUN_00187e4c(plVar36);
      plVar36 = plVar5;
      if (plVar5 == (long *)(param_1 + 0x78)) goto LAB_001af424;
    }
  }
LAB_001af424:
  plVar36 = *(long **)(param_1 + 0x1b8);
  if (plVar36 != plVar32) {
    puVar38 = PTR_DAT_04bc0ec8 + 0x10;
    do {
      FUN_00187aac();
      uVar21 = FUN_00187db0();
      FUN_001896d4(uVar21,2);
      FUN_00187aac();
      uVar21 = FUN_00187db0();
      FUN_001896e4(uVar21,2);
      plVar5 = plVar36 + 2;
      FUN_001b8e80(&local_110,plVar5,&DAT_0410a6d5,1);
      local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
      local_f0 = (undefined1 *)0x10;
      local_110 = puVar38;
      local_f8 = &local_108;
      FUN_0018b070(&local_110,&DAT_0410a6bc,0xffffffffffffffff);
      FUN_001dd950(plVar36 + 8,&local_110);
      local_110 = puVar38;
      FUN_0018b1a0(&local_110);
      local_108 = (undefined *)((ulong)local_108 & 0xffffffffffffff00);
      local_f0 = &DAT_00000010;
      local_110 = puVar38;
      local_f8 = &local_108;
      FUN_0018b070(&local_110,&DAT_0410a6bc,0xffffffffffffffff);
      local_90 = &local_110;
      lVar25 = FUN_001dda60(plVar36 + 8,&local_110,PTR_piecewise_construct_04bcbf80,&local_90,
                            &local_64);
      FUN_00189504(lVar25 + 0x48,param_1 + 0x168);
      local_110 = puVar38;
      FUN_0018b1a0(&local_110);
      FUN_001b8e80(&local_110,plVar5,&DAT_0410a6cb,*(undefined2 *)(param_1 + 400));
      plVar37 = (long *)FUN_00187df4(0x80);
      *plVar37 = 0;
      FUN_001b8358(plVar37 + 2,plVar5);
      *plVar37 = param_1 + 0x38;
      puVar26 = *(undefined8 **)(param_1 + 0x40);
      plVar37[1] = (long)puVar26;
      *puVar26 = plVar37;
      *(long **)(param_1 + 0x40) = plVar37;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
      plVar36 = (long *)plVar36[1];
    } while (plVar36 != plVar32);
  }
  (**(code **)(*(long *)(lVar22 + 0x78) + 0x20))();
  return;
code_r0x001ae9d0:
  FUN_00187aac();
  uVar21 = FUN_00187db0();
  FUN_001896d4(uVar21,2);
  FUN_00187aac();
  uVar21 = FUN_00187db0();
  FUN_001896e4(uVar21,2);
  lVar25 = *plVar40;
  plVar39 = (long *)plVar40[1];
  *(long **)(lVar25 + 8) = plVar39;
  *(long *)plVar40[1] = lVar25;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  (**(code **)plVar40[2])(plVar24);
  FUN_00187e4c(plVar40);
  plVar40 = plVar39;
  goto joined_r0x001ae438;
}

