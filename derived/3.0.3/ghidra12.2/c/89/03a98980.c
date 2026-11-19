
void FUN_03a98980(long param_1,long param_2,uint param_3,long *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 long param_10,long param_11,int param_12,byte param_13)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  float fVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  float *pfVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined8 local_a4;
  
  lVar19 = *(long *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    param_3 = 0;
  }
  (**(code **)(*param_4 + 0x38))(param_4);
  local_b0 = 0xff7fffffff7fffff;
  local_c0 = PTR_DAT_04bd0f08 + 0x10;
  local_b8 = 0x7f7fffff7f7fffff;
  local_a8 = *(uint *)PTR_DAT_04bd0ea8;
  local_a4 = 0x3f80000000000000;
  if (local_a8 < 6) {
    if ((1 << (ulong)(local_a8 & 0x1f) & 0x39U) == 0) {
      fVar28 = *(float *)(param_4 + 1);
      fVar27 = *(float *)((long)param_4 + 0xc);
    }
    else {
      fVar27 = *(float *)(param_4 + 1);
      fVar28 = *(float *)((long)param_4 + 0xc);
    }
    fVar30 = fVar27;
    fVar13 = 0.0;
    if (fVar27 <= 0.0) {
      fVar30 = 0.0;
      fVar13 = fVar27;
    }
    fVar29 = fVar28;
    fVar27 = 0.0;
    if (fVar28 <= 0.0) {
      fVar29 = 0.0;
      fVar27 = fVar28;
    }
    local_b8 = CONCAT44(fVar27,fVar13);
    local_b0 = CONCAT44(fVar29,fVar30);
  }
  FUN_038e77e4(&local_c0,param_2,param_4);
  uVar8 = *(ushort *)(param_5 + 0x30);
  uVar9 = *(ushort *)(param_5 + 0x32);
  lVar20 = param_4[4];
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  uVar5 = uVar9;
  if (*(short *)(param_5 + 0x3a) != 3) {
    uVar5 = 1;
  }
  if (uVar5 <= uVar9) {
    uVar5 = uVar9;
  }
  uVar9 = *(ushort *)(lVar20 + 0x38);
  uVar10 = *(ushort *)(lVar20 + 0x3a);
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar6 = uVar10;
  if (*(short *)(lVar20 + 0x42) != 3) {
    uVar6 = 1;
  }
  if (uVar6 <= uVar10) {
    uVar6 = uVar10;
  }
  lVar20 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x440) + 8);
  lVar22 = *(long *)(lVar20 + 0x38);
  uVar21 = 0;
  if (param_11 != 0) {
    uVar21 = (uint)*(ushort *)(lVar22 + 0x30);
  }
  uVar7 = *(uint *)(lVar20 + 0x30);
  lVar4 = 0x70;
  if (uVar7 < 3) {
    lVar4 = 0;
  }
  iVar2 = uVar21 + (uint)*(ushort *)(lVar22 + (ulong)(1 < uVar7) * 0x38 + 0x30) * param_12 +
          ((uint)*(ushort *)(lVar22 + lVar4 + 0x30) &
          (int)((uint)*(byte *)(param_1 + 0xb) << 0x19) >> 0x1f);
  if ((param_13 & 1) == 0) {
    if (param_10 == 0) {
      uVar21 = 0;
    }
    else {
      lVar4 = 0xa8;
      if (uVar7 < 4) {
        lVar4 = 0;
      }
      uVar21 = (uint)*(ushort *)(lVar22 + lVar4 + 0x30);
    }
  }
  else {
    lVar4 = 0xa8;
    if (uVar7 < 4) {
      lVar4 = 0;
    }
    uVar21 = (uint)*(ushort *)(lVar22 + lVar4 + 0x30) << 1;
  }
  iVar3 = iVar2 + uVar21;
  if (iVar3 == 0 || iVar3 < 0 != SCARRY4(iVar2,uVar21)) {
    lVar20 = *(long *)(lVar20 + 0x18);
  }
  else {
    uVar21 = iVar3 - 1;
    if (*(uint *)(lVar20 + 0x20) <= uVar21) {
      uVar21 = 0;
    }
    lVar20 = *(long *)(lVar20 + 0x28) + (ulong)uVar21 * 0x150;
  }
  FUN_03907810(lVar20,param_2);
  puVar1 = (uint *)(lVar20 + 0x14);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar22 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar22 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
    puVar15 = PTR_DAT_04bd0fc8;
    puVar14 = PTR_DAT_04bcf2e0;
  } while (cVar11 != '\0');
  if (**(int **)(lVar20 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar20 + 0x38),8,
               lVar19 + (long)(int)param_3 * 0x5b0 + 0x5a0);
  }
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar22 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar22 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  iVar2 = *(int *)(*(long *)(lVar20 + 0x38) + (ulong)(1 < *(uint *)(lVar20 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    (**(code **)puVar14)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar15 + 0x70),
               *(undefined8 *)(*(long *)puVar15 + 0x18),(long)iVar2,8,
               lVar19 + (long)(int)param_3 * 0x5b0 + 0x5a8);
  }
  local_c0 = (undefined *)CONCAT44(1.0 / (float)uVar5,1.0 / (float)uVar8);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar22 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar22 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar22 = 0x30;
  if (*(uint *)(lVar20 + 0x30) < 3) {
    lVar22 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar20 + 0x38) + lVar22);
  if (iVar2 != -1) {
    (**(code **)puVar14)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar15 + 0x70),
               *(undefined8 *)(*(long *)puVar15 + 0x18),(long)iVar2,8,&local_c0);
  }
  local_c0 = (undefined *)CONCAT44(1.0 / (float)uVar6,1.0 / (float)uVar9);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar22 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar22 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar22 = 0x48;
  if (*(uint *)(lVar20 + 0x30) < 4) {
    lVar22 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar20 + 0x38) + lVar22);
  if (iVar2 != -1) {
    (**(code **)puVar14)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar15 + 0x70),
               *(undefined8 *)(*(long *)puVar15 + 0x18),(long)iVar2,8,&local_c0);
  }
  lVar19 = lVar19 + (long)(int)param_3 * 0x5b0;
  pfVar23 = (float *)(lVar19 + 0xe4);
  fVar27 = *pfVar23;
  fVar28 = *(float *)(lVar19 + 0xe8);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,fVar28 - fVar27);
  lVar19 = 0x60;
  if (*(uint *)(lVar20 + 0x30) < 5) {
    lVar19 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar20 + 0x38) + lVar19);
  if (iVar2 != -1) {
    (**(code **)puVar14)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar15 + 0x70),
               *(undefined8 *)(*(long *)puVar15 + 0x18),(long)iVar2,4,&local_c0);
  }
  fVar27 = *pfVar23;
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,fVar27);
  lVar19 = 0x78;
  if (*(uint *)(lVar20 + 0x30) < 6) {
    lVar19 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar20 + 0x38) + lVar19);
  if (iVar2 != -1) {
    (**(code **)puVar14)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar15 + 0x70),
               *(undefined8 *)(*(long *)puVar15 + 0x18),(long)iVar2,4,&local_c0);
  }
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  FUN_0390d290(param_5,param_2,*(undefined8 *)(lVar20 + 0x68),0xffffffff,0);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar19 = 0x30;
  if (*(uint *)(lVar20 + 0x60) < 3) {
    lVar19 = 0;
  }
  FUN_0390d290(param_6,param_2,*(long *)(lVar20 + 0x68) + lVar19,0xffffffff,0);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar19 = 0x48;
  if (*(uint *)(lVar20 + 0x60) < 4) {
    lVar19 = 0;
  }
  FUN_0390d290(param_7,param_2,*(long *)(lVar20 + 0x68) + lVar19,0xffffffff,0);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar19 = 0x78;
  if (*(uint *)(lVar20 + 0x60) < 6) {
    lVar19 = 0;
  }
  FUN_0390d290(param_8,param_2,*(long *)(lVar20 + 0x68) + lVar19,0xffffffff,0);
  do {
    uVar21 = *puVar1;
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar21 | 0x80000000;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((uVar21 & 0x7fffffff) != 0) {
    if ((int)uVar21 < 0) {
      if ((int)*puVar1 < 0) {
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  lVar19 = 0x90;
  if (*(uint *)(lVar20 + 0x60) < 7) {
    lVar19 = 0;
  }
  FUN_0390d290(param_9,param_2,*(long *)(lVar20 + 0x68) + lVar19,0xffffffff,0);
  if (param_11 != 0) {
    do {
      uVar21 = *puVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar21 | 0x80000000;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if ((uVar21 & 0x7fffffff) != 0) {
      if ((int)uVar21 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar20);
      }
    }
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = 0;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    FUN_0390d290(param_11,param_2,
                 *(long *)(lVar20 + 0x68) + (ulong)(1 < *(uint *)(lVar20 + 0x60)) * 0x18,0xffffffff,
                 0);
  }
  if (param_10 != 0) {
    do {
      uVar21 = *puVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar21 | 0x80000000;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if ((uVar21 & 0x7fffffff) != 0) {
      if ((int)uVar21 < 0) {
        if ((int)*puVar1 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar20);
      }
    }
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = 0;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    lVar19 = 0x60;
    if (*(uint *)(lVar20 + 0x60) < 5) {
      lVar19 = 0;
    }
    FUN_0390d290(param_10,param_2,*(long *)(lVar20 + 0x68) + lVar19,0xffffffff,0);
  }
  uVar24 = *(undefined8 *)(param_2 + 0xb8);
  lVar19 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar24,0x10,lVar19 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar24,0x10,lVar19 + 0x1068);
  puVar15 = PTR_DAT_04bcf1e8;
  puVar14 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar19 + 0x1010);
  if (iVar2 != 0) {
    lVar19 = *(long *)(lVar19 + 0x1018);
    uVar25 = 0;
    uVar26 = 0;
    do {
      lVar20 = *(long *)(lVar19 + (-(uVar26 >> 0x1f) & 0xfffffff800000000 | uVar26 << 3));
      if (lVar20 != 0) {
        uVar16 = (**(code **)puVar14)(lVar20 + 8);
        (**(code **)puVar15)(uVar24,uVar25 & 0xffffffff,uVar16,*(undefined4 *)(lVar20 + 0x118));
      }
      uVar25 = uVar26 + 1;
      uVar26 = uVar25 & 0xffffffff;
    } while (iVar2 != (int)uVar25);
  }
  lVar19 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar19 + 0x480);
  if (iVar2 != 0) {
    uVar18 = *(undefined4 *)(lVar19 + 0x464);
    uVar16 = *(undefined8 *)(param_2 + 0xb8);
    uVar24 = (**(code **)puVar14)(lVar19 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar16,uVar18,*(undefined4 *)(lVar19 + 0x460),iVar2,uVar24);
  }
  puVar14 = PTR_DAT_04bc1010;
  uVar21 = *(uint *)(param_4[4] + 0x58);
  if (uVar21 != 0xffffffff) {
    lVar19 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar19 + 0x5c8) >> 3 & 1) == 0) {
      uVar7 = uVar21 - *(ushort *)(lVar19 + 0x3da);
      if (*(uint *)(lVar19 + 0x368) <= uVar7) {
        uVar7 = 0;
      }
      if ((*(uint *)(*(long *)(lVar19 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
        goto LAB_03a99674;
      }
    }
    if ((*(uint *)(lVar19 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar19 + 800) & 2) != 0) {
      uVar18 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar18);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a99674:
  if (param_10 == 0 && param_11 != 0) {
    uVar21 = *(uint *)(param_4[5] + 0x58);
    if (uVar21 != 0xffffffff) {
      lVar19 = *(long *)puVar14;
      if ((*(uint *)(lVar19 + 0x5c8) >> 3 & 1) == 0) {
        uVar7 = uVar21 - *(ushort *)(lVar19 + 0x3da);
        if (*(uint *)(lVar19 + 0x368) <= uVar7) {
          uVar7 = 0;
        }
        if ((*(uint *)(*(long *)(lVar19 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
          return;
        }
      }
      if ((*(uint *)(lVar19 + 0x5c8) >> 5 & 1) == 0) {
        uVar17 = 0x112;
        uVar18 = 0x12;
      }
      else {
        uVar17 = 0x111;
        uVar18 = 0x11;
      }
      if ((*(uint *)(lVar19 + 800) & 2) != 0) {
        uVar18 = uVar17;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar18);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
  return;
}

