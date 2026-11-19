
void FUN_03aa6320(undefined4 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 int param_6,ulong param_7,float *param_8,ulong param_9)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  char cVar7;
  short sVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  short local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_7c;
  
  local_170 = *(undefined4 *)(param_5 + 0x10);
  uStack_16c = *(undefined4 *)(param_5 + 0x14);
  local_118 = 0;
  local_168 = *(undefined8 *)(param_5 + 0x18);
  uStack_160 = *(undefined8 *)(param_5 + 0x20);
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_158 = *(undefined4 *)(param_5 + 0x28);
  uStack_154 = *(undefined4 *)(param_5 + 0x2c);
  local_150 = *(undefined8 *)(param_5 + 0x30);
  uStack_148 = *(undefined8 *)(param_5 + 0x38);
  local_110 = 0;
  uStack_108 = 0;
  local_130 = *(undefined8 *)(param_5 + 0x50);
  uStack_128 = *(undefined8 *)(param_5 + 0x58);
  local_140 = *(undefined8 *)(param_5 + 0x40);
  uStack_138 = *(undefined8 *)(param_5 + 0x48);
  local_120[0] = 0xffffffff;
  FUN_038fd2f0(local_120,param_5 + 0x60);
  local_e0 = *(undefined8 *)(param_5 + 0xa0);
  local_d8 = *(undefined4 *)(param_5 + 0xa8);
  local_b0 = *(undefined8 *)(param_5 + 0xd0);
  uStack_a8 = *(undefined8 *)(param_5 + 0xd8);
  local_a0 = *(undefined4 *)(param_5 + 0xe0);
  local_d0 = *(undefined8 *)(param_5 + 0xb0);
  uStack_c8 = *(undefined8 *)(param_5 + 0xb8);
  local_c0 = *(undefined8 *)(param_5 + 0xc0);
  uStack_b8 = *(undefined8 *)(param_5 + 200);
  local_9c = 0;
  do {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(&local_9c,0x10);
    if (bVar11) {
      local_9c = 0x7fffffff;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  local_98 = *(undefined1 *)(param_5 + 0xe8);
  iVar16 = 3;
  if (param_6 != -1) {
    iVar16 = param_6;
  }
  local_96 = *(short *)(param_5 + 0xea);
  if (local_96 != -1) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
    uVar13 = (int)local_96 - (uint)*(ushort *)(lVar18 + 0x5c0);
    if (*(uint *)(lVar18 + 0x5a0) <= uVar13) {
      uVar13 = 0;
    }
    lVar21 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar13 * 0x80;
    *(short *)(lVar21 + 0x76) = *(short *)(lVar21 + 0x76) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
  }
  if (param_4 == param_5) {
    lVar18 = *(long *)(param_5 + 8);
    *(long *)(param_5 + 0x350) = lVar18;
    lVar21 = *(long *)PTR_DAT_04bbd510;
    if (*(char *)(param_5 + 0x35a) == '\0') {
      uStack_88 = *(undefined8 *)(param_5 + 0x348);
      local_90 = PTR_DAT_04bb2020 + 0x10;
      uVar4 = *(ushort *)(lVar18 + 0x30);
      uVar6 = *(undefined2 *)(lVar18 + 0x98);
      uVar5 = *(ushort *)(lVar18 + 0x32);
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      uVar3 = uVar5;
      if (*(short *)(lVar18 + 0x3a) != 3) {
        uVar3 = 1;
      }
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar18 == 0) {
        local_7c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_7c = (int)lVar18 + -1;
      }
      auVar26 = FUN_03948e10(lVar21,param_3,lVar21 + (long)local_7c * 0x290 + 0x10,&local_90,uVar6,1
                             ,uVar4,uVar3,1,0,1,0,1,0,0,0);
    }
    else {
      uStack_88 = *(undefined8 *)(param_5 + 0x348);
      local_90 = PTR_DAT_04bb2020 + 0x10;
      uVar4 = *(ushort *)(lVar18 + 0x30);
      uVar5 = *(ushort *)(lVar18 + 0x32);
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      uVar3 = uVar5;
      if (*(short *)(lVar18 + 0x3a) != 3) {
        uVar3 = 1;
      }
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      auVar26 = FUN_03948e10(lVar21,param_3,lVar21 + 0x7c0,&local_90,*(undefined2 *)(lVar18 + 0x98),
                             1,uVar4,uVar3,1,0,1,0,0,0,0,0);
    }
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined1 *)(param_5 + 0x358) = 0;
    FUN_03aa14d0(param_5,auVar26._8_8_,auVar26._0_8_);
    *(undefined1 *)(param_5 + 0x358) = 1;
  }
  plVar23 = (long *)(param_4 + 0xf0);
  (**(code **)(*plVar23 + 0x38))(plVar23,param_3);
  FUN_038e77e4(param_4 + 0x318,param_3,plVar23);
  lVar18 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x490) + 8);
  uVar13 = *(uint *)(lVar18 + 0x30);
  lVar21 = *(long *)(lVar18 + 0x38);
  if ((param_7 & 1) == 0) {
    uVar17 = (uint)*(ushort *)(lVar21 + 0x30);
  }
  else {
    uVar17 = 0;
  }
  iVar16 = uVar17 + iVar16 * (uint)*(ushort *)(lVar21 + (ulong)(1 < uVar13) * 0x38 + 0x30);
  if ((((*param_8 == 1.0) && (param_8[1] == 1.0)) && (param_8[2] == 1.0)) && (param_8[3] == 1.0)) {
    if ((param_9 & 1) == 0) goto LAB_03aa66a4;
LAB_03aa66ec:
    lVar2 = 0xa8;
    if (uVar13 < 4) {
      lVar2 = 0;
    }
    uVar13 = (uint)*(ushort *)(lVar21 + lVar2 + 0x30);
    bVar11 = SCARRY4(iVar16,uVar13);
    iVar16 = iVar16 + uVar13;
    if (iVar16 == 0 || iVar16 < 0 != bVar11) goto LAB_03aa6708;
LAB_03aa66b0:
    uVar13 = iVar16 - 1;
    if (*(uint *)(lVar18 + 0x20) <= uVar13) {
      uVar13 = 0;
    }
    lVar18 = *(long *)(lVar18 + 0x28) + (ulong)uVar13 * 0x150;
  }
  else {
    lVar2 = 0x70;
    if (uVar13 < 3) {
      lVar2 = 0;
    }
    iVar16 = iVar16 + (uint)*(ushort *)(lVar21 + lVar2 + 0x30);
    if ((param_9 & 1) != 0) goto LAB_03aa66ec;
LAB_03aa66a4:
    if (0 < iVar16) goto LAB_03aa66b0;
LAB_03aa6708:
    lVar18 = *(long *)(lVar18 + 0x18);
  }
  FUN_03907810(lVar18,param_3);
  puVar1 = (uint *)(lVar18 + 0x14);
  fVar24 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x340));
  fVar25 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x344));
  local_90 = (undefined *)CONCAT44(1.0 / fVar25,1.0 / fVar24);
  do {
    uVar13 = *puVar1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = uVar13 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar13 & 0x7fffffff) != 0) {
    if ((int)uVar13 < 0) {
      if ((int)*puVar1 < 0) {
        lVar21 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar21 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    puVar10 = PTR_DAT_04bd0fc8;
    puVar9 = PTR_DAT_04bcf2e0;
  } while (cVar7 != '\0');
  if (**(int **)(lVar18 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar18 + 0x38),8,
               &local_90);
  }
  do {
    uVar13 = *puVar1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = uVar13 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar13 & 0x7fffffff) != 0) {
    if ((int)uVar13 < 0) {
      if ((int)*puVar1 < 0) {
        lVar21 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar21 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  local_90 = (undefined *)CONCAT44(local_90._4_4_,param_1);
  iVar16 = *(int *)(*(long *)(lVar18 + 0x38) + (ulong)(1 < *(uint *)(lVar18 + 0x30)) * 0x18);
  if (iVar16 != -1) {
    lVar21 = *(long *)puVar10;
    (**(code **)puVar9)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(lVar21 + 0x70),
                        *(undefined8 *)(lVar21 + 0x18),(long)iVar16,4,&local_90);
  }
  do {
    uVar13 = *puVar1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = uVar13 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar13 & 0x7fffffff) != 0) {
    if ((int)uVar13 < 0) {
      if ((int)*puVar1 < 0) {
        lVar21 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar21 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar21 = 0x30;
  if (*(uint *)(lVar18 + 0x30) < 3) {
    lVar21 = 0;
  }
  iVar16 = *(int *)(*(long *)(lVar18 + 0x38) + lVar21);
  if (iVar16 != -1) {
    lVar21 = *(long *)puVar10;
    (**(code **)puVar9)(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(lVar21 + 0x70),
                        *(undefined8 *)(lVar21 + 0x18),(long)iVar16,0x10,param_8);
  }
  do {
    uVar13 = *puVar1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = uVar13 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar13 & 0x7fffffff) != 0) {
    if ((int)uVar13 < 0) {
      if ((int)*puVar1 < 0) {
        lVar21 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar21 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar18);
    }
  }
  do {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_0390d290(&local_170,param_3,*(undefined8 *)(lVar18 + 0x68),0xffffffff,0);
  uVar19 = *(undefined8 *)(param_3 + 0xb8);
  lVar18 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar19,0x10,lVar18 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar19,0x10,lVar18 + 0xe88);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar16 = *(int *)(lVar18 + 0xe30);
  if (iVar16 != 0) {
    lVar18 = *(long *)(lVar18 + 0xe38);
    uVar20 = 0;
    uVar22 = 0;
    do {
      lVar21 = *(long *)(lVar18 + (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
      if (lVar21 != 0) {
        uVar12 = (**(code **)puVar9)(lVar21 + 8);
        (**(code **)puVar10)(uVar19,uVar20 & 0xffffffff,uVar12,*(undefined4 *)(lVar21 + 0x118));
      }
      uVar20 = uVar22 + 1;
      uVar22 = uVar20 & 0xffffffff;
    } while (iVar16 != (int)uVar20);
  }
  lVar18 = *(long *)PTR_DAT_04bbd7e8;
  iVar16 = *(int *)(lVar18 + 0x1f8);
  if (iVar16 != 0) {
    uVar15 = *(undefined4 *)(lVar18 + 0x1dc);
    uVar12 = *(undefined8 *)(param_3 + 0xb8);
    uVar19 = (**(code **)puVar9)(lVar18 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar12,uVar15,*(undefined4 *)(lVar18 + 0x1d8),iVar16,uVar19);
  }
  puVar9 = PTR_DAT_04bc1010;
  uVar13 = *(uint *)(*(long *)(param_4 + 0x110) + 0x58);
  if (uVar13 != 0xffffffff) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
      uVar17 = uVar13 - *(ushort *)(lVar18 + 0x3da);
      if (*(uint *)(lVar18 + 0x368) <= uVar17) {
        uVar17 = 0;
      }
      if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_3 + 0x100) = *(ulong *)(param_3 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
        goto LAB_03aa6bd4;
      }
    }
    if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
      uVar14 = 0x112;
      uVar15 = 0x12;
    }
    else {
      uVar14 = 0x111;
      uVar15 = 0x11;
    }
    if ((*(uint *)(lVar18 + 800) & 2) != 0) {
      uVar15 = uVar14;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_3 + 0xb8),uVar15);
    *(undefined8 *)(param_3 + 0x100) = 0;
  }
LAB_03aa6bd4:
  if (param_4 == param_5) {
    if (*(long *)(param_5 + 0x350) != 0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    }
    *(undefined8 *)(param_5 + 0x350) = 0;
  }
  if (local_96 != -1) {
    lVar18 = *(long *)puVar9;
    nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
    uVar13 = (int)local_96 - (uint)*(ushort *)(lVar18 + 0x5c0);
    if (*(uint *)(lVar18 + 0x5a0) <= uVar13) {
      uVar13 = 0;
    }
    lVar21 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar13 * 0x80;
    sVar8 = *(short *)(lVar21 + 0x76) + -1;
    *(short *)(lVar21 + 0x76) = sVar8;
    if (sVar8 == 0) {
      *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
    local_96 = -1;
  }
  FUN_038fd0e0(local_120);
  return;
}

