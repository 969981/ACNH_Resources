
/* WARNING: Removing unreachable block (ram,0x0237c54c) */

void FUN_0237c32c(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  byte local_60 [4];
  float local_5c;
  float fStack_58;
  float local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar3 = *(ushort *)(param_1 + 0x190c);
  fStack_58 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_54 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  local_5c = (float)*(int *)(param_1 + 0x1902) * 0.001;
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar14 = *pfVar8;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_50 = 0xa0000000a, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    iVar6 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar12 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar12 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar6 = -0x15555560;
      iVar12 = (int)(fVar14 * (float)iVar12);
      if (iVar12 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar12;
      if (iVar5 <= iVar12) {
        iVar1 = iVar5;
      }
      if (iVar6 <= iVar12) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
  lVar7 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar9,0x41200000,0x3e4ccccc,puVar13 + 0x4f,&local_5c);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar6 != 0) {
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
    local_50 = 0;
  }
  else {
    uVar4 = *(uint *)(puVar13 + 0x2d3) >> 1;
    local_50 = CONCAT44(uVar4,uVar4) & 0x100000001;
    uVar10 = FUN_03850368(puVar13[0x227],uVar4 & 1);
    uVar11 = local_50;
    if (((((uVar10 & 1) == 0) && (puVar13[0x227] != 0)) &&
        (uVar10 = FUN_03850368(puVar13[0x227],local_50 & 0xffffffff), (uVar10 & 1) == 0)) &&
       (uVar11 = FUN_0384fca4(puVar13[0x227],uVar11 & 0xffffffff), (uVar11 & 1) == 0)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_60[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_60[0]) {
      local_60[0] = 0xff;
    }
    iVar6 = FUN_00a74b78(local_60);
    local_50 = CONCAT44(local_50._4_4_,iVar6);
    if (iVar6 == 0x13) {
      uVar11 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar11 & 1) == 0) {
        local_44 = 0;
        local_50 = CONCAT44(6,(undefined4)local_50);
        local_48 = 1;
        FUN_02374e74(param_1,(long)&local_50 + 4);
      }
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
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined2 *)(param_1 + 0x198c) = 0x101;
      *(undefined1 *)(param_1 + 0x198e) = 6;
      local_50 = CONCAT44(0xf,iVar6);
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
      FUN_03ebb160(lVar7,0xf);
    }
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,6);
  }
  return;
}

