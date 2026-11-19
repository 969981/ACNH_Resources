
void FUN_03a77a80(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  undefined4 uVar17;
  ushort *puVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  undefined8 local_10c;
  undefined4 local_100;
  undefined2 local_c4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar26 = *(long *)(param_1 + 0x238);
  uVar13 = (uint)param_3;
  lVar25 = *(long *)(param_1 + 0x228);
  if (*(uint *)(param_1 + 0x230) <= uVar13) {
    uVar13 = 0;
  }
  lVar21 = lVar26 + (long)(int)uVar13 * 0x6d0;
  uVar28 = param_4;
  if (*(uint *)(param_1 + 0x220) <= param_4) {
    uVar28 = 0;
  }
  lVar14 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x5e8) + 8);
  iVar7 = *(int *)(lVar21 + 0x1c0) * (uint)*(ushort *)(*(long *)(lVar14 + 0x38) + 0x30) +
          (uint)*(byte *)(lVar25 + (long)(int)uVar28 * 0x2c + 5) *
          (uint)*(ushort *)
                 (*(long *)(lVar14 + 0x38) + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x38 + 0x30);
  if (iVar7 < 1) {
    lVar14 = *(long *)(lVar14 + 0x18);
  }
  else {
    uVar10 = iVar7 - 1;
    if (*(uint *)(lVar14 + 0x20) <= uVar10) {
      uVar10 = 0;
    }
    lVar14 = *(long *)(lVar14 + 0x28) + (ulong)uVar10 * 0x150;
  }
  lVar23 = lVar26 + (long)(int)uVar13 * 0x6d0;
  uVar15 = (ulong)*(byte *)(lVar25 + (long)(int)uVar28 * 0x2c + 4);
  lVar20 = lVar23 + 0x200 + uVar15 * 0x18;
  if (*(uint *)(lVar23 + 0x210) <= param_4) {
    param_4 = 0;
  }
  local_a0 = *(undefined4 *)(lVar20 + 0x50);
  uStack_9c = *(undefined4 *)(lVar20 + 0x54);
  local_98 = *(undefined8 *)(lVar20 + 0x58);
  uStack_90 = *(undefined8 *)(lVar20 + 0x60);
  FUN_03a75a00(param_1,param_2,param_3,
               *(undefined8 *)(*(long *)(lVar23 + 0x218) + (long)(int)param_4 * 8),
               *(undefined8 *)(lVar23 + 0x200 + uVar15 * 8 + 0x20),&local_a0,0,1);
  local_118 = 0xff7fffffff7fffff;
  local_b0 = 0;
  uStack_a8 = 0x3f80000000000000;
  local_128 = PTR_DAT_04bd0f08 + 0x10;
  local_120 = 0x7f7fffff7f7fffff;
  local_10c = 0x3f80000000000000;
  local_110 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_110 < 6) {
    if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
      fVar31 = *(float *)(lVar23 + 0x3d0);
      fVar29 = *(float *)(lVar23 + 0x3d4);
    }
    else {
      fVar29 = *(float *)(lVar23 + 0x3d0);
      fVar31 = *(float *)(lVar23 + 0x3d4);
    }
    fVar33 = fVar29;
    fVar30 = 0.0;
    if (fVar29 <= 0.0) {
      fVar33 = 0.0;
      fVar30 = fVar29;
    }
    fVar32 = fVar31;
    fVar29 = 0.0;
    if (fVar31 <= 0.0) {
      fVar32 = 0.0;
      fVar29 = fVar31;
    }
    local_120 = CONCAT44(fVar29,fVar30);
    local_118 = CONCAT44(fVar32,fVar33);
  }
  piVar1 = (int *)(lVar21 + 0x1c0);
  FUN_039025b0(0x3f800000,lVar23 + 0x3c8,param_2,0,1,&local_b0,0,&local_128,1);
  FUN_038e4cec(&local_128);
  local_c4 = 2;
  uVar19 = local_128._4_4_;
  local_100 = 0x2020505;
  local_128 = (undefined *)CONCAT53(local_128._3_5_,1);
  local_128 = (undefined *)(CONCAT44(uVar19,(undefined4)local_128) | 0x100000000);
  FUN_038e4d90(&local_128,param_2);
  iVar7 = *(int *)(param_1 + 0x218);
  lVar21 = *(long *)(lVar26 + (long)(int)uVar13 * 0x6d0 + 0xa8);
  FUN_03907810(lVar14,param_2);
  puVar2 = (uint *)(lVar14 + 0x14);
  do {
    uVar10 = *puVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar10 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  lVar20 = lVar26 + (long)(int)uVar13 * 0x6d0;
  if (iVar7 != 0) {
    lVar21 = lVar20 + 0x2e8;
  }
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar2 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bd0fc8;
  } while (cVar8 != '\0');
  lVar23 = 0xf0;
  if (*(uint *)(lVar14 + 0x30) < 0xb) {
    lVar23 = 0;
  }
  iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar23);
  if (iVar7 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar7,0x40,lVar20 + 0x30);
  }
  do {
    uVar10 = *puVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar10 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x18);
  if (iVar7 != -1) {
    lVar20 = *(long *)puVar11;
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar20 + 0x70),
               *(undefined8 *)(lVar20 + 0x18),(long)iVar7,0x30,
               lVar26 + (long)(int)uVar13 * 0x6d0 + 0x1cc);
  }
  puVar18 = (ushort *)(lVar25 + (long)(int)uVar28 * 0x2c + 2);
  lVar20 = lVar26 + (long)(int)uVar13 * 0x6d0;
  pfVar16 = (float *)(lVar20 + 0xa0);
  fVar29 = *(float *)(lVar20 + 0xa4);
  local_128 = (undefined *)CONCAT44(*pfVar16,1.0 / (float)(int)(*puVar18 - 1));
  local_120 = CONCAT44(1.0 - *pfVar16 / fVar29,fVar29);
  do {
    uVar10 = *puVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar10 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  lVar20 = 0x48;
  if (*(uint *)(lVar14 + 0x30) < 4) {
    lVar20 = 0;
  }
  iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
  if (iVar7 != -1) {
    lVar20 = *(long *)puVar11;
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar20 + 0x70),
               *(undefined8 *)(lVar20 + 0x18),(long)iVar7,0x10,&local_128);
  }
  uVar4 = *puVar18;
  do {
    uVar10 = *puVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar10 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bd0fc8;
  } while (cVar8 != '\0');
  local_128 = (undefined *)CONCAT44(local_128._4_4_,(uint)uVar4);
  lVar20 = 0x60;
  if (*(uint *)(lVar14 + 0x30) < 5) {
    lVar20 = 0;
  }
  iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
  if (iVar7 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar7,4,&local_128);
  }
  uVar4 = *(ushort *)(lVar21 + 0x30);
  uVar5 = *(ushort *)(lVar21 + 0x32);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar3 = uVar5;
  if (*(short *)(lVar21 + 0x3a) != 3) {
    uVar3 = 1;
  }
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  local_128 = (undefined *)CONCAT44(1.0 / (float)uVar3,1.0 / (float)uVar4);
  do {
    uVar10 = *puVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar10 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  lVar20 = 0xd8;
  if (*(uint *)(lVar14 + 0x30) < 10) {
    lVar20 = 0;
  }
  iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
  if (iVar7 != -1) {
    lVar20 = *(long *)puVar11;
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar20 + 0x70),
               *(undefined8 *)(lVar20 + 0x18),(long)iVar7,8,&local_128);
  }
  lVar20 = lVar25 + (long)(int)uVar28 * 0x2c;
  fVar29 = *(float *)(lVar20 + 0x14);
  local_128 = (undefined *)CONCAT44(fVar29,*(float *)(lVar20 + 0x18) - fVar29);
  do {
    uVar10 = *puVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar10 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  lVar20 = 0xc0;
  if (*(uint *)(lVar14 + 0x30) < 9) {
    lVar20 = 0;
  }
  iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
  if (iVar7 != -1) {
    lVar20 = *(long *)puVar11;
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar20 + 0x70),
               *(undefined8 *)(lVar20 + 0x18),(long)iVar7,8,&local_128);
  }
  iVar7 = *piVar1;
  if (iVar7 == 0) {
    do {
      uVar10 = *puVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *puVar2 = uVar10 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
      puVar11 = PTR_DAT_04bd0fc8;
    } while (cVar8 != '\0');
    if ((uVar10 & 0x7fffffff) != 0) {
      if ((int)uVar10 < 0) {
        if ((int)*puVar2 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *puVar2 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar20 = 0x90;
    if (*(uint *)(lVar14 + 0x30) < 7) {
      lVar20 = 0;
    }
    iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
    if (iVar7 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
                 *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar7,0x40,
                 lVar26 + (long)(int)uVar13 * 0x6d0 + 0xb0);
    }
  }
  else {
    do {
      uVar10 = *puVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *puVar2 = uVar10 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar10 & 0x7fffffff) != 0) {
      if ((int)uVar10 < 0) {
        if ((int)*puVar2 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar14);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *puVar2 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar20 = 0x90;
    if (*(uint *)(lVar14 + 0x30) < 7) {
      lVar20 = 0;
    }
    iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
    if (iVar6 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar6,
                 (ulong)(uint)(iVar7 << 4) << 2,lVar26 + (long)(int)uVar13 * 0x6d0 + 0xb0);
    }
    FUN_01673550(lVar14,param_2,7,lVar26 + (long)(int)uVar13 * 0x6d0 + 0x1b0,*piVar1);
  }
  do {
    uVar10 = *puVar2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar10 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar10 & 0x7fffffff) != 0) {
    if ((int)uVar10 < 0) {
      if ((int)*puVar2 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_0390d290(lVar21,param_2,
               *(long *)(lVar14 + 0x68) + (ulong)(1 < *(uint *)(lVar14 + 0x60)) * 0x18,0xffffffff,0)
  ;
  lVar21 = lVar25 + (long)(int)uVar28 * 0x2c;
  fVar29 = *pfVar16;
  if (*pfVar16 <= 0.0 || *(char *)(lVar21 + 1) == '\0') {
    fVar29 = *(float *)(lVar21 + 0xc);
  }
  uVar22 = *(undefined8 *)(param_2 + 0xb8);
  fVar31 = *(float *)(lVar21 + 0x10) - fVar29;
  fVar30 = (*(float *)(lVar21 + 0x10) - *(float *)(lVar21 + 0xc)) * 0.5;
  lVar21 = *(long *)PTR_DAT_04bbd7e0;
  if (fVar31 <= fVar30) {
    fVar31 = fVar30;
  }
  (**(code **)PTR_DAT_04bcf1a8)(uVar22,0x10,lVar21 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar22,0x10,lVar21 + 0x1068);
  puVar11 = PTR_DAT_04bcf1e8;
  iVar7 = *(int *)(lVar21 + 0x1010);
  if (iVar7 != 0) {
    lVar21 = *(long *)(lVar21 + 0x1018);
    uVar15 = 0;
    uVar24 = 0;
    do {
      lVar20 = *(long *)(lVar21 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
      if (lVar20 != 0) {
        uVar12 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 8);
        (**(code **)puVar11)(uVar22,uVar15 & 0xffffffff,uVar12,*(undefined4 *)(lVar20 + 0x118));
      }
      uVar15 = uVar24 + 1;
      uVar24 = uVar15 & 0xffffffff;
    } while (iVar7 != (int)uVar15);
  }
  pfVar27 = (float *)(lVar25 + (long)(int)uVar28 * 0x2c + 8);
  uVar28 = (uint)*puVar18;
  if (*pfVar27 == 1.0) {
    if (uVar28 != 0) {
      lVar25 = lVar26 + (long)(int)uVar13 * 0x6d0;
      lVar21 = *(long *)PTR_DAT_04bb29d0;
      do {
        uVar28 = uVar28 - 1;
        fVar30 = fVar29 + ((float)uVar28 / (float)(int)(*puVar18 - 1)) * fVar31;
        if (fVar30 <= *pfVar16) break;
        fVar30 = fVar30 + 7.6293945e-06;
        local_120 = CONCAT44((float)uVar28,fVar30);
        local_128 = (undefined *)
                    CONCAT44(fVar30 * *(float *)(lVar25 + 0x1c8),fVar30 * *(float *)(lVar25 + 0x1c4)
                            );
        do {
          uVar10 = *puVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar10 | 0x80000000;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar10 & 0x7fffffff) != 0) {
          if ((int)uVar10 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar21 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar14);
          }
        }
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar20 = 0x30;
        if (*(uint *)(lVar14 + 0x30) < 3) {
          lVar20 = 0;
        }
        iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
        if (iVar7 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar7,0x10,&local_128);
        }
        lVar20 = *(long *)PTR_DAT_04bbd7e8;
        iVar7 = *(int *)(lVar20 + 0x480);
        if (iVar7 != 0) {
          uVar19 = *(undefined4 *)(lVar20 + 0x464);
          uVar12 = *(undefined8 *)(param_2 + 0xb8);
          uVar22 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 0x488);
          (**(code **)PTR_DAT_04bbd568)(uVar12,uVar19,*(undefined4 *)(lVar20 + 0x460),iVar7,uVar22);
        }
      } while (uVar28 != 0);
    }
  }
  else if (uVar28 != 0) {
    lVar25 = lVar26 + (long)(int)uVar13 * 0x6d0;
    lVar21 = *(long *)PTR_DAT_04bb29d0;
    do {
      uVar28 = uVar28 - 1;
      fVar30 = powf((float)uVar28 / (float)(int)(*puVar18 - 1),*pfVar27);
      fVar30 = fVar29 + fVar30 * fVar31;
      if (fVar30 <= *pfVar16) break;
      fVar30 = fVar30 + 7.6293945e-06;
      local_120 = CONCAT44((float)uVar28,fVar30);
      local_128 = (undefined *)
                  CONCAT44(fVar30 * *(float *)(lVar25 + 0x1c8),fVar30 * *(float *)(lVar25 + 0x1c4));
      do {
        uVar10 = *puVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar10 | 0x80000000;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar10 & 0x7fffffff) != 0) {
        if ((int)uVar10 < 0) {
          while ((int)*puVar2 < 0) {
            nn::os::ConvertToTimeSpan(lVar21 / 1000000);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar14);
        }
      }
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = 0;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      lVar20 = 0x30;
      if (*(uint *)(lVar14 + 0x30) < 3) {
        lVar20 = 0;
      }
      iVar7 = *(int *)(*(long *)(lVar14 + 0x38) + lVar20);
      if (iVar7 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar7,0x10,&local_128);
      }
      lVar20 = *(long *)PTR_DAT_04bbd7e8;
      iVar7 = *(int *)(lVar20 + 0x480);
      if (iVar7 != 0) {
        uVar19 = *(undefined4 *)(lVar20 + 0x464);
        uVar12 = *(undefined8 *)(param_2 + 0xb8);
        uVar22 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar12,uVar19,*(undefined4 *)(lVar20 + 0x460),iVar7,uVar22);
      }
    } while (uVar28 != 0);
  }
  uVar13 = *(uint *)(lVar26 + (long)(int)uVar13 * 0x6d0 + 0x488);
  if (uVar13 != 0xffffffff) {
    lVar25 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar25 + 0x5c8) >> 3 & 1) == 0) {
      uVar28 = uVar13 - *(ushort *)(lVar25 + 0x3da);
      if (*(uint *)(lVar25 + 0x368) <= uVar28) {
        uVar28 = 0;
      }
      if ((*(uint *)(*(long *)(lVar25 + 0x370) + (long)(int)uVar28 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar25 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar19 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar19 = 0x11;
    }
    if ((*(uint *)(lVar25 + 800) & 2) != 0) {
      uVar19 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar19);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

