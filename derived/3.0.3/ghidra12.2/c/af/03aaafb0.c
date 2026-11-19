
void FUN_03aaafb0(float param_1,float param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,ulong param_7,ulong param_8,uint param_9,float *param_10)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  float local_78;
  float fStack_74;
  
  plVar20 = (long *)(param_5 + 0xe8);
  (**(code **)(*plVar20 + 0x38))(plVar20);
  FUN_038e77e4(param_5 + 0x310,param_4,plVar20);
  iVar13 = 3;
  if ((param_7 & 1) == 0) {
    iVar13 = 0;
  }
  lVar8 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4b0) + 8);
  uVar9 = *(uint *)(lVar8 + 0x30);
  lVar12 = *(long *)(lVar8 + 0x38);
  lVar18 = 0x70;
  if (uVar9 < 3) {
    lVar18 = 0;
  }
  bVar5 = false;
  if ((param_10[3] == 1.0) && (bVar5 = false, !NAN(param_10[2]))) {
    bVar5 = param_10[2] == 1.0;
  }
  bVar6 = false;
  if ((bVar5) && (bVar6 = false, !NAN(param_10[1]))) {
    bVar6 = param_10[1] == 1.0;
  }
  bVar5 = false;
  if ((bVar6) && (bVar5 = false, !NAN(*param_10))) {
    bVar5 = *param_10 == 1.0;
  }
  uVar14 = 0;
  if (!bVar5) {
    uVar14 = (uint)*(ushort *)(lVar12 + lVar18 + 0x30);
  }
  lVar18 = 0xa8;
  if (uVar9 < 4) {
    lVar18 = 0;
  }
  uVar15 = (uint)*(ushort *)(lVar12 + lVar18 + 0x30);
  if ((param_8 & 1) == 0) {
    uVar15 = 0;
  }
  lVar18 = 0xe0;
  if (uVar9 < 5) {
    lVar18 = 0;
  }
  uVar9 = (uint)*(ushort *)(lVar12 + lVar18 + 0x30);
  if ((param_9 & 1) == 0) {
    uVar9 = 0;
  }
  iVar13 = uVar15 + iVar13 * (uint)*(ushort *)(lVar12 + 0x30) + uVar14 + uVar9;
  if (iVar13 == 0) {
    lVar18 = *(long *)(lVar8 + 0x18);
  }
  else {
    uVar9 = iVar13 - 1;
    if (*(uint *)(lVar8 + 0x20) <= uVar9) {
      uVar9 = 0;
    }
    lVar18 = *(long *)(lVar8 + 0x28) + (ulong)uVar9 * 0x150;
  }
  FUN_03907810(lVar18,param_4);
  puVar1 = (uint *)(lVar18 + 0x14);
  local_78 = (float)NEON_ucvtf(*(undefined4 *)(param_6 + 0x338));
  local_78 = 1.0 / local_78;
  fStack_74 = (float)NEON_ucvtf(*(undefined4 *)(param_6 + 0x33c));
  fStack_74 = 1.0 / fStack_74;
  do {
    uVar9 = *puVar1;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 | 0x80000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR_DAT_04bd0fc8;
    puVar3 = PTR_DAT_04bcf2e0;
  } while (cVar2 != '\0');
  if (**(int **)(lVar18 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_4 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar18 + 0x38),8,
               &local_78);
  }
  do {
    uVar9 = *puVar1;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 | 0x80000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar13 = *(int *)(*(long *)(lVar18 + 0x38) + (ulong)(1 < *(uint *)(lVar18 + 0x30)) * 0x18);
  local_78 = param_2;
  if (iVar13 != -1) {
    (**(code **)puVar3)(*(undefined8 *)(param_4 + 0xb8),*(undefined8 *)(*(long *)puVar4 + 0x70),
                        *(undefined8 *)(*(long *)puVar4 + 0x18),(long)iVar13,4,&local_78);
  }
  do {
    uVar9 = *puVar1;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 | 0x80000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar8 = 0x30;
  if (*(uint *)(lVar18 + 0x30) < 3) {
    lVar8 = 0;
  }
  iVar13 = *(int *)(*(long *)(lVar18 + 0x38) + lVar8);
  local_78 = param_1;
  if (iVar13 != -1) {
    (**(code **)puVar3)(*(undefined8 *)(param_4 + 0xb8),*(undefined8 *)(*(long *)puVar4 + 0x70),
                        *(undefined8 *)(*(long *)puVar4 + 0x18),(long)iVar13,4,&local_78);
  }
  do {
    uVar9 = *puVar1;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 | 0x80000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar8 = 0x48;
  if (*(uint *)(lVar18 + 0x30) < 4) {
    lVar8 = 0;
  }
  iVar13 = *(int *)(*(long *)(lVar18 + 0x38) + lVar8);
  if (iVar13 != -1) {
    (**(code **)puVar3)(*(undefined8 *)(param_4 + 0xb8),*(undefined8 *)(*(long *)puVar4 + 0x70),
                        *(undefined8 *)(*(long *)puVar4 + 0x18),(long)iVar13,0x10,param_10);
  }
  do {
    uVar9 = *puVar1;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar9 | 0x80000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar9 & 0x7fffffff) != 0) {
    if ((int)uVar9 < 0) {
      if ((int)*puVar1 < 0) {
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0390d290(param_6 + 8,param_4,*(undefined8 *)(lVar18 + 0x68),0xffffffff,0);
  uVar16 = *(undefined8 *)(param_4 + 0xb8);
  lVar18 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar18 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar18 + 0x1068);
  puVar4 = PTR_DAT_04bcf1e8;
  puVar3 = PTR_DAT_04bbd560;
  iVar13 = *(int *)(lVar18 + 0x1010);
  if (iVar13 != 0) {
    lVar18 = *(long *)(lVar18 + 0x1018);
    uVar17 = 0;
    uVar19 = 0;
    do {
      lVar8 = *(long *)(lVar18 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
      if (lVar8 != 0) {
        uVar7 = (**(code **)puVar3)(lVar8 + 8);
        (**(code **)puVar4)(uVar16,uVar17 & 0xffffffff,uVar7,*(undefined4 *)(lVar8 + 0x118));
      }
      uVar17 = uVar19 + 1;
      uVar19 = uVar17 & 0xffffffff;
    } while (iVar13 != (int)uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bbd7e8;
  iVar13 = *(int *)(lVar18 + 0x480);
  if (iVar13 != 0) {
    uVar11 = *(undefined4 *)(lVar18 + 0x464);
    uVar7 = *(undefined8 *)(param_4 + 0xb8);
    uVar16 = (**(code **)puVar3)(lVar18 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar7,uVar11,*(undefined4 *)(lVar18 + 0x460),iVar13,uVar16);
  }
  uVar9 = *(uint *)(*(long *)(param_5 + 0x108) + 0x58);
  if (uVar9 != 0xffffffff) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
      uVar14 = uVar9 - *(ushort *)(lVar18 + 0x3da);
      if (*(uint *)(lVar18 + 0x368) <= uVar14) {
        uVar14 = 0;
      }
      if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar14 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_4 + 0x100) = *(ulong *)(param_4 + 0x100) | 1L << ((ulong)uVar9 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
      uVar10 = 0x112;
      uVar11 = 0x12;
    }
    else {
      uVar10 = 0x111;
      uVar11 = 0x11;
    }
    if ((*(uint *)(lVar18 + 800) & 2) != 0) {
      uVar11 = uVar10;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_4 + 0xb8),uVar11);
    *(undefined8 *)(param_4 + 0x100) = 0;
  }
  return;
}

