
void FUN_0393bdc0(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_288;
  float local_27c;
  float fStack_278;
  undefined2 local_24c [2];
  undefined4 local_248;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  undefined8 local_1bc;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined4 local_110;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = 0;
  local_d0 = PTR_DAT_04bd1178 + 0x10;
  local_80 = 0;
  uStack_78 = 0;
  local_158[0] = 0xffffffff;
  local_70 = 0;
  local_120 = 0;
  pcStack_118 = "agl::TextureData";
  local_110 = 0x10000;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_f8 = 0xff;
  local_f4 = 0;
  local_1b0 = PTR_DAT_04bd1198 + 0x10;
  local_f0 = 0x80000000000;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uVar3 = *(uint *)PTR_DAT_04bd0ea8;
  local_1d8 = PTR_DAT_04bd0f08 + 0x10;
  local_1bc = 0x3f80000000000000;
  local_1d0 = 0x7f7fffff7f7fffff;
  local_1c8 = 0xff7fffffff7fffff;
  local_1c0 = uVar3;
  FUN_01560750(&local_1b0,param_3,0,0);
  uVar5 = *(ushort *)(param_3 + 0x30);
  uVar6 = *(ushort *)(param_3 + 0x32);
  local_c0 = 0;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  local_c8 = (float)uVar5;
  uVar5 = uVar6;
  if (*(short *)(param_3 + 0x3a) != 3) {
    uVar5 = 1;
  }
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  fStack_c4 = (float)uVar5;
  local_b8 = local_c8;
  fStack_b4 = fStack_c4;
  local_b0 = &local_1b0;
  FUN_03902024(&local_d0,param_2);
  if (uVar3 < 6) {
    if ((1 << (ulong)(uVar3 & 0x1f) & 0x39U) == 0) {
      fVar21 = fStack_c4;
      fVar22 = local_c8;
    }
    else {
      fVar21 = local_c8;
      fVar22 = fStack_c4;
    }
    fVar24 = fVar21;
    fVar9 = 0.0;
    if (fVar21 <= 0.0) {
      fVar24 = 0.0;
      fVar9 = fVar21;
    }
    fVar23 = fVar22;
    fVar21 = 0.0;
    if (fVar22 <= 0.0) {
      fVar23 = 0.0;
      fVar21 = fVar22;
    }
    local_1d0 = CONCAT44(fVar21,fVar9);
    local_1c8 = CONCAT44(fVar23,fVar24);
  }
  FUN_038e77e4(&local_1d8,param_2,&local_d0);
  FUN_038e4cec(local_24c);
  local_24c[0] = 0;
  local_248 = 0;
  FUN_038e4d90(local_24c,param_2);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x4d) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x260);
  }
  FUN_03907810(lVar18,param_2);
  *(undefined4 *)(param_1 + 0x2b0) = *param_4;
  *(undefined4 *)(param_1 + 0x2b4) = param_4[1];
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_4 + 4);
  *(undefined4 *)(param_1 + 0x2c8) = param_4[6];
  *(undefined4 *)(param_1 + 0x2cc) = param_4[7];
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_4 + 10);
  uVar15 = *(undefined8 *)(param_4 + 0x10);
  uVar16 = *(undefined8 *)(param_4 + 0xc);
  uVar12 = *(undefined8 *)(param_4 + 0xe);
  *(undefined8 *)(param_1 + 0x2f7) = *(undefined8 *)((long)param_4 + 0x47);
  *(undefined8 *)(param_1 + 0x2f0) = uVar15;
  *(undefined8 *)(param_1 + 0x2e8) = uVar12;
  *(undefined8 *)(param_1 + 0x2e0) = uVar16;
  FUN_038fd1e0(param_1 + 0x300);
  FUN_038fd2f0(param_1 + 0x300,param_4 + 0x14);
  uVar14 = param_4[0x26];
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_4 + 0x24);
  puVar1 = (uint *)(param_1 + 900);
  *(undefined4 *)(param_1 + 0x348) = uVar14;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 | 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *(undefined2 *)(param_1 + 0x374) = 0x101;
  *(undefined1 *)(param_1 + 0x376) = 1;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 | 4;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  puVar1 = (uint *)(lVar18 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar3 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
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
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_0390d290(param_1 + 0x2b0,param_2,*(undefined8 *)(lVar18 + 0x68),0xffffffff,0);
  uVar5 = *(ushort *)(param_4 + 0xc);
  uVar6 = *(ushort *)((long)param_4 + 0x32);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar2 = uVar6;
  if (*(short *)((long)param_4 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar6) {
    uVar2 = uVar6;
  }
  local_27c = 1.0 / (float)uVar5;
  fStack_278 = 1.0 / (float)uVar2;
  local_288 = FUN_03900ad0(*(undefined8 *)PTR_DAT_04bd1128,&local_27c,0x30);
  FUN_0391e640(lVar18,param_2,0,&local_288,0);
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar18 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar18 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar18 + 0x1068);
  puVar11 = PTR_DAT_04bcf1e8;
  puVar10 = PTR_DAT_04bbd560;
  iVar4 = *(int *)(lVar18 + 0x1010);
  if (iVar4 != 0) {
    lVar18 = *(long *)(lVar18 + 0x1018);
    uVar17 = 0;
    uVar19 = 0;
    do {
      lVar20 = *(long *)(lVar18 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
      if (lVar20 != 0) {
        uVar12 = (**(code **)puVar10)(lVar20 + 8);
        (**(code **)puVar11)(uVar16,uVar17 & 0xffffffff,uVar12,*(undefined4 *)(lVar20 + 0x118));
      }
      uVar17 = uVar19 + 1;
      uVar19 = uVar17 & 0xffffffff;
    } while (iVar4 != (int)uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bbd7e8;
  iVar4 = *(int *)(lVar18 + 0x480);
  if (iVar4 != 0) {
    uVar14 = *(undefined4 *)(lVar18 + 0x464);
    uVar12 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = (**(code **)puVar10)(lVar18 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar12,uVar14,*(undefined4 *)(lVar18 + 0x460),iVar4,uVar16);
  }
  if (local_158[0] != 0xffffffff) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
      uVar3 = local_158[0] - *(ushort *)(lVar18 + 0x3da);
      if (*(uint *)(lVar18 + 0x368) <= uVar3) {
        uVar3 = 0;
      }
      if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) =
             *(ulong *)(param_2 + 0x100) | 1L << ((ulong)local_158[0] & 0x3f);
        goto LAB_0393c32c;
      }
    }
    if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar14 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar14 = 0x11;
    }
    if ((*(uint *)(lVar18 + 800) & 2) != 0) {
      uVar14 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar14);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_0393c32c:
  local_1b0 = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(local_158);
  return;
}

