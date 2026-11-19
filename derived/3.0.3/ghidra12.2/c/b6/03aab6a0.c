
void FUN_03aab6a0(long param_1,long param_2,long param_3,ulong param_4,float *param_5)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  float local_78;
  float fStack_74;
  undefined4 local_64;
  
  plVar18 = (long *)(param_2 + 0xe8);
  (**(code **)(*plVar18 + 0x38))(plVar18,param_1);
  FUN_038e77e4(param_2 + 0x310,param_1,plVar18);
  lVar10 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4b0) + 8);
  lVar14 = *(long *)(lVar10 + 0x38);
  uVar15 = (uint)*(ushort *)(lVar14 + (ulong)(1 < *(uint *)(lVar10 + 0x30)) * 0x38 + 0x30);
  if ((param_4 & 1) == 0) {
    uVar15 = 0;
  }
  lVar3 = 0x70;
  if (*(uint *)(lVar10 + 0x30) < 3) {
    lVar3 = 0;
  }
  bVar7 = false;
  if ((param_5[3] == 1.0) && (bVar7 = false, !NAN(param_5[2]))) {
    bVar7 = param_5[2] == 1.0;
  }
  bVar8 = false;
  if ((bVar7) && (bVar8 = false, !NAN(param_5[1]))) {
    bVar8 = param_5[1] == 1.0;
  }
  bVar7 = false;
  if ((bVar8) && (bVar7 = false, !NAN(*param_5))) {
    bVar7 = *param_5 == 1.0;
  }
  uVar11 = 0;
  if (!bVar7) {
    uVar11 = (uint)*(ushort *)(lVar14 + lVar3 + 0x30);
  }
  iVar2 = uVar15 + (uint)*(ushort *)(lVar14 + 0x30) * 2 + uVar11;
  if (iVar2 == 0) {
    lVar10 = *(long *)(lVar10 + 0x18);
  }
  else {
    uVar15 = iVar2 - 1;
    if (*(uint *)(lVar10 + 0x20) <= uVar15) {
      uVar15 = 0;
    }
    lVar10 = *(long *)(lVar10 + 0x28) + (ulong)uVar15 * 0x150;
  }
  FUN_03907810(lVar10,param_1);
  puVar1 = (uint *)(lVar10 + 0x14);
  local_78 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x338));
  local_78 = 1.0 / local_78;
  fStack_74 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x33c));
  fStack_74 = 1.0 / fStack_74;
  do {
    uVar15 = *puVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar15 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar10);
    }
  }
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar6 = PTR_DAT_04bd0fc8;
    puVar5 = PTR_DAT_04bcf2e0;
  } while (cVar4 != '\0');
  if (**(int **)(lVar10 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar10 + 0x38),8,
               &local_78);
  }
  do {
    uVar15 = *puVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar15 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar10);
    }
  }
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_64 = 0x3f800000;
  iVar2 = *(int *)(*(long *)(lVar10 + 0x38) + (ulong)(1 < *(uint *)(lVar10 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    lVar14 = *(long *)puVar6;
    (**(code **)puVar5)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar14 + 0x70),
                        *(undefined8 *)(lVar14 + 0x18),(long)iVar2,4,&local_64);
  }
  do {
    uVar15 = *puVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar15 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar10);
    }
  }
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar14 = 0x48;
  if (*(uint *)(lVar10 + 0x30) < 4) {
    lVar14 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar10 + 0x38) + lVar14);
  if (iVar2 != -1) {
    lVar14 = *(long *)puVar6;
    (**(code **)puVar5)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar14 + 0x70),
                        *(undefined8 *)(lVar14 + 0x18),(long)iVar2,0x10,param_5);
  }
  do {
    uVar15 = *puVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar15 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar10);
    }
  }
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0390d290(param_3 + 8,param_1,*(undefined8 *)(lVar10 + 0x68),0xffffffff,0);
  uVar16 = *(undefined8 *)(param_1 + 0xb8);
  lVar10 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar10 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar10 + 0x1068);
  puVar6 = PTR_DAT_04bcf1e8;
  puVar5 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar10 + 0x1010);
  if (iVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x1018);
    uVar17 = 0;
    uVar19 = 0;
    do {
      lVar14 = *(long *)(lVar10 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
      if (lVar14 != 0) {
        uVar9 = (**(code **)puVar5)(lVar14 + 8);
        (**(code **)puVar6)(uVar16,uVar17 & 0xffffffff,uVar9,*(undefined4 *)(lVar14 + 0x118));
      }
      uVar17 = uVar19 + 1;
      uVar19 = uVar17 & 0xffffffff;
    } while (iVar2 != (int)uVar17);
  }
  lVar10 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar10 + 0x480);
  if (iVar2 != 0) {
    uVar13 = *(undefined4 *)(lVar10 + 0x464);
    uVar9 = *(undefined8 *)(param_1 + 0xb8);
    uVar16 = (**(code **)puVar5)(lVar10 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar9,uVar13,*(undefined4 *)(lVar10 + 0x460),iVar2,uVar16);
  }
  uVar15 = *(uint *)(*(long *)(param_2 + 0x108) + 0x58);
  if (uVar15 != 0xffffffff) {
    lVar10 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar10 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = uVar15 - *(ushort *)(lVar10 + 0x3da);
      if (*(uint *)(lVar10 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar10 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) = *(ulong *)(param_1 + 0x100) | 1L << ((ulong)uVar15 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar10 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar13 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar13 = 0x11;
    }
    if ((*(uint *)(lVar10 + 800) & 2) != 0) {
      uVar13 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar13);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}

