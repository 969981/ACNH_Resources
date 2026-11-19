
void FUN_039466e0(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
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
  float fVar39;
  float fVar40;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint local_44;
  
  puVar1 = (uint *)(param_2 + 0x14);
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_0390d290(param_3,param_1,*(undefined8 *)(param_2 + 0x68),0xffffffff,0);
  fVar17 = (float)*param_5;
  fVar29 = (float)*param_4;
  fVar30 = (float)((ulong)*param_4 >> 0x20);
  fVar31 = (float)param_4[1];
  fVar32 = (float)((ulong)param_4[1] >> 0x20);
  fVar18 = (float)((ulong)*param_5 >> 0x20);
  fVar33 = (float)param_4[2];
  fVar35 = (float)((ulong)param_4[2] >> 0x20);
  fVar37 = (float)param_4[3];
  fVar39 = (float)((ulong)param_4[3] >> 0x20);
  fVar20 = (float)param_5[2];
  fVar21 = (float)((ulong)param_5[2] >> 0x20);
  fVar23 = (float)param_5[4];
  fVar24 = (float)((ulong)param_5[4] >> 0x20);
  fVar26 = (float)param_5[6];
  fVar27 = (float)((ulong)param_5[6] >> 0x20);
  fVar19 = (float)param_5[1];
  fVar34 = (float)param_4[4];
  fVar36 = (float)((ulong)param_4[4] >> 0x20);
  fVar38 = (float)param_4[5];
  fVar40 = (float)((ulong)param_4[5] >> 0x20);
  fVar22 = (float)param_5[3];
  fVar25 = (float)param_5[5];
  fVar28 = (float)param_5[7];
  local_a0 = CONCAT44(fVar30 * fVar17 + fVar35 * fVar18 + fVar36 * fVar19 + 0.0,
                      fVar29 * fVar17 + fVar33 * fVar18 + fVar34 * fVar19 + 0.0);
  uStack_98 = CONCAT44((float)((ulong)param_5[1] >> 0x20) +
                       fVar32 * fVar17 + fVar39 * fVar18 + fVar40 * fVar19,
                       fVar31 * fVar17 + fVar37 * fVar18 + fVar38 * fVar19 + 0.0);
  uStack_90 = CONCAT44(fVar30 * fVar20 + fVar35 * fVar21 + fVar36 * fVar22 + 0.0,
                       fVar29 * fVar20 + fVar33 * fVar21 + fVar34 * fVar22 + 0.0);
  uStack_88 = CONCAT44((float)((ulong)param_5[3] >> 0x20) +
                       fVar32 * fVar20 + fVar39 * fVar21 + fVar40 * fVar22,
                       fVar31 * fVar20 + fVar37 * fVar21 + fVar38 * fVar22 + 0.0);
  local_80 = CONCAT44(fVar30 * fVar23 + fVar35 * fVar24 + fVar36 * fVar25 + 0.0,
                      fVar29 * fVar23 + fVar33 * fVar24 + fVar34 * fVar25 + 0.0);
  uStack_78 = CONCAT44((float)((ulong)param_5[5] >> 0x20) +
                       fVar32 * fVar23 + fVar39 * fVar24 + fVar40 * fVar25,
                       fVar31 * fVar23 + fVar37 * fVar24 + fVar38 * fVar25 + 0.0);
  uStack_70 = CONCAT44(fVar30 * fVar26 + fVar35 * fVar27 + fVar36 * fVar28 + 0.0,
                       fVar29 * fVar26 + fVar33 * fVar27 + fVar34 * fVar28 + 0.0);
  uStack_68 = CONCAT44((float)((ulong)param_5[7] >> 0x20) +
                       fVar32 * fVar26 + fVar39 * fVar27 + fVar40 * fVar28,
                       fVar31 * fVar26 + fVar37 * fVar27 + fVar38 * fVar28 + 0.0);
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    puVar10 = PTR_DAT_04bd0fc8;
    puVar9 = PTR_DAT_04bcf2e0;
  } while (cVar7 != '\0');
  if (**(int **)(param_2 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(param_2 + 0x38),
               0x40,&local_a0);
  }
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar12 = 0xc0;
  if (*(uint *)(param_2 + 0x30) < 9) {
    lVar12 = 0;
  }
  iVar5 = *(int *)(*(long *)(param_2 + 0x38) + lVar12);
  if (iVar5 != -1) {
    lVar12 = *(long *)puVar10;
    (**(code **)puVar9)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar12 + 0x70),
                        *(undefined8 *)(lVar12 + 0x18),(long)iVar5,0x10,param_6);
  }
  bVar4 = *(byte *)(param_3 + 0xd8);
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar2 = bVar4 & 1;
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar12 = 0xf0;
  if (*(uint *)(param_2 + 0x30) < 0xb) {
    lVar12 = 0;
  }
  iVar5 = *(int *)(*(long *)(param_2 + 0x38) + lVar12);
  local_44 = uVar2;
  if (iVar5 != -1) {
    lVar12 = *(long *)puVar10;
    (**(code **)puVar9)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar12 + 0x70),
                        *(undefined8 *)(lVar12 + 0x18),(long)iVar5,4,&local_44);
  }
  uVar13 = *(undefined8 *)(param_1 + 0xb8);
  lVar12 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar13,0x10,lVar12 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar13,0x10,lVar12 + 0xe88);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar5 = *(int *)(lVar12 + 0xe30);
  if (iVar5 != 0) {
    lVar12 = *(long *)(lVar12 + 0xe38);
    uVar14 = 0;
    uVar15 = 0;
    do {
      lVar16 = *(long *)(lVar12 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      if (lVar16 != 0) {
        uVar11 = (**(code **)puVar9)(lVar16 + 8);
        (**(code **)puVar10)(uVar13,uVar14 & 0xffffffff,uVar11,*(undefined4 *)(lVar16 + 0x118));
      }
      uVar14 = uVar15 + 1;
      uVar15 = uVar14 & 0xffffffff;
    } while (iVar5 != (int)uVar14);
  }
  lVar12 = *(long *)PTR_DAT_04bbd7e8;
  iVar5 = *(int *)(lVar12 + 0x1f8);
  if (iVar5 == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(lVar12 + 0x1dc);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  uVar13 = (**(code **)puVar9)(lVar12 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x03946b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar11,uVar3,*(undefined4 *)(lVar12 + 0x1d8),iVar5,uVar13);
  return;
}

