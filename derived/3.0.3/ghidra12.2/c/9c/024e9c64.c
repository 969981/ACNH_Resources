
void FUN_024e9c64(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  float local_4c;
  float local_48;
  float local_44;
  
  iVar5 = *(int *)(param_1 + 0x178);
  if (iVar5 == 1) {
    local_48 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
    local_4c = (float)*(int *)(param_1 + 0x1900) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x1906) * 0.001;
    lVar6 = FUN_0251e98c(1);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
    puVar9 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,puVar9 + 0x4f,&local_4c);
    uVar3 = *(ushort *)(param_1 + 0x190a);
    lVar6 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
    fVar12 = *pfVar8;
    if ((*(int *)(param_1 + 0x178) == 0) && ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = (uint)uVar3 * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar6 = (**(code **)(*plVar2 + 0x148))();
      iVar11 = iVar5 - *(int *)(lVar6 + 4);
      if (0xb60b5e < iVar11 + 0x5b05afU) {
        iVar4 = 0x15555560;
        iVar5 = -0x15555560;
        iVar11 = (int)(fVar12 * (float)iVar11);
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
      iVar5 = *(int *)(param_1 + 0x178);
    }
  }
  if (iVar5 != 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar6 + 0x424) = 2;
  iVar5 = FUN_01392d64(lVar6 + 0x4c8);
  *(int *)(lVar6 + 0x420) = iVar5;
  *(int *)(lVar6 + 0x4c0) = *(int *)(lVar6 + 0x4c0) + 1;
  if (iVar5 == 3) {
    return;
  }
  if (iVar5 != 1) {
    uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar10 & 1) == 0) {
      local_44 = 0.0;
      local_4c = 8.40779e-45;
      local_48 = (float)CONCAT31(local_48._1_3_,1);
      FUN_02374e74(param_1,&local_4c);
      return;
    }
    return;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      uVar10 = FUN_0170c0d0(&DAT_05240280);
      goto joined_r0x024e9ee0;
    }
    puVar9 = &DAT_05240280;
  }
  uVar10 = FUN_0170c0d0(puVar9);
joined_r0x024e9ee0:
  if ((uVar10 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x19ae) = 0;
    *(undefined8 *)(param_1 + 0x19b6) = 0;
    *(undefined8 *)(param_1 + 0x19be) = 0;
    *(undefined8 *)(param_1 + 0x19c6) = 0;
    *(undefined8 *)(param_1 + 0x19ce) = 0;
    *(undefined4 *)(param_1 + 0x19d6) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
    local_4c = 4.13383e-43;
  }
  else {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x2090) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x2088) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x2098) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x20a0) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x2070) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x2068) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x2078) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x2080) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x2060) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x2058) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x20a6) = *(undefined8 *)(param_1 + 0x194e);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined2 *)(param_1 + 0x198b) = 0;
    *(undefined1 *)(param_1 + 0x198a) = 0xb;
    local_4c = 5.88545e-44;
  }
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar6 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar6,local_4c);
  return;
}

