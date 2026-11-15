
/* WARNING: Removing unreachable block (ram,0x023dcde4) */

void FUN_023dcb88(long param_1)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float local_5c;
  float local_58;
  float local_54;
  
  local_58 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_5c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_54 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  puVar12 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*pfVar7 * 0.5,0x41200000,0x3e4ccccc,puVar12 + 0x4f,&local_5c);
  iVar5 = FUN_006f0400((float)*(int *)(param_1 + 0x1900) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       (float)*(int *)(param_1 + 0x1906) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar13 = *pfVar7;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_5c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar2 + 0x148))();
    iVar11 = iVar5 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar11 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar5 = -0x15555560;
      iVar11 = (int)(fVar13 * 0.5 * (float)iVar11);
      if (iVar11 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar4 <= iVar11) {
        iVar1 = iVar4;
      }
      if (iVar5 <= iVar11) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar5;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  if (puVar12[0x227] == 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    goto joined_r0x023dcddc;
  }
  local_5c = 6.30584e-44;
  uVar8 = FUN_03850890(puVar12[0x227],0x2d,0,*(uint *)(puVar12 + 0x2d3) >> 1 & 1);
  if (((uVar8 & 1) == 0) ||
     (uVar10 = *(uint *)(param_1 + 0x17cc), *(uint *)(param_1 + 0x17cc) = uVar10 & 0xfffffffe,
     (uVar10 & 1) == 0)) {
LAB_023dcee4:
    puVar12 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x1ee8);
    uVar10 = (uint)bVar3;
    if (7 < uVar10) {
      uVar10 = 0xff;
    }
    local_5c = (float)(uint)*(byte *)(param_1 + 0x1914);
    if (1 < (uint)local_5c) {
      local_5c = 0.0;
    }
    if (local_5c == 0.0) {
      lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar10 * 0x740;
      if (7 < bVar3) {
        lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) != *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar6 + 0xc) = 4;
        puVar12 = *(undefined8 **)(param_1 + 0x60);
        goto joined_r0x023dcddc;
      }
      lVar9 = lVar6 + 0xb0;
      *(undefined4 *)(lVar6 + 0xc) = 3;
    }
    else {
      lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar10 * 0x740;
      if (7 < bVar3) {
        lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) != *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar6 + 0x11c) = 4;
        goto LAB_023dcee4;
      }
      lVar9 = lVar6 + 0x1c0;
      *(undefined4 *)(lVar6 + 0x11c) = 3;
    }
    FUN_01393458(lVar9);
    puVar12 = *(undefined8 **)(param_1 + 0x60);
  }
joined_r0x023dcddc:
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  local_5c = 0.0;
  if ((puVar12[0x227] == 0) || (uVar8 = FUN_03850368(puVar12[0x227],0), (uVar8 & 1) == 0)) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_5c = 0.0;
    if ((((puVar12[0x227] == 0) || (uVar8 = FUN_03850368(puVar12[0x227],0), (uVar8 & 1) != 0)) ||
        (puVar12[0x227] == 0)) ||
       ((uVar8 = FUN_03850368(puVar12[0x227],0), (uVar8 & 1) != 0 ||
        (uVar8 = FUN_0384fca4(puVar12[0x227],0), (uVar8 & 1) != 0)))) {
      if (*(int *)(param_1 + 0x178) == 0) {
        uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar8 & 1) == 0) {
          local_54 = 0.0;
          local_5c = 8.40779e-45;
          local_58 = (float)CONCAT31(local_58._1_3_,1);
          FUN_02374e74(param_1,&local_5c);
        }
      }
      else {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

