
void FUN_024c0894(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined8 local_84;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float local_64;
  undefined8 local_58;
  
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  fStack_68 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_6c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_78 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  fStack_74 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_64 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_70 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  FUN_023297c8(0x3e99999a,0x3f800000,param_1,&local_6c);
  iVar15 = (int)local_6c;
  bVar5 = local_6c < 0.0;
  bVar4 = local_64 < 0.0;
  iVar16 = (int)local_64;
  uVar14 = FUN_016e026c(0,&local_6c,0,0);
  local_84 = CONCAT44(uVar14,(float)(int)((int)((float)iVar15 / 5.0) - (uint)bVar5 & 0xfffffffe) *
                             5.0 + 5.0);
  local_7c = (float)(int)((int)((float)iVar16 / 5.0) - (uint)bVar4 & 0xfffffffe) * 5.0 + 5.0;
  FUN_0231ece4(param_1,&local_78,&local_84);
  FUN_016dec40(param_1,&local_6c,0,0,0,0,0);
  if ((*(uint *)(param_1 + 0x17cc) >> 9 & 1) == 0) {
    local_7c._0_3_ = (uint3)(ushort)local_7c;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x200;
    local_58 = 0xfffe;
    FUN_0277d4ac(&local_58);
    local_84 = *(undefined8 *)(param_1 + 0x1918);
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_7c._0_2_ = CONCAT11(bVar11,*(int *)(param_1 + 0x178) == 0);
    FUN_02308524(&local_84);
  }
  local_84._4_4_ = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_84._0_4_ = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_7c = (float)*(int *)(param_1 + 0x1910) * 0.001;
  lVar6 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,puVar13 + 0x4f,&local_84);
  iVar15 = FUN_006f0400(local_6c - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        local_64 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar6 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar17 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_58 = CONCAT44(local_58._4_4_,10);
    local_84._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024c0c38;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar6 = (**(code **)(*plVar2 + 0x148))();
  iVar16 = iVar15 - *(int *)(lVar6 + 4);
  if (0xb60b5e < iVar16 + 0x5b05afU) {
    iVar3 = 0x15555560;
    iVar15 = -0x15555560;
    iVar16 = (int)(fVar17 * (float)iVar16);
    if (iVar16 < 1) {
      iVar3 = -0x5b05b0;
    }
    else {
      iVar15 = 0x5b05b0;
    }
    iVar1 = iVar16;
    if (iVar3 <= iVar16) {
      iVar1 = iVar3;
    }
    if (iVar15 <= iVar16) {
      iVar15 = iVar1;
    }
    iVar15 = iVar15 + *(int *)(lVar6 + 4);
  }
  *(int *)(lVar6 + 4) = iVar15;
LAB_024c0c38:
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  local_84 = 0;
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar13,&local_6c,&local_84);
  uVar14 = FUN_006f0400(local_6c - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        local_64 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  local_84 = local_84 & 0xffffffff00000000;
  local_58._0_4_ = uVar14;
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  FUN_017071b4(puVar13,&local_58,&local_84);
  FUN_023286a0(param_1,&local_6c);
  local_58 = (ulong)local_58._4_4_ << 0x20;
  local_84 = CONCAT44(local_84._4_4_,0x2d);
  if ((puVar12[0x227] != 0) && (uVar9 = FUN_03850890(puVar12[0x227],0x2d,0,0), (uVar9 & 1) != 0)) {
    if (*(int *)(param_1 + 0x178) == 0) {
      lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if ((*(byte *)(lVar6 + 0x328) >> 3 & 1) != 0) {
        FUN_0231e380(param_1);
      }
    }
    uVar10 = *(uint *)(param_1 + 0x17cc);
    *(uint *)(param_1 + 0x17cc) = uVar10 & 0xfffffffe;
    if ((uVar10 & 1) != 0) {
      uVar10 = (uint)*(byte *)(param_1 + 0x1ee8);
      bVar5 = 7 < uVar10;
      if (bVar5) {
        uVar10 = 0xff;
      }
      lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar10 * 0x740;
      if (bVar5) {
        lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar6 + 0x24c) = 3;
        FUN_01393458(lVar6 + 0x2f0);
      }
      else {
        *(undefined4 *)(lVar6 + 0x24c) = 4;
      }
    }
  }
  uVar9 = FUN_0170a6d0(puVar12,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_02373ee0(param_1,6,1,1);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

