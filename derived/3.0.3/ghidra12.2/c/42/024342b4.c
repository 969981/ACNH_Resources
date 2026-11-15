
/* WARNING: Removing unreachable block (ram,0x024344d0) */

void FUN_024342b4(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined8 local_50;
  float local_48;
  float local_44;
  
  local_50._4_4_ = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_48 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_44 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar14 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar14 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,puVar14 + 0x4f,(long)&local_50 + 4);
  uVar3 = *(ushort *)(param_1 + 0x190a);
  lVar7 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar15 = *pfVar9;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_50._0_4_ = 10, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    iVar6 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar13 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar6 = -0x15555560;
      iVar13 = (int)(fVar15 * (float)iVar13);
      if (iVar13 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar13;
      if (iVar4 <= iVar13) {
        iVar1 = iVar4;
      }
      if (iVar6 <= iVar13) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  if (puVar14[0x227] == 0) {
    local_50 = (ulong)(uint)local_50._4_4_ << 0x20;
  }
  else {
    uVar12 = *(uint *)(puVar14 + 0x2d3) >> 1 & 1;
    local_50 = CONCAT44(0x2d,uVar12);
    uVar10 = FUN_03850890(puVar14[0x227],0x2d,0,uVar12);
    if ((uVar10 & 1) != 0) {
      uVar12 = (uint)*(byte *)(param_1 + 0x1ee8);
      bVar5 = 7 < uVar12;
      if (bVar5) {
        uVar12 = 0xff;
      }
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar12 * 0x740;
      if (bVar5) {
        lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar7 + 0xc) = 3;
        FUN_01393458(lVar7 + 0xb0);
      }
      else {
        *(undefined4 *)(lVar7 + 0xc) = 4;
      }
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
    }
  }
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  local_50 = local_50 & 0xffffffff;
  if ((puVar14[0x227] == 0) || (uVar10 = FUN_03850368(puVar14[0x227],0), (uVar10 & 1) == 0)) {
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_50 = 0;
    if ((((puVar14[0x227] == 0) ||
         (uVar11 = FUN_03850368(puVar14[0x227],0), uVar10 = local_50, (uVar11 & 1) != 0)) ||
        (puVar14[0x227] == 0)) ||
       ((uVar11 = FUN_03850368(puVar14[0x227],local_50 & 0xffffffff), (uVar11 & 1) != 0 ||
        (uVar10 = FUN_0384fca4(puVar14[0x227],uVar10 & 0xffffffff), (uVar10 & 1) != 0)))) {
      if (*(int *)(param_1 + 0x178) == 0) {
        uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar10 & 1) == 0) {
          local_44 = 0.0;
          local_50 = CONCAT44(6,(undefined4)local_50);
          local_48 = (float)CONCAT31(local_48._1_3_,1);
          FUN_02374e74(param_1,(long)&local_50 + 4);
        }
      }
      else {
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

