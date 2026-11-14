
void FUN_01623750(long param_1,long param_2,long param_3,uint param_4,int param_5,ulong param_6)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  float fVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_2e8;
  float fStack_2e4;
  float local_2e0;
  float fStack_2dc;
  undefined1 auStack_298 [104];
  float local_230;
  float fStack_22c;
  undefined4 local_228;
  undefined1 local_221;
  undefined1 local_220;
  uint local_214;
  short local_20e;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  uint local_1f0;
  undefined8 local_1ec;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188 [2];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined4 local_140;
  uint local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  if (param_4 == 0) {
    if ((param_6 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(byte *)(param_2 + 0x39) - 1;
    }
  }
  else {
    uVar15 = param_4 - 1;
    if ((param_6 & 1) != 0) {
      uVar15 = param_4 + 1;
    }
  }
  fVar26 = (float)uVar15;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar3 = *(ushort *)(param_3 + 0x32);
  local_e0 = (undefined **)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_100 = PTR_DAT_04bd1178 + 0x10;
  local_188[0] = 0xffffffff;
  local_150 = 0;
  pcStack_148 = "agl::TextureData";
  uVar9 = *(ushort *)(param_3 + 0x30) >> (ulong)((int)fVar26 & 0x1f);
  uVar10 = uVar3 >> (ulong)((int)fVar26 & 0x1f);
  uVar7 = *(ushort *)(param_3 + 0x30) >> (ulong)(param_4 & 0x1f);
  local_140 = 0x10000;
  local_a8 = 0;
  uStack_a0 = 0;
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar8 = uVar3 >> (ulong)(param_4 & 0x1f);
  if (*(short *)(param_3 + 0x3a) != 3) {
    uVar3 = 1;
  }
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uVar1 = uVar3;
  if (uVar3 <= uVar10) {
    uVar1 = uVar10;
  }
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_180 = 0;
  uStack_178 = 0;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  fVar27 = (float)uVar7;
  local_170 = 0;
  uStack_168 = 0;
  fVar28 = (float)uVar3;
  local_160 = 0;
  uStack_158 = 0;
  local_128 = 0xff;
  local_124 = 0;
  local_1e0 = PTR_DAT_04bd1198 + 0x10;
  local_f0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0x80000000000;
  uStack_118 = 0;
  local_f8 = fVar27;
  fStack_f4 = fVar28;
  local_e8 = fVar27;
  fStack_e4 = fVar28;
  FUN_01560750(&local_1e0,param_3,0,0);
  if ((local_124 >> 0x10 & 0xff) != param_4) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_128,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        local_128 = local_128 | 1;
      }
    } while (cVar4 != '\0');
    local_124._0_3_ = CONCAT12((char)param_4,(undefined2)local_124);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = &local_1e0;
  (**(code **)(local_100 + 0x38))(&local_100,param_1);
  local_1f8 = 0xff7fffffff7fffff;
  local_208 = PTR_DAT_04bd0f08 + 0x10;
  local_200 = 0x7f7fffff7f7fffff;
  local_1f0 = *(uint *)PTR_DAT_04bd0ea8;
  local_1ec = 0x3f80000000000000;
  if (local_1f0 < 6) {
    if ((1 << (ulong)(local_1f0 & 0x1f) & 0x39U) == 0) {
      fVar29 = fStack_f4;
      fVar30 = local_f8;
    }
    else {
      fVar29 = local_f8;
      fVar30 = fStack_f4;
    }
    fVar25 = fVar29;
    fVar11 = 0.0;
    if (fVar29 <= 0.0) {
      fVar25 = 0.0;
      fVar11 = fVar29;
    }
    fVar24 = fVar30;
    fVar29 = 0.0;
    if (fVar30 <= 0.0) {
      fVar24 = 0.0;
      fVar29 = fVar30;
    }
    local_200 = CONCAT44(fVar29,fVar11);
    local_1f8 = CONCAT44(fVar24,fVar25);
  }
  fVar29 = (float)uVar9;
  fVar30 = (float)uVar1;
  FUN_038e77e4(&local_208,param_1,&local_100);
  uVar15 = 5;
  if (param_5 != 1) {
    uVar15 = 7;
  }
  if (param_5 < 1) {
    uVar15 = 6;
  }
  puVar17 = *(uint **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x40) + 0x38);
  if (uVar15 < *puVar17) {
    lVar20 = *(long *)(*(long *)(puVar17 + 2) + (ulong)uVar15 * 8);
  }
  else {
    lVar20 = 0;
  }
  FUN_03907810(lVar20,param_1);
  puVar17 = (uint *)(lVar20 + 0x14);
  do {
    uVar15 = *puVar17;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
    if (bVar5) {
      *puVar17 = uVar15 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_2e8 = fVar29;
  fStack_2e4 = fVar30;
  local_2e0 = fVar27;
  fStack_2dc = fVar28;
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar17 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar17 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
    if (bVar5) {
      *puVar17 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (**(int **)(lVar20 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar20 + 0x38),
               0x10,&local_2e8);
  }
  FUN_0390d120(&local_2e8,param_2);
  local_228 = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_214,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      local_214 = local_214 & 0xfffffff7 | 8;
    }
  } while (cVar4 != '\0');
  local_221 = 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_214,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      local_214 = local_214 & 0xfffffffd | 2;
    }
  } while (cVar4 != '\0');
  local_220 = 6;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_214,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      local_214 = local_214 & 0xfffffffd | 2;
    }
  } while (cVar4 != '\0');
  do {
    uVar15 = *puVar17;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
    if (bVar5) {
      *puVar17 = uVar15 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_230 = fVar26;
  fStack_22c = fVar26;
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar17 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar17 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
    if (bVar5) {
      *puVar17 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0390d290(&local_2e8,param_1,*(undefined8 *)(lVar20 + 0x68),0xffffffff,0);
  uVar19 = *(undefined8 *)(param_1 + 0xb8);
  lVar20 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar19,0x10,lVar20 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar19,0x10,lVar20 + 0x1068);
  puVar13 = PTR_DAT_04bcf1e8;
  puVar12 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar20 + 0x1010);
  if (iVar2 != 0) {
    lVar20 = *(long *)(lVar20 + 0x1018);
    uVar21 = 0;
    uVar22 = 0;
    do {
      lVar23 = *(long *)(lVar20 + (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
      if (lVar23 != 0) {
        uVar14 = (**(code **)puVar12)(lVar23 + 8);
        (**(code **)puVar13)(uVar19,uVar21 & 0xffffffff,uVar14,*(undefined4 *)(lVar23 + 0x118));
      }
      uVar21 = uVar22 + 1;
      uVar22 = uVar21 & 0xffffffff;
    } while (iVar2 != (int)uVar21);
  }
  lVar20 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar20 + 0x480);
  if (iVar2 != 0) {
    uVar18 = *(undefined4 *)(lVar20 + 0x464);
    uVar14 = *(undefined8 *)(param_1 + 0xb8);
    uVar19 = (**(code **)puVar12)(lVar20 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar14,uVar18,*(undefined4 *)(lVar20 + 0x460),iVar2,uVar19);
  }
  puVar12 = PTR_DAT_04bc1010;
  if (local_188[0] != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar15 = local_188[0] - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar15) {
        uVar15 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar15 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) =
             *(ulong *)(param_1 + 0x100) | 1L << ((ulong)local_188[0] & 0x3f);
        goto LAB_01623d7c;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar16 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar16 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar18 = uVar16;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar18);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
LAB_01623d7c:
  if (local_20e != -1) {
    lVar20 = *(long *)puVar12;
    nn::os::LockMutex((MutexType *)(lVar20 + 0x580));
    uVar15 = (int)local_20e - (uint)*(ushort *)(lVar20 + 0x5c0);
    if (*(uint *)(lVar20 + 0x5a0) <= uVar15) {
      uVar15 = 0;
    }
    lVar23 = *(long *)(lVar20 + 0x5a8) + (long)(int)uVar15 * 0x80;
    sVar6 = *(short *)(lVar23 + 0x76) + -1;
    *(short *)(lVar23 + 0x76) = sVar6;
    if (sVar6 == 0) {
      *(short *)(lVar20 + 0x5c4) = *(short *)(lVar20 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar20 + 0x580));
    local_20e = -1;
  }
  FUN_038fd0e0(auStack_298);
  local_1e0 = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(local_188);
  return;
}

