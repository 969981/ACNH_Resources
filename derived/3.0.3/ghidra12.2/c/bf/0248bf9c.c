
void FUN_0248bf9c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float local_6c [3];
  ulong local_60;
  undefined4 local_58;
  
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  local_6c[1] = 0.0;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_6c[2] = (float)*(int *)(param_1 + 0x1908) * 0.001;
  local_58 = *(undefined4 *)(puVar2 + 0x50);
  local_60 = puVar2[0x4f] & 0xffffffff;
  local_6c[0] = (float)*(int *)(param_1 + 0x1902) * 0.001;
  FUN_03eb4b60(*pfVar7 * 1.5,0x41200000,0x3e4ccccc,&local_60,local_6c);
  *(undefined4 *)(puVar2 + 0x4f) = (undefined4)local_60;
  *(undefined4 *)(puVar2 + 0x50) = local_58;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar12 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c[0] = 1.4013e-44;
    local_60 = CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0248c1a4;
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0x1900) * 0x10000;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar6 = (**(code **)(*plVar3 + 0x148))();
  iVar11 = iVar5 - *(int *)(lVar6 + 4);
  if (0xb60b5e < iVar11 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar5 = -0x15555560;
    iVar11 = (int)(fVar12 * 1.5 * (float)iVar11);
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
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
LAB_0248c1a4:
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  iVar5 = FUN_01392d64(lVar6 + 0xb0);
  if (iVar5 == 1) {
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    local_6c[0] = 2.32616e-43;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
    iVar5 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x1986) = (short)iVar5;
    lVar10 = *(long *)(param_1 + 0x70);
    *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
    uVar9 = 0;
    lVar6 = 0;
    if (lVar10 != 0) {
      uVar9 = 0;
      if (*(uint *)(lVar10 + 0x280) < 0x149) {
        uVar9 = *(uint *)(lVar10 + 0x280);
      }
      lVar6 = lVar10 + 0x278;
    }
    if (uVar9 != 0xa6) {
      local_60 = CONCAT44(local_60._4_4_,0xa6);
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
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      FUN_03ebb160(lVar6,0xa6);
    }
  }
  else if ((iVar5 != 3) &&
          (uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar8 & 1) == 0
          )) {
    local_58 = 0;
    local_60 = CONCAT35(local_60._5_3_,0x100000006);
    FUN_02374e74(param_1,&local_60);
  }
  return;
}

