
void FUN_024ed004(long param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined8 *local_60;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  float local_48;
  undefined4 local_44;
  byte local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    bVar7 = *pbVar1;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (bVar7 != bVar8) {
      local_50._4_4_ = (float)(int)*(short *)(param_1 + 0x1928) * 0.25;
      local_50._0_4_ = (float)*(int *)(param_1 + 0x1924) * 0.001;
      local_48 = (float)*(int *)(param_1 + 0x192a) * 0.001;
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0')) {
        fVar11 = -491.0;
      }
      else {
        fVar11 = (float)FUN_0093a950(lVar9 + 0x28,&local_50,0);
        fVar11 = fVar11 + 9.0;
      }
      puVar10 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(float *)(puVar10 + 0x5d) = (float)local_50;
      *(undefined1 *)((long)puVar10 + 0x2e4) = 1;
      *(float *)((long)puVar10 + 0x2ec) = fVar11;
      *(float *)(puVar10 + 0x5e) = local_48;
      *(undefined2 *)((long)puVar10 + 0x2e5) = 0x101;
      *(undefined8 *)(param_1 + 0x19ae) = 0;
      *(undefined8 *)(param_1 + 0x19b6) = 0;
      *(undefined8 *)(param_1 + 0x19be) = 0;
      *(undefined8 *)(param_1 + 0x19c6) = 0;
      *(undefined8 *)(param_1 + 0x19ce) = 0;
      *(undefined4 *)(param_1 + 0x19d6) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
      local_50 = (undefined *)CONCAT44(local_50._4_4_,300);
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
      lVar9 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      goto LAB_024ed4bc;
    }
  }
  if (*(int *)(param_1 + 0x1c04) == 0) {
    FUN_01521b30();
  }
  local_48 = 0.0;
  if (DAT_05aed670 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_44 = *(undefined4 *)(puVar10 + 7);
  local_40 = FUN_017baf44();
  local_40 = local_40 & 1;
  local_50 = PTR_DAT_04bb5438 + 0x10;
  local_60 = &DAT_048f9750;
  fVar11 = (float)*(int *)(param_1 + 0x1924) * 0.001;
  fVar12 = (float)*(int *)(param_1 + 0x192a) * 0.001;
  local_58 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iStack_54 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  puVar5 = (uint *)FUN_014fbd50(&local_50,0,&local_60);
  uVar3 = *puVar5;
  if (uVar3 == 0) {
    if (*(uint *)(param_1 + 0x1c04) < 0x96) {
      return;
    }
  }
  else {
    if (DAT_04c93e08 == 0) {
      return;
    }
    lVar9 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                     ((ulong)(uVar3 >> 0x11) & 0x7ff8));
    if (((lVar9 == 0) || ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar9 + 0x230) != uVar3)) {
      lVar9 = 0;
    }
    if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      (**(code **)(*plVar6 + 0x60))();
    }
    if (lVar9 == 0) {
      return;
    }
    if ((*(uint *)(lVar9 + 0x248) >> 4 & 1) == 0) {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x19ae) = 0;
  *(undefined8 *)(param_1 + 0x19b6) = 0;
  *(undefined8 *)(param_1 + 0x19be) = 0;
  *(undefined8 *)(param_1 + 0x19c6) = 0;
  *(undefined8 *)(param_1 + 0x19ce) = 0;
  *(undefined4 *)(param_1 + 0x19d6) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
  *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
  *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
  local_34 = 300;
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
  lVar9 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
LAB_024ed4bc:
  lVar2 = 0;
  if (lVar9 != 0) {
    lVar2 = lVar9 + 0x278;
  }
  FUN_03ebb160(lVar2,300);
  return;
}

