
void FUN_023d4104(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  local_30 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_28 = "PlayerInFittingRoom";
  FUN_017081d0(puVar2,&local_30,6,0,0);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar3 + 0x4e8))(plVar3,0);
  local_38 = *(undefined4 *)(param_1 + 0x230);
  local_34 = DAT_05464e88;
  FUN_0071c8d0(&local_30,&local_34,&local_38,0);
  plVar3 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bc2d80 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2d80), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc2d78 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2d80);
    }
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bc2d78);
    if ((uVar4 & 1) == 0) {
      local_28._0_2_ = (ushort)(byte)local_28;
    }
  }
  if (((local_30 != (long *)0x0) && ((byte)local_28 != '\0')) && (local_28._1_1_ != '\0')) {
    *(undefined4 *)((long)local_30 + 0x274) = 2;
  }
  local_34 = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
  local_30 = (long *)CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                              (float)*(int *)(param_1 + 0x1902) * 0.001);
  local_28 = (char *)CONCAT44(local_28._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_30);
  plVar3 = *(long **)(param_1 + 0x68);
  FUN_016e026c(0,&local_30,0,0);
  (**(code **)(*plVar3 + 0x110))(plVar3);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_34);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_039a9c80(puVar2[0x22a],7);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar2 + 0x5e84) = 1;
  return;
}

