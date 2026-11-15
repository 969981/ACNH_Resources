
void FUN_0249d9e8(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float local_6c;
  undefined4 local_68;
  float local_64;
  ulong local_60;
  undefined4 local_58;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    goto joined_r0x0249dbd8;
  }
  iVar5 = *(int *)(param_1 + 0x18e5);
  uVar3 = *(ushort *)(param_1 + 0x18ef);
  iVar13 = *(int *)(param_1 + 0x18eb);
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar14 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c = 1.4013e-44;
    local_60 = CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0249dad4;
  }
  else {
LAB_0249dad4:
    iVar12 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar11 = iVar12 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar11 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar12 = -0x15555560;
      iVar11 = (int)(fVar14 * (float)iVar11);
      if (iVar11 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar12 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar4 <= iVar11) {
        iVar1 = iVar4;
      }
      if (iVar12 <= iVar11) {
        iVar12 = iVar1;
      }
      iVar12 = iVar12 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar12;
  }
  lVar7 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  local_68 = 0;
  puVar6 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_58 = *(undefined4 *)(puVar6 + 0x50);
  local_60 = puVar6[0x4f] & 0xffffffff;
  local_6c = (float)iVar5 * 0.001;
  local_64 = (float)iVar13 * 0.001;
  FUN_03eb4b60(*puVar9,0x41200000,0x3e4ccccc,&local_60,&local_6c);
  *(undefined4 *)(puVar6 + 0x4f) = (undefined4)local_60;
  *(undefined4 *)(puVar6 + 0x50) = local_58;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0249dbd8:
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  uVar10 = FUN_0170a6d0(puVar6,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar10 & 1) == 0) {
        local_58 = 0;
        local_60 = CONCAT35(local_60._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_60);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

