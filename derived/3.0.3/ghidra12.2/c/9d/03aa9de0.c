
void FUN_03aa9de0(long param_1,long param_2,uint param_3,undefined8 param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  char **ppcVar7;
  uint uVar8;
  char cVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  char *local_128 [16];
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  
  if (*(char *)(param_1 + 0x3f8) == '\0') {
    return;
  }
  if (param_3 == 0xffffffff) {
    uVar6 = *(uint *)(param_1 + 8);
  }
  else {
    uVar6 = *(uint *)(param_1 + 8) >> (ulong)(param_3 & 0x1f) & 1;
  }
  if (uVar6 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x18) & param_3;
  if (*(uint *)(param_1 + 0x1f0) <= uVar6) {
    uVar6 = 0;
  }
  lVar22 = *(long *)(*(long *)(param_1 + 0x1f8) + (long)(int)uVar6 * 8);
  if (*(uint *)(param_1 + 0x1e0) <= param_3) {
    param_3 = 0;
  }
  lVar18 = *(long *)(param_1 + 0x1e8) + (long)(int)param_3 * 0x15e8;
  puVar1 = (undefined8 *)(lVar18 + 0x580);
  FUN_03aa84b0(puVar1,param_2,param_4);
  param_1 = param_1 + 0x418;
  FUN_038e4d90(param_1,param_2);
  puVar25 = puVar1;
  if (0 < param_5) {
    uVar6 = *(uint *)(lVar18 + 0x8b8);
    uVar8 = *(uint *)(lVar18 + 0x8bc);
    puVar4 = (undefined8 *)(lVar18 + 0x12a0);
    lVar26 = *(long *)PTR_DAT_04bbd510;
    local_128[0] = PTR_DAT_04bb2020 + 0x10;
    local_128[1] = "reduce_temp";
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar15 == 0) {
      iVar14 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar14 = (int)lVar15 + -1;
    }
    _local_88 = CONCAT44(fStack_84,iVar14);
    auVar31 = FUN_03948e10(lVar26,param_2,lVar26 + (long)iVar14 * 0x290 + 0x10,local_128,0x1a,1,
                           uVar6 >> 1,uVar8 >> 1,1,0,1,0,1,0,0,0);
    uVar16 = FUN_03aa84b0(puVar4,auVar31._8_8_,auVar31._0_8_);
    bVar12 = false;
    *(undefined1 *)(lVar18 + 0x15e0) = 1;
    *(undefined1 *)(lVar18 + 0x15e2) = 0;
    if (param_5 == 1) {
      bVar12 = *(char *)(lVar22 + 0x68) != '\0';
    }
    local_128[0] = &DAT_3f8000003f800000;
    local_128[1] = &DAT_3f8000003f800000;
    FUN_03aaafb0(*(undefined4 *)(lVar22 + 0x88),0x3f800000,uVar16,param_2,puVar4,puVar1,1,1,bVar12,
                 local_128);
    puVar25 = puVar4;
    if (param_5 != 1) {
      iVar14 = 2;
      pcVar3 = PTR_DAT_04bb2020 + 0x10;
      do {
        puVar25 = puVar4;
        puVar5 = (undefined8 *)(lVar18 + 0xf58);
        if ((iVar14 - 1U & 1) != 0) {
          puVar25 = (undefined8 *)(lVar18 + 0xf58);
          puVar5 = puVar4;
        }
        uVar6 = *(uint *)(puVar5 + 0x67);
        uVar8 = *(uint *)((long)puVar5 + 0x33c);
        lVar26 = *(long *)PTR_DAT_04bbd510;
        local_128[1] = "reduce_temp";
        local_128[0] = pcVar3;
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar15 == 0) {
          iVar13 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar13 = (int)lVar15 + -1;
        }
        _local_88 = CONCAT44(fStack_84,iVar13);
        auVar31 = FUN_03948e10(lVar26,param_2,lVar26 + (long)iVar13 * 0x290 + 0x10,local_128,0x1a,1,
                               uVar6 >> 1,uVar8 >> 1,1,0,1,0,1,0,0,0);
        uVar16 = FUN_03aa84b0(puVar25,auVar31._8_8_,auVar31._0_8_);
        bVar12 = false;
        *(undefined1 *)(puVar25 + 0x68) = 1;
        *(undefined1 *)((long)puVar25 + 0x342) = 0;
        if (iVar14 == param_5) {
          bVar12 = *(char *)(lVar22 + 0x68) != '\0';
        }
        local_128[0] = &DAT_3f8000003f800000;
        local_128[1] = &DAT_3f8000003f800000;
        FUN_03aaafb0(*(undefined4 *)(lVar22 + 0x88),0x3f800000,uVar16,param_2,puVar25,puVar5,1,0,
                     bVar12,local_128);
        if (*(char *)(puVar5 + 0x68) != '\0') {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*puVar5);
        }
        iVar14 = iVar14 + 1;
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 0x68) = 0;
        *(undefined1 *)((long)puVar5 + 0x342) = 0;
      } while (iVar14 - param_5 != 1);
    }
  }
  if ((*(char *)(lVar22 + 0x48) == '\0') && (FUN_038e4d90(param_1,param_2), 0 < param_6)) {
    puVar4 = (undefined8 *)(lVar18 + 0xf58);
    puVar5 = (undefined8 *)(lVar18 + 0x12a0);
    pcVar3 = PTR_DAT_04bb2020 + 0x10;
    iVar14 = param_6;
    do {
      puVar25 = puVar4;
      puVar27 = puVar5;
      puVar28 = puVar4;
      if ((*(char *)(lVar18 + 0x1298) == '\0') &&
         (puVar25 = puVar5, puVar27 = puVar4, puVar28 = puVar5, *(char *)(lVar18 + 0x15e0) == '\0'))
      {
        uVar30 = *(undefined4 *)(lVar18 + 0x8b8);
        uVar19 = *(undefined4 *)(lVar18 + 0x8bc);
        lVar26 = *(long *)PTR_DAT_04bbd510;
        local_128[1] = "blur_temp";
        local_128[0] = pcVar3;
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar15 == 0) {
          iVar13 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar13 = (int)lVar15 + -1;
        }
        _local_88 = CONCAT44(fStack_84,iVar13);
        auVar31 = FUN_03948e10(lVar26,param_2,lVar26 + (long)iVar13 * 0x290 + 0x10,local_128,0x1a,1,
                               uVar30,uVar19,1,0,1,0,1,0,0,0);
        FUN_03aa84b0(puVar5,auVar31._8_8_,auVar31._0_8_);
        *(char *)(lVar18 + 0x15e0) = '\x01';
        *(undefined1 *)(lVar18 + 0x15e2) = 0;
        puVar28 = puVar1;
      }
      uVar30 = *(undefined4 *)(puVar28 + 0x67);
      local_128[0] = PTR_DAT_04bb2020 + 0x10;
      uVar19 = *(undefined4 *)((long)puVar28 + 0x33c);
      lVar26 = *(long *)PTR_DAT_04bbd510;
      local_128[1] = "blur_temp";
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar15 == 0) {
        iVar13 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar13 = (int)lVar15 + -1;
      }
      _local_88 = CONCAT44(fStack_84,iVar13);
      auVar31 = FUN_03948e10(lVar26,param_2,lVar26 + (long)iVar13 * 0x290 + 0x10,local_128,0x1a,1,
                             uVar30,uVar19,1,0,1,0,1,0,0,0);
      FUN_03aa84b0(puVar27,auVar31._8_8_,auVar31._0_8_);
      *(undefined1 *)(puVar27 + 0x68) = 1;
      *(undefined1 *)((long)puVar27 + 0x342) = 0;
      local_128[0] = &DAT_3f8000003f800000;
      local_128[1] = &DAT_3f8000003f800000;
      FUN_03aab6a0(param_2,puVar27,puVar28,0,local_128);
      local_128[0] = &DAT_3f8000003f800000;
      local_128[1] = &DAT_3f8000003f800000;
      FUN_03aab6a0(param_2,puVar25,puVar27,1,local_128);
      if (*(char *)(puVar27 + 0x68) != '\0') {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*puVar27);
      }
      iVar14 = iVar14 + -1;
      *puVar27 = 0;
      *(undefined1 *)(puVar27 + 0x68) = 0;
      *(undefined1 *)((long)puVar27 + 0x342) = 0;
    } while (iVar14 != 0);
  }
  uVar30 = *(undefined4 *)(puVar25 + 0x67);
  lVar15 = lVar18 + 0xc10;
  uVar19 = *(undefined4 *)((long)puVar25 + 0x33c);
  local_128[0] = PTR_DAT_04bb2020 + 0x10;
  local_128[1] = "flare_buffer";
  lVar24 = *(long *)PTR_DAT_04bbd510;
  lVar26 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar26 == 0) {
    iVar14 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar14 = (int)lVar26 + -1;
  }
  _local_88 = CONCAT44(fStack_84,iVar14);
  auVar31 = FUN_03948e10(lVar24,param_2,lVar24 + (long)iVar14 * 0x290 + 0x10,local_128,0x1a,1,uVar30
                         ,uVar19,1,0,1,0,1,0,0,0);
  FUN_03aa84b0(lVar15,auVar31._8_8_,auVar31._0_8_);
  *(undefined1 *)(lVar18 + 0xf50) = 1;
  *(undefined1 *)(lVar18 + 0xf52) = 0;
  (**(code **)(*(long *)(lVar18 + 0xcf8) + 0x38))(lVar18 + 0xcf8,param_2);
  FUN_038e77e4(lVar18 + 0xf20,param_2,lVar18 + 0xcf8);
  FUN_038e4d90(param_1,param_2);
  lVar24 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4a8) + 8);
  lVar20 = *(long *)(lVar24 + 0x38);
  lVar26 = 0x70;
  if (*(uint *)(lVar24 + 0x30) < 3) {
    lVar26 = 0;
  }
  iVar14 = *(int *)(lVar22 + 0xa8) * (uint)*(ushort *)(lVar20 + 0x30) +
           (uint)*(byte *)(lVar22 + 0xf8) *
           (uint)*(ushort *)(lVar20 + (ulong)(1 < *(uint *)(lVar24 + 0x30)) * 0x38 + 0x30) +
           (uint)*(byte *)(lVar22 + 0x160) * (uint)*(ushort *)(lVar20 + lVar26 + 0x30);
  if (iVar14 < 1) {
    lVar26 = *(long *)(lVar24 + 0x18);
  }
  else {
    uVar6 = iVar14 - 1;
    if (*(uint *)(lVar24 + 0x20) <= uVar6) {
      uVar6 = 0;
    }
    lVar26 = *(long *)(lVar24 + 0x28) + (ulong)uVar6 * 0x150;
  }
  FUN_03907810(lVar26,param_2);
  puVar2 = (uint *)(lVar26 + 0x14);
  uVar30 = *(undefined4 *)(lVar22 + 200);
  local_88 = (float)*(undefined8 *)(lVar22 + 0x20);
  fStack_84 = (float)((ulong)*(undefined8 *)(lVar22 + 0x20) >> 0x20);
  local_80 = (float)*(undefined8 *)(lVar22 + 0x28);
  fStack_7c = (float)((ulong)*(undefined8 *)(lVar22 + 0x28) >> 0x20);
  _local_88 = CONCAT44(fStack_7c * fStack_84,fStack_7c * local_88);
  local_98 = (float)*(undefined8 *)(lVar22 + 0x138);
  fStack_94 = (float)((ulong)*(undefined8 *)(lVar22 + 0x138) >> 0x20);
  _local_80 = CONCAT44(fStack_7c * fStack_7c,fStack_7c * local_80);
  local_90 = (float)*(undefined8 *)(lVar22 + 0x140);
  fStack_8c = (float)((ulong)*(undefined8 *)(lVar22 + 0x140) >> 0x20);
  _local_98 = CONCAT44(fStack_8c * fStack_94,fStack_8c * local_98);
  local_a0 = *(float *)(lVar22 + 0x1a8);
  _local_90 = CONCAT44(fStack_8c * fStack_8c,fStack_8c * local_90);
  local_a8 = (float)*(undefined8 *)(lVar22 + 0x180);
  fStack_a4 = (float)((ulong)*(undefined8 *)(lVar22 + 0x180) >> 0x20);
  _local_a8 = CONCAT44(local_a0 * fStack_a4,local_a0 * local_a8);
  local_a0 = local_a0 * *(float *)(lVar22 + 0x188);
  do {
    uVar6 = *puVar2;
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = uVar6 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar2 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar26);
    }
  }
  do {
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bd0fc8;
    puVar10 = PTR_DAT_04bcf2e0;
  } while (cVar9 != '\0');
  local_128[0] = (char *)CONCAT44(local_128[0]._4_4_,uVar30);
  if (**(int **)(lVar26 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar26 + 0x38),4,
               local_128);
  }
  uVar30 = *(undefined4 *)(lVar22 + 0x118);
  do {
    uVar6 = *puVar2;
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = uVar6 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar2 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar26);
    }
  }
  do {
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  local_128[0] = (char *)CONCAT44(local_128[0]._4_4_,uVar30);
  lVar24 = 0x30;
  if (*(uint *)(lVar26 + 0x30) < 3) {
    lVar24 = 0;
  }
  iVar14 = *(int *)(*(long *)(lVar26 + 0x38) + lVar24);
  if (iVar14 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar14,4,local_128);
  }
  do {
    uVar6 = *puVar2;
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = uVar6 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar2 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar26);
    }
  }
  do {
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar24 = 0x48;
  if (*(uint *)(lVar26 + 0x30) < 4) {
    lVar24 = 0;
  }
  iVar14 = *(int *)(*(long *)(lVar26 + 0x38) + lVar24);
  if (iVar14 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar14,0xc,&local_98);
  }
  do {
    uVar6 = *puVar2;
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = uVar6 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar2 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar26);
    }
  }
  do {
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar24 = 0x60;
  if (*(uint *)(lVar26 + 0x30) < 5) {
    lVar24 = 0;
  }
  iVar14 = *(int *)(*(long *)(lVar26 + 0x38) + lVar24);
  if (iVar14 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar14,0xc,&local_a8);
  }
  do {
    uVar6 = *puVar2;
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = uVar6 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar2 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar26);
    }
  }
  do {
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar24 = 0x78;
  if (*(uint *)(lVar26 + 0x30) < 6) {
    lVar24 = 0;
  }
  iVar14 = *(int *)(*(long *)(lVar26 + 0x38) + lVar24);
  if (iVar14 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar14,0xc,&local_88);
  }
  do {
    uVar6 = *puVar2;
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = uVar6 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar2 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar26);
    }
  }
  do {
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  FUN_0390d290(puVar25 + 1,param_2,*(undefined8 *)(lVar26 + 0x68),0xffffffff,0);
  local_128[0] = (char *)0x0;
  local_128[1] = (undefined1 *)0x3f80000000000000;
  local_128[2] = (char *)0x0;
  local_128[3] = (char *)0x3f80000000000000;
  local_128[4] = (char *)0x0;
  local_128[5] = (char *)0x3f80000000000000;
  local_128[6] = (char *)0x0;
  local_128[7] = (char *)0x3f80000000000000;
  local_128[8] = (char *)0x0;
  local_128[9] = (char *)0x3f80000000000000;
  local_128[10] = (char *)0x0;
  local_128[0xb] = (char *)0x3f80000000000000;
  local_128[0xc] = (char *)0x0;
  local_128[0xd] = (char *)0x3f80000000000000;
  local_128[0xe] = (char *)0x0;
  local_128[0xf] = (char *)0x3f80000000000000;
  iVar14 = *(int *)(lVar22 + 0xd0);
  if (iVar14 != 0) {
    uVar23 = 0;
    uVar21 = 0;
    lVar24 = *(long *)(lVar22 + 0xd8);
    do {
      lVar20 = lVar24 + (long)(int)uVar21 * 0x28;
      ppcVar7 = local_128 + uVar21 * 2;
      if (7 < (uint)uVar23) {
        ppcVar7 = local_128;
      }
      ppcVar7[1] = *(char **)(lVar20 + 0x20);
      fVar29 = *(float *)((long)ppcVar7 + 0xc);
      *ppcVar7 = *(char **)(lVar20 + 0x18);
      *(float *)(ppcVar7 + 1) = fVar29 * *(float *)(ppcVar7 + 1);
      *(float *)((long)ppcVar7 + 0xc) = fVar29 * fVar29;
      *(float *)ppcVar7 = fVar29 * *(float *)ppcVar7;
      *(float *)((long)ppcVar7 + 4) = fVar29 * *(float *)((long)ppcVar7 + 4);
      uVar23 = uVar21 + 1;
      uVar21 = uVar23 & 0xffffffff;
    } while (iVar14 != (int)uVar23);
  }
  do {
    uVar6 = *puVar2;
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = uVar6 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar2 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar26);
    }
  }
  do {
    cVar9 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  iVar14 = *(int *)(*(long *)(lVar26 + 0x38) + (ulong)(1 < *(uint *)(lVar26 + 0x30)) * 0x18);
  if (iVar14 != -1) {
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar11 + 0x70),
               *(undefined8 *)(*(long *)puVar11 + 0x18),(long)iVar14,0x80,local_128);
  }
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar26 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar26 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar26 + 0x1068);
  puVar11 = PTR_DAT_04bcf1e8;
  puVar10 = PTR_DAT_04bbd560;
  iVar14 = *(int *)(lVar26 + 0x1010);
  if (iVar14 != 0) {
    lVar26 = *(long *)(lVar26 + 0x1018);
    uVar23 = 0;
    uVar21 = 0;
    do {
      lVar24 = *(long *)(lVar26 + (-(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3));
      if (lVar24 != 0) {
        uVar17 = (**(code **)puVar10)(lVar24 + 8);
        (**(code **)puVar11)(uVar16,uVar23 & 0xffffffff,uVar17,*(undefined4 *)(lVar24 + 0x118));
      }
      uVar23 = uVar21 + 1;
      uVar21 = uVar23 & 0xffffffff;
    } while (iVar14 != (int)uVar23);
  }
  lVar26 = *(long *)PTR_DAT_04bbd7e8;
  iVar14 = *(int *)(lVar26 + 0x480);
  if (iVar14 != 0) {
    uVar30 = *(undefined4 *)(lVar26 + 0x464);
    uVar17 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = (**(code **)puVar10)(lVar26 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar17,uVar30,*(undefined4 *)(lVar26 + 0x460),iVar14,uVar16);
  }
  uVar6 = *(uint *)(*(long *)(lVar18 + 0xd18) + 0x58);
  if (uVar6 != 0xffffffff) {
    lVar26 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar26 + 0x5c8) >> 3 & 1) == 0) {
      uVar8 = uVar6 - *(ushort *)(lVar26 + 0x3da);
      if (*(uint *)(lVar26 + 0x368) <= uVar8) {
        uVar8 = 0;
      }
      if ((*(uint *)(*(long *)(lVar26 + 0x370) + (long)(int)uVar8 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar6 & 0x3f);
        goto LAB_03aaada0;
      }
    }
    if ((*(uint *)(lVar26 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar30 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar30 = 0x11;
    }
    if ((*(uint *)(lVar26 + 800) & 2) != 0) {
      uVar30 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar30);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03aaada0:
  if ((*(char *)(lVar22 + 0x48) != '\0') && (FUN_038e4d90(param_1,param_2), 0 < param_6)) {
    pcVar3 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar30 = *(undefined4 *)(lVar18 + 0xf48);
      uVar19 = *(undefined4 *)(lVar18 + 0xf4c);
      lVar24 = *(long *)PTR_DAT_04bbd510;
      lVar22 = 0xf58;
      lVar26 = lVar18 + 0xf58;
      if (*(char *)(lVar18 + 0x1298) != '\0') {
        lVar22 = 0x12a0;
        lVar26 = lVar18 + 0x12a0;
      }
      local_128[1] = "blur_temp";
      local_128[0] = pcVar3;
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar20 == 0) {
        iVar14 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar14 = (int)lVar20 + -1;
      }
      _local_88 = CONCAT44(fStack_84,iVar14);
      auVar31 = FUN_03948e10(lVar24,param_2,lVar24 + (long)iVar14 * 0x290 + 0x10,local_128,0x1a,1,
                             uVar30,uVar19,1,0,1,0,1,0,0,0);
      FUN_03aa84b0(lVar26,auVar31._8_8_,auVar31._0_8_);
      *(undefined1 *)(lVar26 + 0x340) = 1;
      *(undefined1 *)(lVar26 + 0x342) = 0;
      local_128[0] = &DAT_3f8000003f800000;
      local_128[1] = &DAT_3f8000003f800000;
      FUN_03aab6a0(param_2,lVar26,lVar15,0,local_128);
      local_128[0] = &DAT_3f8000003f800000;
      local_128[1] = &DAT_3f8000003f800000;
      FUN_03aab6a0(param_2,lVar15,lVar26,1,local_128);
      if (*(char *)(lVar26 + 0x340) != '\0') {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar18 + lVar22));
      }
      param_6 = param_6 + -1;
      *(undefined8 *)(lVar18 + lVar22) = 0;
      *(undefined1 *)(lVar26 + 0x340) = 0;
      *(undefined1 *)(lVar26 + 0x342) = 0;
    } while (param_6 != 0);
  }
  if (*(char *)(puVar25 + 0x68) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*puVar25);
  }
  *puVar25 = 0;
  *(undefined1 *)(puVar25 + 0x68) = 0;
  *(undefined1 *)((long)puVar25 + 0x342) = 0;
  if (*(char *)(lVar18 + 0x8c0) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*puVar1);
  }
  *(undefined8 *)(lVar18 + 0x580) = 0;
  *(undefined1 *)(lVar18 + 0x8c0) = 0;
  *(undefined1 *)(lVar18 + 0x8c2) = 0;
  return;
}

