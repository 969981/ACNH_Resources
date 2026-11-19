
void FUN_03949e90(long param_1,long param_2,long param_3,long param_4,float *param_5,float *param_6)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
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
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float fStack_100;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined1 auStack_c4 [64];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  uVar4 = *(ushort *)(param_3 + 0x30);
  uVar5 = *(ushort *)(param_3 + 0x32);
  puVar1 = (uint *)(param_2 + 0x14);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar2 = uVar5;
  if (*(short *)(param_3 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  local_108 = 1.0 / (float)uVar4;
  local_110 = (undefined *)CONCAT44((float)uVar2,(float)uVar4);
  local_104 = 1.0 / (float)uVar2;
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bd0fc8;
    puVar10 = PTR_DAT_04bcf2e0;
  } while (cVar8 != '\0');
  iVar6 = *(int *)(*(long *)(param_2 + 0x38) + (ulong)(1 < *(uint *)(param_2 + 0x30)) * 0x18);
  if (iVar6 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar6,0x10,&local_110);
  }
  local_80 = *(undefined4 *)PTR_DAT_04bd0eb0;
  uStack_7c = *(undefined4 *)PTR_DAT_04bd0eb8;
  uVar4 = *(ushort *)(param_3 + 0x30);
  fVar27 = *(float *)(param_4 + 8);
  fVar22 = *(float *)(param_4 + 0xc);
  uVar5 = *(ushort *)(param_3 + 0x32);
  local_6c = *(float *)(param_4 + 0x14) - fVar22;
  local_110 = PTR_DAT_04bd0ec0 + 0x10;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  local_78 = 0x3f80000000000000;
  local_84 = *(undefined4 *)(param_4 + 0x18);
  local_70 = local_6c * 0.5;
  local_6c = local_6c * -0.5;
  local_64 = *(float *)(param_4 + 0x10) - fVar27;
  local_108._0_2_ = 0x101;
  local_68 = local_64 * -0.5;
  local_64 = local_64 * 0.5;
  uVar2 = uVar5;
  if (*(short *)(param_3 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  fVar23 = *param_5 * (float)uVar4;
  fVar18 = (*param_6 - ((*(float *)(param_4 + 0x10) + fVar27) * 0.5 - fVar27)) + fVar23 * 0.5;
  fVar28 = param_5[1] * (float)uVar2;
  fVar22 = -(fVar28 * 0.5) - (param_6[1] - ((*(float *)(param_4 + 0x14) + fVar22) * 0.5 - fVar22));
  FUN_038e5b6c(&local_110,&local_104);
  local_108 = (float)CONCAT22(local_108._2_2_,0x100);
  (**(code **)(local_110 + 0x60))(&local_110,auStack_c4,&local_104,local_84);
  local_108._0_2_ = (ushort)local_108._0_1_;
  fVar19 = (float)local_f4;
  fVar20 = (float)((ulong)local_f4 >> 0x20);
  fVar24 = (float)local_e4;
  fVar25 = (float)((ulong)local_e4 >> 0x20);
  fVar29 = (float)local_d4;
  fVar30 = (float)((ulong)local_d4 >> 0x20);
  fVar27 = (float)uStack_fc;
  fVar21 = (float)uStack_ec;
  fVar26 = (float)uStack_dc;
  fVar31 = (float)uStack_cc;
  local_150 = CONCAT44(local_104 * 0.0 + fVar28 * fStack_100 + fVar27 * 0.0 + 0.0,
                       fVar23 * local_104 + fStack_100 * 0.0 + fVar27 * 0.0 + 0.0);
  uStack_148 = CONCAT44((float)((ulong)uStack_fc >> 0x20) +
                        fVar18 * local_104 + fVar22 * fStack_100 + fVar27 * 0.0,
                        local_104 * 0.0 + fStack_100 * 0.0 + fVar27 * 0.0 + 0.0);
  uStack_140 = CONCAT44(fVar19 * 0.0 + fVar28 * fVar20 + fVar21 * 0.0 + 0.0,
                        fVar23 * fVar19 + fVar20 * 0.0 + fVar21 * 0.0 + 0.0);
  uStack_138 = CONCAT44((float)((ulong)uStack_ec >> 0x20) +
                        fVar18 * fVar19 + fVar22 * fVar20 + fVar21 * 0.0,
                        fVar19 * 0.0 + fVar20 * 0.0 + fVar21 * 0.0 + 0.0);
  local_130 = CONCAT44(fVar24 * 0.0 + fVar28 * fVar25 + fVar26 * 0.0 + 0.0,
                       fVar23 * fVar24 + fVar25 * 0.0 + fVar26 * 0.0 + 0.0);
  uStack_128 = CONCAT44((float)((ulong)uStack_dc >> 0x20) +
                        fVar18 * fVar24 + fVar22 * fVar25 + fVar26 * 0.0,
                        fVar24 * 0.0 + fVar25 * 0.0 + fVar26 * 0.0 + 0.0);
  uStack_120 = CONCAT44(fVar29 * 0.0 + fVar28 * fVar30 + fVar31 * 0.0 + 0.0,
                        fVar23 * fVar29 + fVar30 * 0.0 + fVar31 * 0.0 + 0.0);
  uStack_118 = CONCAT44((float)((ulong)uStack_cc >> 0x20) +
                        fVar18 * fVar29 + fVar22 * fVar30 + fVar31 * 0.0,
                        fVar29 * 0.0 + fVar30 * 0.0 + fVar31 * 0.0 + 0.0);
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_0390d290(param_3,param_1,*(undefined8 *)(param_2 + 0x68),0xffffffff,0);
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (**(int **)(param_2 + 0x38) != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)**(int **)(param_2 + 0x38),0x40,
               &local_150);
  }
  uVar13 = *(undefined8 *)(param_1 + 0xb8);
  lVar16 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar13,0x10,lVar16 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar13,0x10,lVar16 + 0xe88);
  puVar11 = PTR_DAT_04bcf1e8;
  puVar10 = PTR_DAT_04bbd560;
  iVar6 = *(int *)(lVar16 + 0xe30);
  if (iVar6 != 0) {
    lVar16 = *(long *)(lVar16 + 0xe38);
    uVar14 = 0;
    uVar15 = 0;
    do {
      lVar17 = *(long *)(lVar16 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      if (lVar17 != 0) {
        uVar12 = (**(code **)puVar10)(lVar17 + 8);
        (**(code **)puVar11)(uVar13,uVar14 & 0xffffffff,uVar12,*(undefined4 *)(lVar17 + 0x118));
      }
      uVar14 = uVar15 + 1;
      uVar15 = uVar14 & 0xffffffff;
    } while (iVar6 != (int)uVar14);
  }
  lVar16 = *(long *)PTR_DAT_04bbd7e8;
  iVar6 = *(int *)(lVar16 + 0x1f8);
  if (iVar6 != 0) {
    uVar3 = *(undefined4 *)(lVar16 + 0x1dc);
    uVar12 = *(undefined8 *)(param_1 + 0xb8);
    uVar13 = (**(code **)puVar10)(lVar16 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar12,uVar3,*(undefined4 *)(lVar16 + 0x1d8),iVar6,uVar13);
  }
  return;
}

