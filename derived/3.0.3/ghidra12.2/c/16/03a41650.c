
void FUN_03a41650(long param_1,long param_2,undefined8 param_3,float *param_4,uint param_5,
                 uint param_6,undefined8 param_7,undefined8 param_8)

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
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined4 local_44;
  
  local_84 = 0;
  fStack_6c = 1.0 / param_4[1];
  local_70 = 1.0 / *param_4;
  local_80 = local_70 * 0.5;
  fStack_7c = fStack_6c * 0.5;
  local_90 = *(undefined8 *)(param_1 + 0x978);
  local_78 = local_70 * 0.15;
  fStack_74 = fStack_6c * 0.15;
  lVar11 = *(long *)(param_1 + ((ulong)(4 < param_5 | param_6) & 1) * 8 + 0x1d0);
  local_88 = *(undefined4 *)(param_1 + 0x980);
  local_68 = local_80;
  fStack_64 = fStack_7c;
  FUN_03907810(lVar11);
  puVar1 = (uint *)(lVar11 + 0x14);
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
  iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + (ulong)(1 < *(uint *)(lVar11 + 0x30)) * 0x18);
  if (iVar3 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar3,0x10,&local_70);
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
  lVar14 = 0x30;
  if (*(uint *)(lVar11 + 0x30) < 3) {
    lVar14 = 0;
  }
  iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + lVar14);
  if (iVar3 != -1) {
    (**(code **)puVar7)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar8 + 0x70),
                        *(undefined8 *)(*(long *)puVar8 + 0x18),(long)iVar3,0x10,&local_80);
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
  lVar14 = 0x48;
  if (*(uint *)(lVar11 + 0x30) < 4) {
    lVar14 = 0;
  }
  iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + lVar14);
  if (iVar3 != -1) {
    (**(code **)puVar7)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar8 + 0x70),
                        *(undefined8 *)(*(long *)puVar8 + 0x18),(long)iVar3,0x10,&local_90);
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
  lVar14 = 0x60;
  if (*(uint *)(lVar11 + 0x30) < 5) {
    lVar14 = 0;
  }
  iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + lVar14);
  if (iVar3 != -1) {
    (**(code **)puVar7)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar8 + 0x70),
                        *(undefined8 *)(*(long *)puVar8 + 0x18),(long)iVar3,0x10,param_7);
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
  lVar14 = 0x78;
  if (*(uint *)(lVar11 + 0x30) < 6) {
    lVar14 = 0;
  }
  iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + lVar14);
  if (iVar3 != -1) {
    (**(code **)puVar7)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar8 + 0x70),
                        *(undefined8 *)(*(long *)puVar8 + 0x18),(long)iVar3,0x10,param_8);
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
  local_44 = 0;
  lVar14 = 0x108;
  if (*(uint *)(lVar11 + 0x30) < 0xc) {
    lVar14 = 0;
  }
  iVar3 = *(int *)(*(long *)(lVar11 + 0x38) + lVar14);
  if (iVar3 != -1) {
    (**(code **)puVar7)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar8 + 0x70),
                        *(undefined8 *)(*(long *)puVar8 + 0x18),(long)iVar3,4,&local_44);
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
  FUN_0390d290(param_3,param_2,*(undefined8 *)(lVar11 + 0x68),0xffffffff,0);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  lVar11 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar11 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar11 + 0x1068);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar3 = *(int *)(lVar11 + 0x1010);
  if (iVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x1018);
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
  iVar3 = *(int *)(lVar11 + 0x480);
  if (iVar3 == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar11 + 0x464);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  uVar10 = (**(code **)puVar7)(lVar11 + 0x488);
                    /* WARNING: Could not recover jumptable at 0x03a41d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar9,uVar2,*(undefined4 *)(lVar11 + 0x460),iVar3,uVar10);
  return;
}

