
void FUN_03a8d580(long param_1,ulong param_2,uint param_3,long param_4)

{
  uint *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined2 uVar13;
  char cVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  undefined4 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 *puVar34;
  long *plVar35;
  ulong uVar36;
  long lVar37;
  undefined4 *puVar38;
  ulong uVar39;
  long lVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  uint local_150;
  undefined8 local_14c;
  undefined *local_140;
  char *local_138;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  
  puVar5 = PTR_DAT_04bb2020;
  uVar24 = (uint)((*(float *)(param_4 + 0x18) - *(float *)(param_4 + 0x10)) *
                 *(float *)(param_1 + 800));
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar37 = *(long *)(param_1 + 0x1d8);
  lVar30 = *(long *)PTR_DAT_04bbd510;
  local_140 = PTR_DAT_04bb2020 + 0x10;
  uVar7 = param_3;
  if (*(uint *)(param_1 + 0x1d0) <= param_3) {
    uVar7 = 0;
  }
  bVar16 = (*(uint *)(param_1 + 0x1e0) & 1) != 0;
  plVar35 = (long *)(lVar37 + (long)(int)uVar7 * 0x3b0);
  local_138 = "reflection_color";
  uVar27 = (uint)((*(float *)(param_4 + 0x1c) - *(float *)(param_4 + 0x14)) *
                 *(float *)(param_1 + 0x324));
  if (bVar16) {
    uVar24 = uVar24 & 0xfffffff8;
  }
  if (bVar16) {
    uVar27 = uVar27 & 0xfffffff8;
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    iVar17 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar17 = (int)lVar18 + -1;
  }
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar17);
  lVar18 = lVar30 + 0x10;
  lVar19 = FUN_03948e10(lVar30,param_2,lVar18 + (long)iVar17 * 0x290,&local_140,0x22,1,uVar24,uVar27
                        ,1,0,1,0,1,0,0,0);
  local_140 = puVar5 + 0x10;
  *plVar35 = lVar19;
  local_138 = "reflection_depth";
  lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar19 == 0) {
    iVar17 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar17 = (int)lVar19 + -1;
  }
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar17);
  uVar20 = FUN_03948e10(lVar30,param_2,lVar18 + (long)iVar17 * 0x290,&local_140,0x5a,1,uVar24,uVar27
                        ,1,0,1,&local_a0,1,0,0,0);
  lVar23 = *plVar35;
  lVar33 = lVar37 + (long)(int)uVar7 * 0x3b0;
  puVar34 = (undefined8 *)(lVar33 + 8);
  *puVar34 = uVar20;
  lVar19 = lVar33 + 0x10;
  FUN_01560750(lVar19,lVar23,*(undefined1 *)(lVar33 + 0xce),*(undefined2 *)(lVar33 + 0xcc));
  FUN_0155a100(lVar33 + 0xf0,*puVar34,*(undefined1 *)(lVar33 + 0x1ae),
               *(undefined2 *)(lVar33 + 0x1ac));
  if ((*(byte *)(param_1 + 0x1e0) & 1) != 0) {
    lVar23 = lVar37 + (long)(int)uVar7 * 0x3b0;
    if (((local_98 != *(long *)(lVar23 + 0x1c0)) || ((int)local_a0 != *(int *)(lVar23 + 0x1b8))) ||
       (local_a0._4_4_ != *(int *)(lVar37 + (long)(int)uVar7 * 0x3b0 + 0x1bc))) {
      *(int *)(lVar23 + 0x1b8) = (int)local_a0;
      lVar32 = lVar37 + (long)(int)uVar7 * 0x3b0;
      *(int *)(lVar32 + 0x1bc) = local_a0._4_4_;
      *(undefined8 *)(lVar32 + 0x1c8) = uStack_90;
      *(long *)(lVar23 + 0x1c0) = local_98;
      puVar1 = (uint *)(lVar33 + 0x1a8);
      do {
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar16) {
          *puVar1 = *puVar1 | 8;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
    }
  }
  lVar23 = lVar37 + (long)(int)uVar7 * 0x3b0;
  plVar2 = (long *)(lVar23 + 0x1d0);
  *(undefined4 *)(lVar23 + 0x1d8) = *(undefined4 *)(param_4 + 8);
  uVar41 = *(undefined4 *)(param_4 + 0xc);
  *(undefined8 *)(lVar23 + 0x1e0) = 0;
  *(long *)(lVar23 + 0x230) = lVar33 + 0xf0;
  *(float *)(lVar23 + 0x1e8) = (float)uVar24;
  *(undefined4 *)(lVar23 + 0x1dc) = uVar41;
  *(float *)(lVar23 + 0x1ec) = (float)uVar27;
  (**(code **)(*(long *)(lVar23 + 0x1d0) + 0x38))(plVar2,param_2);
  local_c0 = 0x7f7fffff7f7fffff;
  local_b8 = 0xff7fffffff7fffff;
  local_c8 = PTR_DAT_04bd0f08 + 0x10;
  local_ac = 0x3f80000000000000;
  local_b0 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_b0 < 6) {
    if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
      fVar43 = *(float *)(lVar23 + 0x1d8);
      fVar42 = *(float *)(lVar23 + 0x1dc);
    }
    else {
      fVar42 = *(float *)(lVar23 + 0x1d8);
      fVar43 = *(float *)(lVar23 + 0x1dc);
    }
    fVar45 = fVar42;
    fVar46 = 0.0;
    if (fVar42 <= 0.0) {
      fVar45 = 0.0;
      fVar46 = fVar42;
    }
    fVar44 = fVar43;
    fVar42 = 0.0;
    if (fVar43 <= 0.0) {
      fVar44 = 0.0;
      fVar42 = fVar43;
    }
    local_c0 = CONCAT44(fVar42,fVar46);
    local_b8 = CONCAT44(fVar44,fVar45);
  }
  FUN_038e77e4(&local_c8,param_2,plVar2);
  local_140 = *(undefined **)(param_1 + 0x2f8);
  local_138 = (char *)(ulong)*(uint *)(param_1 + 0x300);
  FUN_039025b0(0x3f800000,plVar2,param_2,0,3,&local_140,0,&local_c8,1);
  puVar21 = *(undefined8 **)(param_1 + 0x208);
  if (puVar21 != (undefined8 *)0x0) {
    local_140 = (undefined *)CONCAT44(local_140._4_4_,param_3);
    local_138 = (char *)param_2;
    (**(code **)*puVar21)(puVar21,&local_140);
  }
  uVar24 = *(uint *)(lVar33 + 0x68);
  if (uVar24 != 0xffffffff) {
    lVar32 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar32 + 0x5c8) >> 3 & 1) == 0) {
      uVar27 = uVar24 - *(ushort *)(lVar32 + 0x3da);
      if (*(uint *)(lVar32 + 0x368) <= uVar27) {
        uVar27 = 0;
      }
      if ((*(uint *)(*(long *)(lVar32 + 0x370) + (long)(int)uVar27 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar24 & 0x3f);
        goto LAB_03a8da00;
      }
    }
    if ((*(uint *)(lVar32 + 0x5c8) >> 5 & 1) == 0) {
      uVar28 = 0x112;
      uVar41 = 0x12;
    }
    else {
      uVar28 = 0x111;
      uVar41 = 0x11;
    }
    if ((*(uint *)(lVar32 + 800) & 2) != 0) {
      uVar41 = uVar28;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar41);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a8da00:
  FUN_039499cc(lVar30,*puVar34);
  *puVar34 = 0;
  lVar32 = lVar37 + (long)(int)uVar7 * 0x3b0;
  *(undefined8 *)(lVar23 + 0x230) = 0;
  puVar34 = (undefined8 *)(lVar32 + 0x268);
  puVar3 = (undefined4 *)(lVar32 + 0x238);
  uVar10 = *(ushort *)(lVar32 + 0x268);
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  uVar11 = *(ushort *)(lVar32 + 0x26a);
  uVar8 = uVar11;
  if (*(short *)(lVar32 + 0x272) != 3) {
    uVar8 = 1;
  }
  if (uVar8 <= uVar11) {
    uVar8 = uVar11;
  }
  FUN_038e4cec(&local_140);
  local_140 = (undefined *)((ulong)local_140 & 0xfffffffeffff0000);
  FUN_038e4d90(&local_140,param_2);
  if (1.0 <= *(float *)(param_1 + 0x340) * *(float *)(param_1 + 0x344)) goto LAB_03a8ddfc;
  lVar25 = *plVar35;
  uVar11 = *(ushort *)(lVar25 + 0x30);
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  uVar12 = *(ushort *)(lVar25 + 0x32);
  uVar9 = uVar12;
  if (*(short *)(lVar25 + 0x3a) != 3) {
    uVar9 = 1;
  }
  if (uVar9 <= uVar12) {
    uVar9 = uVar12;
  }
  local_168 = PTR_DAT_04bb2020 + 0x10;
  uVar24 = (uint)(*(float *)(param_1 + 0x340) * (float)uVar11);
  local_160 = "reflection_reduce";
  uVar13 = *(undefined2 *)(*plVar35 + 0x98);
  uVar27 = (uint)(*(float *)(param_1 + 0x344) * (float)uVar9);
  lVar25 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar25 == 0) {
    local_178 = (float)nn::os::GetCurrentCoreNumber();
  }
  else {
    local_178 = (float)((int)lVar25 + -1);
  }
  lVar25 = FUN_03948e10(lVar30,param_2,lVar18 + (long)(int)local_178 * 0x290,&local_168,uVar13,1,
                        uVar24,uVar27,1,0,1,0,1,0,0,0);
  FUN_01560750(lVar19,lVar25,*(undefined1 *)(lVar33 + 0xce),*(undefined2 *)(lVar33 + 0xcc));
  fVar42 = (float)uVar24;
  fVar43 = (float)uVar27;
  *(undefined8 *)(lVar23 + 0x1e0) = 0;
  *(float *)(lVar23 + 0x1d8) = fVar42;
  *(float *)(lVar23 + 0x1dc) = fVar43;
  *(float *)(lVar23 + 0x1e8) = fVar42;
  *(float *)(lVar23 + 0x1ec) = fVar43;
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  local_158 = 0xff7fffffff7fffff;
  local_168 = PTR_DAT_04bd0f08 + 0x10;
  local_160 = (char *)0x7f7fffff7f7fffff;
  local_14c = 0x3f80000000000000;
  local_150 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_150 < 6) {
    if ((1 << (ulong)(local_150 & 0x1f) & 0x39U) == 0) {
      fVar43 = *(float *)(lVar23 + 0x1d8);
      fVar42 = *(float *)(lVar23 + 0x1dc);
    }
    else {
      fVar42 = *(float *)(lVar23 + 0x1d8);
      fVar43 = *(float *)(lVar23 + 0x1dc);
    }
    fVar45 = fVar42;
    fVar46 = 0.0;
    if (fVar42 <= 0.0) {
      fVar45 = 0.0;
      fVar46 = fVar42;
    }
    fVar44 = fVar43;
    fVar42 = 0.0;
    if (fVar43 <= 0.0) {
      fVar44 = 0.0;
      fVar42 = fVar43;
    }
    local_160 = (char *)CONCAT44(fVar42,fVar46);
    local_158 = CONCAT44(fVar44,fVar45);
  }
  FUN_038e77e4(&local_168,param_2,plVar2);
  puVar38 = (undefined4 *)*plVar35;
  *puVar3 = *puVar38;
  *(undefined4 *)(lVar32 + 0x23c) = puVar38[1];
  *(undefined8 *)(lVar32 + 0x240) = *(undefined8 *)(puVar38 + 2);
  *(undefined8 *)(lVar32 + 0x248) = *(undefined8 *)(puVar38 + 4);
  *(undefined4 *)(lVar32 + 0x250) = puVar38[6];
  *(undefined4 *)(lVar32 + 0x254) = puVar38[7];
  *(undefined8 *)(lVar32 + 600) = *(undefined8 *)(puVar38 + 8);
  *(undefined8 *)(lVar32 + 0x260) = *(undefined8 *)(puVar38 + 10);
  uVar20 = *(undefined8 *)(puVar38 + 0xc);
  uVar22 = *(undefined8 *)(puVar38 + 0xe);
  uVar31 = *(undefined8 *)(puVar38 + 0x10);
  *(undefined8 *)(lVar32 + 0x27f) = *(undefined8 *)((long)puVar38 + 0x47);
  *puVar34 = uVar20;
  *(undefined8 *)(lVar32 + 0x270) = uVar22;
  *(undefined8 *)(lVar32 + 0x278) = uVar31;
  FUN_038fd1e0(lVar32 + 0x288);
  FUN_038fd2f0(lVar32 + 0x288,puVar38 + 0x14);
  uVar20 = *(undefined8 *)(puVar38 + 0x24);
  *(undefined4 *)(lVar32 + 0x2d0) = puVar38[0x26];
  *(undefined8 *)(lVar32 + 0x2c8) = uVar20;
  puVar1 = (uint *)(lVar37 + (long)(int)uVar7 * 0x3b0 + 0x30c);
  do {
    cVar14 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = *puVar1 | 1;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  uVar20 = *(undefined8 *)
            (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
  FUN_03907810(uVar20,param_2);
  FUN_03949e90(param_2,uVar20,puVar3,&local_168,param_1 + 0x340,PTR_DAT_04bb2f48);
  uVar24 = *(uint *)(lVar33 + 0x68);
  if (uVar24 != 0xffffffff) {
    lVar29 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar29 + 0x5c8) >> 3 & 1) == 0) {
      uVar27 = uVar24 - *(ushort *)(lVar29 + 0x3da);
      if (*(uint *)(lVar29 + 0x368) <= uVar27) {
        uVar27 = 0;
      }
      if ((*(uint *)(*(long *)(lVar29 + 0x370) + (long)(int)uVar27 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar24 & 0x3f);
        goto LAB_03a8ddec;
      }
    }
    if ((*(uint *)(lVar29 + 0x5c8) >> 5 & 1) == 0) {
      uVar28 = 0x112;
      uVar41 = 0x12;
    }
    else {
      uVar28 = 0x111;
      uVar41 = 0x11;
    }
    if ((*(uint *)(lVar29 + 800) & 2) != 0) {
      uVar41 = uVar28;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar41);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a8ddec:
  FUN_039499cc(lVar30,*plVar35);
  *plVar35 = lVar25;
LAB_03a8ddfc:
  uVar20 = *(undefined8 *)(param_2 + 0xb8);
  lVar25 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar20,0x10,lVar25 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar20,0x10,lVar25 + 0x1068);
  puVar5 = PTR_DAT_04bcf1e8;
  iVar17 = *(int *)(lVar25 + 0x1010);
  if (iVar17 != 0) {
    lVar25 = *(long *)(lVar25 + 0x1018);
    uVar36 = 0;
    uVar39 = 0;
    do {
      lVar29 = *(long *)(lVar25 + (-(uVar39 >> 0x1f) & 0xfffffff800000000 | uVar39 << 3));
      if (lVar29 != 0) {
        uVar22 = (**(code **)PTR_DAT_04bbd560)(lVar29 + 8);
        (**(code **)puVar5)(uVar20,uVar36 & 0xffffffff,uVar22,*(undefined4 *)(lVar29 + 0x118));
      }
      uVar36 = uVar39 + 1;
      uVar39 = uVar36 & 0xffffffff;
    } while (iVar17 != (int)uVar36);
  }
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x98) {
    lVar25 = 0;
  }
  else {
    lVar25 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4b8);
  }
  FUN_03907810(lVar25,param_2);
  if (0 < *(int *)(param_1 + 0x2b8)) {
    uVar24 = 0;
    puVar1 = (uint *)(lVar25 + 0x14);
    lVar29 = *(long *)PTR_DAT_04bb29d0;
    puVar4 = (uint *)(lVar37 + (long)(int)uVar7 * 0x3b0 + 0x30c);
    puVar5 = PTR_DAT_04bb2020 + 0x10;
    puVar6 = PTR_DAT_04bd0f08 + 0x10;
    do {
      local_160 = "reflection_color_blur";
      lVar26 = *plVar35;
      uVar11 = *(ushort *)(lVar26 + 0x30);
      uVar13 = *(undefined2 *)(lVar26 + 0x98);
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar12 = *(ushort *)(lVar26 + 0x32);
      uVar9 = uVar12;
      if (*(short *)(lVar26 + 0x3a) != 3) {
        uVar9 = 1;
      }
      if (uVar9 <= uVar12) {
        uVar9 = uVar12;
      }
      local_168 = puVar5;
      lVar26 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar26 == 0) {
        local_178 = (float)nn::os::GetCurrentCoreNumber();
      }
      else {
        local_178 = (float)((int)lVar26 + -1);
      }
      lVar26 = FUN_03948e10(lVar30,param_2,lVar18 + (long)(int)local_178 * 0x290,&local_168,uVar13,1
                            ,uVar11,uVar9,1,0,1,0,1,0,0,0);
      FUN_01560750(lVar19,lVar26,*(undefined1 *)(lVar33 + 0xce),*(undefined2 *)(lVar33 + 0xcc));
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
      local_160 = (char *)0x7f7fffff7f7fffff;
      local_158 = 0xff7fffffff7fffff;
      local_14c = 0x3f80000000000000;
      local_150 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_150 < 6) {
        if ((1 << (ulong)(local_150 & 0x1f) & 0x39U) == 0) {
          fVar43 = *(float *)(lVar23 + 0x1d8);
          fVar42 = *(float *)(lVar23 + 0x1dc);
        }
        else {
          fVar42 = *(float *)(lVar23 + 0x1d8);
          fVar43 = *(float *)(lVar23 + 0x1dc);
        }
        fVar46 = fVar42;
        if (fVar42 <= 0.0) {
          fVar46 = 0.0;
        }
        fVar45 = 0.0;
        if (fVar42 <= 0.0) {
          fVar45 = fVar42;
        }
        fVar44 = fVar43;
        fVar42 = 0.0;
        if (fVar43 <= 0.0) {
          fVar44 = 0.0;
          fVar42 = fVar43;
        }
        local_160 = (char *)CONCAT44(fVar42,fVar45);
        local_158 = CONCAT44(fVar44,fVar46);
      }
      local_168 = puVar6;
      FUN_038e77e4(&local_168,param_2,plVar2);
      puVar38 = (undefined4 *)*plVar35;
      *puVar3 = *puVar38;
      *(undefined4 *)(lVar32 + 0x23c) = puVar38[1];
      *(undefined8 *)(lVar32 + 0x240) = *(undefined8 *)(puVar38 + 2);
      *(undefined8 *)(lVar32 + 0x248) = *(undefined8 *)(puVar38 + 4);
      *(undefined4 *)(lVar32 + 0x250) = puVar38[6];
      *(undefined4 *)(lVar32 + 0x254) = puVar38[7];
      *(undefined8 *)(lVar32 + 600) = *(undefined8 *)(puVar38 + 8);
      *(undefined8 *)(lVar32 + 0x260) = *(undefined8 *)(puVar38 + 10);
      uVar20 = *(undefined8 *)(puVar38 + 0xc);
      uVar22 = *(undefined8 *)(puVar38 + 0xe);
      uVar31 = *(undefined8 *)(puVar38 + 0x10);
      *(undefined8 *)(lVar32 + 0x27f) = *(undefined8 *)((long)puVar38 + 0x47);
      *puVar34 = uVar20;
      *(undefined8 *)(lVar32 + 0x270) = uVar22;
      *(undefined8 *)(lVar32 + 0x278) = uVar31;
      FUN_038fd1e0(lVar32 + 0x288);
      FUN_038fd2f0(lVar32 + 0x288,puVar38 + 0x14);
      uVar20 = *(undefined8 *)(puVar38 + 0x24);
      *(undefined4 *)(lVar32 + 0x2d0) = puVar38[0x26];
      *(undefined8 *)(lVar32 + 0x2c8) = uVar20;
      do {
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar16) {
          *puVar4 = *puVar4 | 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      do {
        uVar27 = *puVar1;
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar16) {
          *puVar1 = uVar27 | 0x80000000;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if ((uVar27 & 0x7fffffff) != 0) {
        if ((int)uVar27 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar29 / 1000000);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar25);
        }
      }
      do {
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar16) {
          *puVar1 = 0;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      FUN_0390d290(puVar3,param_2,*(undefined8 *)(lVar25 + 0x68),0xffffffff,0);
      if ((uVar24 & 1) == 0) {
        if (1 < *(uint *)(param_1 + 0x298)) goto LAB_03a8e268;
LAB_03a8e284:
        local_178 = 0.0;
        fStack_174 = (1.0 / (float)uVar8) * *(float *)(param_1 + 0x2dc);
      }
      else {
        if (*(uint *)(param_1 + 0x298) == 2) goto LAB_03a8e284;
LAB_03a8e268:
        local_178 = (1.0 / (float)uVar10) * *(float *)(param_1 + 0x2d8);
        fStack_174 = 0.0;
      }
      local_170 = 0;
      do {
        uVar27 = *puVar1;
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar16) {
          *puVar1 = uVar27 | 0x80000000;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if ((uVar27 & 0x7fffffff) != 0) {
        if ((int)uVar27 < 0) {
          while ((int)*puVar1 < 0) {
            nn::os::ConvertToTimeSpan(lVar29 / 1000000);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar25);
        }
      }
      do {
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar16) {
          *puVar1 = 0;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (**(int **)(lVar25 + 0x38) != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                   (long)**(int **)(lVar25 + 0x38),0x10,&local_178);
      }
      lVar40 = *(long *)PTR_DAT_04bbd7e8;
      iVar17 = *(int *)(lVar40 + 0x480);
      if (iVar17 != 0) {
        uVar41 = *(undefined4 *)(lVar40 + 0x464);
        uVar22 = *(undefined8 *)(param_2 + 0xb8);
        uVar20 = (**(code **)PTR_DAT_04bbd560)(lVar40 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar22,uVar41,*(undefined4 *)(lVar40 + 0x460),iVar17,uVar20);
      }
      uVar27 = *(uint *)(lVar33 + 0x68);
      if (uVar27 != 0xffffffff) {
        lVar40 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar40 + 0x5c8) >> 3 & 1) == 0) {
          uVar15 = uVar27 - *(ushort *)(lVar40 + 0x3da);
          if (*(uint *)(lVar40 + 0x368) <= uVar15) {
            uVar15 = 0;
          }
          if ((*(uint *)(*(long *)(lVar40 + 0x370) + (long)(int)uVar15 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03a8e3f0;
          uVar36 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar27 & 0x3f);
        }
        else {
LAB_03a8e3f0:
          if ((*(uint *)(lVar40 + 0x5c8) >> 5 & 1) == 0) {
            uVar28 = 0x112;
            uVar41 = 0x12;
          }
          else {
            uVar28 = 0x111;
            uVar41 = 0x11;
          }
          if ((*(uint *)(lVar40 + 800) & 2) != 0) {
            uVar41 = uVar28;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar41);
          uVar36 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar36;
      }
      FUN_039499cc(lVar30,*plVar35);
      uVar24 = uVar24 + 1;
      *plVar35 = lVar26;
    } while ((int)uVar24 < *(int *)(param_1 + 0x2b8));
  }
  puVar38 = (undefined4 *)*plVar35;
  *puVar3 = *puVar38;
  *(undefined4 *)(lVar32 + 0x23c) = puVar38[1];
  *(undefined8 *)(lVar32 + 0x240) = *(undefined8 *)(puVar38 + 2);
  *(undefined8 *)(lVar32 + 0x248) = *(undefined8 *)(puVar38 + 4);
  *(undefined4 *)(lVar32 + 0x250) = puVar38[6];
  *(undefined4 *)(lVar32 + 0x254) = puVar38[7];
  *(undefined8 *)(lVar32 + 600) = *(undefined8 *)(puVar38 + 8);
  *(undefined8 *)(lVar32 + 0x260) = *(undefined8 *)(puVar38 + 10);
  uVar20 = *(undefined8 *)(puVar38 + 0xc);
  uVar22 = *(undefined8 *)(puVar38 + 0xe);
  uVar31 = *(undefined8 *)(puVar38 + 0x10);
  *(undefined8 *)(lVar32 + 0x27f) = *(undefined8 *)((long)puVar38 + 0x47);
  *puVar34 = uVar20;
  *(undefined8 *)(lVar32 + 0x270) = uVar22;
  *(undefined8 *)(lVar32 + 0x278) = uVar31;
  FUN_038fd1e0(lVar32 + 0x288);
  FUN_038fd2f0(lVar32 + 0x288,puVar38 + 0x14);
  uVar20 = *(undefined8 *)(puVar38 + 0x24);
  *(undefined4 *)(lVar32 + 0x2d0) = puVar38[0x26];
  *(undefined8 *)(lVar32 + 0x2c8) = uVar20;
  puVar1 = (uint *)(lVar37 + (long)(int)uVar7 * 0x3b0 + 0x30c);
  do {
    cVar14 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = *puVar1 | 1;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  return;
}

