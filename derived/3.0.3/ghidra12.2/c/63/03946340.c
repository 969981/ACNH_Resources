
void FUN_03946340(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
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
  float fVar37;
  float fVar38;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x1a0) + 8) +
                    0x18);
  FUN_03907810(lVar11,param_1);
  fVar15 = (float)*param_4;
  fVar27 = (float)*param_3;
  fVar28 = (float)((ulong)*param_3 >> 0x20);
  fVar29 = (float)param_3[1];
  fVar30 = (float)((ulong)param_3[1] >> 0x20);
  fVar16 = (float)((ulong)*param_4 >> 0x20);
  fVar31 = (float)param_3[2];
  fVar33 = (float)((ulong)param_3[2] >> 0x20);
  fVar35 = (float)param_3[3];
  fVar37 = (float)((ulong)param_3[3] >> 0x20);
  fVar18 = (float)param_4[2];
  fVar19 = (float)((ulong)param_4[2] >> 0x20);
  fVar21 = (float)param_4[4];
  fVar22 = (float)((ulong)param_4[4] >> 0x20);
  fVar24 = (float)param_4[6];
  fVar25 = (float)((ulong)param_4[6] >> 0x20);
  puVar1 = (uint *)(lVar11 + 0x14);
  fVar17 = (float)param_4[1];
  fVar32 = (float)param_3[4];
  fVar34 = (float)((ulong)param_3[4] >> 0x20);
  fVar36 = (float)param_3[5];
  fVar38 = (float)((ulong)param_3[5] >> 0x20);
  fVar20 = (float)param_4[3];
  fVar23 = (float)param_4[5];
  fVar26 = (float)param_4[7];
  local_a0 = CONCAT44(fVar28 * fVar15 + fVar33 * fVar16 + fVar34 * fVar17 + 0.0,
                      fVar27 * fVar15 + fVar31 * fVar16 + fVar32 * fVar17 + 0.0);
  uStack_98 = CONCAT44((float)((ulong)param_4[1] >> 0x20) +
                       fVar30 * fVar15 + fVar37 * fVar16 + fVar38 * fVar17,
                       fVar29 * fVar15 + fVar35 * fVar16 + fVar36 * fVar17 + 0.0);
  uStack_90 = CONCAT44(fVar28 * fVar18 + fVar33 * fVar19 + fVar34 * fVar20 + 0.0,
                       fVar27 * fVar18 + fVar31 * fVar19 + fVar32 * fVar20 + 0.0);
  uStack_88 = CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                       fVar30 * fVar18 + fVar37 * fVar19 + fVar38 * fVar20,
                       fVar29 * fVar18 + fVar35 * fVar19 + fVar36 * fVar20 + 0.0);
  local_80 = CONCAT44(fVar28 * fVar21 + fVar33 * fVar22 + fVar34 * fVar23 + 0.0,
                      fVar27 * fVar21 + fVar31 * fVar22 + fVar32 * fVar23 + 0.0);
  uStack_78 = CONCAT44((float)((ulong)param_4[5] >> 0x20) +
                       fVar30 * fVar21 + fVar37 * fVar22 + fVar38 * fVar23,
                       fVar29 * fVar21 + fVar35 * fVar22 + fVar36 * fVar23 + 0.0);
  uStack_70 = CONCAT44(fVar28 * fVar24 + fVar33 * fVar25 + fVar34 * fVar26 + 0.0,
                       fVar27 * fVar24 + fVar31 * fVar25 + fVar32 * fVar26 + 0.0);
  uStack_68 = CONCAT44((float)((ulong)param_4[7] >> 0x20) +
                       fVar30 * fVar24 + fVar37 * fVar25 + fVar38 * fVar26,
                       fVar29 * fVar24 + fVar35 * fVar25 + fVar36 * fVar26 + 0.0);
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
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
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
    puVar8 = PTR_DAT_04bd0fc8;
    puVar7 = PTR_DAT_04bcf2e0;
  } while (cVar5 != '\0');
  if (**(int **)(lVar11 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar11 + 0x38),
               0x40,&local_a0);
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
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
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
  lVar14 = 0xc0;
  if (*(uint *)(lVar11 + 0x30) < 9) {
    lVar14 = 0;
  }
  iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + lVar14);
  if (iVar3 != -1) {
    (**(code **)puVar7)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar8 + 0x70),
                        *(undefined8 *)(*(long *)puVar8 + 0x18),(long)iVar3,0x10,param_2);
  }
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
  lVar11 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar11 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar11 + 0xe88);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar3 = *(int *)(lVar11 + 0xe30);
  if (iVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0xe38);
    uVar12 = 0;
    uVar13 = 0;
    do {
      lVar14 = *(long *)(lVar11 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
      if (lVar14 != 0) {
        uVar9 = (**(code **)puVar7)(lVar14 + 8);
        (**(code **)puVar8)(uVar10,uVar12 & 0xffffffff,uVar9,*(undefined4 *)(lVar14 + 0x118));
      }
      uVar12 = uVar13 + 1;
      uVar13 = uVar12 & 0xffffffff;
    } while (iVar3 != (int)uVar12);
  }
  lVar11 = *(long *)PTR_DAT_04bbd7e8;
  iVar3 = *(int *)(lVar11 + 0x1f8);
  if (iVar3 == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar11 + 0x1dc);
  uVar9 = *(undefined8 *)(param_1 + 0xb8);
  uVar10 = (**(code **)puVar7)(lVar11 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x039466b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar9,uVar2,*(undefined4 *)(lVar11 + 0x1d8),iVar3,uVar10);
  return;
}

