
/* WARNING: Type propagation algorithm not settling */

void FUN_0244272c(long param_1)

{
  int iVar1;
  uint *puVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  local_38 = *(undefined4 *)(param_1 + 0x230);
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_024427a8:
    FUN_016f742c(&local_34,&local_38,0);
    iVar6 = *(int *)(param_1 + 0x178);
  }
  else {
    local_2c = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) == 0) goto LAB_024427a8;
    local_34 = 0;
    iVar6 = *(int *)(param_1 + 0x178);
  }
  if (iVar6 == 0) {
    local_30 = 10;
    local_2c = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x02442818;
    }
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar8 = (**(code **)(*plVar3 + 0x148))();
  iVar10 = local_34 - *(int *)(lVar8 + 4);
  iVar6 = local_34;
  if (0xb60b5e < iVar10 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar6 = -0x15555560;
    iVar10 = (int)((float)iVar10 * 0.4);
    if (iVar10 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar6 = 0x5b05b0;
    }
    iVar1 = iVar10;
    if (iVar5 <= iVar10) {
      iVar1 = iVar5;
    }
    if (iVar6 <= iVar10) {
      iVar6 = iVar1;
    }
    iVar6 = iVar6 + *(int *)(lVar8 + 4);
  }
  *(int *)(lVar8 + 4) = iVar6;
  puVar7 = *(undefined8 **)(param_1 + 0x60);
joined_r0x02442818:
  if (puVar7 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      lVar8 = DAT_052413b8;
    }
    else {
      puVar7 = &DAT_05240280;
      lVar8 = DAT_052413b8;
    }
  }
  else {
    lVar8 = puVar7[0x227];
  }
  if (lVar8 == 0) {
    uVar9 = FUN_0170a6d0(puVar7,0);
  }
  else {
    local_2c = 1;
    uVar9 = FUN_0170a6d0(puVar7,*(uint *)(puVar7 + 0x2d3) >> 1 & 1);
  }
  if ((((uVar9 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) &&
     (uVar9 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar9 & 1) == 0)) {
    local_24 = 0;
    local_2c = 6;
    local_28 = 1;
    FUN_02374e74(param_1,&local_2c);
  }
  return;
}

