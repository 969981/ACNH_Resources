
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_039439c0(float param_1,float param_2,long param_3,float *param_4,undefined8 *param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
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
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [56];
  undefined8 local_88;
  float local_80;
  float local_7c [3];
  
  uVar11 = *param_5;
  local_80 = *(float *)(param_5 + 1);
  local_88._0_4_ = (float)uVar11;
  local_88._4_4_ = (float)((ulong)uVar11 >> 0x20);
  fVar40 = SQRT(local_88._4_4_ * local_88._4_4_ + (float)local_88 * (float)local_88 +
                local_80 * local_80);
  if (0.0 < fVar40) {
    fVar40 = 1.0 / fVar40;
    local_88 = CONCAT44(local_88._4_4_ * fVar40,(float)local_88 * fVar40);
    local_80 = local_80 * fVar40;
    uVar11 = local_88;
  }
  local_88 = uVar11;
  fVar31 = *param_4;
  fVar32 = param_4[1];
  fVar33 = param_4[2];
  local_100 = 0xbf80000080000000;
  uStack_f8 = CONCAT44(uStack_f8._4_4_,0x80000000);
  FUN_0094e208(local_c0,&local_100,&local_88);
  fVar41 = local_c0._0_4_ * 0.0;
  fVar43 = local_c0._4_4_ * 0.0;
  fVar45 = local_c0._8_4_ * 0.0;
  fVar47 = local_c0._12_4_ * 0.0;
  fVar18 = local_c0._16_4_;
  fVar19 = local_c0._20_4_;
  fVar20 = local_c0._24_4_;
  fVar35 = local_c0._28_4_;
  fVar21 = local_c0._32_4_;
  fVar22 = local_c0._36_4_;
  fVar23 = local_c0._40_4_;
  fVar39 = local_c0._44_4_;
  fVar60 = local_c0._0_4_ + fVar18 * 0.0 + fVar21 * 0.0 + 0.0;
  fVar61 = local_c0._4_4_ + fVar19 * 0.0 + fVar22 * 0.0 + 0.0;
  fVar63 = local_c0._8_4_ + fVar20 * 0.0 + fVar23 * 0.0 + 0.0;
  fVar40 = fVar18 + fVar41 + fVar21 * 0.0 + 0.0;
  fVar25 = fVar19 + fVar43 + fVar22 * 0.0 + 0.0;
  fVar27 = fVar20 + fVar45 + fVar23 * 0.0 + 0.0;
  fVar18 = fVar21 + fVar41 + fVar18 * 0.0 + 0.0;
  fVar43 = fVar22 + fVar43 + fVar19 * 0.0 + 0.0;
  fVar28 = fVar23 + fVar45 + fVar20 * 0.0 + 0.0;
  fVar19 = cosf(param_1 * 0.5);
  fVar20 = cosf(param_1);
  fVar20 = (1.0 / fVar19) * fVar20;
  fVar36 = fVar20 * fVar60 + fVar61 * 0.0 + fVar63 * 0.0 + 0.0;
  fVar37 = fVar60 * 0.0 + fVar20 * fVar61 + fVar63 * 0.0 + 0.0;
  fVar38 = fVar60 * 0.0 + fVar61 * 0.0 + fVar20 * fVar63 + 0.0;
  fVar51 = fVar20 * fVar40 + fVar25 * 0.0 + fVar27 * 0.0 + 0.0;
  fVar54 = fVar40 * 0.0 + fVar20 * fVar25 + fVar27 * 0.0 + 0.0;
  fVar57 = fVar40 * 0.0 + fVar25 * 0.0 + fVar20 * fVar27 + 0.0;
  fVar21 = fVar20 * fVar18 + fVar43 * 0.0 + fVar28 * 0.0 + 0.0;
  fVar45 = fVar18 * 0.0 + fVar20 * fVar43 + fVar28 * 0.0 + 0.0;
  fVar29 = fVar18 * 0.0 + fVar43 * 0.0 + fVar20 * fVar28 + 0.0;
  fVar48 = param_2 * fVar36 + fVar37 * 0.0 + fVar38 * 0.0 + 0.0;
  fVar49 = fVar36 * 0.0 + param_2 * fVar37 + fVar38 * 0.0 + 0.0;
  fVar50 = fVar36 * 0.0 + fVar37 * 0.0 + param_2 * fVar38 + 0.0;
  fVar52 = param_2 * fVar51 + fVar54 * 0.0 + fVar57 * 0.0 + 0.0;
  fVar55 = fVar51 * 0.0 + param_2 * fVar54 + fVar57 * 0.0 + 0.0;
  fVar58 = fVar51 * 0.0 + fVar54 * 0.0 + param_2 * fVar57 + 0.0;
  fVar22 = param_2 * fVar21 + fVar45 * 0.0 + fVar29 * 0.0 + 0.0;
  fVar26 = fVar21 * 0.0 + param_2 * fVar45 + fVar29 * 0.0 + 0.0;
  fVar30 = fVar21 * 0.0 + fVar45 * 0.0 + param_2 * fVar29 + 0.0;
  fVar23 = tanf(param_1);
  fVar23 = fVar23 + fVar23;
  fVar41 = (float)_DAT_04102880;
  fVar62 = (float)((ulong)_DAT_04102880 >> 0x20);
  fVar24 = (float)_UNK_04102888;
  fVar34 = (float)((ulong)_UNK_04102888 >> 0x20);
  fVar42 = fVar23 * fVar48 + fVar41 * fVar49 + fVar50 * 0.0 + 0.0;
  fVar44 = fVar48 * 0.0 + fVar62 * fVar49 + fVar50 * 0.0 + 0.0;
  fVar46 = fVar48 * 0.0 + fVar24 * fVar49 + fVar23 * fVar50 + 0.0;
  fVar53 = fVar23 * fVar52 + fVar41 * fVar55 + fVar58 * 0.0 + 0.0;
  fVar56 = fVar52 * 0.0 + fVar62 * fVar55 + fVar58 * 0.0 + 0.0;
  fVar59 = fVar52 * 0.0 + fVar24 * fVar55 + fVar23 * fVar58 + 0.0;
  lVar17 = *(long *)PTR_DAT_04bbd7e0;
  fVar64 = (float)_DAT_04102200;
  fVar66 = (float)((ulong)_DAT_04102200 >> 0x20);
  fVar68 = (float)_UNK_04102208;
  fVar70 = (float)((ulong)_UNK_04102208 >> 0x20);
  fVar71 = (float)_DAT_04101f70;
  fVar72 = (float)((ulong)_DAT_04101f70 >> 0x20);
  fVar73 = (float)_UNK_04101f78;
  fVar74 = (float)((ulong)_UNK_04101f78 >> 0x20);
  fVar75 = (float)_DAT_041023d0;
  fVar76 = (float)((ulong)_DAT_041023d0 >> 0x20);
  fVar77 = (float)_UNK_041023d8;
  fVar78 = (float)((ulong)_UNK_041023d8 >> 0x20);
  fVar41 = fVar23 * fVar22 + fVar41 * fVar26 + fVar30 * 0.0 + 0.0;
  fVar62 = fVar22 * 0.0 + fVar62 * fVar26 + fVar30 * 0.0 + 0.0;
  fVar23 = fVar22 * 0.0 + fVar24 * fVar26 + fVar23 * fVar30 + 0.0;
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 100) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x318);
  }
  fVar65 = fVar64 * fVar42 + fVar71 * fVar44 + fVar75 * fVar46 + 0.0;
  fVar67 = fVar66 * fVar42 + fVar72 * fVar44 + fVar76 * fVar46 + 0.0;
  fVar69 = fVar68 * fVar42 + fVar73 * fVar44 + fVar77 * fVar46 + 0.0;
  fVar37 = fVar31 + local_c0._12_4_ + fVar35 * 0.0 + fVar39 * 0.0 +
           fVar60 * 0.0 + fVar61 * 0.0 + fVar63 * 0.0 + fVar36 * 0.0 + fVar37 * 0.0 + fVar38 * 0.0 +
           fVar48 * 0.0 + fVar34 * fVar49 + fVar50 * 0.0 +
           fVar70 * fVar42 + fVar74 * fVar44 + fVar78 * fVar46;
  fVar24 = fVar64 * fVar53 + fVar71 * fVar56 + fVar75 * fVar59 + 0.0;
  fVar31 = fVar66 * fVar53 + fVar72 * fVar56 + fVar76 * fVar59 + 0.0;
  fVar36 = fVar68 * fVar53 + fVar73 * fVar56 + fVar77 * fVar59 + 0.0;
  fVar32 = fVar32 + fVar35 + fVar47 + fVar39 * 0.0 + fVar40 * 0.0 + fVar25 * 0.0 + fVar27 * 0.0 +
           fVar51 * 0.0 + fVar54 * 0.0 + fVar57 * 0.0 +
           fVar52 * 0.0 + fVar34 * fVar55 + fVar58 * 0.0 +
           fVar70 * fVar53 + fVar74 * fVar56 + fVar78 * fVar59;
  lVar12 = *(long *)PTR_DAT_04bbd7e8;
  fVar40 = fVar64 * fVar41 + fVar71 * fVar62 + fVar75 * fVar23 + 0.0;
  fVar25 = fVar66 * fVar41 + fVar72 * fVar62 + fVar76 * fVar23 + 0.0;
  fVar27 = fVar68 * fVar41 + fVar73 * fVar62 + fVar77 * fVar23 + 0.0;
  fVar18 = fVar33 + fVar39 + fVar47 + fVar35 * 0.0 + fVar18 * 0.0 + fVar43 * 0.0 + fVar28 * 0.0 +
           fVar21 * 0.0 + fVar45 * 0.0 + fVar29 * 0.0 +
           fVar22 * 0.0 + fVar34 * fVar26 + fVar30 * 0.0 +
           fVar70 * fVar41 + fVar74 * fVar62 + fVar78 * fVar23;
  FUN_03907810(lVar14,param_3);
  uVar11 = *(undefined8 *)(param_3 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar11,0x10,lVar17 + 0x4e4);
  (**(code **)PTR_DAT_04bcf1b0)(uVar11,0x10,lVar17 + 0x528);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar17 + 0x4d0);
  if (iVar2 != 0) {
    lVar17 = *(long *)(lVar17 + 0x4d8);
    uVar16 = 0;
    uVar13 = 0;
    do {
      lVar15 = *(long *)(lVar17 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
      if (lVar15 != 0) {
        uVar10 = (**(code **)puVar7)(lVar15 + 8);
        (**(code **)puVar8)(uVar11,uVar16 & 0xffffffff,uVar10,*(undefined4 *)(lVar15 + 0x118));
      }
      uVar16 = uVar13 + 1;
      uVar13 = uVar16 & 0xffffffff;
    } while (iVar2 != (int)uVar16);
  }
  fVar38 = (1.0 / fVar19) / fVar20 + -1.0;
  puVar1 = (uint *)(lVar14 + 0x14);
  fVar19 = (float)*param_7;
  fVar43 = (float)param_7[2];
  fVar21 = (float)((ulong)*param_7 >> 0x20);
  fVar45 = (float)((ulong)param_7[2] >> 0x20);
  fVar28 = (float)param_7[4];
  fVar29 = (float)((ulong)param_7[4] >> 0x20);
  fVar23 = (float)param_7[1];
  fVar26 = (float)param_7[3];
  fVar30 = (float)param_7[5];
  fVar20 = fVar65 * fVar19 + fVar24 * fVar21 + fVar40 * fVar23 + 0.0;
  fVar22 = fVar67 * fVar19 + fVar31 * fVar21 + fVar25 * fVar23 + 0.0;
  fVar41 = fVar69 * fVar19 + fVar36 * fVar21 + fVar27 * fVar23 + 0.0;
  fVar19 = (float)((ulong)param_7[1] >> 0x20) + fVar37 * fVar19 + fVar32 * fVar21 + fVar18 * fVar23;
  fVar21 = fVar65 * fVar43 + fVar24 * fVar45 + fVar40 * fVar26 + 0.0;
  fVar23 = fVar67 * fVar43 + fVar31 * fVar45 + fVar25 * fVar26 + 0.0;
  fVar62 = fVar69 * fVar43 + fVar36 * fVar45 + fVar27 * fVar26 + 0.0;
  fVar43 = (float)((ulong)param_7[3] >> 0x20) + fVar37 * fVar43 + fVar32 * fVar45 + fVar18 * fVar26;
  fVar45 = fVar65 * fVar28 + fVar24 * fVar29 + fVar40 * fVar30 + 0.0;
  fVar26 = fVar67 * fVar28 + fVar31 * fVar29 + fVar25 * fVar30 + 0.0;
  fVar27 = fVar69 * fVar28 + fVar36 * fVar29 + fVar27 * fVar30 + 0.0;
  fVar28 = (float)((ulong)param_7[5] >> 0x20) + fVar37 * fVar28 + fVar32 * fVar29 + fVar18 * fVar30;
  fVar31 = (float)*param_8;
  fVar32 = (float)((ulong)*param_8 >> 0x20);
  fVar34 = (float)param_8[2];
  fVar35 = (float)((ulong)param_8[2] >> 0x20);
  fVar40 = (float)param_8[4];
  fVar18 = (float)((ulong)param_8[4] >> 0x20);
  fVar29 = (float)param_8[6];
  fVar30 = (float)((ulong)param_8[6] >> 0x20);
  fVar33 = (float)param_8[1];
  fVar36 = (float)param_8[3];
  fVar25 = (float)param_8[5];
  fVar24 = (float)param_8[7];
  local_100 = CONCAT44(fVar22 * fVar31 + fVar23 * fVar32 + fVar26 * fVar33 + 0.0,
                       fVar20 * fVar31 + fVar21 * fVar32 + fVar45 * fVar33 + 0.0);
  uStack_f8 = CONCAT44((float)((ulong)param_8[1] >> 0x20) +
                       fVar19 * fVar31 + fVar43 * fVar32 + fVar28 * fVar33,
                       fVar41 * fVar31 + fVar62 * fVar32 + fVar27 * fVar33 + 0.0);
  uStack_f0 = CONCAT44(fVar22 * fVar34 + fVar23 * fVar35 + fVar26 * fVar36 + 0.0,
                       fVar20 * fVar34 + fVar21 * fVar35 + fVar45 * fVar36 + 0.0);
  uStack_e8 = CONCAT44((float)((ulong)param_8[3] >> 0x20) +
                       fVar19 * fVar34 + fVar43 * fVar35 + fVar28 * fVar36,
                       fVar41 * fVar34 + fVar62 * fVar35 + fVar27 * fVar36 + 0.0);
  local_e0 = CONCAT44(fVar22 * fVar40 + fVar23 * fVar18 + fVar26 * fVar25 + 0.0,
                      fVar20 * fVar40 + fVar21 * fVar18 + fVar45 * fVar25 + 0.0);
  uStack_d8 = CONCAT44((float)((ulong)param_8[5] >> 0x20) +
                       fVar19 * fVar40 + fVar43 * fVar18 + fVar28 * fVar25,
                       fVar41 * fVar40 + fVar62 * fVar18 + fVar27 * fVar25 + 0.0);
  uStack_d0 = CONCAT44(fVar22 * fVar29 + fVar23 * fVar30 + fVar26 * fVar24 + 0.0,
                       fVar20 * fVar29 + fVar21 * fVar30 + fVar45 * fVar24 + 0.0);
  uStack_c8 = CONCAT44((float)((ulong)param_8[7] >> 0x20) +
                       fVar19 * fVar29 + fVar43 * fVar30 + fVar28 * fVar24,
                       fVar41 * fVar29 + fVar62 * fVar30 + fVar27 * fVar24 + 0.0);
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
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar9 = PTR_DAT_04bd0fc8;
    puVar8 = PTR_DAT_04bcf2e0;
  } while (cVar5 != '\0');
  if (**(int **)(lVar14 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar14 + 0x38),
               0x40,&local_100);
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
      FUN_03907b80(lVar14);
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
  iVar2 = *(int *)(*(long *)(lVar14 + 0x38) + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    lVar17 = *(long *)puVar9;
    (**(code **)puVar8)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(lVar17 + 0x70),
                        *(undefined8 *)(lVar17 + 0x18),(long)iVar2,0x10,param_6);
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
      FUN_03907b80(lVar14);
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
  if (*(uint *)(lVar14 + 0x30) < 3) {
    lVar17 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar14 + 0x38) + lVar17);
  local_7c[0] = fVar38;
  if (iVar2 != -1) {
    lVar17 = *(long *)puVar9;
    (**(code **)puVar8)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(lVar17 + 0x70),
                        *(undefined8 *)(lVar17 + 0x18),(long)iVar2,4,local_7c);
  }
  iVar2 = *(int *)(lVar12 + 0x2cb8);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(lVar12 + 0x2c9c);
    uVar10 = *(undefined8 *)(param_3 + 0xb8);
    uVar11 = (**(code **)puVar7)(lVar12 + 0x2cc0);
    (**(code **)PTR_DAT_04bbd568)(uVar10,uVar3,*(undefined4 *)(lVar12 + 0x2c98),iVar2,uVar11);
  }
  return;
}

