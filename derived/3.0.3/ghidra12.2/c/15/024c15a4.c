
void FUN_024c15a4(long param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte bVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  byte local_88 [4];
  undefined8 local_84;
  float local_7c;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  uint local_58;
  undefined4 local_54;
  
  local_58 = (uint)*(byte *)(param_1 + 0x1916);
  if (3 < local_58) {
    local_58 = 0;
  }
  fStack_60 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  fStack_6c = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  bVar12 = *(byte *)(param_1 + 0x1917);
  fVar14 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar15 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  if (7 < bVar12) {
    bVar12 = 0;
  }
  local_78 = 0xfffe;
  local_70 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_68 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_64 = fVar14;
  local_5c = fVar15;
  FUN_0277d4ac(&local_78);
  local_78 = *(undefined8 *)(param_1 + 0x1918);
  if ((*(uint *)(param_1 + 0x17cc) >> 9 & 1) == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x200;
  }
  local_84._4_4_ = FUN_016e026c(0,&local_64,0,0);
  local_7c = (float)(int)((int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0) & 0xfffffffe) * 5.0
             + 5.0;
  local_84._0_4_ =
       (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0) & 0xfffffffe) * 5.0 + 5.0
  ;
  FUN_0231ece4(param_1,&local_70,&local_84);
  FUN_016dec40(param_1,&local_64,0,0,0,0,0);
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,puVar10 + 0x4f,&local_70);
  uVar4 = *(ushort *)(param_1 + 0x1914);
  lVar7 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar14 = *pfVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_54 = 10;
    local_84._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024c17f8;
  }
  else {
LAB_024c17f8:
    iVar6 = (uint)uVar4 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar13 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar6 = -0x15555560;
      iVar13 = (int)(fVar14 * (float)iVar13);
      if (iVar13 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar13;
      if (iVar5 <= iVar13) {
        iVar1 = iVar5;
      }
      if (iVar6 <= iVar13) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  local_84 = 0;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar10,&local_64,&local_84);
  local_54 = FUN_006f0400(local_64 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                          local_5c - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  local_84 = local_84 & 0xffffffff00000000;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  FUN_017071b4(puVar10,&local_54,&local_84);
  FUN_023286a0(param_1,&local_64);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_54 = 0;
  local_84 = CONCAT44(local_84._4_4_,0x2d);
  if ((puVar10[0x227] != 0) && (uVar11 = FUN_03850890(puVar10[0x227],0x2d,0,0), (uVar11 & 1) != 0))
  {
    if (*(int *)(param_1 + 0x178) == 0) {
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if ((*(byte *)(lVar7 + 0x328) >> 3 & 1) != 0) {
        FUN_0231e380(param_1);
      }
    }
    uVar3 = *(uint *)(param_1 + 0x17cc);
    *(uint *)(param_1 + 0x17cc) = uVar3 & 0xfffffffe;
    if ((uVar3 & 1) != 0) {
      local_88[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_88[0]) {
        local_88[0] = 0xff;
      }
      FUN_024c1c20(local_88,param_1 + 0x18e0);
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  uVar11 = FUN_0170a6d0(puVar10,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar11 = FUN_02373ee0(param_1,6,1,1);
    if ((uVar11 & 1) != 0) {
      return;
    }
    iVar6 = FUN_00a74b78(param_1 + 0x1ee8);
    local_84 = CONCAT44(local_84._4_4_,iVar6);
    if (iVar6 == 4) {
      if (*(int *)(param_1 + 0x178) == 0) {
LAB_024c1a90:
        FUN_023752f4(param_1,bVar12,6);
        return;
      }
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      if (bVar12 == 1) {
        FUN_0231b68c(param_1,6);
        return;
      }
      goto LAB_024c1a08;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      bVar12 = 0;
      goto LAB_024c1a90;
    }
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
LAB_024c1a08:
  FUN_023164ec(param_1,6);
  return;
}

