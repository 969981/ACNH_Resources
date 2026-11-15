
void FUN_0245dd5c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float local_4c;
  float local_48;
  float local_44;
  
  iVar5 = FUN_006f0400((float)*(int *)(param_1 + 0x190c) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       (float)*(int *)(param_1 + 0x1912) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  fVar10 = *pfVar7;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_4c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar2 + 0x148))();
    iVar9 = iVar5 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar9 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar5 = -0x15555560;
      iVar9 = (int)(fVar10 * 0.6 * (float)iVar9);
      if (iVar9 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar9;
      if (iVar4 <= iVar9) {
        iVar1 = iVar4;
      }
      if (iVar5 <= iVar9) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar5;
    iVar5 = *(int *)(param_1 + 0x178);
    if (iVar5 == 1) {
      lVar6 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
      local_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
      local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
      local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
      puVar3 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)(param_1 + 0x4c8);
      }
      FUN_03eb4b60(*pfVar7 * 0.6,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_4c);
      iVar5 = *(int *)(param_1 + 0x178);
    }
    if (iVar5 != 0) {
      return;
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar6 + 0x424) = 2;
  local_4c = (float)FUN_01392d64(lVar6 + 0x4c8);
  *(float *)(lVar6 + 0x420) = local_4c;
  *(int *)(lVar6 + 0x4c0) = *(int *)(lVar6 + 0x4c0) + 1;
  if (local_4c != 4.2039e-45) {
    if (local_4c == 1.4013e-45) {
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1999) = 0;
      *(undefined8 *)(param_1 + 0x19a1) = 0;
      *(undefined8 *)(param_1 + 0x19a9) = 0;
      *(undefined8 *)(param_1 + 0x19b1) = 0;
      *(undefined8 *)(param_1 + 0x19b9) = 0;
      *(undefined8 *)(param_1 + 0x19c1) = 0;
      *(undefined8 *)(param_1 + 0x19c9) = 0;
      *(undefined8 *)(param_1 + 0x19d1) = 0;
      *(undefined1 *)(param_1 + 0x19d9) = 0;
      *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined1 *)(param_1 + 0x1998) = *(undefined1 *)(param_1 + 0x1918);
      local_4c = 3.90962e-43;
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
      FUN_03ebb160(lVar6,0x117);
    }
    else {
      *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x400000;
      uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar8 & 1) == 0) {
        local_44 = 0.0;
        local_4c = 8.40779e-45;
        local_48 = (float)CONCAT31(local_48._1_3_,1);
        FUN_02374e74(param_1,&local_4c);
      }
    }
  }
  return;
}

