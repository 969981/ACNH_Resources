
void FUN_03afa1e0(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined2 local_d4 [2];
  undefined4 local_d0;
  undefined4 local_b8;
  undefined4 local_ac;
  
  if ((*(byte *)(param_1 + 0x18) >> 4 & 1) != 0) {
    return;
  }
  lVar20 = *(long *)(param_1 + 0x10);
  uVar2 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar2 = 0;
  }
  lVar17 = lVar20 + (long)(int)uVar2 * 0x23c0;
  uVar3 = *(uint *)(*(long *)(lVar17 + 0x1cc0) + 0x58);
  if (uVar3 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar14 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar14) {
        uVar14 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar14 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        goto LAB_03afa2d4;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar15 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar15 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar15 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar15);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03afa2d4:
  FUN_038e4cec(local_d4);
  lVar19 = lVar20 + (long)(int)uVar2 * 0x23c0;
  local_d4[0] = 0;
  local_d0 = 0;
  uVar3 = *(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38);
  lVar11 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40);
  *(long *)(lVar19 + 0x1a68) = lVar19 + 0x1ab0;
  *(long *)(lVar19 + 0x1aa8) = lVar19 + 0xdd0;
  lVar11 = lVar11 + 0x540;
  if (uVar3 < 5) {
    lVar11 = 0;
  }
  (**(code **)(*(long *)(lVar19 + 0x1a48) + 0x38))(lVar19 + 0x1a48,param_2);
  FUN_038e77e4(lVar19 + 0x1c78,param_2,lVar19 + 0x1a48);
  local_b8 = 0xf;
  uVar3 = *(uint *)(lVar19 + 8);
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(param_1 + 0x19) >> 3 & 1) == 0) {
    lVar11 = *(long *)(lVar11 + 0x18);
  }
  else {
    uVar14 = 5;
    if ((uVar3 & 0x2000) != 0) {
      uVar14 = 6;
    }
    if (*(uint *)(lVar11 + 0x20) <= uVar14) {
      uVar14 = 0;
    }
    lVar11 = *(long *)(lVar11 + 0x28) + (ulong)uVar14 * 0x150;
  }
  local_ac = 0x1050702;
  local_d0 = 1;
  FUN_038e4d90(local_d4,param_2);
  FUN_03907810(lVar11,param_2);
  FUN_01557430(lVar11,param_2,0,lVar20 + (long)(int)uVar2 * 0x23c0 + 0x1fb0,0);
  puVar1 = (uint *)(lVar11 + 0x14);
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
        lVar19 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar19 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
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
  FUN_0390d290(lVar20 + (long)(int)uVar2 * 0x23c0 + 0x1df0,param_2,
               *(long *)(lVar11 + 0x68) + (ulong)(1 < *(uint *)(lVar11 + 0x60)) * 0x18,0xffffffff,0)
  ;
  lVar19 = *(long *)(param_1 + 0x10);
  uVar14 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar14 = 0;
  }
  do {
    uVar5 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar5 | 0x80000000;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
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
      FUN_03907b80(lVar11);
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
  FUN_0390d290(lVar19 + (long)(int)uVar14 * 0x23c0 + 0x1088,param_2,*(undefined8 *)(lVar11 + 0x68),
               0xffffffff,0);
  lVar19 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  if ((uVar3 >> 0xd & 1) == 0) {
    do {
      uVar3 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar3 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar19 = lVar19 + (long)(int)param_3 * 0x23c0 + 0x1848;
    if ((uVar3 & 0x7fffffff) != 0) {
      if ((int)uVar3 < 0) {
        if ((int)*puVar1 < 0) {
          lVar12 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar12 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar11);
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
  }
  else {
    do {
      uVar3 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar3 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar19 = lVar19 + (long)(int)param_3 * 0x23c0 + 0x2110;
    if ((uVar3 & 0x7fffffff) != 0) {
      if ((int)uVar3 < 0) {
        if ((int)*puVar1 < 0) {
          lVar12 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar12 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar11);
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
  }
  lVar12 = 0x30;
  if (*(uint *)(lVar11 + 0x60) < 3) {
    lVar12 = 0;
  }
  FUN_0390d290(lVar19,param_2,*(long *)(lVar11 + 0x68) + lVar12,0xffffffff,0);
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar11 = *(long *)PTR_DAT_04bbd7e0;
  (*DAT_04c62868)(uVar16,0x10,lVar11 + 0x1024);
  (*DAT_04c62870)(uVar16,0x10,lVar11 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar4 = *(int *)(lVar11 + 0x1010);
  if (iVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x1018);
    uVar18 = 0;
    uVar21 = 0;
    do {
      lVar19 = *(long *)(lVar11 + (-(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3));
      if (lVar19 != 0) {
        uVar10 = (**(code **)puVar8)(lVar19 + 8);
        (**(code **)puVar9)(uVar16,uVar18 & 0xffffffff,uVar10,*(undefined4 *)(lVar19 + 0x118));
      }
      uVar18 = uVar21 + 1;
      uVar21 = uVar18 & 0xffffffff;
    } while (iVar4 != (int)uVar18);
  }
  lVar11 = DAT_05ae9100;
  iVar4 = *(int *)(DAT_05ae9100 + 0x480);
  if (iVar4 != 0) {
    uVar15 = *(undefined4 *)(DAT_05ae9100 + 0x464);
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = (**(code **)puVar8)(DAT_05ae9100 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar10,uVar15,*(undefined4 *)(lVar11 + 0x460),iVar4,uVar16);
  }
  *(undefined8 *)(lVar17 + 0x1d00) = 0;
  if ((*(byte *)(param_1 + 0x19) >> 4 & 1) == 0) {
    FUN_039499cc(DAT_05ae90c0,*(undefined8 *)(lVar20 + (long)(int)uVar2 * 0x23c0 + 0x1de8));
  }
  return;
}

