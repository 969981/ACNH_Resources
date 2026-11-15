
/* WARNING: Type propagation algorithm not settling */

void FUN_0248b6ac(long param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  float fStack_94;
  float local_90;
  undefined4 uStack_8c;
  float local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 local_68;
  
  piVar1 = (int *)(param_1 + 0x1902);
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  local_b0 = 0;
  puVar9 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_ac = (float)*(int *)(param_1 + 0x1908) * 0.001;
  local_a0 = *(float *)(puVar9 + 0x50);
  local_a8 = puVar9[0x4f] & 0xffffffff;
  local_b4 = (float)*piVar1 * 0.001;
  FUN_03eb4b60(*pfVar8 * 1.5,0x41200000,0x3e4ccccc,&local_a8,&local_b4);
  *(float *)(puVar9 + 0x4f) = (float)local_a8;
  *(float *)(puVar9 + 0x50) = local_a0;
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar15 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_b4 = 1.4013e-44;
    local_a8 = CONCAT44(local_a8._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x0248b8b0;
    }
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0x1900) * 0x10000;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar3 + 0x148))();
  iVar14 = iVar5 - *(int *)(lVar7 + 4);
  if (0xb60b5e < iVar14 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar5 = -0x15555560;
    iVar14 = (int)(fVar15 * 1.5 * (float)iVar14);
    if (iVar14 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar5 = 0x5b05b0;
    }
    iVar2 = iVar14;
    if (iVar4 <= iVar14) {
      iVar2 = iVar4;
    }
    if (iVar5 <= iVar14) {
      iVar5 = iVar2;
    }
    iVar5 = iVar5 + *(int *)(lVar7 + 4);
  }
  *(int *)(lVar7 + 4) = iVar5;
  puVar9 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0248b8b0:
  if (puVar9 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
    else {
      puVar9 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
  }
  else {
    lVar7 = *(long *)((long)puVar9 + 0x1138);
  }
  if (lVar7 == 0) {
    uVar10 = FUN_0170a6d0(puVar9,0);
  }
  else {
    local_a8._4_4_ = (float)(local_a8 >> 0x20);
    local_a8 = CONCAT44(local_a8._4_4_,1);
    uVar10 = FUN_0170a6d0(puVar9,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
  }
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  fVar15 = (float)*piVar1 * 0.001;
  local_a0 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  uVar6 = (uint)*(ushort *)(param_1 + 0x1900) * 0x10000 + 0x20000000 >> 0x1e;
  local_a8 = CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,fVar15);
  if (uVar6 < 4) {
                    /* WARNING: Jumptable with 0 entries at 0x0248b9d4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0248b9d8 + (ulong)(byte)(&DAT_0417aa0b)[uVar6] * 4))();
    return;
  }
  fVar15 = (float)(int)((int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0) & 0xfffffffe) * 5.0 +
           5.0;
  fVar16 = (float)(int)((int)((float)(int)local_a0 / 5.0) - (uint)(local_a0 < 0.0) & 0xfffffffe) *
           5.0 + 5.0;
  local_b0 = FUN_016e026c(0,&local_a8,0,0);
  local_80 = 0;
  local_a0 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  local_a8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_84 = 0x40000000;
  local_68 = 0;
  local_b4 = fVar15;
  local_ac = fVar16;
  fStack_9c = fVar15;
  local_98 = local_b0;
  fStack_94 = fVar16;
  local_90 = fVar15;
  uStack_8c = local_b0;
  local_88 = fVar16;
  iVar5 = FUN_016f36e0(&local_a8);
  local_a8._4_4_ = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_a8._0_4_ = (float)*piVar1 * 0.001;
  local_a0 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  uVar6 = FUN_016eafec(0x40a00000,&local_a8,0,0,0);
  uVar10 = FUN_016eaebc(0x40a00000,&local_b4,0);
  if (((uVar10 & 1) == 0) || ((uVar6 & 1) != 0 || iVar5 != 0)) {
    local_b4 = 2.34017e-43;
    lVar11 = *(long *)(param_1 + 0x70);
    uVar6 = 0;
    lVar7 = 0;
    if (lVar11 != 0) {
      uVar6 = 0;
      if (*(uint *)(lVar11 + 0x280) < 0x149) {
        uVar6 = *(uint *)(lVar11 + 0x280);
      }
      lVar7 = lVar11 + 0x278;
    }
    if (uVar6 == 0xa7) {
      return;
    }
    local_a8 = CONCAT44(local_a8._4_4_,0xa7);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    uVar12 = *(undefined8 *)(param_1 + 0x18f8);
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined8 *)(lVar7 + 8) = 0x100000000;
    *(undefined4 *)(lVar7 + 0xa8) = 0;
    if (*(long *)(param_1 + 0x298) == 0) {
      puVar13 = (undefined2 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar11 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
      puVar13 = (undefined2 *)(lVar11 + ((ulong)*(uint *)(lVar11 + 0x10) & 1) * 0x20 + 0x14);
    }
    local_b8 = *(undefined4 *)(puVar13 + 2);
    local_a8._4_4_ = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_bc = *puVar13;
    local_ba = *(undefined1 *)(puVar13 + 1);
    local_b9 = *(undefined1 *)((long)puVar13 + 3);
    local_b4 = (float)((uint)*(ushort *)(param_1 + 0x1900) << 0x10);
    local_a8._0_4_ = (float)*piVar1 * 0.001;
    local_a0 = (float)*(int *)(param_1 + 0x1908) * 0.001;
    uVar10 = FUN_022be0ec(lVar7 + 0xb0,&local_bc,&local_a8,&local_b4);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar10 & 1) == 0) {
        local_a0 = 0.0;
        local_a8 = CONCAT35(local_a8._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_a8);
        return;
      }
      return;
    }
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    local_b4 = 2.31214e-43;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(int *)(param_1 + 0x1982) = (int)((float)*piVar1 * 0.001 * 999.99994);
    iVar5 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x1986) = (short)iVar5;
    lVar11 = *(long *)(param_1 + 0x70);
    *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
    uVar6 = 0;
    lVar7 = 0;
    if (lVar11 != 0) {
      uVar6 = 0;
      if (*(uint *)(lVar11 + 0x280) < 0x149) {
        uVar6 = *(uint *)(lVar11 + 0x280);
      }
      lVar7 = lVar11 + 0x278;
    }
    if (uVar6 == 0xa5) {
      return;
    }
    local_a8 = CONCAT44(local_a8._4_4_,0xa5);
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
    uVar12 = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  }
  *(undefined8 *)(param_1 + 0x1878) = uVar12;
  FUN_03ebb160(lVar7,local_a8 & 0xffffffff);
  return;
}

