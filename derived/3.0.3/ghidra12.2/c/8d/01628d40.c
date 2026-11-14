
void FUN_01628d40(long param_1,long param_2,long param_3,uint param_4,ulong param_5)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  float fVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  undefined1 auStack_300 [104];
  float local_298;
  float fStack_294;
  undefined4 local_290;
  undefined1 local_289;
  undefined1 local_288;
  uint local_27c;
  short local_276;
  undefined2 local_26c [2];
  uint local_268;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  undefined8 local_1dc;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  uint local_178 [2];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
  uint local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  if (param_4 == 0) {
    if ((param_5 & 1) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(byte *)(param_2 + 0x39) - 1;
    }
  }
  else {
    uVar22 = param_4 - 1;
    if ((param_5 & 1) != 0) {
      uVar22 = param_4 + 1;
    }
  }
  local_c8 = 0;
  uStack_c0 = 0;
  uVar3 = *(ushort *)(param_3 + 0x32);
  local_b8 = 0;
  uStack_b0 = 0;
  uVar10 = *(ushort *)(param_3 + 0x30) >> (ulong)(uVar22 & 0x1f);
  uVar11 = uVar3 >> (ulong)(uVar22 & 0x1f);
  uVar8 = *(ushort *)(param_3 + 0x30) >> (ulong)(param_4 & 0x1f);
  local_f0 = PTR_DAT_04bd1178 + 0x10;
  local_d0 = (undefined **)0x0;
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  uVar9 = uVar3 >> (ulong)(param_4 & 0x1f);
  if (*(short *)(param_3 + 0x3a) != 3) {
    uVar3 = 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_150 = 0;
  uVar1 = uVar3;
  if (uVar3 <= uVar11) {
    uVar1 = uVar11;
  }
  local_148 = 0;
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  local_140 = 0;
  if (uVar3 <= uVar9) {
    uVar3 = uVar9;
  }
  local_178[0] = 0xffffffff;
  fVar27 = (float)uVar8;
  local_138 = "agl::TextureData";
  fVar28 = (float)uVar3;
  local_130 = 0x10000;
  local_98 = 0;
  uStack_90 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_118 = 0xff;
  local_114 = 0;
  local_1d0 = PTR_DAT_04bd1198 + 0x10;
  local_f8 = 0;
  local_100 = 0;
  local_110 = 0x80000000000;
  local_108 = 0;
  local_e0 = 0;
  local_e8 = fVar27;
  fStack_e4 = fVar28;
  local_d8 = fVar27;
  fStack_d4 = fVar28;
  FUN_01560750(&local_1d0,param_3,0,0);
  if ((local_114 >> 0x10 & 0xff) != param_4) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(&local_118,0x10);
      if (bVar6) {
        cVar5 = ExclusiveMonitorsStatus();
        local_118 = local_118 | 1;
      }
    } while (cVar5 != '\0');
    local_114._0_3_ = CONCAT12((char)param_4,(undefined2)local_114);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = &local_1d0;
  (**(code **)(local_f0 + 0x38))(&local_f0,param_1);
  local_1e8 = 0xff7fffffff7fffff;
  local_1f8 = PTR_DAT_04bd0f08 + 0x10;
  local_1f0 = 0x7f7fffff7f7fffff;
  local_1e0 = *(uint *)PTR_DAT_04bd0ea8;
  local_1dc = 0x3f80000000000000;
  if (local_1e0 < 6) {
    if ((1 << (ulong)(local_1e0 & 0x1f) & 0x39U) == 0) {
      fVar29 = fStack_e4;
      fVar30 = local_e8;
    }
    else {
      fVar29 = local_e8;
      fVar30 = fStack_e4;
    }
    fVar25 = fVar29;
    fVar12 = 0.0;
    if (fVar29 <= 0.0) {
      fVar25 = 0.0;
      fVar12 = fVar29;
    }
    fVar26 = fVar30;
    fVar29 = 0.0;
    if (fVar30 <= 0.0) {
      fVar26 = 0.0;
      fVar29 = fVar30;
    }
    local_1f0 = CONCAT44(fVar29,fVar12);
    local_1e8 = CONCAT44(fVar26,fVar25);
  }
  fVar29 = (float)uVar10;
  fVar30 = (float)uVar1;
  FUN_038e77e4(&local_1f8,param_1,&local_f0);
  FUN_038e4cec(local_26c);
  local_26c[0] = 0;
  local_268 = local_268 & 0xfffffffe;
  FUN_038e4d90(local_26c,param_1);
  puVar16 = *(uint **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x40) + 0x38);
  if (*puVar16 < 5) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(*(long *)(puVar16 + 2) + 0x20);
  }
  FUN_03907810(lVar20,param_1);
  puVar16 = (uint *)(lVar20 + 0x14);
  do {
    uVar4 = *puVar16;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
    if (bVar6) {
      *puVar16 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_350 = fVar29;
  fStack_34c = fVar30;
  local_348 = fVar27;
  fStack_344 = fVar28;
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar16 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar16 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
    if (bVar6) {
      *puVar16 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (**(int **)(lVar20 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar20 + 0x38),
               0x10,&local_350);
  }
  FUN_0390d120(&local_350,param_2);
  local_298 = (float)uVar22;
  local_290 = 0;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_27c,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      local_27c = local_27c & 0xfffffff7 | 8;
    }
  } while (cVar5 != '\0');
  local_289 = 7;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_27c,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      local_27c = local_27c & 0xfffffffd | 2;
    }
  } while (cVar5 != '\0');
  local_288 = 7;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_27c,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      local_27c = local_27c & 0xfffffffd | 2;
    }
  } while (cVar5 != '\0');
  do {
    uVar22 = *puVar16;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
    if (bVar6) {
      *puVar16 = uVar22 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  fStack_294 = local_298;
  if ((uVar22 & 0x7fffffff) != 0) {
    if ((int)uVar22 < 0) {
      if ((int)*puVar16 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar16 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
    if (bVar6) {
      *puVar16 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(&local_350,param_1,*(undefined8 *)(lVar20 + 0x68),0xffffffff,0);
  uVar19 = *(undefined8 *)(param_1 + 0xb8);
  lVar20 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar19,0x10,lVar20 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar19,0x10,lVar20 + 0x1068);
  puVar14 = PTR_DAT_04bcf1e8;
  puVar13 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar20 + 0x1010);
  if (iVar2 != 0) {
    lVar20 = *(long *)(lVar20 + 0x1018);
    uVar21 = 0;
    uVar23 = 0;
    do {
      lVar24 = *(long *)(lVar20 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3));
      if (lVar24 != 0) {
        uVar15 = (**(code **)puVar13)(lVar24 + 8);
        (**(code **)puVar14)(uVar19,uVar21 & 0xffffffff,uVar15,*(undefined4 *)(lVar24 + 0x118));
      }
      uVar21 = uVar23 + 1;
      uVar23 = uVar21 & 0xffffffff;
    } while (iVar2 != (int)uVar21);
  }
  lVar20 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar20 + 0x480);
  if (iVar2 != 0) {
    uVar18 = *(undefined4 *)(lVar20 + 0x464);
    uVar15 = *(undefined8 *)(param_1 + 0xb8);
    uVar19 = (**(code **)puVar13)(lVar20 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar15,uVar18,*(undefined4 *)(lVar20 + 0x460),iVar2,uVar19);
  }
  puVar13 = PTR_DAT_04bc1010;
  if (local_178[0] != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar22 = local_178[0] - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar22) {
        uVar22 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar22 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) =
             *(ulong *)(param_1 + 0x100) | 1L << ((ulong)local_178[0] & 0x3f);
        goto LAB_0162938c;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar18 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar18);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
LAB_0162938c:
  if (local_276 != -1) {
    lVar20 = *(long *)puVar13;
    nn::os::LockMutex((MutexType *)(lVar20 + 0x580));
    uVar22 = (int)local_276 - (uint)*(ushort *)(lVar20 + 0x5c0);
    if (*(uint *)(lVar20 + 0x5a0) <= uVar22) {
      uVar22 = 0;
    }
    lVar24 = *(long *)(lVar20 + 0x5a8) + (long)(int)uVar22 * 0x80;
    sVar7 = *(short *)(lVar24 + 0x76) + -1;
    *(short *)(lVar24 + 0x76) = sVar7;
    if (sVar7 == 0) {
      *(short *)(lVar20 + 0x5c4) = *(short *)(lVar20 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar20 + 0x580));
    local_276 = -1;
  }
  FUN_038fd0e0(auStack_300);
  local_1d0 = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(local_178);
  return;
}

