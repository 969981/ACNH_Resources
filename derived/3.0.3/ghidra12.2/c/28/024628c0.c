
void FUN_024628c0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
  fVar10 = *pfVar7;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  uVar4 = *(ushort *)(param_1 + 0x18ef);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  *(float *)(param_1 + 0x1bf0) = fVar10 * 0.5;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar10 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_50 = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02462b1c;
  }
  iVar9 = (uint)uVar4 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar6 = (**(code **)(*plVar2 + 0x148))();
  iVar8 = iVar9 - *(int *)(lVar6 + 4);
  if (0xb60b5e < iVar8 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar9 = -0x15555560;
    iVar8 = (int)(fVar10 * 0.6 * (float)iVar8);
    if (iVar8 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar9 = 0x5b05b0;
    }
    iVar1 = iVar8;
    if (iVar5 <= iVar8) {
      iVar1 = iVar5;
    }
    if (iVar9 <= iVar8) {
      iVar9 = iVar1;
    }
    iVar9 = iVar9 + *(int *)(lVar6 + 4);
  }
  *(int *)(lVar6 + 4) = iVar9;
  iVar9 = *(int *)(param_1 + 0x178);
  if (iVar9 == 1) {
    lVar6 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
    fStack_4c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    local_50 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(*pfVar7 * 0.6,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_50);
    iVar9 = *(int *)(param_1 + 0x178);
  }
  if (iVar9 != 0) {
    return;
  }
LAB_02462b1c:
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar6 + 0x424) = 2;
  local_50 = (float)FUN_01392d64(lVar6 + 0x4c8);
  *(float *)(lVar6 + 0x420) = local_50;
  *(int *)(lVar6 + 0x4c0) = *(int *)(lVar6 + 0x4c0) + 1;
  if (local_50 != 4.2039e-45) {
    if (local_50 == 1.4013e-45) {
      FUN_02462c74(param_1,param_1 + 0x1900);
    }
    else {
      *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x400000;
      local_50 = 3.86758e-43;
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
      lVar6 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar6 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar6,0x114);
    }
  }
  return;
}

