
/* WARNING: Removing unreachable block (ram,0x0243730c) */

void FUN_02436f1c(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float local_6c [3];
  undefined8 local_60;
  undefined4 local_58;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar14 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar14) {
      iVar14 = 0x7fff;
    }
    if (iVar14 < -0x7fff) {
      iVar14 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar14;
    fVar15 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar15 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar11 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar13 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar11 + 0x2ec) = uVar13;
    *(undefined1 *)((long)puVar11 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar3 = *(ushort *)(param_1 + 0x18ef);
    lVar5 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
    fVar15 = *pfVar6;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_6c[0] = 1.4013e-44;
      local_60 = CONCAT44(local_60._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02437124;
    }
    iVar14 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar2 + 0x148))();
    iVar10 = iVar14 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar14 = -0x15555560;
      iVar10 = (int)(fVar15 * (float)iVar10);
      if (iVar10 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar4 <= iVar10) {
        iVar1 = iVar4;
      }
      if (iVar14 <= iVar10) {
        iVar14 = iVar1;
      }
      iVar14 = iVar14 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar14;
LAB_02437124:
    iVar14 = *(int *)(param_1 + 0x18e5);
    iVar10 = *(int *)(param_1 + 0x18eb);
    lVar5 = FUN_0251e98c(1);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
    local_6c[1] = 0.0;
    puVar11 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_58 = *(undefined4 *)(puVar11 + 0x50);
    local_60 = puVar11[0x4f] & 0xffffffff;
    local_6c[0] = (float)iVar14 * 0.001;
    local_6c[2] = (float)iVar10 * 0.001;
    FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,&local_60,local_6c);
    *(undefined4 *)(puVar11 + 0x4f) = (undefined4)local_60;
    *(undefined4 *)(puVar11 + 0x50) = local_58;
    return;
  }
  if (7 < *(uint *)(param_1 + 0x1c04)) {
    uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar8 & 1) == 0) {
      local_58 = 0;
      local_60 = CONCAT35(local_60._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_60);
      return;
    }
    return;
  }
  if (*(uint *)(param_1 + 0x1c04) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x17ac) != '\0') {
    return;
  }
  if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
    return;
  }
  local_60._0_4_ = 0xfffe;
  local_60._4_4_ = 0;
  FUN_0277d4ac(&local_60);
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x60);
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
  *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
      lVar5 = DAT_052413b8;
      goto joined_r0x024372e4;
    }
    puVar11 = &DAT_05240280;
  }
  lVar5 = puVar11[0x227];
joined_r0x024372e4:
  if (lVar5 == 0) {
    puVar11 = &DAT_04c931a0;
  }
  else {
    uVar9 = *(uint *)(puVar11 + 0x2d3) >> 1 & 1;
    uVar12 = 0;
    if (*(long *)(lVar5 + 0x78) != 0) {
      uVar12 = *(uint *)(*(long *)(lVar5 + 0x78) + 0x18);
    }
    if (uVar12 <= uVar9) {
      uVar9 = 0;
    }
    if (*(uint *)(lVar5 + 0x80) <= uVar9) {
      uVar9 = 0;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar5 + 0x88) + (long)(int)uVar9 * 0xe8 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x1989) = *(undefined4 *)(puVar11 + 0xb);
  local_60 = CONCAT44(local_60._4_4_,0xaf);
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
  lVar5 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar5,0xaf);
  return;
}

