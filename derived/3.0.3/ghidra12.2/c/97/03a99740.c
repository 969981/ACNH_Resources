
void FUN_03a99740(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  MutexType *pMVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float local_160;
  float fStack_15c;
  undefined1 auStack_158 [80];
  undefined1 auStack_108 [138];
  short local_7e;
  
  if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x41) != 0) {
    return;
  }
  lVar17 = *(long *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    param_3 = 0;
  }
  lVar16 = lVar17 + (long)(int)param_3 * 0x5b0;
  fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar16 + 0x520));
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(lVar16 + 0x524));
  FUN_038e4d90(param_1 + 0x20);
  (**(code **)(*(long *)(lVar16 + 0x3b0) + 0x38))(lVar16 + 0x3b0,param_2);
  FUN_038e77e4(lVar16 + 0x4f8,param_2,lVar16 + 0x3b0);
  lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x428) + 8) +
                    0x18);
  FUN_03907810(lVar16,param_2);
  FUN_0390d120(auStack_158,param_4);
  puVar1 = (uint *)(lVar16 + 0x14);
  local_160 = 1.0 / fVar20;
  fStack_15c = 1.0 / fVar21;
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
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar16);
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
  if (**(int **)(lVar16 + 0x38) != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                    (long)**(int **)(lVar16 + 0x38),8,&local_160);
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
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar16);
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
  FUN_0390d290(auStack_158,param_2,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
  uVar14 = *(undefined8 *)(param_2 + 0xb8);
  lVar16 = *(long *)PTR_DAT_04bbd7e0;
  (*DAT_04c62868)(uVar14,0x10,lVar16 + 0x1024);
  (*DAT_04c62870)(uVar14,0x10,lVar16 + 0x1068);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar3 = *(int *)(lVar16 + 0x1010);
  if (iVar3 != 0) {
    lVar16 = *(long *)(lVar16 + 0x1018);
    uVar15 = 0;
    uVar19 = 0;
    do {
      lVar18 = *(long *)(lVar16 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
      if (lVar18 != 0) {
        uVar11 = (**(code **)puVar9)(lVar18 + 8);
        (**(code **)puVar10)(uVar14,uVar15 & 0xffffffff,uVar11,*(undefined4 *)(lVar18 + 0x118));
      }
      uVar15 = uVar19 + 1;
      uVar19 = uVar15 & 0xffffffff;
    } while (iVar3 != (int)uVar15);
  }
  lVar16 = DAT_05ae9100;
  iVar3 = *(int *)(DAT_05ae9100 + 0x480);
  if (iVar3 != 0) {
    uVar13 = *(undefined4 *)(DAT_05ae9100 + 0x464);
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    uVar14 = (**(code **)puVar9)(DAT_05ae9100 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar11,uVar13,*(undefined4 *)(lVar16 + 0x460),iVar3,uVar14);
  }
  uVar4 = *(uint *)(*(long *)(lVar17 + (long)(int)param_3 * 0x5b0 + 0x3d0) + 0x58);
  if (uVar4 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar8 = uVar4 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar8) {
        uVar8 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar8 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
        goto LAB_03a99b2c;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar13 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar13 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar13 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar13);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a99b2c:
  lVar17 = DAT_05ae78f0;
  if (local_7e != -1) {
    pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar2);
    uVar4 = (int)local_7e - (uint)*(ushort *)(lVar17 + 0x5c0);
    if (*(uint *)(lVar17 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar16 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar7 = *(short *)(lVar16 + 0x76) + -1;
    *(short *)(lVar16 + 0x76) = sVar7;
    if (sVar7 == 0) {
      *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar2);
    local_7e = -1;
  }
  FUN_038fd0e0(auStack_108);
  return;
}

