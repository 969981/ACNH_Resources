
void FUN_03942970(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,float *param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  undefined8 local_dc;
  undefined8 local_d4;
  float local_cc;
  float fStack_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar18 = (float)*param_3;
  fVar19 = (float)*param_2;
  fVar20 = (float)((ulong)*param_2 >> 0x20);
  fVar23 = (float)param_2[1];
  fVar24 = (float)((ulong)param_2[1] >> 0x20);
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  fVar25 = (float)param_2[2];
  fVar27 = (float)((ulong)param_2[2] >> 0x20);
  fVar29 = (float)param_2[3];
  fVar31 = (float)((ulong)param_2[3] >> 0x20);
  fVar12 = (float)param_3[2];
  fVar15 = (float)((ulong)param_3[2] >> 0x20);
  fVar17 = (float)param_3[4];
  fVar21 = (float)((ulong)param_3[4] >> 0x20);
  fVar11 = (float)param_3[1];
  fVar26 = (float)param_2[4];
  fVar28 = (float)((ulong)param_2[4] >> 0x20);
  fVar30 = (float)param_2[5];
  fVar32 = (float)((ulong)param_2[5] >> 0x20);
  fVar16 = (float)param_3[3];
  fVar22 = (float)param_3[5];
  fVar33 = fVar19 * fVar18 + fVar25 * fVar10 + fVar26 * fVar11 + 0.0;
  fVar34 = fVar20 * fVar18 + fVar27 * fVar10 + fVar28 * fVar11 + 0.0;
  local_80 = CONCAT44(fVar34,fVar33);
  fVar35 = fVar23 * fVar18 + fVar29 * fVar10 + fVar30 * fVar11 + 0.0;
  fVar36 = (float)((ulong)param_3[1] >> 0x20) + fVar24 * fVar18 + fVar31 * fVar10 + fVar32 * fVar11;
  uStack_78 = CONCAT44(fVar36,fVar35);
  fVar11 = fVar19 * fVar12 + fVar25 * fVar15 + fVar26 * fVar16 + 0.0;
  fVar13 = fVar20 * fVar12 + fVar27 * fVar15 + fVar28 * fVar16 + 0.0;
  uStack_70 = CONCAT44(fVar13,fVar11);
  fVar14 = fVar23 * fVar12 + fVar29 * fVar15 + fVar30 * fVar16 + 0.0;
  fVar15 = (float)((ulong)param_3[3] >> 0x20) + fVar24 * fVar12 + fVar31 * fVar15 + fVar32 * fVar16;
  uStack_68 = CONCAT44(fVar15,fVar14);
  fVar16 = fVar19 * fVar17 + fVar25 * fVar21 + fVar26 * fVar22 + 0.0;
  fVar19 = fVar20 * fVar17 + fVar27 * fVar21 + fVar28 * fVar22 + 0.0;
  local_60 = CONCAT44(fVar19,fVar16);
  fVar20 = fVar23 * fVar17 + fVar29 * fVar21 + fVar30 * fVar22 + 0.0;
  fVar21 = (float)((ulong)param_3[5] >> 0x20) + fVar24 * fVar17 + fVar31 * fVar21 + fVar32 * fVar22;
  uStack_58 = CONCAT44(fVar21,fVar20);
  fVar12 = (float)*param_4;
  fVar17 = (float)((ulong)*param_4 >> 0x20);
  fVar25 = (float)param_4[2];
  fVar27 = (float)((ulong)param_4[2] >> 0x20);
  fVar22 = (float)param_4[1];
  fVar29 = (float)param_4[3];
  fVar23 = (float)param_4[4];
  fVar24 = (float)((ulong)param_4[4] >> 0x20);
  fVar26 = (float)param_4[6];
  fVar28 = (float)((ulong)param_4[6] >> 0x20);
  local_c0 = CONCAT44(fVar34 * fVar12 + fVar13 * fVar17 + fVar19 * fVar22 + 0.0,
                      fVar33 * fVar12 + fVar11 * fVar17 + fVar16 * fVar22 + 0.0);
  uStack_b8 = CONCAT44((float)((ulong)param_4[1] >> 0x20) +
                       fVar36 * fVar12 + fVar15 * fVar17 + fVar21 * fVar22,
                       fVar35 * fVar12 + fVar14 * fVar17 + fVar20 * fVar22 + 0.0);
  uStack_b0 = CONCAT44(fVar34 * fVar25 + fVar13 * fVar27 + fVar19 * fVar29 + 0.0,
                       fVar33 * fVar25 + fVar11 * fVar27 + fVar16 * fVar29 + 0.0);
  uStack_a8 = CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                       fVar36 * fVar25 + fVar15 * fVar27 + fVar21 * fVar29,
                       fVar35 * fVar25 + fVar14 * fVar27 + fVar20 * fVar29 + 0.0);
  fVar25 = (float)param_4[5];
  fVar27 = (float)param_4[7];
  fVar12 = *param_7;
  fVar17 = param_7[1];
  fVar22 = param_7[2];
  local_a0 = CONCAT44(fVar34 * fVar23 + fVar13 * fVar24 + fVar19 * fVar25 + 0.0,
                      fVar33 * fVar23 + fVar11 * fVar24 + fVar16 * fVar25 + 0.0);
  uStack_98 = CONCAT44((float)((ulong)param_4[5] >> 0x20) +
                       fVar36 * fVar23 + fVar15 * fVar24 + fVar21 * fVar25,
                       fVar35 * fVar23 + fVar14 * fVar24 + fVar20 * fVar25 + 0.0);
  uStack_90 = CONCAT44(fVar34 * fVar26 + fVar13 * fVar28 + fVar19 * fVar27 + 0.0,
                       fVar33 * fVar26 + fVar11 * fVar28 + fVar16 * fVar27 + 0.0);
  uStack_88 = CONCAT44((float)((ulong)param_4[7] >> 0x20) +
                       fVar36 * fVar26 + fVar15 * fVar28 + fVar21 * fVar27,
                       fVar35 * fVar26 + fVar14 * fVar28 + fVar20 * fVar27 + 0.0);
  local_cc = fVar17 * fVar10 + fVar12 * fVar18 + fVar22 * *(float *)(param_3 + 1);
  fStack_c8 = fVar17 * *(float *)((long)param_3 + 0x14) + fVar12 * *(float *)(param_3 + 2) +
              fVar22 * *(float *)(param_3 + 3);
  local_c4 = fVar17 * *(float *)((long)param_3 + 0x24) + fVar12 * *(float *)(param_3 + 4) +
             fVar22 * *(float *)(param_3 + 5);
  fVar18 = SQRT(fStack_c8 * fStack_c8 + local_cc * local_cc + local_c4 * local_c4);
  if (0.0 < fVar18) {
    fVar18 = 1.0 / fVar18;
    local_cc = local_cc * fVar18;
    fStack_c8 = fStack_c8 * fVar18;
    local_c4 = local_c4 * fVar18;
  }
  if (*(int *)(*(long *)PTR_DAT_04bbdd18 + 8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = **(long **)(*(long *)PTR_DAT_04bbdd18 + 0x10);
  }
  puVar1 = (uint *)(lVar9 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_04bd0fc8;
    puVar6 = PTR_DAT_04bcf2e0;
  } while (cVar4 != '\0');
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,0x30,&local_80);
  }
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (**(int **)(lVar9 + 0x38) != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)**(int **)(lVar9 + 0x38),0x40,
                        &local_c0);
  }
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar8 = 0x30;
  if (*(uint *)(lVar9 + 0x30) < 3) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,0x10,param_5);
  }
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar8 = 0x48;
  if (*(uint *)(lVar9 + 0x30) < 4) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,0x10,param_6);
  }
  local_dc = 0;
  local_d4 = 0x3f80000000000000;
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar8 = 0x60;
  if (*(uint *)(lVar9 + 0x30) < 5) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,0x10,&local_dc);
  }
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar8 = 0x78;
  if (*(uint *)(lVar9 + 0x30) < 6) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,0xc,&local_cc);
  }
  return;
}

