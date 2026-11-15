
void FUN_023e38c4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_7c [3];
  ulong local_70;
  undefined4 local_68;
  
  fVar15 = *(float *)(param_1 + 0x1900);
  sVar5 = *(short *)(param_1 + 0x1904);
  uVar4 = *(ushort *)(param_1 + 0x190a);
  fVar14 = *(float *)(param_1 + 0x1906);
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  local_7c[1] = 0.0;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_68 = *(undefined4 *)(puVar2 + 0x50);
  local_70 = puVar2[0x4f] & 0xffffffff;
  local_7c[0] = fVar15;
  local_7c[2] = fVar14;
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_70,local_7c);
  *(undefined4 *)(puVar2 + 0x4f) = (undefined4)local_70;
  *(undefined4 *)(puVar2 + 0x50) = local_68;
  lVar7 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar16 = *pfVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c[0] = 1.4013e-44;
    local_70 = CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023e3a98;
  }
  iVar12 = (uint)uVar4 * 0x10000;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar3 + 0x148))();
  iVar11 = iVar12 - *(int *)(lVar7 + 4);
  if (0xb60b5e < iVar11 + 0x5b05afU) {
    iVar6 = 0x15555560;
    iVar12 = -0x15555560;
    iVar11 = (int)(fVar16 * (float)iVar11);
    if (iVar11 < 1) {
      iVar6 = -0x5b05b0;
    }
    else {
      iVar12 = 0x5b05b0;
    }
    iVar1 = iVar11;
    if (iVar6 <= iVar11) {
      iVar1 = iVar6;
    }
    if (iVar12 <= iVar11) {
      iVar12 = iVar1;
    }
    iVar12 = iVar12 + *(int *)(lVar7 + 4);
  }
  *(int *)(lVar7 + 4) = iVar12;
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
LAB_023e3a98:
  lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar7 + 0x5b4) = 2;
  local_7c[0] = (float)FUN_01392d64(lVar7 + 0x658);
  *(float *)(lVar7 + 0x5b0) = local_7c[0];
  *(int *)(lVar7 + 0x650) = *(int *)(lVar7 + 0x650) + 1;
  fVar16 = *(float *)(*(long *)(param_1 + 0x68) + 0x278) - fVar15;
  fVar13 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) - fVar14;
  if ((SQRT(fVar13 * fVar13 + fVar16 * fVar16) < 5.0 || 0x14 < *(uint *)(param_1 + 0x1c04)) &&
     (local_7c[0] != 4.2039e-45)) {
    fVar16 = (float)(int)sVar5 * 0.25;
    if (local_7c[0] == 1.4013e-45) {
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(float *)(param_1 + 0x1980) = fVar15;
      *(float *)(param_1 + 0x1986) = fVar14;
      *(ushort *)(param_1 + 0x198a) = uVar4;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      iVar12 = (int)(fVar16 * 4.0);
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      if (iVar12 < -0x7fff) {
        iVar12 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar12;
      uVar10 = 0x50;
    }
    else {
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(float *)(param_1 + 0x1980) = fVar15;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffe;
      *(float *)(param_1 + 0x1986) = fVar14;
      *(ushort *)(param_1 + 0x198a) = uVar4;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      iVar12 = (int)(fVar16 * 4.0);
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      if (iVar12 < -0x7fff) {
        iVar12 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar12;
      uVar10 = 0x4e;
    }
    local_70 = CONCAT44(local_70._4_4_,uVar10);
    if (uVar10 < 0x149) {
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
      FUN_03ebb160(lVar7,uVar10);
    }
  }
  return;
}

