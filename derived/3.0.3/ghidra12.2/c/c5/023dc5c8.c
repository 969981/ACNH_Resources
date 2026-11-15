
void FUN_023dc5c8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_7c;
  float local_78;
  float local_74;
  
  sVar6 = *(short *)(param_1 + 0x1904);
  fVar15 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_78 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_7c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  fVar14 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_74 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*pfVar10 * 0.5,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_7c);
  iVar8 = FUN_006f0400(fVar15 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       fVar14 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar16 = *pfVar10;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_7c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar3 + 0x148))();
    iVar12 = iVar8 - *(int *)(lVar9 + 4);
    if (0xb60b5e < iVar12 + 0x5b05afU) {
      iVar13 = 0x15555560;
      iVar8 = -0x15555560;
      iVar12 = (int)(fVar16 * 0.5 * (float)iVar12);
      if (iVar12 < 1) {
        iVar13 = -0x5b05b0;
      }
      else {
        iVar8 = 0x5b05b0;
      }
      iVar1 = iVar12;
      if (iVar13 <= iVar12) {
        iVar1 = iVar13;
      }
      if (iVar8 <= iVar12) {
        iVar8 = iVar1;
      }
      iVar8 = iVar8 + *(int *)(lVar9 + 4);
    }
    *(int *)(lVar9 + 4) = iVar8;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  iVar8 = *(int *)(param_1 + 0x190a);
  lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  sVar7 = *(short *)(param_1 + 0x190e);
  bVar4 = *(byte *)(param_1 + 0x1914);
  if (1 < bVar4) {
    bVar4 = 0;
  }
  cVar5 = *(char *)(param_1 + 0x1915);
  iVar12 = *(int *)(param_1 + 0x1910);
  if (bVar4 == 0) {
    *(undefined4 *)(lVar9 + 0xc) = 2;
    local_7c = (float)FUN_01392d64(lVar9 + 0xb0);
    *(float *)(lVar9 + 8) = local_7c;
    *(int *)(lVar9 + 0xa8) = *(int *)(lVar9 + 0xa8) + 1;
  }
  else {
    *(undefined4 *)(lVar9 + 0x11c) = 2;
    local_7c = (float)FUN_01392d64(lVar9 + 0x1c0);
    *(float *)(lVar9 + 0x118) = local_7c;
    *(int *)(lVar9 + 0x1b8) = *(int *)(lVar9 + 0x1b8) + 1;
  }
  if (local_7c != 4.2039e-45) {
    if (local_7c == 1.4013e-45) {
      *(undefined8 *)(param_1 + 0x1990) = 0;
      iVar13 = (int)((float)(int)sVar6 * 0.25 * 4.0);
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1980) = (int)(fVar15 * 999.99994);
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      if (iVar13 < -0x7fff) {
        iVar13 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar13;
      *(int *)(param_1 + 0x1986) = (int)(fVar14 * 999.99994);
      *(int *)(param_1 + 0x198a) = (int)((float)iVar8 * 0.001 * 999.99994);
      iVar8 = (int)((float)(int)sVar7 * 0.25 * 4.0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x198e) = (short)iVar8;
      *(int *)(param_1 + 0x1990) = (int)((float)iVar12 * 0.001 * 999.99994);
      *(bool *)(param_1 + 0x1995) = cVar5 != '\0';
      *(byte *)(param_1 + 0x1994) = bVar4;
      local_7c = 1.69557e-43;
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
      lVar9 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar9 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar9,0x79);
    }
    else {
      uVar11 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar11 & 1) == 0) {
        local_74 = 0.0;
        local_7c = 8.40779e-45;
        local_78 = (float)CONCAT31(local_78._1_3_,1);
        FUN_02374e74(param_1,&local_7c);
      }
    }
  }
  return;
}

