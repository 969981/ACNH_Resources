
void FUN_023d6d50(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    local_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar11 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3f19999a,0x41200000,0x3e4ccccc,puVar11 + 0x4f,&local_4c);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_5c = 1.4013e-44;
      local_4c = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return;
      }
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar13 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar12 = (int)((float)iVar13 * 0.1666667);
      iVar13 = 0x10000000;
      if (iVar12 < 1) {
        iVar13 = -0x5b05b0;
      }
      iVar6 = -0x10000000;
      if (0 < iVar12) {
        iVar6 = 0x5b05b0;
      }
      iVar4 = iVar12;
      if (iVar13 <= iVar12) {
        iVar4 = iVar13;
      }
      if (iVar6 <= iVar12) {
        iVar6 = iVar4;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
    return;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_5c = 0.0;
  local_4c = 2.38221e-44;
  if (((puVar11[0x227] != 0) && (uVar8 = FUN_03850a90(puVar11[0x227],0x11,0,0), (uVar8 & 1) != 0))
     && (*(char *)(param_1 + 0x17ac) == '\0')) {
    local_4c = 0.0;
    if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
      local_4c = 4.2039e-45;
      if (((*(uint *)(param_1 + 0xed0) >> 3 & 1) != 0) && (*(char *)(param_1 + 0xee8) == '\0')) {
        *(undefined8 *)(param_1 + 0xee0) = 0;
        local_4c = 4.2039e-45;
        goto LAB_023d72f4;
      }
    }
    else if (*(char *)(param_1 + 0xee8) == '\0') {
      *(undefined8 *)(param_1 + 0xee0) = 0;
      local_4c = 0.0;
LAB_023d72f4:
      if (((uint)local_4c < 0x37) && ((uint)local_4c < 0x37)) {
        *(uint *)(param_1 + 0xee0) = *(uint *)(param_1 + 0xee0) | 1 << (ulong)(uint)local_4c;
      }
      *(undefined1 *)(param_1 + 0xee8) = 1;
    }
  }
  local_58 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  local_5c = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_54 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  local_58 = (float)FUN_0231eef4(param_1,&local_5c,0);
  lVar7 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar11 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar14 = (float)FUN_03eb4b60(*puVar9,0x41200000,0x3e4ccccc,puVar11 + 0x4f,&local_5c);
  uVar3 = *(ushort *)(param_1 + 0x1916);
  lVar7 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar15 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_50 = 10;
    local_4c = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      bVar5 = true;
      goto LAB_023d710c;
    }
  }
  iVar6 = (uint)uVar3 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar2 + 0x148))();
  iVar13 = iVar6 - *(int *)(lVar7 + 4);
  if (iVar13 + 0x5b05afU < 0xb60b5f) {
    bVar5 = true;
    iVar12 = iVar6;
  }
  else {
    iVar4 = 0x15555560;
    iVar12 = -0x15555560;
    iVar13 = (int)(fVar15 * (float)iVar13);
    if (iVar13 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar12 = 0x5b05b0;
    }
    iVar1 = iVar13;
    if (iVar4 <= iVar13) {
      iVar1 = iVar4;
    }
    if (iVar12 <= iVar13) {
      iVar12 = iVar1;
    }
    iVar12 = iVar12 + *(int *)(lVar7 + 4);
    bVar5 = iVar12 == iVar6;
  }
  *(int *)(lVar7 + 4) = iVar12;
LAB_023d710c:
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  uVar8 = FUN_0170a6d0(puVar11,0);
  if ((uVar8 & 1) != 0) {
    local_4c = 4.44212e-43;
    if ((bool)(fVar14 == 0.0 & bVar5)) {
      local_4c = 4.45613e-43;
    }
    if ((uint)local_4c < 0x149) {
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar7,local_4c);
    }
  }
  if ((0x3b < *(uint *)(param_1 + 0x1c04)) &&
     (uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar8 & 1) == 0)) {
    local_44 = 0.0;
    local_4c = 8.40779e-45;
    local_48 = (float)CONCAT31(local_48._1_3_,1);
    FUN_02374e74(param_1,&local_4c);
  }
  return;
}

