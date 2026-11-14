
void FUN_01623010(long param_1,long param_2,uint param_3,long param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  float fVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 local_26c;
  float local_264;
  float local_260;
  undefined2 local_25c [2];
  uint local_258;
  uint local_240;
  undefined4 local_232;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined8 local_1cc;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  uint local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined4 local_120;
  uint local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  local_c0 = (undefined **)0x0;
  local_b8 = 0;
  uVar1 = *(ushort *)(param_2 + 0x32);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uVar6 = *(ushort *)(param_2 + 0x30) >> (ulong)(param_3 & 0x1f);
  puVar19 = PTR_DAT_04bd1178 + 0x10;
  uVar7 = uVar1 >> (ulong)(param_3 & 0x1f);
  local_90 = 0;
  local_88 = 0;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (*(short *)(param_2 + 0x3a) != 3) {
    uVar1 = 1;
  }
  fVar25 = (float)uVar6;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  local_130 = 0;
  pcStack_128 = "agl::TextureData";
  fVar27 = (float)uVar1;
  local_168[0] = 0xffffffff;
  local_80 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_120 = 0x10000;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_108 = 0xff;
  local_104 = 0;
  local_1c0 = PTR_DAT_04bd1198 + 0x10;
  local_d0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0x80000000000;
  uStack_f8 = 0;
  local_e0 = puVar19;
  local_d8 = fVar25;
  fStack_d4 = fVar27;
  local_c8 = fVar25;
  fStack_c4 = fVar27;
  FUN_01560750(&local_1c0,param_2,0,0);
  if ((local_104 >> 0x10 & 0xff) != param_3) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_108,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        local_108 = local_108 | 1;
      }
    } while (cVar4 != '\0');
    local_104._0_3_ = CONCAT12((char)param_3,(undefined2)local_104);
    puVar19 = local_e0;
  }
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = &local_1c0;
  (**(code **)(puVar19 + 0x38))(&local_e0,param_1);
  local_1d8 = 0xff7fffffff7fffff;
  local_1e8 = PTR_DAT_04bd0f08 + 0x10;
  local_1e0 = 0x7f7fffff7f7fffff;
  local_1d0 = *(uint *)PTR_DAT_04bd0ea8;
  local_1cc = 0x3f80000000000000;
  if (local_1d0 < 6) {
    if ((1 << (ulong)(local_1d0 & 0x1f) & 0x39U) == 0) {
      fVar21 = fStack_d4;
      fVar22 = local_d8;
    }
    else {
      fVar21 = local_d8;
      fVar22 = fStack_d4;
    }
    fVar24 = fVar21;
    fVar8 = 0.0;
    if (fVar21 <= 0.0) {
      fVar24 = 0.0;
      fVar8 = fVar21;
    }
    fVar23 = fVar22;
    fVar21 = 0.0;
    if (fVar22 <= 0.0) {
      fVar23 = 0.0;
      fVar21 = fVar22;
    }
    local_1e0 = CONCAT44(fVar21,fVar8);
    local_1d8 = CONCAT44(fVar23,fVar24);
  }
  FUN_038e77e4(&local_1e8,param_1,&local_e0);
  puVar14 = *(uint **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x40) + 0x38);
  if (*puVar14 < 0x10) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(puVar14 + 2) + 0x78);
  }
  FUN_03907810(lVar17,param_1);
  FUN_038e4cec(local_25c);
  local_25c[0] = 0;
  local_232 = 0x1010102;
  local_258 = local_258 | 1;
  local_240 = local_240 & 0xfffffff0 | 7;
  FUN_038e4d90(local_25c,param_1);
  puVar14 = (uint *)(lVar17 + 0x14);
  local_26c = CONCAT44(fVar27,fVar25);
  do {
    uVar3 = *puVar14;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar5) {
      *puVar14 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_264 = fVar25;
  local_260 = fVar27;
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar14 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar14 < 0);
      }
    }
    else {
      FUN_03907b80(lVar17);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar5) {
      *puVar14 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar9 = PTR_DAT_04bd0fc8;
    puVar19 = PTR_DAT_04bcf2e0;
  } while (cVar4 != '\0');
  if (**(int **)(lVar17 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar17 + 0x38),
               0x10,&local_26c);
  }
  puVar10 = (undefined8 *)(**(code **)(*(long *)(param_4 + 0x188) + 0xf0))(param_4 + 0x188);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(param_4 + 0x200) + 0xf0))(param_4 + 0x200);
  local_260 = (float)*puVar11;
  local_264 = *(float *)(puVar10 + 1);
  local_26c = *puVar10;
  do {
    uVar3 = *puVar14;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar5) {
      *puVar14 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar14 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar14 < 0);
      }
    }
    else {
      FUN_03907b80(lVar17);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar5) {
      *puVar14 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar2 = *(int *)(*(long *)(lVar17 + 0x38) + (ulong)(1 < *(uint *)(lVar17 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    lVar15 = *(long *)puVar9;
    (**(code **)puVar19)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar15 + 0x70),
               *(undefined8 *)(lVar15 + 0x18),(long)iVar2,0x10,&local_26c);
  }
  lVar15 = param_4 + 0x1c0;
  puVar11 = (undefined4 *)(**(code **)(*(long *)(param_4 + 0x1c0) + 0xf0))(lVar15);
  uVar26 = *puVar11;
  lVar12 = (**(code **)(*(long *)(param_4 + 0x1c0) + 0xf0))(lVar15);
  uVar28 = *(undefined4 *)(lVar12 + 4);
  lVar15 = (**(code **)(*(long *)(param_4 + 0x1c0) + 0xf0))(lVar15);
  local_264 = *(float *)(lVar15 + 8);
  local_26c = CONCAT44(uVar28,uVar26);
  local_260 = 1.0;
  do {
    uVar3 = *puVar14;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar5) {
      *puVar14 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar14 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar14 < 0);
      }
    }
    else {
      FUN_03907b80(lVar17);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar14,0x10);
    if (bVar5) {
      *puVar14 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar15 = 0x30;
  if (*(uint *)(lVar17 + 0x30) < 3) {
    lVar15 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar17 + 0x38) + lVar15);
  if (iVar2 != -1) {
    lVar17 = *(long *)puVar9;
    (**(code **)puVar19)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar17 + 0x70),
               *(undefined8 *)(lVar17 + 0x18),(long)iVar2,0x10,&local_26c);
  }
  uVar16 = *(undefined8 *)(param_1 + 0xb8);
  lVar17 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar17 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar17 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar19 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar17 + 0x1010);
  if (iVar2 != 0) {
    lVar17 = *(long *)(lVar17 + 0x1018);
    uVar18 = 0;
    uVar20 = 0;
    do {
      lVar15 = *(long *)(lVar17 + (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3));
      if (lVar15 != 0) {
        uVar13 = (**(code **)puVar19)(lVar15 + 8);
        (**(code **)puVar9)(uVar16,uVar18 & 0xffffffff,uVar13,*(undefined4 *)(lVar15 + 0x118));
      }
      uVar18 = uVar20 + 1;
      uVar20 = uVar18 & 0xffffffff;
    } while (iVar2 != (int)uVar18);
  }
  lVar17 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar17 + 0x480);
  if (iVar2 != 0) {
    uVar26 = *(undefined4 *)(lVar17 + 0x464);
    uVar13 = *(undefined8 *)(param_1 + 0xb8);
    uVar16 = (**(code **)puVar19)(lVar17 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar13,uVar26,*(undefined4 *)(lVar17 + 0x460),iVar2,uVar16);
  }
  if (local_168[0] != 0xffffffff) {
    lVar17 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar17 + 0x5c8) >> 3 & 1) == 0) {
      uVar3 = local_168[0] - *(ushort *)(lVar17 + 0x3da);
      if (*(uint *)(lVar17 + 0x368) <= uVar3) {
        uVar3 = 0;
      }
      if ((*(uint *)(*(long *)(lVar17 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) =
             *(ulong *)(param_1 + 0x100) | 1L << ((ulong)local_168[0] & 0x3f);
        goto LAB_01623710;
      }
    }
    if ((*(uint *)(lVar17 + 0x5c8) >> 5 & 1) == 0) {
      uVar28 = 0x112;
      uVar26 = 0x12;
    }
    else {
      uVar28 = 0x111;
      uVar26 = 0x11;
    }
    if ((*(uint *)(lVar17 + 800) & 2) != 0) {
      uVar26 = uVar28;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar26);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
LAB_01623710:
  local_1c0 = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(local_168);
  return;
}

