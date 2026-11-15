
void FUN_023ffc6c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  iVar8 = *(int *)(param_1 + 0x1900);
  iVar9 = *(int *)(param_1 + 0x1906);
  lVar5 = FUN_0251e98c(1);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
  local_68 = 0;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_58 = *(undefined4 *)(puVar2 + 0x50);
  local_60 = puVar2[0x4f] & 0xffffffff;
  local_6c = (float)iVar8 * 0.001;
  local_64 = (float)iVar9 * 0.001;
  FUN_03eb4b60(*puVar6,0x41200000,0x3e4ccccc,&local_60,&local_6c);
  *(int *)(puVar2 + 0x4f) = (int)local_60;
  *(undefined4 *)(puVar2 + 0x50) = local_58;
  fVar10 = (float)*(int *)(param_1 + 0x190a) * 0.001 - *(float *)(*(long *)(param_1 + 0x68) + 0x278)
  ;
  fVar11 = (float)*(int *)(param_1 + 0x1910) * 0.001 - *(float *)(*(long *)(param_1 + 0x68) + 0x280)
  ;
  fVar12 = SQRT(fVar10 * fVar10 + 0.0 + fVar11 * fVar11);
  if (0.0 < fVar12) {
    fVar10 = fVar10 * (1.0 / fVar12);
    fVar11 = fVar11 * (1.0 / fVar12);
    fVar12 = SQRT(fVar10 * fVar10 + 0.0 + fVar11 * fVar11);
  }
  if (0.0 < fVar12) {
    fVar10 = (1.0 / fVar12) * fVar10;
    fVar11 = fVar11 * (1.0 / fVar12);
  }
  if ((fVar10 == 0.0) && (fVar11 == 0.0)) {
    iVar8 = 0;
    iVar9 = *(int *)(param_1 + 0x178);
  }
  else {
    iVar8 = FUN_006f0400();
    iVar9 = *(int *)(param_1 + 0x178);
  }
  if (iVar9 == 0) {
    local_6c = 1.4013e-44;
    local_60._4_4_ = (undefined4)(local_60 >> 0x20);
    local_60 = CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023ffeec;
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar5 = (**(code **)(*plVar3 + 0x148))();
  iVar9 = iVar8 - *(int *)(lVar5 + 4);
  if (0xb60b5e < iVar9 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar8 = -0x15555560;
    iVar9 = (int)((float)iVar9 * 0.25);
    if (iVar9 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar8 = 0x5b05b0;
    }
    iVar1 = iVar9;
    if (iVar4 <= iVar9) {
      iVar1 = iVar4;
    }
    if (iVar8 <= iVar9) {
      iVar8 = iVar1;
    }
    iVar8 = iVar8 + *(int *)(lVar5 + 4);
  }
  *(int *)(lVar5 + 4) = iVar8;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
LAB_023ffeec:
  lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar5 + 0x424) = 2;
  iVar8 = FUN_01392d64(lVar5 + 0x4c8);
  *(int *)(lVar5 + 0x420) = iVar8;
  *(int *)(lVar5 + 0x4c0) = *(int *)(lVar5 + 0x4c0) + 1;
  if (iVar8 != 3) {
    if (iVar8 == 1) {
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1997) = 0;
      *(undefined8 *)(param_1 + 0x199f) = 0;
      *(undefined8 *)(param_1 + 0x19a7) = 0;
      *(undefined8 *)(param_1 + 0x19af) = 0;
      *(undefined8 *)(param_1 + 0x19b7) = 0;
      *(undefined8 *)(param_1 + 0x19bf) = 0;
      *(undefined8 *)(param_1 + 0x19c7) = 0;
      *(undefined8 *)(param_1 + 0x19cf) = 0;
      *(undefined4 *)(param_1 + 0x19d6) = 0;
      *(undefined8 *)(param_1 + 0x198f) = *(undefined8 *)(param_1 + 0x190f);
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      local_60 = CONCAT44(local_60._4_4_,0xba);
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
      lVar5 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar5 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar5,0xba);
    }
    else {
      local_60._0_4_ = iVar8;
      uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar7 & 1) == 0) {
        local_58 = 0;
        local_60 = CONCAT35(local_60._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_60);
      }
    }
  }
  return;
}

