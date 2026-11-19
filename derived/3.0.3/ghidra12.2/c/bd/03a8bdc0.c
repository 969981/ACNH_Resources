
void FUN_03a8bdc0(long param_1,long param_2,uint param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  float *pfVar14;
  undefined8 uVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  lVar16 = *(long *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x28) <= param_3) {
    param_3 = 0;
  }
  (**(code **)(*param_4 + 0x38))(param_4);
  local_88 = 0xff7fffffff7fffff;
  local_98 = PTR_DAT_04bd0f08 + 0x10;
  local_90 = 0x7f7fffff7f7fffff;
  local_80 = *(uint *)PTR_DAT_04bd0ea8;
  local_7c = 0x3f80000000000000;
  if (local_80 < 6) {
    if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
      fVar21 = *(float *)(param_4 + 1);
      fVar20 = *(float *)((long)param_4 + 0xc);
    }
    else {
      fVar20 = *(float *)(param_4 + 1);
      fVar21 = *(float *)((long)param_4 + 0xc);
    }
    fVar23 = fVar20;
    fVar5 = 0.0;
    if (fVar20 <= 0.0) {
      fVar23 = 0.0;
      fVar5 = fVar20;
    }
    fVar22 = fVar21;
    fVar20 = 0.0;
    if (fVar21 <= 0.0) {
      fVar22 = 0.0;
      fVar20 = fVar21;
    }
    local_90 = CONCAT44(fVar20,fVar5);
    local_88 = CONCAT44(fVar22,fVar23);
  }
  FUN_038e77e4(&local_98,param_2,param_4);
  lVar9 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x478) + 8);
  if ((*(byte *)(param_1 + 0x20) >> 2 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*(ushort *)(*(long *)(lVar9 + 0x38) + 0x30);
  }
  if (param_8 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)*(ushort *)
                    (*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x38 + 0x30);
  }
  if (uVar13 + uVar11 == 0) {
    lVar9 = *(long *)(lVar9 + 0x18);
  }
  else {
    uVar11 = (uVar13 + uVar11) - 1;
    if (*(uint *)(lVar9 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar9 = *(long *)(lVar9 + 0x28) + (ulong)uVar11 * 0x150;
  }
  FUN_03907810(lVar9,param_2);
  uVar24 = *(undefined4 *)(param_1 + 0x33c);
  puVar1 = (uint *)(lVar9 + 0x14);
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar10 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar10 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_04bd0fc8;
    puVar6 = PTR_DAT_04bcf2e0;
  } while (cVar3 != '\0');
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar24);
  if (**(int **)(lVar9 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar9 + 0x38),4,
               &local_98);
  }
  pfVar14 = (float *)(lVar16 + (long)(int)param_3 * 0x1d80 + 0xe4);
  fVar20 = *pfVar14;
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar10 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar10 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_98 = (undefined *)CONCAT44(local_98._4_4_,fVar20);
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,4,&local_98);
  }
  fVar21 = *pfVar14;
  pfVar17 = (float *)(lVar16 + (long)(int)param_3 * 0x1d80 + 0xe8);
  fVar20 = *pfVar17;
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_98 = (undefined *)CONCAT44(local_98._4_4_,fVar20 - fVar21);
  lVar16 = 0x30;
  if (*(uint *)(lVar9 + 0x30) < 3) {
    lVar16 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar16);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,4,&local_98);
  }
  fVar20 = *pfVar14;
  fVar21 = *pfVar17;
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_98 = (undefined *)CONCAT44(local_98._4_4_,1.0 - fVar20 / fVar21);
  lVar16 = 0x48;
  if (*(uint *)(lVar9 + 0x30) < 4) {
    lVar16 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar16);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,4,&local_98);
  }
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_0390d290(param_5,param_2,*(undefined8 *)(lVar9 + 0x68),0xffffffff,0);
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_0390d290(param_6,param_2,*(long *)(lVar9 + 0x68) + (ulong)(1 < *(uint *)(lVar9 + 0x60)) * 0x18
               ,0xffffffff,0);
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar16 = 0x30;
  if (*(uint *)(lVar9 + 0x60) < 3) {
    lVar16 = 0;
  }
  FUN_0390d290(param_7,param_2,*(long *)(lVar9 + 0x68) + lVar16,0xffffffff,0);
  if (param_8 != 0) {
    do {
      uVar11 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar11 | 0x80000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x7fffffff) != 0) {
      if ((int)uVar11 < 0) {
        if ((int)*puVar1 < 0) {
          lVar16 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar16 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar9);
      }
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar16 = 0x48;
    if (*(uint *)(lVar9 + 0x60) < 4) {
      lVar16 = 0;
    }
    FUN_0390d290(param_8,param_2,*(long *)(lVar9 + 0x68) + lVar16,0xffffffff,0);
  }
  do {
    uVar11 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar11 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar16 = 0x60;
  if (*(uint *)(lVar9 + 0x60) < 5) {
    lVar16 = 0;
  }
  FUN_0390d290(param_9,param_2,*(long *)(lVar9 + 0x68) + lVar16,0xffffffff,0);
  uVar15 = *(undefined8 *)(param_2 + 0xb8);
  lVar16 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar15,0x10,lVar16 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar15,0x10,lVar16 + 0x1068);
  puVar7 = PTR_DAT_04bcf1e8;
  puVar6 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar16 + 0x1010);
  if (iVar2 != 0) {
    lVar16 = *(long *)(lVar16 + 0x1018);
    uVar18 = 0;
    uVar19 = 0;
    do {
      lVar9 = *(long *)(lVar16 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
      if (lVar9 != 0) {
        uVar8 = (**(code **)puVar6)(lVar9 + 8);
        (**(code **)puVar7)(uVar15,uVar18 & 0xffffffff,uVar8,*(undefined4 *)(lVar9 + 0x118));
      }
      uVar18 = uVar19 + 1;
      uVar19 = uVar18 & 0xffffffff;
    } while (iVar2 != (int)uVar18);
  }
  lVar16 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar16 + 0x480);
  if (iVar2 != 0) {
    uVar24 = *(undefined4 *)(lVar16 + 0x464);
    uVar8 = *(undefined8 *)(param_2 + 0xb8);
    uVar15 = (**(code **)puVar6)(lVar16 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar8,uVar24,*(undefined4 *)(lVar16 + 0x460),iVar2,uVar15);
  }
  uVar11 = *(uint *)(param_4[4] + 0x58);
  if (uVar11 != 0xffffffff) {
    lVar16 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
      uVar13 = uVar11 - *(ushort *)(lVar16 + 0x3da);
      if (*(uint *)(lVar16 + 0x368) <= uVar13) {
        uVar13 = 0;
      }
      if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar13 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar11 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar24 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar24 = 0x11;
    }
    if ((*(uint *)(lVar16 + 800) & 2) != 0) {
      uVar24 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar24);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

