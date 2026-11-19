
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03945ad0(long param_1,long param_2,float param_3,undefined8 param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float local_244;
  float local_240;
  float local_23c;
  float fStack_238;
  undefined1 local_1df;
  undefined1 auStack_1d0 [48];
  ushort local_1a0;
  ushort local_19e;
  short local_196;
  undefined1 auStack_180 [116];
  undefined2 local_10c;
  undefined1 local_10a;
  uint local_fc;
  short local_f6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [80];
  
  lVar11 = 0x28;
  if (*(short *)(param_2 + 0x3a) != 4) {
    lVar11 = 0x18;
  }
  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x380) + 8) +
                    lVar11);
  FUN_03907810(lVar11);
  FUN_038e6ab4(local_b0,param_4);
  fVar18 = (float)*param_6;
  fVar34 = (float)*param_5;
  fVar36 = (float)((ulong)*param_5 >> 0x20);
  fVar37 = (float)param_5[1];
  fVar41 = (float)((ulong)param_5[1] >> 0x20);
  fVar20 = (float)((ulong)*param_6 >> 0x20);
  fVar38 = (float)param_5[2];
  fVar40 = (float)((ulong)param_5[2] >> 0x20);
  fVar47 = (float)param_5[3];
  fVar49 = (float)((ulong)param_5[3] >> 0x20);
  fVar25 = (float)param_6[2];
  fVar27 = (float)((ulong)param_6[2] >> 0x20);
  fVar30 = (float)param_6[4];
  fVar31 = (float)((ulong)param_6[4] >> 0x20);
  fVar19 = (float)param_6[6];
  fVar21 = (float)((ulong)param_6[6] >> 0x20);
  fVar23 = (float)param_6[7];
  fVar39 = (float)param_5[4];
  fVar46 = (float)((ulong)param_5[4] >> 0x20);
  fVar48 = (float)param_5[5];
  fVar50 = (float)((ulong)param_5[5] >> 0x20);
  fVar22 = (float)param_6[1];
  fVar28 = (float)param_6[3];
  fVar33 = (float)param_6[5];
  fVar42 = fVar34 * fVar19 + fVar38 * fVar21 + fVar39 * fVar23 + 0.0;
  fVar43 = fVar36 * fVar19 + fVar40 * fVar21 + fVar46 * fVar23 + 0.0;
  fVar44 = fVar37 * fVar19 + fVar47 * fVar21 + fVar48 * fVar23 + 0.0;
  fVar45 = (float)((ulong)param_6[7] >> 0x20) + fVar41 * fVar19 + fVar49 * fVar21 + fVar50 * fVar23;
  fVar19 = fVar34 * fVar18 + fVar38 * fVar20 + fVar39 * fVar22 + 0.0;
  fVar21 = fVar36 * fVar18 + fVar40 * fVar20 + fVar46 * fVar22 + 0.0;
  fVar23 = fVar37 * fVar18 + fVar47 * fVar20 + fVar48 * fVar22 + 0.0;
  fVar24 = (float)((ulong)param_6[1] >> 0x20) + fVar41 * fVar18 + fVar49 * fVar20 + fVar50 * fVar22;
  fVar26 = fVar34 * fVar25 + fVar38 * fVar27 + fVar39 * fVar28 + 0.0;
  fVar29 = fVar36 * fVar25 + fVar40 * fVar27 + fVar46 * fVar28 + 0.0;
  fVar32 = fVar37 * fVar25 + fVar47 * fVar27 + fVar48 * fVar28 + 0.0;
  fVar35 = (float)((ulong)param_6[3] >> 0x20) + fVar41 * fVar25 + fVar49 * fVar27 + fVar50 * fVar28;
  fVar38 = fVar34 * fVar30 + fVar38 * fVar31 + fVar39 * fVar33 + 0.0;
  fVar39 = fVar36 * fVar30 + fVar40 * fVar31 + fVar46 * fVar33 + 0.0;
  fVar40 = fVar37 * fVar30 + fVar47 * fVar31 + fVar48 * fVar33 + 0.0;
  fVar41 = (float)((ulong)param_6[5] >> 0x20) + fVar41 * fVar30 + fVar49 * fVar31 + fVar50 * fVar33;
  fVar18 = local_b0._0_4_;
  fVar20 = local_b0._4_4_;
  fVar22 = local_b0._8_4_;
  fVar49 = local_b0._12_4_;
  fVar25 = local_b0._16_4_;
  fVar28 = local_b0._20_4_;
  fVar31 = local_b0._24_4_;
  fVar50 = local_b0._28_4_;
  fVar27 = local_b0._32_4_;
  fVar30 = local_b0._36_4_;
  fVar33 = local_b0._40_4_;
  fVar51 = local_b0._44_4_;
  fVar34 = local_b0._48_4_;
  fVar36 = local_b0._52_4_;
  fVar37 = local_b0._56_4_;
  fVar61 = local_b0._60_4_;
  fVar52 = fVar18 * fVar19 + fVar25 * fVar21 + fVar27 * fVar23 + fVar34 * fVar24;
  fVar53 = fVar20 * fVar19 + fVar28 * fVar21 + fVar30 * fVar23 + fVar36 * fVar24;
  fVar54 = fVar22 * fVar19 + fVar31 * fVar21 + fVar33 * fVar23 + fVar37 * fVar24;
  fVar55 = fVar18 * fVar26 + fVar25 * fVar29 + fVar27 * fVar32 + fVar34 * fVar35;
  fVar56 = fVar20 * fVar26 + fVar28 * fVar29 + fVar30 * fVar32 + fVar36 * fVar35;
  fVar57 = fVar22 * fVar26 + fVar31 * fVar29 + fVar33 * fVar32 + fVar37 * fVar35;
  fVar58 = fVar18 * fVar38 + fVar25 * fVar39 + fVar27 * fVar40 + fVar34 * fVar41;
  fVar59 = fVar20 * fVar38 + fVar28 * fVar39 + fVar30 * fVar40 + fVar36 * fVar41;
  fVar60 = fVar22 * fVar38 + fVar31 * fVar39 + fVar33 * fVar40 + fVar37 * fVar41;
  fVar46 = fVar18 * fVar42 + fVar25 * fVar43 + fVar27 * fVar44 + fVar34 * fVar45;
  fVar47 = fVar20 * fVar42 + fVar28 * fVar43 + fVar30 * fVar44 + fVar36 * fVar45;
  fVar48 = fVar22 * fVar42 + fVar31 * fVar43 + fVar33 * fVar44 + fVar37 * fVar45;
  fVar18 = (float)_DAT_041023b0;
  fVar20 = (float)((ulong)_DAT_041023b0 >> 0x20);
  fVar22 = (float)_UNK_041023b8;
  fVar25 = (float)((ulong)_UNK_041023b8 >> 0x20);
  fVar27 = (float)_DAT_04102670;
  fVar30 = (float)((ulong)_DAT_04102670 >> 0x20);
  fVar33 = (float)_UNK_04102678;
  fVar36 = (float)((ulong)_UNK_04102678 >> 0x20);
  fVar28 = (float)_DAT_04101eb0;
  fVar31 = (float)((ulong)_DAT_04101eb0 >> 0x20);
  fVar34 = (float)_UNK_04101eb8;
  fVar37 = (float)((ulong)_UNK_04101eb8 >> 0x20);
  local_f0 = CONCAT44(fVar20 * fVar52 + fVar30 * fVar53 + fVar31 * fVar54 + 0.0,
                      fVar18 * fVar52 + fVar27 * fVar53 + fVar28 * fVar54 + 0.0);
  uStack_e8 = CONCAT44(fVar49 * fVar19 + fVar50 * fVar21 + fVar51 * fVar23 + fVar61 * fVar24 +
                       fVar25 * fVar52 + fVar36 * fVar53 + fVar37 * fVar54,
                       fVar22 * fVar52 + fVar33 * fVar53 + fVar34 * fVar54 + 0.0);
  uStack_e0 = CONCAT44(fVar20 * fVar55 + fVar30 * fVar56 + fVar31 * fVar57 + 0.0,
                       fVar18 * fVar55 + fVar27 * fVar56 + fVar28 * fVar57 + 0.0);
  uStack_d8 = CONCAT44(fVar49 * fVar26 + fVar50 * fVar29 + fVar51 * fVar32 + fVar61 * fVar35 +
                       fVar25 * fVar55 + fVar36 * fVar56 + fVar37 * fVar57,
                       fVar22 * fVar55 + fVar33 * fVar56 + fVar34 * fVar57 + 0.0);
  local_d0 = CONCAT44(fVar20 * fVar58 + fVar30 * fVar59 + fVar31 * fVar60 + 0.0,
                      fVar18 * fVar58 + fVar27 * fVar59 + fVar28 * fVar60 + 0.0);
  uStack_c8 = CONCAT44(fVar49 * fVar38 + fVar50 * fVar39 + fVar51 * fVar40 + fVar61 * fVar41 +
                       fVar25 * fVar58 + fVar36 * fVar59 + fVar37 * fVar60,
                       fVar22 * fVar58 + fVar33 * fVar59 + fVar34 * fVar60 + 0.0);
  uStack_c0 = CONCAT44(fVar20 * fVar46 + fVar30 * fVar47 + fVar31 * fVar48 + 0.0,
                       fVar18 * fVar46 + fVar27 * fVar47 + fVar28 * fVar48 + 0.0);
  uStack_b8 = CONCAT44(fVar49 * fVar42 + fVar50 * fVar43 + fVar51 * fVar44 + fVar61 * fVar45 +
                       fVar25 * fVar46 + fVar36 * fVar47 + fVar37 * fVar48,
                       fVar22 * fVar46 + fVar33 * fVar47 + fVar34 * fVar48 + 0.0);
  puVar1 = (uint *)(lVar11 + 0x14);
  do {
    uVar10 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar10 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (**(int **)(lVar11 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar11 + 0x38),
               0x40,&local_f0);
  }
  uVar13 = *(undefined8 *)(param_1 + 0xb8);
  lVar17 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar13,0x10,lVar17 + 0x304);
  (**(code **)PTR_DAT_04bcf1b0)(uVar13,0x10,lVar17 + 0x348);
  puVar8 = PTR_DAT_04bcf1e8;
  iVar2 = *(int *)(lVar17 + 0x2f0);
  if (iVar2 != 0) {
    lVar17 = *(long *)(lVar17 + 0x2f8);
    uVar14 = 0;
    uVar16 = 0;
    do {
      lVar12 = *(long *)(lVar17 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if (lVar12 != 0) {
        uVar9 = (**(code **)PTR_DAT_04bbd560)(lVar12 + 8);
        (**(code **)puVar8)(uVar13,uVar14 & 0xffffffff,uVar9,*(undefined4 *)(lVar12 + 0x118));
      }
      uVar14 = uVar16 + 1;
      uVar16 = uVar14 & 0xffffffff;
    } while (iVar2 != (int)uVar14);
  }
  FUN_0390d120(auStack_1d0,param_2);
  local_10c = 0;
  local_10a = 1;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_fc,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      local_fc = local_fc | 4;
    }
  } while (cVar5 != '\0');
  uVar10 = (uint)local_1a0;
  if (local_1a0 < 2) {
    uVar10 = 1;
  }
  fVar18 = (float)(uint)local_19e;
  if (local_196 != 3) {
    fVar18 = 1.4013e-45;
  }
  if (fVar18 == (float)(uint)local_19e || (uint)fVar18 < (uint)local_19e) {
    fVar18 = (float)(uint)local_19e;
  }
  local_244 = 1.0 / (float)uVar10;
  local_240 = 1.0 / (float)(int)fVar18;
  local_23c = 1.0 / (float)(int)(uVar10 - 1);
  fStack_238 = 1.0 / (float)(int)((int)fVar18 - 1);
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
    plVar15 = (long *)PTR_DAT_04bd0fc8;
    puVar8 = PTR_DAT_04bcf2e0;
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar17 = 0x30;
  if (*(uint *)(lVar11 + 0x30) < 3) {
    lVar17 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar11 + 0x38) + lVar17);
  if (iVar2 != -1) {
    (**(code **)puVar8)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*plVar15 + 0x70),
                        *(undefined8 *)(*plVar15 + 0x18),(long)iVar2,0x10,&local_244);
  }
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(auStack_1d0,param_1,*(undefined8 *)(lVar11 + 0x68),0xffffffff,0);
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar17 = 0x48;
  if (*(uint *)(lVar11 + 0x30) < 4) {
    lVar17 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar11 + 0x38) + lVar17);
  local_244 = param_3;
  if (iVar2 != -1) {
    (**(code **)puVar8)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*plVar15 + 0x70),
                        *(undefined8 *)(*plVar15 + 0x18),(long)iVar2,4,&local_244);
  }
  FUN_038e4cec(&local_244);
  local_244._0_3_ = (uint3)local_244._0_2_;
  local_1df = 2;
  local_240 = (float)((uint)local_240 & 0xfffffffe);
  FUN_038e4d90(&local_244,param_1);
  puVar8 = PTR_DAT_04bbd7e8;
  if (fVar18 != 0.0) {
    lVar17 = *(long *)PTR_DAT_04bb29d0;
    fVar19 = 0.0;
    do {
      do {
        uVar4 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar4 | 0x80000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar4 & 0x7fffffff) != 0) {
        if ((int)uVar4 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar17 / 1000000);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar11);
        }
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar12 = 0x60;
      if (*(uint *)(lVar11 + 0x30) < 5) {
        lVar12 = 0;
      }
      iVar2 = *(int *)(*(long *)(lVar11 + 0x38) + lVar12);
      local_244 = fVar19;
      if (iVar2 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*plVar15 + 0x70),
                   *(undefined8 *)(*plVar15 + 0x18),(long)iVar2,4,&local_244);
      }
      lVar12 = *(long *)puVar8;
      iVar2 = *(int *)(lVar12 + 0x708);
      if (iVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar12 + 0x6ec);
        uVar9 = *(undefined8 *)(param_1 + 0xb8);
        uVar13 = (**(code **)PTR_DAT_04bbd560)(lVar12 + 0x710);
        if (uVar10 < 2) {
          (**(code **)PTR_DAT_04bbd568)(uVar9,uVar3,*(undefined4 *)(lVar12 + 0x6e8),iVar2,uVar13);
        }
        else {
          (**(code **)PTR_DAT_04bcf130)
                    (uVar9,uVar3,*(undefined4 *)(lVar12 + 0x6e8),iVar2,uVar13,0,0);
        }
        plVar15 = (long *)PTR_DAT_04bd0fc8;
      }
      fVar19 = (float)((int)fVar19 + 1);
    } while (fVar19 != fVar18);
  }
  if (local_f6 != -1) {
    lVar11 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar11 + 0x580));
    uVar10 = (int)local_f6 - (uint)*(ushort *)(lVar11 + 0x5c0);
    if (*(uint *)(lVar11 + 0x5a0) <= uVar10) {
      uVar10 = 0;
    }
    lVar17 = *(long *)(lVar11 + 0x5a8) + (long)(int)uVar10 * 0x80;
    sVar7 = *(short *)(lVar17 + 0x76) + -1;
    *(short *)(lVar17 + 0x76) = sVar7;
    if (sVar7 == 0) {
      *(short *)(lVar11 + 0x5c4) = *(short *)(lVar11 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0x580));
    local_f6 = -1;
  }
  FUN_038fd0e0(auStack_180);
  return;
}

