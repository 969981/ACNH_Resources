
/* WARNING: Removing unreachable block (ram,0x02489c64) */

void FUN_024899fc(long param_1)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  byte bVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  undefined1 local_28 [4];
  uint local_24;
  
  local_58 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_5c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_54 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  lVar10 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
  puVar16 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,puVar16 + 0x4f,&local_5c);
  fStack_64 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_68 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_60 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  iVar8 = FUN_006f0400(local_68 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       local_60 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar10 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar17 = *pfVar12;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_24 = 10;
    local_5c = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02489c00;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar10 = (**(code **)(*plVar2 + 0x148))();
  iVar15 = iVar8 - *(int *)(lVar10 + 4);
  if (0xb60b5e < iVar15 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar8 = -0x15555560;
    iVar15 = (int)(fVar17 * (float)iVar15);
    if (iVar15 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar8 = 0x5b05b0;
    }
    iVar1 = iVar15;
    if (iVar4 <= iVar15) {
      iVar1 = iVar4;
    }
    if (iVar8 <= iVar15) {
      iVar8 = iVar1;
    }
    iVar8 = iVar8 + *(int *)(lVar10 + 4);
  }
  *(int *)(lVar10 + 4) = iVar8;
LAB_02489c00:
  FUN_024bc9f0(param_1,&local_68);
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (puVar16[0x227] == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(uint *)(puVar16 + 0x2d3) >> 1 & 1;
    local_5c = 6.30584e-44;
    uVar13 = FUN_03850890(puVar16[0x227],0x2d,0,local_24);
    if ((uVar13 & 1) != 0) {
      FUN_01261e40(0x40980000,PTR_DAT_04bb5dc0,&local_68,0,0);
      FUN_01261e40(0x40980000,PTR_DAT_04bbcd38,&local_68,0,1);
      bVar3 = *(byte *)(param_1 + 0x1ee8);
      uVar9 = (uint)bVar3;
      bVar7 = 7 < uVar9;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      if (bVar7) {
        uVar9 = 0xff;
      }
      local_28[0] = (undefined1)uVar9;
      lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar9 * 0x740;
      if (bVar7) {
        lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar10 + 0x11c) = 3;
        FUN_01393458(lVar10 + 0x1c0);
      }
      else {
        *(undefined4 *)(lVar10 + 0x11c) = 4;
      }
      bVar14 = bVar3;
      if (7 < bVar3) {
        bVar14 = 0xff;
      }
      local_5c._0_2_ = CONCAT11(bVar14,(undefined1)local_5c);
      if (((bVar3 < 8) && (uVar9 = FUN_02582d8c(local_28,1), uVar9 < 8)) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) {
        bVar7 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) != '\0';
      }
      else {
        bVar7 = false;
      }
      uVar5 = local_5c;
      local_5c = (float)CONCAT31(local_5c._1_3_,bVar7);
      uVar6 = local_5c;
      local_5c._3_1_ = SUB41(uVar5,3);
      local_5c._0_2_ = (ushort)uVar6;
      local_5c._0_3_ = (uint3)(ushort)local_5c;
      FUN_02308be0(&local_5c);
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (puVar16[0x227] == 0) {
    uVar9 = 0;
  }
  else {
    local_5c = 1.4013e-45;
    uVar9 = *(uint *)(puVar16 + 0x2d3) >> 1 & 1;
  }
  uVar13 = FUN_0170a6d0(puVar16,uVar9);
  if ((uVar13 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar13 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar13 & 1) == 0) {
        local_54 = 0.0;
        local_5c = 8.40779e-45;
        local_58 = (float)CONCAT31(local_58._1_3_,1);
        FUN_02374e74(param_1,&local_5c);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

