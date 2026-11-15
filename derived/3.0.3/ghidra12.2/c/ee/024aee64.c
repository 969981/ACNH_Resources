
/* WARNING: Removing unreachable block (ram,0x024af358) */

void FUN_024aee64(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  ulong uVar14;
  byte bVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  undefined1 local_98 [4];
  float local_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined8 local_70;
  float local_68;
  
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar19 = __cxa_guard_acquire(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      if (iVar19 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar17 = &DAT_05240280;
    }
  }
  local_7c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  fStack_78 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_74 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_80 = (float)*(int *)(param_1 + 0x191a) * 0.001;
  fStack_84 = (float)(int)*(short *)(param_1 + 0x1918) * 0.25;
  bVar9 = local_7c < 0.0;
  bVar8 = local_74 < 0.0;
  local_88 = (float)*(int *)(param_1 + 0x1914) * 0.001;
  iVar19 = (int)local_7c;
  iVar20 = (int)local_74;
  uVar18 = FUN_016e026c(0,&local_7c,0,0);
  local_70 = CONCAT44(uVar18,(float)(int)((int)((float)iVar19 / 5.0) - (uint)bVar9 & 0xfffffffe) *
                             5.0 + 5.0);
  local_68 = (float)(int)((int)((float)iVar20 / 5.0) - (uint)bVar8 & 0xfffffffe) * 5.0 + 5.0;
  FUN_0231ece4(param_1,&local_88,&local_70);
  local_70 = CONCAT44(fStack_78,local_7c);
  local_68 = local_74;
  fStack_90 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_94 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_8c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  uVar18 = FUN_016e026c(0,&local_94,0,0);
  local_70 = CONCAT44(uVar18,(float)local_70);
  FUN_016dec40(param_1,&local_70,1,0,0,0,0);
  local_70._4_4_ = (float)(int)*(short *)(param_1 + 0x1918) * 0.25;
  local_70._0_4_ = (float)*(int *)(param_1 + 0x1914) * 0.001;
  local_68 = (float)*(int *)(param_1 + 0x191a) * 0.001;
  lVar11 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1380) + 0xf0))(lVar11 + 0x1380);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar12,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_70);
  iVar19 = FUN_006f0400(local_7c - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        local_74 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar11 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar11 + 0x13b0) + 0xf0))(lVar11 + 0x13b0);
  fVar21 = *pfVar13;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_94 = 1.4013e-44;
    local_70._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024af1bc;
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar11 = (**(code **)(*plVar3 + 0x148))();
  iVar20 = iVar19 - *(int *)(lVar11 + 4);
  if (0xb60b5e < iVar20 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar19 = -0x15555560;
    iVar20 = (int)(fVar21 * (float)iVar20);
    if (iVar20 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar19 = 0x5b05b0;
    }
    iVar1 = iVar20;
    if (iVar5 <= iVar20) {
      iVar1 = iVar5;
    }
    if (iVar19 <= iVar20) {
      iVar19 = iVar1;
    }
    iVar19 = iVar19 + *(int *)(lVar11 + 4);
  }
  *(int *)(lVar11 + 4) = iVar19;
LAB_024af1bc:
  FUN_024bc9f0(param_1,&local_7c);
  local_94 = 0.0;
  local_70 = CONCAT44(local_70._4_4_,0x2d);
  if (puVar17[0x227] == 0) {
    local_94 = 0.0;
  }
  else {
    uVar14 = FUN_03850890(puVar17[0x227],0x2d,0,0);
    if (((uVar14 & 1) != 0) &&
       (uVar10 = *(uint *)(param_1 + 0x17cc), *(uint *)(param_1 + 0x17cc) = uVar10 & 0xfffffffe,
       (uVar10 & 1) != 0)) {
      bVar4 = *(byte *)(param_1 + 0x1ee8);
      uVar10 = (uint)bVar4;
      bVar9 = 7 < uVar10;
      if (bVar9) {
        uVar10 = 0xff;
      }
      local_98[0] = (undefined1)uVar10;
      lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar10 * 0x740;
      if (bVar9) {
        lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar11 + 0x11c) = 3;
        FUN_01393458(lVar11 + 0x1c0);
      }
      else {
        *(undefined4 *)(lVar11 + 0x11c) = 4;
      }
      bVar15 = bVar4;
      if (7 < bVar4) {
        bVar15 = 0xff;
      }
      local_70._0_2_ = CONCAT11(bVar15,(undefined1)local_70);
      if (((bVar4 < 8) && (uVar10 = FUN_02582d8c(local_98,1), uVar10 < 8)) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d4) != '\0')) {
        bVar9 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d6) != '\0';
      }
      else {
        bVar9 = false;
      }
      uVar7 = local_70;
      local_70 = CONCAT71(local_70._1_7_,bVar9);
      uVar6 = local_70;
      local_70._3_5_ = SUB85(uVar7,3);
      local_70._0_2_ = (undefined2)uVar6;
      local_70._0_3_ = CONCAT12(1,(undefined2)local_70);
      FUN_02308c94(&local_70);
    }
    local_94 = 0.0;
    local_70 = CONCAT44(local_70._4_4_,0x38);
    if ((puVar17[0x227] != 0) && (uVar14 = FUN_03850890(puVar17[0x227],0x38,0,0), (uVar14 & 1) != 0)
       ) {
      local_70 = CONCAT44(local_70._4_4_,2);
      puVar16 = &DAT_0548ed14 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x8c;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        puVar16 = &DAT_0548f0e8;
      }
      puVar16[0x38] = 1;
      lVar11 = *(long *)(param_1 + 0x68);
      *(undefined4 *)(puVar16 + 0x3c) = *(undefined4 *)(lVar11 + 0x278);
      *(undefined4 *)(puVar16 + 0x40) = *(undefined4 *)(lVar11 + 0x27c);
      *(undefined4 *)(puVar16 + 0x44) = *(undefined4 *)(lVar11 + 0x280);
      *(undefined4 *)(puVar16 + 0x48) = *(undefined4 *)(param_1 + 0x2b0);
      *(undefined4 *)(puVar16 + 0x4c) = *(undefined4 *)(param_1 + 0x2b4);
      *(undefined4 *)(puVar16 + 0x50) = *(undefined4 *)(param_1 + 0x2b8);
    }
  }
  uVar14 = FUN_0170a6d0(puVar17,0);
  if ((uVar14 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar14 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar14 & 1) == 0) {
        local_68 = 0.0;
        local_70 = CONCAT35(local_70._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_70);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

