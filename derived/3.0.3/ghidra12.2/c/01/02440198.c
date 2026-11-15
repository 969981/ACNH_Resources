
void FUN_02440198(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar9 + 0x278) * 999.99994);
    iVar8 = (int)(*(float *)(lVar9 + 0x27c) * 4.0);
    if (0x7ffe < iVar8) {
      iVar8 = 0x7fff;
    }
    if (iVar8 < -0x7fff) {
      iVar8 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar8;
    fVar15 = *(float *)(lVar9 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar15 * 999.99994);
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar14 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar13 + 0x2ec) = uVar14;
    *(undefined1 *)((long)puVar13 + 0x2e5) = 1;
  }
  uVar4 = *(ushort *)(param_1 + 0x1900);
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar15 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_54[0] = 10;
    local_4c = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02440398;
  }
  iVar8 = (uint)uVar4 * 0x10000;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar9 = (**(code **)(*plVar3 + 0x148))();
  iVar12 = iVar8 - *(int *)(lVar9 + 4);
  if (0xb60b5e < iVar12 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar8 = -0x15555560;
    iVar12 = (int)(fVar15 * (float)iVar12);
    if (iVar12 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar8 = 0x5b05b0;
    }
    iVar2 = iVar12;
    if (iVar5 <= iVar12) {
      iVar2 = iVar5;
    }
    if (iVar8 <= iVar12) {
      iVar8 = iVar2;
    }
    iVar8 = iVar8 + *(int *)(lVar9 + 4);
  }
  *(int *)(lVar9 + 4) = iVar8;
LAB_02440398:
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (puVar13[0x227] == 0) {
    uVar7 = 0;
  }
  else {
    local_4c = 1;
    uVar7 = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
  }
  uVar11 = FUN_0170a6d0(puVar13,uVar7);
  if (((uVar11 & 1) != 0) || (0x96 < *(uint *)(param_1 + 0x1c04))) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    FUN_0253395c(local_54,pbVar1,*(undefined4 *)PTR_DAT_04bb3238);
    puVar6 = PTR_DAT_04bb43c0;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(local_54);
    if (*(long *)puVar6 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
         (uVar11 = FUN_016e7304(local_54,1,0), (uVar11 & 1) == 0)) {
        *(undefined8 *)(param_1 + 0x1980) = 0;
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
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(undefined2 *)(param_1 + 0x198b) = 0;
        *(undefined1 *)(param_1 + 0x198a) = 1;
        local_4c = 0x2a;
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
        FUN_03ebb160(lVar9,0x2a);
        if ((((*pbVar1 < 8) &&
             (uVar7 = FUN_02582d8c(pbVar1,1), puVar6 = PTR_DAT_04bb4fb8, uVar7 < 8)) &&
            ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0' &&
             ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0' &&
              (uVar7 = FUN_02582d8c(pbVar1,1), uVar7 < 8)))))) &&
           (*(char *)(*(long *)puVar6 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) {
          *(undefined4 *)(*(long *)puVar6 + (ulong)uVar7 * 0x13f0 + 0x4e4) = 8;
        }
        FUN_0251a33c(pbVar1,0);
        FUN_02471f38(pbVar1,PTR_DAT_04bb37e0,0,0xffffffff);
        return;
      }
    }
    uVar11 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
    if ((uVar11 & 1) == 0) {
      local_44 = 0;
      local_4c = 6;
      local_48 = 1;
      FUN_02374e74(param_1,&local_4c);
    }
  }
  return;
}

