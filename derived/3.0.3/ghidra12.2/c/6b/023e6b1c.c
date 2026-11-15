
void FUN_023e6b1c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  float fVar16;
  int local_8c [3];
  ulong local_80;
  undefined4 local_78;
  
  iVar15 = *(int *)(param_1 + 0x1900);
  sVar6 = *(short *)(param_1 + 0x1904);
  uVar5 = *(ushort *)(param_1 + 0x190a);
  uVar14 = *(undefined4 *)(param_1 + 0x1906);
  cVar4 = *(char *)(param_1 + 0x191d);
  lVar8 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x1380) + 0xf0))(lVar8 + 0x1380);
  local_8c[1] = 0;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_78 = *(undefined4 *)(puVar2 + 0x50);
  local_80 = puVar2[0x4f] & 0xffffffff;
  local_8c[0] = iVar15;
  local_8c[2] = uVar14;
  FUN_03eb4b60(*puVar9,0x41200000,0x3e4ccccc,&local_80,local_8c);
  *(undefined4 *)(puVar2 + 0x4f) = (undefined4)local_80;
  *(undefined4 *)(puVar2 + 0x50) = local_78;
  lVar8 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x13b0) + 0xf0))(lVar8 + 0x13b0);
  fVar16 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_8c[0] = 10;
    local_80 = CONCAT44(local_80._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023e6cf4;
  }
  iVar13 = (uint)uVar5 * 0x10000;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar8 = (**(code **)(*plVar3 + 0x148))();
  iVar11 = iVar13 - *(int *)(lVar8 + 4);
  if (0xb60b5e < iVar11 + 0x5b05afU) {
    iVar7 = 0x15555560;
    iVar13 = -0x15555560;
    iVar11 = (int)(fVar16 * (float)iVar11);
    if (iVar11 < 1) {
      iVar7 = -0x5b05b0;
    }
    else {
      iVar13 = 0x5b05b0;
    }
    iVar1 = iVar11;
    if (iVar7 <= iVar11) {
      iVar1 = iVar7;
    }
    if (iVar13 <= iVar11) {
      iVar13 = iVar1;
    }
    iVar13 = iVar13 + *(int *)(lVar8 + 4);
  }
  *(int *)(lVar8 + 4) = iVar13;
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
LAB_023e6cf4:
  lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar8 + 0x5b4) = 2;
  local_8c[0] = FUN_01392d64(lVar8 + 0x658);
  *(int *)(lVar8 + 0x5b0) = local_8c[0];
  *(int *)(lVar8 + 0x650) = *(int *)(lVar8 + 0x650) + 1;
  if (local_8c[0] != 3) {
    fVar16 = (float)(int)sVar6 * 0.25;
    if (local_8c[0] == 1) {
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(int *)(param_1 + 0x1980) = iVar15;
      *(undefined4 *)(param_1 + 0x1986) = uVar14;
      *(ushort *)(param_1 + 0x198a) = uVar5;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      iVar15 = (int)(fVar16 * 4.0);
      if (0x7ffe < iVar15) {
        iVar15 = 0x7fff;
      }
      if (iVar15 < -0x7fff) {
        iVar15 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar15;
      uVar12 = 0x54;
    }
    else {
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(int *)(param_1 + 0x1980) = iVar15;
      *(undefined4 *)(param_1 + 0x1986) = uVar14;
      *(ushort *)(param_1 + 0x198a) = uVar5;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      iVar15 = (int)(fVar16 * 4.0);
      if (0x7ffe < iVar15) {
        iVar15 = 0x7fff;
      }
      if (iVar15 < -0x7fff) {
        iVar15 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar15;
      uVar12 = 0x52;
    }
    *(bool *)(param_1 + 0x199d) = cVar4 != '\0';
    local_80 = CONCAT44(local_80._4_4_,uVar12);
    if (uVar12 < 0x149) {
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
      lVar8 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar8 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar8,uVar12);
    }
  }
  return;
}

