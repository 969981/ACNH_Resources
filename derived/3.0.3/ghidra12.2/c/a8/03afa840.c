
void FUN_03afa840(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined2 local_d4 [2];
  uint local_d0;
  undefined4 local_b8;
  undefined4 local_ac;
  
  if ((*(byte *)(param_1 + 0x18) >> 4 & 1) != 0) {
    return;
  }
  lVar17 = *(long *)(param_1 + 0x10);
  uVar3 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar3 = 0;
  }
  lVar19 = lVar17 + (long)(int)uVar3 * 0x23c0;
  uVar4 = *(uint *)(*(long *)(lVar19 + 0x1a68) + 0x58);
  if (uVar4 != 0xffffffff) {
    lVar15 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar15 + 0x5c8) >> 3 & 1) == 0) {
      uVar14 = uVar4 - *(ushort *)(lVar15 + 0x3da);
      if (*(uint *)(lVar15 + 0x368) <= uVar14) {
        uVar14 = 0;
      }
      if ((*(uint *)(*(long *)(lVar15 + 0x370) + (long)(int)uVar14 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
        goto LAB_03afa934;
      }
    }
    if ((*(uint *)(lVar15 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar13 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar13 = 0x11;
    }
    if ((*(uint *)(lVar15 + 800) & 2) != 0) {
      uVar13 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar13);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03afa934:
  lVar21 = lVar17 + (long)(int)uVar3 * 0x23c0;
  lVar15 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0x540;
  if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 5) {
    lVar15 = 0;
  }
  (**(code **)(*(long *)(lVar21 + 0x308) + 0x38))(lVar21 + 0x308,param_2);
  FUN_038e77e4(lVar21 + 0xaa0,param_2,lVar21 + 0x308);
  FUN_038e4cec(local_d4);
  local_d4[0] = 0;
  local_b8 = 7;
  uVar4 = *(uint *)(lVar21 + 8);
  lVar15 = *(long *)(lVar15 + 8);
  if ((*(uint *)(param_1 + 0x18) >> 0xb & 1) == 0) {
    lVar15 = *(long *)(lVar15 + 0x18);
  }
  else {
    uVar14 = 3;
    if ((uVar4 & 0x2000) != 0) {
      uVar14 = 4;
    }
    if (*(uint *)(lVar15 + 0x20) <= uVar14) {
      uVar14 = 0;
    }
    lVar15 = *(long *)(lVar15 + 0x28) + (ulong)uVar14 * 0x150;
  }
  bVar2 = (*(uint *)(param_1 + 0x18) >> 0x1c & 1) == 0;
  if (bVar2) {
    local_ac = 0x5050202;
  }
  local_d0 = (uint)bVar2;
  FUN_038e4d90(local_d4,param_2);
  FUN_03907810(lVar15,param_2);
  FUN_01557430(lVar15,param_2,0,lVar17 + (long)(int)uVar3 * 0x23c0 + 0x1fb0,0);
  puVar1 = (uint *)(lVar15 + 0x14);
  do {
    uVar14 = *puVar1;
    cVar7 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar2) {
      *puVar1 = uVar14 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar21 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar21 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar15);
    }
  }
  do {
    cVar7 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar2) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_0390d290(lVar17 + (long)(int)uVar3 * 0x23c0 + 0x1b98,param_2,
               *(long *)(lVar15 + 0x68) + (ulong)(1 < *(uint *)(lVar15 + 0x60)) * 0x18,0xffffffff,0)
  ;
  lVar21 = *(long *)(param_1 + 0x10);
  uVar14 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar14 = 0;
  }
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar2) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar11 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar15);
    }
  }
  do {
    cVar7 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar2) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_0390d290(lVar21 + (long)(int)uVar14 * 0x23c0 + 0x8c8,param_2,*(undefined8 *)(lVar15 + 0x68),
               0xffffffff,0);
  lVar21 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  if ((uVar4 >> 0xd & 1) == 0) {
    do {
      uVar4 = *puVar1;
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = uVar4 | 0x80000000;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar21 = lVar21 + (long)(int)param_3 * 0x23c0 + 0x1088;
    if ((uVar4 & 0x7fffffff) != 0) {
      if ((int)uVar4 < 0) {
        if ((int)*puVar1 < 0) {
          lVar11 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar11 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar15);
      }
    }
    do {
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  else {
    do {
      uVar4 = *puVar1;
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = uVar4 | 0x80000000;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar21 = lVar21 + (long)(int)param_3 * 0x23c0 + 0x2110;
    if ((uVar4 & 0x7fffffff) != 0) {
      if ((int)uVar4 < 0) {
        if ((int)*puVar1 < 0) {
          lVar11 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar11 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar15);
      }
    }
    do {
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar11 = 0x30;
  if (*(uint *)(lVar15 + 0x60) < 3) {
    lVar11 = 0;
  }
  FUN_0390d290(lVar21,param_2,*(long *)(lVar15 + 0x68) + lVar11,0xffffffff,0);
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar15 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar15 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar15 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar5 = *(int *)(lVar15 + 0x1010);
  if (iVar5 != 0) {
    lVar15 = *(long *)(lVar15 + 0x1018);
    uVar18 = 0;
    uVar20 = 0;
    do {
      lVar21 = *(long *)(lVar15 + (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3));
      if (lVar21 != 0) {
        uVar10 = (**(code **)puVar8)(lVar21 + 8);
        (**(code **)puVar9)(uVar16,uVar18 & 0xffffffff,uVar10,*(undefined4 *)(lVar21 + 0x118));
      }
      uVar18 = uVar20 + 1;
      uVar20 = uVar18 & 0xffffffff;
    } while (iVar5 != (int)uVar18);
  }
  if ((*(byte *)(param_1 + 0x1d) >> 1 & 1) == 0) {
    lVar15 = *(long *)PTR_DAT_04bbd7e8;
    iVar5 = *(int *)(lVar15 + 0x480);
    if (iVar5 != 0) {
      uVar13 = *(undefined4 *)(lVar15 + 0x464);
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar15 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar10,uVar13,*(undefined4 *)(lVar15 + 0x460),iVar5,uVar16);
    }
  }
  *(undefined8 *)(lVar19 + 0x1aa8) = 0;
  FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
               *(undefined8 *)(lVar17 + (long)(int)uVar3 * 0x23c0 + 0x1b90));
  return;
}

