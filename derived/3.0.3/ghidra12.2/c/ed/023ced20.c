
void FUN_023ced20(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  float local_4c;
  float local_48;
  float local_44;
  
  local_4c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_48 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_44 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_4c);
  uVar4 = *(ushort *)(param_1 + 0x190a);
  lVar7 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar12 = *pfVar9;
  if ((*(int *)(param_1 + 0x178) != 0) || ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    iVar6 = (uint)uVar4 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar3 + 0x148))();
    iVar11 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar11 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar6 = -0x15555560;
      iVar11 = (int)(fVar12 * (float)iVar11);
      if (iVar11 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar5 <= iVar11) {
        iVar1 = iVar5;
      }
      if (iVar6 <= iVar11) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar7 + 0x424) = 2;
  iVar6 = FUN_01392d64(lVar7 + 0x4c8);
  *(int *)(lVar7 + 0x420) = iVar6;
  *(int *)(lVar7 + 0x4c0) = *(int *)(lVar7 + 0x4c0) + 1;
  if (iVar6 != 3) {
    if (iVar6 == 1) {
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
      local_4c = 3.74147e-43;
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
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar7,0x10b);
    }
    else {
      uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar10 & 1) == 0) {
        local_44 = 0.0;
        local_4c = 8.40779e-45;
        local_48 = (float)CONCAT31(local_48._1_3_,1);
        FUN_02374e74(param_1,&local_4c);
      }
    }
  }
  return;
}

