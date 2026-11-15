
void FUN_02446e78(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  char local_58;
  char local_56;
  long *local_50;
  char local_48;
  char local_46;
  undefined4 local_38;
  undefined4 local_34;
  
  local_60 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_50,PTR_DAT_04bb32f8,&local_60,0);
  plVar2 = local_50;
  if (local_50 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3278);
    if ((uVar6 & 1) == 0) {
      local_46 = '\0';
    }
  }
  if (local_50 == (long *)0x0) {
    return;
  }
  if (local_48 == '\0') {
    return;
  }
  if (local_46 == '\0') {
    return;
  }
  local_38 = *(undefined4 *)((long)local_50 + 0x274);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071cb58(&local_60,&local_38,&local_70,0);
  plVar2 = (long *)CONCAT44(uStack_5c,local_60);
  if (plVar2 != (long *)0x0) {
    if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32d8);
    }
    uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb32d0);
    if ((uVar6 & 1) == 0) {
      local_56 = '\0';
    }
  }
  lVar4 = CONCAT44(uStack_5c,local_60);
  if (lVar4 == 0) {
    return;
  }
  if (local_58 == '\0') {
    return;
  }
  if (local_56 == '\0') {
    return;
  }
  fVar10 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar12 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  fVar11 = fVar10 - *(float *)(lVar4 + 0x290);
  fVar13 = fVar12 - *(float *)(lVar4 + 0x298);
  iVar5 = FUN_006f0400(*(float *)(lVar4 + 0x290) - fVar10,*(float *)(lVar4 + 0x298) - fVar12);
  if (*(int *)(param_1 + 0x178) == 0) {
    local_34 = 10;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024470a0;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar2 + 0x148))();
  iVar8 = iVar5 - *(int *)(lVar7 + 4);
  if (0xb60b5e < iVar8 + 0x5b05afU) {
    iVar3 = 0x15555560;
    iVar5 = -0x15555560;
    iVar8 = (int)((float)iVar8 * 0.2);
    if (iVar8 < 1) {
      iVar3 = -0x5b05b0;
    }
    else {
      iVar5 = 0x5b05b0;
    }
    iVar1 = iVar8;
    if (iVar3 <= iVar8) {
      iVar1 = iVar3;
    }
    if (iVar5 <= iVar8) {
      iVar5 = iVar1;
    }
    iVar5 = iVar5 + *(int *)(lVar7 + 4);
  }
  *(int *)(lVar7 + 4) = iVar5;
LAB_024470a0:
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_01730cb4(*(long *)(param_1 + 0x60) + 0x12c0,lVar4 + 0x290);
  }
  if (240.0 <= SQRT(fVar13 * fVar13 + fVar11 * fVar11)) {
    FUN_023164ec(param_1,6);
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "PlayerGoToMeet";
    FUN_01707d90(puVar9,&local_70,6,0,0);
  }
  return;
}

