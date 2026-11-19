
void FUN_03a97670(long param_1,long param_2,uint param_3,long param_4,long *param_5,long param_6,
                 long param_7,long param_8,byte param_9)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  float *pfVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_88;
  float fStack_84;
  
  lVar18 = *(long *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    param_3 = 0;
  }
  (**(code **)(*param_5 + 0x38))(param_5);
  FUN_038e77e4(param_6,param_2,param_5);
  lVar14 = *(long *)(*(long *)(param_7 + 0x10) + (ulong)(1 < *(uint *)(param_7 + 8)) * 0x270 + 8);
  uVar3 = *(ushort *)(lVar14 + 0x30);
  uVar4 = *(ushort *)(lVar14 + 0x32);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar2 = uVar4;
  if (*(short *)(lVar14 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  fVar24 = *(float *)(param_6 + 0x10);
  fVar23 = *(float *)(param_6 + 0x14);
  fVar26 = *(float *)(param_6 + 8);
  fVar25 = *(float *)(param_6 + 0xc);
  lVar14 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x418) + 8);
  lVar16 = *(long *)(lVar14 + 0x38);
  uVar17 = (uint)*(ushort *)(lVar16 + 0x30);
  if ((param_9 & 1) == 0) {
    uVar17 = 0;
  }
  lVar12 = 0x70;
  if (*(uint *)(lVar14 + 0x30) < 3) {
    lVar12 = 0;
  }
  iVar6 = uVar17 + *(int *)(param_4 + 8) *
                   (uint)*(ushort *)(lVar16 + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x38 + 0x30) +
          *(int *)(param_4 + 0xc) * (uint)*(ushort *)(lVar16 + lVar12 + 0x30);
  if (iVar6 < 1) {
    lVar14 = *(long *)(lVar14 + 0x18);
  }
  else {
    uVar17 = iVar6 - 1;
    if (*(uint *)(lVar14 + 0x20) <= uVar17) {
      uVar17 = 0;
    }
    lVar14 = *(long *)(lVar14 + 0x28) + (ulong)uVar17 * 0x150;
  }
  FUN_03907810(lVar14,param_2);
  puVar1 = (uint *)(lVar14 + 0x14);
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    puVar9 = PTR_DAT_04bcf2e0;
  } while (cVar7 != '\0');
  if (**(int **)(lVar14 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar14 + 0x38),8,
               lVar18 + (long)(int)param_3 * 0x5b0 + 0x5a0);
  }
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  } while (cVar7 != '\0');
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x18);
  if (iVar6 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar6,8,
                        lVar18 + (long)(int)param_3 * 0x5b0 + 0x5a8);
  }
  local_88 = 1.0 / (float)uVar3;
  fStack_84 = 1.0 / (float)uVar2;
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar16 = 0x30;
  if (*(uint *)(lVar14 + 0x30) < 3) {
    lVar16 = 0;
  }
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar16);
  if (iVar6 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar6,8,&local_88);
  }
  local_88 = 1.0 / (fVar24 - fVar26);
  fStack_84 = 1.0 / (fVar23 - fVar25);
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar16 = 0x48;
  if (*(uint *)(lVar14 + 0x30) < 4) {
    lVar16 = 0;
  }
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar16);
  if (iVar6 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar6,8,&local_88);
  }
  fVar23 = *(float *)(param_4 + 0x10);
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar16 = 0x60;
  if (*(uint *)(lVar14 + 0x30) < 5) {
    lVar16 = 0;
  }
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar16);
  local_88 = fVar23;
  if (iVar6 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar6,4,&local_88);
  }
  lVar18 = lVar18 + (long)(int)param_3 * 0x5b0;
  pfVar19 = (float *)(lVar18 + 0xe4);
  fVar23 = *pfVar19;
  fVar24 = *(float *)(lVar18 + 0xe8);
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  local_88 = fVar24 - fVar23;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar18 = 0x78;
  if (*(uint *)(lVar14 + 0x30) < 6) {
    lVar18 = 0;
  }
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
  if (iVar6 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar6,4,&local_88);
  }
  fVar23 = *pfVar19;
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar18 = 0x90;
  if (*(uint *)(lVar14 + 0x30) < 7) {
    lVar18 = 0;
  }
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
  local_88 = fVar23;
  if (iVar6 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar6,4,&local_88);
  }
  fVar23 = *(float *)(param_1 + 0x22c);
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar18 = 0xa8;
  if (*(uint *)(lVar14 + 0x30) < 8) {
    lVar18 = 0;
  }
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar18);
  local_88 = fVar23;
  if (iVar6 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                        *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar6,4,&local_88);
  }
  uVar17 = *(uint *)(param_7 + 8);
  lVar18 = *(long *)(param_7 + 0x10);
  do {
    uVar5 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar5 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  FUN_0390d290(lVar18 + (ulong)(1 < uVar17) * 0x270 + 0x10,param_2,*(undefined8 *)(lVar14 + 0x68),
               0xffffffff,0);
  lVar18 = *(long *)(param_7 + 0x10);
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  FUN_0390d290(lVar18 + 0x10,param_2,
               *(long *)(lVar14 + 0x68) + (ulong)(1 < *(uint *)(lVar14 + 0x60)) * 0x18,0xffffffff,0)
  ;
  uVar17 = *(uint *)(param_7 + 8);
  lVar18 = *(long *)(param_7 + 0x10);
  do {
    uVar5 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar5 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar16 = 0x4e0;
  if (uVar17 < 3) {
    lVar16 = 0;
  }
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar12 = 0x48;
  if (*(uint *)(lVar14 + 0x60) < 4) {
    lVar12 = 0;
  }
  FUN_0390d290(lVar18 + lVar16 + 0x10,param_2,*(long *)(lVar14 + 0x68) + lVar12,0xffffffff,0);
  uVar17 = *(uint *)(param_7 + 8);
  lVar18 = *(long *)(param_7 + 0x10);
  do {
    uVar5 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar5 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar16 = 0x750;
  if (uVar17 < 4) {
    lVar16 = 0;
  }
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar12 = 0x30;
  if (*(uint *)(lVar14 + 0x60) < 3) {
    lVar12 = 0;
  }
  FUN_0390d290(lVar18 + lVar16 + 0x10,param_2,*(long *)(lVar14 + 0x68) + lVar12,0xffffffff,0);
  lVar18 = *(long *)(param_8 + 0x10);
  do {
    uVar17 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar17 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar17 & 0x7fffffff) != 0) {
    if ((int)uVar17 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar16 = 0x78;
  if (*(uint *)(lVar14 + 0x60) < 6) {
    lVar16 = 0;
  }
  FUN_0390d290(lVar18 + 0x10,param_2,*(long *)(lVar14 + 0x68) + lVar16,0xffffffff,0);
  uVar17 = *(uint *)(param_8 + 8);
  lVar18 = *(long *)(param_8 + 0x10);
  do {
    uVar5 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar5 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar16 = 0x4e0;
  if (uVar17 < 3) {
    lVar16 = 0;
  }
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar12 = 0xa8;
  if (*(uint *)(lVar14 + 0x60) < 8) {
    lVar12 = 0;
  }
  FUN_0390d290(lVar18 + lVar16 + 0x10,param_2,*(long *)(lVar14 + 0x68) + lVar12,0xffffffff,0);
  uVar17 = *(uint *)(param_8 + 8);
  lVar18 = *(long *)(param_8 + 0x10);
  do {
    uVar5 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar5 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar16 = 0x750;
  if (uVar17 < 4) {
    lVar16 = 0;
  }
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
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
  lVar12 = 0x90;
  if (*(uint *)(lVar14 + 0x60) < 7) {
    lVar12 = 0;
  }
  FUN_0390d290(lVar18 + lVar16 + 0x10,param_2,*(long *)(lVar14 + 0x68) + lVar12,0xffffffff,0);
  uVar20 = *(undefined8 *)(param_2 + 0xb8);
  lVar18 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar20,0x10,lVar18 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar20,0x10,lVar18 + 0x1068);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar6 = *(int *)(lVar18 + 0x1010);
  if (iVar6 != 0) {
    lVar18 = *(long *)(lVar18 + 0x1018);
    uVar21 = 0;
    uVar22 = 0;
    do {
      lVar14 = *(long *)(lVar18 + (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
      if (lVar14 != 0) {
        uVar11 = (**(code **)puVar9)(lVar14 + 8);
        (**(code **)puVar10)(uVar20,uVar21 & 0xffffffff,uVar11,*(undefined4 *)(lVar14 + 0x118));
      }
      uVar21 = uVar22 + 1;
      uVar22 = uVar21 & 0xffffffff;
    } while (iVar6 != (int)uVar21);
  }
  lVar18 = *(long *)PTR_DAT_04bbd7e8;
  iVar6 = *(int *)(lVar18 + 0x480);
  if (iVar6 != 0) {
    uVar15 = *(undefined4 *)(lVar18 + 0x464);
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    uVar20 = (**(code **)puVar9)(lVar18 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar11,uVar15,*(undefined4 *)(lVar18 + 0x460),iVar6,uVar20);
  }
  uVar17 = *(uint *)(param_5[4] + 0x58);
  if (uVar17 != 0xffffffff) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
      uVar5 = uVar17 - *(ushort *)(lVar18 + 0x3da);
      if (*(uint *)(lVar18 + 0x368) <= uVar5) {
        uVar5 = 0;
      }
      if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar17 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar15 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar15 = 0x11;
    }
    if ((*(uint *)(lVar18 + 800) & 2) != 0) {
      uVar15 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar15);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

