
void FUN_02497fe8(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined1 local_64;
  float local_5c [3];
  
  local_68 = 0x3f800000;
  local_70 = (float)(int)*(short *)(param_1 + 0x191a) * 0.25;
  bVar10 = *(byte *)(param_1 + 0x1ee8);
  local_6c = (float)*(int *)(param_1 + 0x191c) * 0.001;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar10);
  local_64 = 1;
  local_78._4_4_ = (float)*(int *)(param_1 + 0x1916) * 0.001;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_78,*(undefined4 *)(param_1 + 0x230),1);
  FUN_016dec40(param_1,*(long *)(param_1 + 0x68) + 0x278,0,0,0,0,0);
  uVar4 = *(ushort *)(param_1 + 0x1914);
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar15 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_5c[0] = 1.4013e-44;
    local_78._0_4_ = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      bVar6 = true;
      goto LAB_024981d8;
    }
  }
  iVar13 = (uint)uVar4 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar2 + 0x148))();
  iVar14 = iVar13 - *(int *)(lVar7 + 4);
  if (iVar14 + 0x5b05afU < 0xb60b5f) {
    bVar6 = true;
    iVar12 = iVar13;
  }
  else {
    iVar5 = 0x15555560;
    iVar12 = -0x15555560;
    iVar14 = (int)(fVar15 * (float)iVar14);
    if (iVar14 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar12 = 0x5b05b0;
    }
    iVar1 = iVar14;
    if (iVar5 <= iVar14) {
      iVar1 = iVar5;
    }
    if (iVar12 <= iVar14) {
      iVar12 = iVar1;
    }
    iVar12 = iVar12 + *(int *)(lVar7 + 4);
    bVar6 = iVar12 == iVar13;
  }
  *(int *)(lVar7 + 4) = iVar12;
LAB_024981d8:
  iVar13 = *(int *)(param_1 + 0x190a);
  iVar14 = *(int *)(param_1 + 0x1910);
  lVar7 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  local_5c[1] = 0.0;
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_70 = *(float *)(puVar3 + 0x50);
  local_78 = puVar3[0x4f] & 0xffffffff;
  local_5c[0] = (float)iVar13 * 0.001;
  local_5c[2] = (float)iVar14 * 0.001;
  fVar15 = (float)FUN_03eb4b60(*puVar9,0x41200000,0x3e4ccccc,&local_78,local_5c);
  *(undefined4 *)(puVar3 + 0x4f) = (undefined4)local_78;
  *(float *)(puVar3 + 0x50) = local_70;
  if (((bVar6) && (fVar15 == 0.0)) && (*(int *)(param_1 + 0x178) == 0)) {
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined4 *)(lVar7 + 0x424) = 2;
    iVar13 = FUN_01392d64(lVar7 + 0x4c8);
    *(int *)(lVar7 + 0x420) = iVar13;
    *(int *)(lVar7 + 0x4c0) = *(int *)(lVar7 + 0x4c0) + 1;
    if (iVar13 != 3) {
      if (iVar13 == 1) {
        *(undefined8 *)(param_1 + 0x19ab) = 0;
        *(undefined8 *)(param_1 + 0x19b3) = 0;
        *(undefined8 *)(param_1 + 0x19bb) = 0;
        *(undefined8 *)(param_1 + 0x19c3) = 0;
        *(undefined8 *)(param_1 + 0x19cb) = 0;
        *(undefined8 *)(param_1 + 0x19d2) = 0;
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(undefined4 *)(param_1 + 0x19a7) = *(undefined4 *)(param_1 + 0x1927);
        *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
        if (*(char *)(param_1 + 0x1922) == '\0') {
          uVar11 = 0x112;
        }
        else {
          uVar11 = 0x8c;
        }
        local_78 = CONCAT44(local_78._4_4_,uVar11);
        if (uVar11 < 0x149) {
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
          FUN_03ebb160(lVar7,uVar11);
        }
      }
      else {
        local_70 = 0.0;
        local_6c = (float)((uint)local_6c & 0xffffff00);
        local_78 = 0x1000000000006;
        FUN_02374564(param_1,&local_78);
      }
    }
  }
  return;
}

