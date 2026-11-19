
void FUN_0394c8e0(long param_1,long param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  ushort uVar14;
  ushort uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  long lVar20;
  float fVar21;
  float local_74;
  float fStack_70;
  undefined8 local_6c;
  float local_64;
  
  uVar15 = *(ushort *)(param_2 + 0x3a);
  bVar5 = false;
  uVar7 = *(ushort *)(param_2 + 0x30) >> (ulong)(param_3 & 0x1f);
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar2 = *(ushort *)(param_2 + 0x32);
  if (uVar15 != 3) {
    uVar2 = 1;
  }
  uVar14 = *(ushort *)(param_2 + 0x32) >> (ulong)(param_3 & 0x1f);
  if (uVar2 <= uVar14) {
    uVar2 = uVar14;
  }
  iVar12 = -1;
  iVar10 = 3;
  switch(uVar15) {
  case 1:
    bVar5 = false;
    iVar12 = 0;
    break;
  case 2:
    iVar12 = 2;
    bVar5 = true;
    break;
  case 4:
    bVar5 = false;
    iVar12 = 1;
    break;
  case 9:
    iVar10 = 4;
  case 8:
    iVar12 = iVar10;
    fVar19 = (float)(param_4 + (int)((ulong)param_4 / 6) * -6);
    fVar21 = (float)((ulong)param_4 / 6);
    goto LAB_0394ca28;
  }
  fVar21 = (float)param_4;
  if (bVar5) {
    if ((uVar15 | 2) == 6) {
      uVar14 = *(ushort *)(param_2 + 0x34);
      uVar15 = uVar14;
    }
    else {
      uVar14 = *(ushort *)(param_2 + 0x34);
      uVar15 = 1;
    }
    fVar19 = 0.0;
    if (uVar15 <= uVar14) {
      uVar15 = uVar14;
    }
    fVar21 = fVar21 / (float)uVar15;
  }
  else {
    fVar19 = 0.0;
  }
LAB_0394ca28:
  local_6c = 0;
  fStack_70 = 1.0 / (float)uVar2;
  local_74 = 1.0 / (float)uVar7;
  iVar12 = iVar12 + param_5 * 5;
  lVar13 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 1000) + 8);
  if (iVar12 < 1) {
    lVar13 = *(long *)(lVar13 + 0x18);
  }
  else {
    uVar6 = iVar12 - 1;
    if (*(uint *)(lVar13 + 0x20) <= uVar6) {
      uVar6 = 0;
    }
    lVar13 = *(long *)(lVar13 + 0x28) + (ulong)uVar6 * 0x150;
  }
  FUN_03907810(lVar13,param_1);
  puVar1 = (uint *)(lVar13 + 0x14);
  do {
    uVar6 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar6 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar9 = PTR_DAT_04bd0fc8;
    puVar8 = PTR_DAT_04bcf2e0;
  } while (cVar4 != '\0');
  if (**(int **)(lVar13 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar13 + 0x38),
               0x10,&local_74);
  }
  do {
    uVar6 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar6 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
    }
  }
  local_64 = (float)param_3;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar12 = *(int *)(*(long *)(lVar13 + 0x38) + (ulong)(1 < *(uint *)(lVar13 + 0x30)) * 0x18);
  if (iVar12 != -1) {
    (**(code **)puVar8)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar9 + 0x70),
                        *(undefined8 *)(*(long *)puVar9 + 0x18),(long)iVar12,4,&local_64);
  }
  do {
    uVar6 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar6 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  lVar20 = 0x30;
  if (*(uint *)(lVar13 + 0x30) < 3) {
    lVar20 = 0;
  }
  iVar12 = *(int *)(*(long *)(lVar13 + 0x38) + lVar20);
  local_64 = fVar21;
  if (iVar12 != -1) {
    (**(code **)puVar8)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar9 + 0x70),
                        *(undefined8 *)(*(long *)puVar9 + 0x18),(long)iVar12,4,&local_64);
  }
  do {
    uVar6 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar6 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  lVar20 = 0x48;
  if (*(uint *)(lVar13 + 0x30) < 4) {
    lVar20 = 0;
  }
  iVar12 = *(int *)(*(long *)(lVar13 + 0x38) + lVar20);
  local_64 = fVar19;
  if (iVar12 != -1) {
    (**(code **)puVar8)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar9 + 0x70),
                        *(undefined8 *)(*(long *)puVar9 + 0x18),(long)iVar12,4,&local_64);
  }
  do {
    uVar6 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar6 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
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
  FUN_0390d290(param_2,param_1,*(undefined8 *)(lVar13 + 0x68),0xffffffff,0);
  uVar16 = *(undefined8 *)(param_1 + 0xb8);
  lVar13 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar13 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar13 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar12 = *(int *)(lVar13 + 0x1010);
  if (iVar12 != 0) {
    lVar13 = *(long *)(lVar13 + 0x1018);
    uVar17 = 0;
    uVar18 = 0;
    do {
      lVar20 = *(long *)(lVar13 + (-(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3));
      if (lVar20 != 0) {
        uVar11 = (**(code **)puVar8)(lVar20 + 8);
        (**(code **)puVar9)(uVar16,uVar17 & 0xffffffff,uVar11,*(undefined4 *)(lVar20 + 0x118));
      }
      uVar17 = uVar18 + 1;
      uVar18 = uVar17 & 0xffffffff;
    } while (iVar12 != (int)uVar17);
  }
  lVar13 = *(long *)PTR_DAT_04bbd7e8;
  iVar12 = *(int *)(lVar13 + 0x480);
  if (iVar12 == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(lVar13 + 0x464);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  uVar16 = (**(code **)puVar8)(lVar13 + 0x488);
                    /* WARNING: Could not recover jumptable at 0x0394cf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar11,uVar3,*(undefined4 *)(lVar13 + 0x460),iVar12,uVar16);
  return;
}

