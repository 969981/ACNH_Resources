
void FUN_0394bc60(float param_1,long param_2,long param_3,float param_4,uint param_5,float param_6,
                 int param_7)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float local_74;
  
  lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x338) + 8) +
                    0x28);
  uVar9 = *(ushort *)(param_3 + 0x30) >> (ulong)(param_5 & 0x1f);
  FUN_03907810(lVar13,param_2);
  puVar1 = (uint *)(lVar13 + 0x14);
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  FUN_0390d290(param_3,param_2,*(undefined8 *)(lVar13 + 0x68),0xffffffff,0);
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
  fVar2 = (float)(bVar4 & 1);
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bd0fc8;
    puVar10 = PTR_DAT_04bcf2e0;
  } while (cVar7 != '\0');
  local_74 = fVar2;
  if (**(int **)(lVar13 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar13 + 0x38),4,
               &local_74);
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
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
    }
  }
  local_74 = (float)param_5;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar17 = 0x48;
  if (*(uint *)(lVar13 + 0x30) < 4) {
    lVar17 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar13 + 0x38) + lVar17);
  if (iVar5 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar5,4,&local_74);
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
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  iVar5 = *(int *)(*(long *)(lVar13 + 0x38) + (ulong)(1 < *(uint *)(lVar13 + 0x30)) * 0x18);
  local_74 = param_6;
  if (iVar5 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar5,4,&local_74);
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
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  lVar17 = 0x30;
  if (*(uint *)(lVar13 + 0x30) < 3) {
    lVar17 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar13 + 0x38) + lVar17);
  local_74 = param_4;
  if (iVar5 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar5,4,&local_74);
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
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  lVar17 = 0x78;
  if (*(uint *)(lVar13 + 0x30) < 6) {
    lVar17 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar13 + 0x38) + lVar17);
  local_74 = param_1;
  if (iVar5 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar5,4,&local_74);
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
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  lVar17 = 0x60;
  if (*(uint *)(lVar13 + 0x30) < 5) {
    lVar17 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar13 + 0x38) + lVar17);
  local_74 = (float)uVar9;
  if (iVar5 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar5,4,&local_74);
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
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  lVar17 = 0x90;
  if (*(uint *)(lVar13 + 0x30) < 7) {
    lVar17 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar13 + 0x38) + lVar17);
  if (iVar5 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar5,8,
               &UNK_041b39e4 + ((long)param_7 + -2) * 8);
  }
  uVar14 = *(undefined8 *)(param_2 + 0xb8);
  lVar13 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar14,0x10,lVar13 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar14,0x10,lVar13 + 0xe88);
  puVar11 = PTR_DAT_04bcf1e8;
  puVar10 = PTR_DAT_04bbd560;
  iVar5 = *(int *)(lVar13 + 0xe30);
  if (iVar5 != 0) {
    lVar13 = *(long *)(lVar13 + 0xe38);
    uVar15 = 0;
    uVar16 = 0;
    do {
      lVar17 = *(long *)(lVar13 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if (lVar17 != 0) {
        uVar12 = (**(code **)puVar10)(lVar17 + 8);
        (**(code **)puVar11)(uVar14,uVar15 & 0xffffffff,uVar12,*(undefined4 *)(lVar17 + 0x118));
      }
      uVar15 = uVar16 + 1;
      uVar16 = uVar15 & 0xffffffff;
    } while (iVar5 != (int)uVar15);
  }
  lVar13 = *(long *)PTR_DAT_04bbd7e8;
  iVar5 = *(int *)(lVar13 + 0x1f8);
  if (iVar5 == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(lVar13 + 0x1dc);
  uVar12 = *(undefined8 *)(param_2 + 0xb8);
  uVar14 = (**(code **)puVar10)(lVar13 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x0394c41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar12,uVar3,*(undefined4 *)(lVar13 + 0x1d8),iVar5,uVar14);
  return;
}

