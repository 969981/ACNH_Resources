
/* WARNING: Removing unreachable block (ram,0x024afe48) */

void FUN_024afa84(long param_1)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  ulong uVar14;
  byte bVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  if (puVar18 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar20 = __cxa_guard_acquire(&DAT_052461c0);
      puVar18 = &DAT_05240280;
      if (iVar20 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar18 = &DAT_05240280;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x1923);
  if (7 < bVar3) {
    bVar3 = 0;
  }
  local_7c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_74 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_80 = (float)*(int *)(param_1 + 0x191a) * 0.001;
  fStack_78 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  bVar9 = local_7c < 0.0;
  bVar8 = local_74 < 0.0;
  fStack_84 = (float)(int)*(short *)(param_1 + 0x1918) * 0.25;
  local_88 = (float)*(int *)(param_1 + 0x1914) * 0.001;
  iVar20 = (int)local_7c;
  iVar21 = (int)local_74;
  uVar19 = FUN_016e026c(0,&local_7c,0,0);
  local_b8 = CONCAT44(uVar19,(float)(int)((int)((float)iVar20 / 5.0) - (uint)bVar9 & 0xfffffffe) *
                             5.0 + 5.0);
  local_b0._0_4_ = (float)(int)((int)((float)iVar21 / 5.0) - (uint)bVar8 & 0xfffffffe) * 5.0 + 5.0;
  FUN_0231ece4(param_1,&local_88,&local_b8);
  local_b8 = CONCAT44(fStack_78,local_7c);
  local_b0 = CONCAT44(local_b0._4_4_,local_74);
  fStack_90 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_94 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_8c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  uVar19 = FUN_016e026c(0,&local_94,0,0);
  local_b8._4_4_ = uVar19;
  FUN_016dec40(param_1,&local_b8,1,0,0,0,0);
  lVar11 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1380) + 0xf0))(lVar11 + 0x1380);
  puVar16 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar12,0x41200000,0x3e4ccccc,puVar16 + 0x4f,&local_88);
  uVar5 = *(ushort *)(param_1 + 0x191e);
  lVar11 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar11 + 0x13b0) + 0xf0))(lVar11 + 0x13b0);
  fVar22 = *pfVar13;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_94 = 1.4013e-44;
    local_b8._0_4_ = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024afdb8;
  }
  iVar20 = (uint)uVar5 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar11 = (**(code **)(*plVar2 + 0x148))();
  iVar21 = iVar20 - *(int *)(lVar11 + 4);
  if (0xb60b5e < iVar21 + 0x5b05afU) {
    iVar6 = 0x15555560;
    iVar20 = -0x15555560;
    iVar21 = (int)(fVar22 * (float)iVar21);
    if (iVar21 < 1) {
      iVar6 = -0x5b05b0;
    }
    else {
      iVar20 = 0x5b05b0;
    }
    iVar1 = iVar21;
    if (iVar6 <= iVar21) {
      iVar1 = iVar6;
    }
    if (iVar20 <= iVar21) {
      iVar20 = iVar1;
    }
    iVar20 = iVar20 + *(int *)(lVar11 + 4);
  }
  *(int *)(lVar11 + 4) = iVar20;
LAB_024afdb8:
  FUN_024bc9f0(param_1,&local_7c);
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar20 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar20 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar16 = &DAT_05240280;
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_94 = 0.0;
  local_b8 = CONCAT44(local_b8._4_4_,0x38);
  if ((puVar16[0x227] != 0) && (uVar14 = FUN_03850890(puVar16[0x227],0x38,0,0), (uVar14 & 1) != 0))
  {
    puVar17 = &DAT_0548ed14 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x8c;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      puVar17 = &DAT_0548f0e8;
    }
    puVar17[0x38] = 1;
    lVar11 = *(long *)(param_1 + 0x68);
    *(undefined4 *)(puVar17 + 0x3c) = *(undefined4 *)(lVar11 + 0x278);
    *(undefined4 *)(puVar17 + 0x40) = *(undefined4 *)(lVar11 + 0x27c);
    *(undefined4 *)(puVar17 + 0x44) = *(undefined4 *)(lVar11 + 0x280);
    *(undefined4 *)(puVar17 + 0x48) = *(undefined4 *)(param_1 + 0x2b0);
    *(undefined4 *)(puVar17 + 0x4c) = *(undefined4 *)(param_1 + 0x2b4);
    *(undefined4 *)(puVar17 + 0x50) = *(undefined4 *)(param_1 + 0x2b8);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_94 = 6.30584e-44;
  local_b8 = 0;
  local_b0 = 0;
  if (((puVar18[0x227] != 0) &&
      (uVar14 = FUN_03850890(puVar18[0x227],0x2d,&local_b8,0), (uVar14 & 1) != 0)) &&
     (uVar10 = *(uint *)(param_1 + 0x17cc), *(uint *)(param_1 + 0x17cc) = uVar10 & 0xfffffffe,
     (uVar10 & 1) != 0)) {
    bVar4 = *(byte *)(param_1 + 0x1ee8);
    uVar10 = (uint)bVar4;
    if (7 < uVar10) {
      uVar10 = 0xff;
    }
    local_bc[0] = (undefined1)uVar10;
    if (*(char *)(param_1 + 0x1922) == '\x01') {
      lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar10 * 0x740;
      if (7 < bVar4) {
        lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar11 + 0xc) = 3;
        FUN_01393458(lVar11 + 0xb0);
      }
      else {
        *(undefined4 *)(lVar11 + 0xc) = 4;
      }
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar10 * 0x740;
      if (7 < bVar4) {
        lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar11 + 0x11c) = 3;
        FUN_01393458(lVar11 + 0x1c0);
      }
      else {
        *(undefined4 *)(lVar11 + 0x11c) = 4;
      }
    }
    bVar15 = bVar4;
    if (7 < bVar4) {
      bVar15 = 0xff;
    }
    local_94._0_2_ = CONCAT11(bVar15,(undefined1)local_94);
    if (((bVar4 < 8) && (uVar10 = FUN_02582d8c(local_bc,1), uVar10 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d4) != '\0')) {
      bVar9 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      bVar9 = false;
    }
    uVar19 = local_94;
    local_94 = (float)CONCAT31(local_94._1_3_,bVar9);
    uVar7 = local_94;
    local_94._3_1_ = SUB41(uVar19,3);
    local_94._0_2_ = (ushort)uVar7;
    local_94._0_3_ = (uint3)(ushort)local_94;
    FUN_02308c94(&local_94);
  }
  uVar14 = FUN_0170a6d0(puVar18,0);
  if ((uVar14 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_023752f4(param_1,bVar3,6);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      if (bVar3 == 1) {
        FUN_0231b68c();
      }
      else {
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

