
void FUN_0242aa90(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  ulong *puVar14;
  int *piVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  ulong local_a8;
  ulong local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  uint local_88;
  uint uStack_84;
  ulong local_80;
  float local_78;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar18 = *(int *)(param_1 + 0x18e5);
    iVar19 = *(int *)(param_1 + 0x18eb);
    lVar10 = FUN_0251e98c(1);
    puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
    local_80 = (ulong)(uint)((float)iVar18 * 0.001);
    puVar1 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_98 = *(float *)(puVar1 + 0x50);
    local_a0 = puVar1[0x4f] & 0xffffffff;
    local_78 = (float)iVar19 * 0.001;
    FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,&local_a0,&local_80);
    *(uint *)(puVar1 + 0x4f) = (uint)local_a0;
    *(float *)(puVar1 + 0x50) = local_98;
    uVar5 = *(ushort *)(param_1 + 0x18ef);
    lVar10 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
    fVar20 = *pfVar12;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_80 = CONCAT44(local_80._4_4_,10);
      local_a0 = CONCAT44(local_a0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return;
      }
    }
    iVar18 = (uint)uVar5 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar3 + 0x148))();
    iVar19 = iVar18 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar19 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar18 = -0x15555560;
      iVar19 = (int)(fVar20 * 0.6 * (float)iVar19);
      if (iVar19 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar18 = 0x5b05b0;
      }
      iVar2 = iVar19;
      if (iVar7 <= iVar19) {
        iVar2 = iVar7;
      }
      if (iVar18 <= iVar19) {
        iVar18 = iVar2;
      }
      iVar18 = iVar18 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar18;
    return;
  }
  bVar16 = *(byte *)(param_1 + 0x1916);
  iVar18 = 2;
  if (7 < bVar16) {
    bVar16 = 0;
  }
  uVar9 = (uint)*(byte *)(param_1 + 0x1915);
  if (2 < uVar9) {
    uVar9 = 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  local_a0._0_4_ = uVar9;
  if (uVar9 == 2) {
    *(undefined4 *)(lVar10 + 0xc) = 2;
LAB_0242ad2c:
    iVar18 = FUN_01392d64(lVar10 + 0xb0);
    piVar15 = (int *)(lVar10 + 0xa8);
    *(int *)(lVar10 + 8) = iVar18;
LAB_0242ad3c:
    *piVar15 = *piVar15 + 1;
  }
  else {
    if (uVar9 == 1) {
      *(undefined4 *)(lVar10 + 0xc) = 2;
      goto LAB_0242ad2c;
    }
    if (uVar9 == 0) {
      *(undefined4 *)(lVar10 + 0x5b4) = 2;
      iVar18 = FUN_01392d64(lVar10 + 0x658);
      *(int *)(lVar10 + 0x5b0) = iVar18;
      piVar15 = (int *)(lVar10 + 0x650);
      goto LAB_0242ad3c;
    }
  }
  if (iVar18 == 3) {
    return;
  }
  if (iVar18 != 1) {
    uVar13 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
    if ((uVar13 & 1) == 0) {
      local_98 = 0.0;
      local_a0 = CONCAT35(local_a0._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_a0);
      return;
    }
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x1900);
  if (uVar9 != 1) {
    if (uVar9 == 0) {
      iVar18 = *(int *)(param_1 + 0x1909);
      sVar6 = *(short *)(param_1 + 0x190d);
      local_a0 = 0xfffe;
      iVar19 = *(int *)(param_1 + 0x190f);
      FUN_0277d4ac(&local_a0);
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
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
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1989) = (int)((float)iVar18 * 0.001 * 999.99994);
      iVar18 = (int)((float)(int)sVar6 * 0.25 * 4.0);
      if (0x7ffe < iVar18) {
        iVar18 = 0x7fff;
      }
      if (iVar18 < -0x7fff) {
        iVar18 = -0x8000;
      }
      *(short *)(param_1 + 0x198d) = (short)iVar18;
      *(int *)(param_1 + 0x198f) = (int)((float)iVar19 * 0.001 * 999.99994);
      *(byte *)(param_1 + 0x1996) = bVar16;
      local_a0 = CONCAT44(local_a0._4_4_,0x25);
    }
    else {
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *puVar1;
      local_a0 = CONCAT44(local_a0._4_4_,0xa8);
    }
    if (0x148 < (uint)local_a0) {
      return;
    }
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
    lVar10 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar10 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar10,local_a0 & 0xffffffff);
    return;
  }
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  puVar8 = PTR_DAT_04bb43c0;
  local_68 = *puVar1;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar8 == 0) {
LAB_0242b028:
    if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      pbVar4 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar17 = *(byte *)(param_1 + 0x1ee8);
      bVar16 = *pbVar4;
      if (7 < bVar16) {
        bVar16 = 0xff;
      }
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
      if (bVar16 != bVar17) {
        puVar14 = &local_80;
        local_80 = 0xfffe;
        goto LAB_0242b098;
      }
    }
    FUN_0242b364(param_1,puVar1);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0242b028;
    FUN_01ad5d04(&local_80,&local_68);
    FUN_01ad9fd0(&local_80);
    uVar13 = FUN_01b05fac(&local_80,0);
    if ((uVar13 & 1) == 0) goto LAB_0242b028;
    puVar14 = &local_a8;
    local_a8 = 0xfffe;
LAB_0242b098:
    FUN_0277d4ac(puVar14);
    fStack_94 = (float)(int)*(short *)(param_1 + 0x190d) * 0.25;
    local_a0 = *(ulong *)(param_1 + 0x1900);
    uStack_84 = (uint)*(byte *)(param_1 + 0x1916);
    if (7 < uStack_84) {
      uStack_84 = 0;
    }
    local_88 = (uint)*(byte *)(param_1 + 0x1908);
    if (0xb < local_88) {
      local_88 = 0;
    }
    fStack_8c = (float)(int)*(short *)(param_1 + 0x1913) * 0.001;
    local_98 = (float)*(int *)(param_1 + 0x1909) * 0.001;
    local_90 = (float)*(int *)(param_1 + 0x190f) * 0.001;
    FUN_0242b130(param_1,&local_a0);
  }
  return;
}

