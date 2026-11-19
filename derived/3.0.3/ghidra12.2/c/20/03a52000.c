
void FUN_03a52000(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  short sVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 uVar25;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulong uStack_1e0;
  int local_1d4;
  undefined4 uStack_1d0;
  uint local_1c4;
  uint local_1c0;
  undefined *local_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined7 uStack_110;
  undefined1 local_109;
  undefined7 uStack_108;
  undefined1 auStack_100 [64];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_80;
  uint local_7c;
  byte local_78;
  short local_76;
  int local_6c;
  
  lVar17 = *(long *)PTR_DAT_04bbd510;
  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    lVar15 = param_4[2];
    local_150 = PTR_DAT_04bb2020 + 0x10;
    uVar3 = *(ushort *)(lVar15 + 0x30);
    uVar4 = *(undefined2 *)(lVar15 + 0x98);
    local_148 = &DAT_0407e853;
    uVar5 = *(ushort *)(lVar15 + 0x32);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    uVar2 = uVar5;
    if (*(short *)(lVar15 + 0x3a) != 3) {
      uVar2 = 1;
    }
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar15 == 0) {
      local_1c4 = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_1c4 = (int)lVar15 - 1;
    }
    lVar15 = lVar17 + (long)(int)local_1c4 * 0x290 + 0x10;
    uVar25 = 1;
  }
  else {
    lVar15 = lVar17 + 0x7c0;
    local_150 = PTR_DAT_04bb2020 + 0x10;
    local_148 = &DAT_0407e853;
    lVar16 = param_4[2];
    uVar3 = *(ushort *)(lVar16 + 0x30);
    uVar5 = *(ushort *)(lVar16 + 0x32);
    uVar4 = *(undefined2 *)(lVar16 + 0x98);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    uVar25 = 0;
    uVar2 = uVar5;
    if (*(short *)(lVar16 + 0x3a) != 3) {
      uVar2 = 1;
    }
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
  }
  puVar13 = (undefined8 *)
            FUN_03948e10(lVar17,param_2,lVar15,&local_150,uVar4,1,uVar3,uVar2,1,0,1,0,uVar25,0,0,0);
  FUN_0390ab20(param_4[2],param_2,puVar13);
  (**(code **)(*(long *)*param_4 + 0x38))((long *)*param_4,param_2);
  FUN_038e77e4(param_4[1],param_2,*param_4);
  lVar17 = FUN_03a51cd0(param_1,1);
  FUN_03907810(lVar17,param_2);
  FUN_0390cee0(&local_150);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
    if (bVar9) {
      cVar8 = ExclusiveMonitorsStatus();
      local_7c = local_7c | 1;
    }
  } while (cVar8 != '\0');
  local_1c4 = *(uint *)(param_1 + 0x400);
  switch(local_1c4) {
  case 0:
    local_80 = 0x5040302;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
      if (bVar9) {
        cVar8 = ExclusiveMonitorsStatus();
        local_7c = local_7c | 1;
      }
    } while (cVar8 != '\0');
    break;
  case 1:
    local_80 = 0x1020202;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
      if (bVar9) {
        cVar8 = ExclusiveMonitorsStatus();
        local_7c = local_7c | 1;
      }
    } while (cVar8 != '\0');
    break;
  case 2:
    local_80 = 0x1030303;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
      if (bVar9) {
        cVar8 = ExclusiveMonitorsStatus();
        local_7c = local_7c | 1;
      }
    } while (cVar8 != '\0');
    break;
  case 3:
    local_80 = 0x1040404;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
      if (bVar9) {
        cVar8 = ExclusiveMonitorsStatus();
        local_7c = local_7c | 1;
      }
    } while (cVar8 != '\0');
    break;
  case 4:
    local_80 = 0x1050505;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
      if (bVar9) {
        cVar8 = ExclusiveMonitorsStatus();
        local_7c = local_7c | 1;
      }
    } while (cVar8 != '\0');
    break;
  case 5:
    local_80 = 0x1000302;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
      if (bVar9) {
        cVar8 = ExclusiveMonitorsStatus();
        local_7c = local_7c | 1;
      }
    } while (cVar8 != '\0');
    break;
  case 6:
    local_80 = 0x1000502;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
      if (bVar9) {
        cVar8 = ExclusiveMonitorsStatus();
        local_7c = local_7c | 1;
      }
    } while (cVar8 != '\0');
  }
  local_78 = local_78 | 2;
  local_150 = (undefined *)*puVar13;
  local_120 = puVar13[6];
  local_148 = (undefined *)puVar13[1];
  uStack_140 = puVar13[2];
  local_138 = *(undefined4 *)(puVar13 + 3);
  uStack_134 = *(undefined4 *)((long)puVar13 + 0x1c);
  local_130 = puVar13[4];
  uStack_128 = puVar13[5];
  local_118 = puVar13[7];
  uStack_108 = (undefined7)((ulong)*(undefined8 *)((long)puVar13 + 0x47) >> 8);
  uStack_110 = (undefined7)puVar13[8];
  local_109 = (undefined1)((ulong)puVar13[8] >> 0x38);
  FUN_038fd1e0(auStack_100);
  FUN_038fd2f0(auStack_100,puVar13 + 10);
  local_c0 = puVar13[0x12];
  local_b8 = *(undefined4 *)(puVar13 + 0x13);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(&local_7c,0x10);
    if (bVar9) {
      cVar8 = ExclusiveMonitorsStatus();
      local_7c = local_7c | 1;
    }
  } while (cVar8 != '\0');
  puVar1 = (uint *)(lVar17 + 0x14);
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar17);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_0390d290(&local_150,param_2,*(undefined8 *)(lVar17 + 0x68),0xffffffff,0);
  FUN_038e4cec(&local_1c4);
  local_1c4 = local_1c4 & 0xffff0000;
  local_1c0 = local_1c0 & 0xfffffffe;
  if (*(int *)(param_1 + 0x98) == 2) {
    local_1d4 = *(int *)(param_1 + 0x8c);
    if (local_1d4 == 1) {
      if (*(int *)(param_1 + 0x90) == 0) {
        local_208 = 0x3ec5273a3edf452f;
        local_200 = 0x3e1283ab;
        uVar7 = 0x3f36d410;
        local_1f8 = 0x3f37855b3e63d838;
        uStack_1f0 = 0x3d78496d;
        local_1e8 = 0x3dc6deb93c6443e2;
      }
      else {
        local_208 = 0x3eb715403ed324ea;
        local_200 = 0x3e38d003;
        uVar7 = 0x3f735611;
        local_1f8 = 0x3f3715513e59be0a;
        uStack_1f0 = 0x3d93d966;
        local_1e8 = 0x3df41c823c9e5c0c;
      }
      uStack_1e0 = (ulong)uVar7;
    }
    else {
      local_1f8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_1f0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_1e8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_1e0 = *(ulong *)(PTR_DAT_04bb2f80 + 0x28);
      local_208 = *(undefined8 *)PTR_DAT_04bb2f80;
      local_200 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    }
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar15 = 0x60;
    if (*(uint *)(lVar17 + 0x30) < 5) {
      lVar15 = 0;
    }
    iVar6 = *(int *)(*(long *)(lVar17 + 0x38) + lVar15);
    if (iVar6 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar6,0x30,&local_208);
    }
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    if (*(uint *)(param_1 + 0x8c) < 3) {
      uVar21 = 0x3f800000;
      lVar15 = (long)(int)*(uint *)(param_1 + 0x8c) * 4;
      uVar22 = *(undefined4 *)(&DAT_041dfe7c + lVar15);
      uVar23 = *(undefined4 *)(&DAT_041dfe88 + lVar15);
      uVar24 = *(undefined4 *)(&DAT_041dfe94 + lVar15);
    }
    local_208 = CONCAT44(uVar23,uVar24);
    local_200 = CONCAT44(uVar21,uVar22);
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar15 = 0x78;
    if (*(uint *)(lVar17 + 0x30) < 6) {
      lVar15 = 0;
    }
    iVar6 = *(int *)(*(long *)(lVar17 + 0x38) + lVar15);
    if (iVar6 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar6,0x10,&local_208);
    }
  }
  else if (*(int *)(param_1 + 0x98) == 3) {
    local_1d4 = *(int *)(param_1 + 0x3c0);
    uStack_1d0 = *(undefined4 *)(param_1 + 0x3e0);
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
      puVar12 = PTR_DAT_04bd0fc8;
      puVar11 = PTR_DAT_04bcf2e0;
    } while (cVar8 != '\0');
    if (**(int **)(lVar17 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar17 + 0x38),
                 0x10,&local_1d4);
    }
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    iVar6 = *(int *)(*(long *)(lVar17 + 0x38) + (ulong)(1 < *(uint *)(lVar17 + 0x30)) * 0x18);
    if (iVar6 != -1) {
      (**(code **)puVar11)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar12 + 0x70),
                 *(undefined8 *)(*(long *)puVar12 + 0x18),(long)iVar6,0x10,param_1 + 0x350);
    }
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar15 = 0x30;
    if (*(uint *)(lVar17 + 0x30) < 3) {
      lVar15 = 0;
    }
    iVar6 = *(int *)(*(long *)(lVar17 + 0x38) + lVar15);
    if (iVar6 != -1) {
      (**(code **)puVar11)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar12 + 0x70),
                 *(undefined8 *)(*(long *)puVar12 + 0x18),(long)iVar6,0x10,param_1 + 0x378);
    }
    local_6c = *(int *)(param_1 + 0x8c);
    if (local_6c == 1) {
      if (*(int *)(param_1 + 0x90) == 0) {
        local_208 = 0x3ec5273a3edf452f;
        local_200 = 0x3e1283ab;
        uVar7 = 0x3f36d410;
        local_1f8 = 0x3f37855b3e63d838;
        uStack_1f0 = 0x3d78496d;
        local_1e8 = 0x3dc6deb93c6443e2;
      }
      else {
        local_208 = 0x3eb715403ed324ea;
        local_200 = 0x3e38d003;
        uVar7 = 0x3f735611;
        local_1f8 = 0x3f3715513e59be0a;
        uStack_1f0 = 0x3d93d966;
        local_1e8 = 0x3df41c823c9e5c0c;
      }
      uStack_1e0 = (ulong)uVar7;
    }
    else {
      local_1f8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_1f0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_1e8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_1e0 = *(ulong *)(PTR_DAT_04bb2f80 + 0x28);
      local_208 = *(undefined8 *)PTR_DAT_04bb2f80;
      local_200 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    }
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar15 = 0x60;
    if (*(uint *)(lVar17 + 0x30) < 5) {
      lVar15 = 0;
    }
    iVar6 = *(int *)(*(long *)(lVar17 + 0x38) + lVar15);
    if (iVar6 != -1) {
      (**(code **)puVar11)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar12 + 0x70),
                 *(undefined8 *)(*(long *)puVar12 + 0x18),(long)iVar6,0x30,&local_208);
    }
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    if (*(uint *)(param_1 + 0x8c) < 3) {
      uVar21 = 0x3f800000;
      lVar15 = (long)(int)*(uint *)(param_1 + 0x8c) * 4;
      uVar22 = *(undefined4 *)(&DAT_041dfe7c + lVar15);
      uVar23 = *(undefined4 *)(&DAT_041dfe88 + lVar15);
      uVar24 = *(undefined4 *)(&DAT_041dfe94 + lVar15);
    }
    local_208 = CONCAT44(uVar23,uVar24);
    local_200 = CONCAT44(uVar21,uVar22);
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar15 = 0x78;
    if (*(uint *)(lVar17 + 0x30) < 6) {
      lVar15 = 0;
    }
    iVar6 = *(int *)(*(long *)(lVar17 + 0x38) + lVar15);
    if (iVar6 != -1) {
      (**(code **)puVar11)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar12 + 0x70),
                 *(undefined8 *)(*(long *)puVar12 + 0x18),(long)iVar6,0x10,&local_208);
    }
    uVar21 = *(undefined4 *)(param_1 + 0x3a0);
    local_208 = CONCAT44(uVar21,uVar21);
    local_200 = CONCAT44(uVar21,uVar21);
    do {
      uVar7 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar7 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar7 & 0x7fffffff) != 0) {
      if ((int)uVar7 < 0) {
        if ((int)*puVar1 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar17);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    lVar15 = 0x48;
    if (*(uint *)(lVar17 + 0x30) < 4) {
      lVar15 = 0;
    }
    iVar6 = *(int *)(*(long *)(lVar17 + 0x38) + lVar15);
    if (iVar6 != -1) {
      (**(code **)puVar11)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar12 + 0x70),
                 *(undefined8 *)(*(long *)puVar12 + 0x18),(long)iVar6,0x10,&local_208);
    }
    local_1c0 = local_1c0 | 1;
  }
  FUN_038e4d90(&local_1c4,param_2);
  uVar18 = *(undefined8 *)(param_2 + 0xb8);
  lVar17 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar18,0x10,lVar17 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar18,0x10,lVar17 + 0x1068);
  puVar12 = PTR_DAT_04bcf1e8;
  puVar11 = PTR_DAT_04bbd560;
  iVar6 = *(int *)(lVar17 + 0x1010);
  if (iVar6 != 0) {
    lVar17 = *(long *)(lVar17 + 0x1018);
    uVar19 = 0;
    uVar20 = 0;
    do {
      lVar15 = *(long *)(lVar17 + (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3));
      if (lVar15 != 0) {
        uVar14 = (**(code **)puVar11)(lVar15 + 8);
        (**(code **)puVar12)(uVar18,uVar19 & 0xffffffff,uVar14,*(undefined4 *)(lVar15 + 0x118));
      }
      uVar19 = uVar20 + 1;
      uVar20 = uVar19 & 0xffffffff;
    } while (iVar6 != (int)uVar19);
  }
  lVar17 = *(long *)PTR_DAT_04bbd7e8;
  iVar6 = *(int *)(lVar17 + 0x480);
  if (iVar6 != 0) {
    uVar21 = *(undefined4 *)(lVar17 + 0x464);
    uVar14 = *(undefined8 *)(param_2 + 0xb8);
    uVar18 = (**(code **)puVar11)(lVar17 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar14,uVar21,*(undefined4 *)(lVar17 + 0x460),iVar6,uVar18);
  }
  FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar13);
  if (local_76 != -1) {
    lVar17 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
    uVar7 = (int)local_76 - (uint)*(ushort *)(lVar17 + 0x5c0);
    if (*(uint *)(lVar17 + 0x5a0) <= uVar7) {
      uVar7 = 0;
    }
    lVar15 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar7 * 0x80;
    sVar10 = *(short *)(lVar15 + 0x76) + -1;
    *(short *)(lVar15 + 0x76) = sVar10;
    if (sVar10 == 0) {
      *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
    local_76 = -1;
  }
  FUN_038fd0e0(auStack_100);
  return;
}

