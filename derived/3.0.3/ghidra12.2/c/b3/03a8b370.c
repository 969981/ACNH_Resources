
void FUN_03a8b370(long param_1,long param_2,uint param_3,long *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  uVar3 = *(ushort *)(param_5 + 0x32);
  lVar20 = *(long *)(param_1 + 0x30);
  uVar4 = *(ushort *)(param_5 + 0x30);
  if (*(uint *)(param_1 + 0x28) <= param_3) {
    param_3 = 0;
  }
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar2 = uVar3;
  if (*(short *)(param_5 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  (**(code **)(*param_4 + 0x38))(param_4);
  local_88 = 0xff7fffffff7fffff;
  local_98 = PTR_DAT_04bd0f08 + 0x10;
  local_90 = 0x7f7fffff7f7fffff;
  local_80 = *(uint *)PTR_DAT_04bd0ea8;
  local_7c = 0x3f80000000000000;
  if (local_80 < 6) {
    if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
      fVar22 = *(float *)(param_4 + 1);
      fVar21 = *(float *)((long)param_4 + 0xc);
    }
    else {
      fVar21 = *(float *)(param_4 + 1);
      fVar22 = *(float *)((long)param_4 + 0xc);
    }
    fVar24 = fVar21;
    fVar8 = 0.0;
    if (fVar21 <= 0.0) {
      fVar24 = 0.0;
      fVar8 = fVar21;
    }
    fVar23 = fVar22;
    fVar21 = 0.0;
    if (fVar22 <= 0.0) {
      fVar23 = 0.0;
      fVar21 = fVar22;
    }
    local_90 = CONCAT44(fVar21,fVar8);
    local_88 = CONCAT44(fVar23,fVar24);
  }
  FUN_038e77e4(&local_98,param_2,param_4);
  lVar12 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x460) + 8);
  if ((param_8 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(ushort *)(*(long *)(lVar12 + 0x38) + 0x30);
  }
  if ((*(byte *)(param_1 + 0x20) >> 4 & 1) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(ushort *)
                    (*(long *)(lVar12 + 0x38) + (ulong)(1 < *(uint *)(lVar12 + 0x30)) * 0x38 + 0x30)
    ;
  }
  if (uVar16 + uVar14 == 0) {
    lVar12 = *(long *)(lVar12 + 0x18);
  }
  else {
    uVar14 = (uVar16 + uVar14) - 1;
    if (*(uint *)(lVar12 + 0x20) <= uVar14) {
      uVar14 = 0;
    }
    lVar12 = *(long *)(lVar12 + 0x28) + (ulong)uVar14 * 0x150;
  }
  FUN_03907810(lVar12,param_2);
  puVar1 = (uint *)(lVar12 + 0x14);
  lVar13 = lVar20 + (long)(int)param_3 * 0x1d80;
  fVar21 = *(float *)(lVar13 + 0xf8);
  local_98 = (undefined *)CONCAT44(fVar21,*(float *)(lVar13 + 0xf0) * fVar21);
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar13 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar13 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    puVar10 = PTR_DAT_04bd0fc8;
    puVar9 = PTR_DAT_04bcf2e0;
  } while (cVar6 != '\0');
  if (**(int **)(lVar12 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar12 + 0x38),8,
               &local_98);
  }
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar13 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar13 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + (ulong)(1 < *(uint *)(lVar12 + 0x30)) * 0x18);
  if (iVar5 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,8,
                        lVar20 + (long)(int)param_3 * 0x1d80 + 0x100);
  }
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar20 = 0x30;
  if (*(uint *)(lVar12 + 0x30) < 3) {
    lVar20 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + lVar20);
  if (iVar5 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,0xc,param_1 + 0x318);
  }
  local_98 = (undefined *)CONCAT44(1.0 / (float)uVar2,1.0 / (float)uVar4);
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar20 = 0x48;
  if (*(uint *)(lVar12 + 0x30) < 4) {
    lVar20 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + lVar20);
  if (iVar5 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,8,&local_98);
  }
  uVar25 = *(undefined4 *)(param_1 + 0x328);
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar25);
  lVar20 = 0x60;
  if (*(uint *)(lVar12 + 0x30) < 5) {
    lVar20 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + lVar20);
  if (iVar5 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,4,&local_98);
  }
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_98 = (undefined *)CONCAT44(local_98._4_4_,0x3f000000);
  lVar20 = 0x78;
  if (*(uint *)(lVar12 + 0x30) < 6) {
    lVar20 = 0;
  }
  iVar5 = *(int *)(*(long *)(lVar12 + 0x38) + lVar20);
  if (iVar5 != -1) {
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar10 + 0x70),
                        *(undefined8 *)(*(long *)puVar10 + 0x18),(long)iVar5,4,&local_98);
  }
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_0390d290(param_5,param_2,*(undefined8 *)(lVar12 + 0x68),0xffffffff,0);
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_0390d290(param_6,param_2,
               *(long *)(lVar12 + 0x68) + (ulong)(1 < *(uint *)(lVar12 + 0x60)) * 0x18,0xffffffff,0)
  ;
  do {
    uVar14 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar14 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar20 = 0x30;
  if (*(uint *)(lVar12 + 0x60) < 3) {
    lVar20 = 0;
  }
  FUN_0390d290(param_7,param_2,*(long *)(lVar12 + 0x68) + lVar20,0xffffffff,0);
  uVar17 = *(undefined8 *)(param_2 + 0xb8);
  lVar20 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar17,0x10,lVar20 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar17,0x10,lVar20 + 0x1068);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar5 = *(int *)(lVar20 + 0x1010);
  if (iVar5 != 0) {
    lVar20 = *(long *)(lVar20 + 0x1018);
    uVar18 = 0;
    uVar19 = 0;
    do {
      lVar12 = *(long *)(lVar20 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
      if (lVar12 != 0) {
        uVar11 = (**(code **)puVar9)(lVar12 + 8);
        (**(code **)puVar10)(uVar17,uVar18 & 0xffffffff,uVar11,*(undefined4 *)(lVar12 + 0x118));
      }
      uVar18 = uVar19 + 1;
      uVar19 = uVar18 & 0xffffffff;
    } while (iVar5 != (int)uVar18);
  }
  lVar20 = *(long *)PTR_DAT_04bbd7e8;
  iVar5 = *(int *)(lVar20 + 0x480);
  if (iVar5 != 0) {
    uVar25 = *(undefined4 *)(lVar20 + 0x464);
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    uVar17 = (**(code **)puVar9)(lVar20 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar11,uVar25,*(undefined4 *)(lVar20 + 0x460),iVar5,uVar17);
  }
  uVar14 = *(uint *)(param_4[4] + 0x58);
  if (uVar14 != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar16 = uVar14 - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar16) {
        uVar16 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar16 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar14 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar25 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar25 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar25 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar25);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

