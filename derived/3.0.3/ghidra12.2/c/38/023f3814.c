
void FUN_023f3814(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float local_84;
  float fStack_80;
  float local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar12 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar2 + 0x2ec) = uVar12;
  *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x1902);
  local_78 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,(float)*piVar1 * 0.001);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  FUN_01261e40(0x40200000,PTR_DAT_04bbe200,&local_78,0,0);
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar11 + 0x424) = 2;
  iVar6 = FUN_01392d64(lVar11 + 0x4c8);
  *(int *)(lVar11 + 0x420) = iVar6;
  *(int *)(lVar11 + 0x4c0) = *(int *)(lVar11 + 0x4c0) + 1;
  if (iVar6 != 1) {
    if (iVar6 == 3) {
      return;
    }
    uVar9 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar9 & 1) == 0) {
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
      local_78 = (undefined *)CONCAT35(local_78._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_78);
      return;
    }
    return;
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  lVar11 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  iVar6 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
  if (0x7ffe < iVar6) {
    iVar6 = 0x7fff;
  }
  if (iVar6 < -0x7fff) {
    iVar6 = -0x8000;
  }
  *(short *)(param_1 + 0x1986) = (short)iVar6;
  *(int *)(param_1 + 0x1982) = (int)((float)*piVar1 * 0.001 * 999.99994);
  *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
  *(int *)(param_1 + 0x198c) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
  iVar6 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
  if (0x7ffe < iVar6) {
    iVar6 = 0x7fff;
  }
  if (iVar6 < -0x7fff) {
    iVar6 = -0x8000;
  }
  *(short *)(param_1 + 0x1990) = (short)iVar6;
  fVar13 = *(float *)(lVar11 + 0x280);
  *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
  *(bool *)(param_1 + 0x1996) = *(char *)(param_1 + 0x190c) != '\0';
  puVar2 = (undefined8 *)(param_1 + 0x1980);
  *(undefined1 *)(param_1 + 0x1997) = *(undefined1 *)(param_1 + 0x190d);
  *(int *)(param_1 + 0x1992) = (int)(fVar13 * 999.99994);
  *(bool *)(param_1 + 0x1998) = *(char *)(param_1 + 0x190e) != '\0';
  uVar7 = FUN_023f2be4(param_1);
  puVar5 = PTR_DAT_04bc3a80;
  iVar6 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (((iVar6 == -0x6efba09b) && (*(long *)PTR_DAT_04bb27f8 != 0)) &&
     (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 2)) {
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    local_58 = 0x5600000056;
    local_70 = PTR_DAT_04bb2010 + 0x10;
    fStack_80 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_84 = (float)*piVar1 * 0.001;
    local_68 = 0x5500000055;
    local_7c = (float)*(int *)(param_1 + 0x1908) * 0.001;
    puStack_60 = local_70;
    uVar8 = FUN_012e2100(&local_78,&local_84);
    if (((uVar7 | uVar8) & 1) == 0) {
      iVar6 = *(int *)(puVar5 + 0x38);
LAB_023f3c38:
      puVar5 = PTR_DAT_04bb43c0;
      if (((iVar6 == -0x10e0fba8) && (730.0 <= (float)*piVar1 * 0.001)) &&
         (((float)*piVar1 * 0.001 <= 760.0 &&
          ((fVar13 = (float)*(int *)(param_1 + 0x1908) * 0.001, 590.0 <= fVar13 && (fVar13 <= 605.0)
           ))))) {
        if (*(long *)(param_1 + 0x298) == 0) {
          puVar10 = PTR_DAT_04bb37e0;
        }
        else {
          lVar11 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
          puVar10 = (undefined *)(lVar11 + ((ulong)*(uint *)(lVar11 + 0x10) & 1) * 0x20 + 0x14);
        }
        lVar11 = *(long *)PTR_DAT_04bb43c0;
        uVar7 = FUN_0277d6c4(puVar10);
        if (*(long *)puVar5 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_02476cb0(param_1,6,puVar2,0,0);
            return;
          }
        }
      }
      uVar7 = 0x65;
      goto LAB_023f3d54;
    }
  }
  else if ((uVar7 & 1) == 0) goto LAB_023f3c38;
  uVar3 = *(undefined8 *)(param_1 + 0x19b0);
  uVar4 = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x2090) = uVar4;
  *(undefined8 *)(param_1 + 0x2088) = uVar3;
  *(undefined8 *)(param_1 + 0x2098) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x20a0) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x2070) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x2068) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x2078) = *(undefined8 *)(param_1 + 0x19a0);
  uVar3 = *puVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x2080) = *(undefined8 *)(param_1 + 0x19a8);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x2060) = uVar4;
  *(undefined8 *)(param_1 + 0x2058) = uVar3;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x20a6) = *(undefined8 *)(param_1 + 0x19ce);
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined2 *)(param_1 + 0x198b) = 0;
  *(undefined1 *)(param_1 + 0x198a) = 6;
  uVar7 = 0x2a;
LAB_023f3d54:
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar7);
  if (uVar7 < 0x149) {
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
    lVar11 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar11 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar11,uVar7);
  }
  return;
}

