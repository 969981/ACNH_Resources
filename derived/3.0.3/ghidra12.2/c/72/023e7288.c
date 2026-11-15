
void FUN_023e7288(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  uint local_6c;
  float fStack_68;
  undefined4 local_64;
  ulong local_60;
  undefined4 uStack_58;
  ulong local_50;
  undefined4 local_48;
  int local_34;
  
  local_6c = *(uint *)(param_1 + 0x1900);
  local_64 = *(undefined4 *)(param_1 + 0x1906);
  iVar4 = (uint)*(ushort *)(param_1 + 0x190a) * 0x10000;
  fStack_68 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_34 = iVar4;
  lVar5 = FUN_0251e98c(1);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
  puVar8 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_60 = (ulong)local_6c;
  uStack_58 = local_64;
  local_48 = *(undefined4 *)(puVar8 + 0x50);
  local_50 = puVar8[0x4f] & 0xffffffff;
  FUN_03eb4b60(*puVar6,0x41200000,0x3e4ccccc,&local_50,&local_60);
  *(undefined4 *)(puVar8 + 0x4f) = (undefined4)local_50;
  *(undefined4 *)(puVar8 + 0x50) = local_48;
  lVar5 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar11 = *pfVar7;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_60 = CONCAT44(local_60._4_4_,10);
    local_50 = CONCAT44(local_50._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023e745c;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar5 = (**(code **)(*plVar2 + 0x148))();
  iVar10 = iVar4 - *(int *)(lVar5 + 4);
  if (0xb60b5e < iVar10 + 0x5b05afU) {
    iVar3 = 0x15555560;
    iVar4 = -0x15555560;
    iVar10 = (int)(fVar11 * (float)iVar10);
    if (iVar10 < 1) {
      iVar3 = -0x5b05b0;
    }
    else {
      iVar4 = 0x5b05b0;
    }
    iVar1 = iVar10;
    if (iVar3 <= iVar10) {
      iVar1 = iVar3;
    }
    if (iVar4 <= iVar10) {
      iVar4 = iVar1;
    }
    iVar4 = iVar4 + *(int *)(lVar5 + 4);
  }
  *(int *)(lVar5 + 4) = iVar4;
LAB_023e745c:
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar8 = &DAT_05240280;
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  uVar9 = FUN_0170a6d0(puVar8,0);
  if (((uVar9 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_50 = local_50 & 0xffffffff00000000, (*(uint *)(param_1 + 0xec8) & 1) != 0)) {
      FUN_023e19a8(param_1,&local_6c,&local_34);
    }
    else {
      uVar9 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar9 & 1) == 0) {
        local_48 = 0;
        local_50 = CONCAT35(local_50._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_50);
      }
    }
  }
  return;
}

