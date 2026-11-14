
void FUN_016f63b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *local_40;
  undefined8 local_38;
  undefined4 local_28;
  int local_24;
  
  fVar6 = -0.02;
  if (*(char *)(param_1 + 0x2e1) != '\0') {
    fVar6 = 0.02;
  }
  fVar6 = *(float *)(param_1 + 0x2e4) + fVar6;
  fVar8 = 1.0;
  if (fVar6 <= 1.0) {
    fVar8 = fVar6;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar6) {
    fVar10 = fVar8;
  }
  *(float *)(param_1 + 0x2e4) = fVar10;
  if (*(char *)(param_1 + 0x2fa) == '\0') {
    if (*(char *)(param_1 + 0x31d) == '\0') {
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined2 *)(param_1 + 0x31c) = 0x100;
      *(undefined4 *)(param_1 + 0x318) = 0x3c;
    }
    uVar1 = (**(code **)(*(long *)(param_1 + 0x308) + (ulong)*(byte *)(param_1 + 0x31c) * 8))
                      (param_1 + 0x308);
    *(undefined4 *)(param_1 + 0x310) = uVar1;
    if (*(char *)(param_1 + 0x2fa) == '\0') {
      fVar6 = *(float *)(param_1 + 0x2fc) + 0.011111111;
      if (*(int *)(param_1 + 0x310) < *(int *)(param_1 + 0x318) ||
          *(char *)(param_1 + 0x31d) == '\0') {
        fVar6 = *(float *)(param_1 + 0x2fc);
      }
      goto LAB_016f6470;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x31d) = 0;
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x314);
  }
  fVar6 = *(float *)(param_1 + 0x2fc) + -0.125;
LAB_016f6470:
  fVar8 = 0.0;
  if (fVar6 <= 0.0) {
    fVar8 = fVar6;
  }
  fVar7 = -1.0;
  if (-1.0 <= fVar6) {
    fVar7 = fVar8;
  }
  *(float *)(param_1 + 0x2fc) = fVar7;
  fVar9 = *(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0xe0) + 0x38);
  fVar8 = fVar9 * *(float *)(param_1 + 0x2e4);
  fVar6 = -fVar7;
  if (0.0 <= fVar7) {
    fVar6 = fVar7;
  }
  if (fVar9 <= 0.0) {
    if (fVar8 < fVar6) {
      fVar10 = fVar7;
    }
  }
  else if (fVar8 < fVar6) {
    fVar10 = fVar6;
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x388))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x390))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x398))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x3a0))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x3a8))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x3b0))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x3b8))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x3c0))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x238))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x240))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38._0_2_ = (ushort)(byte)local_38;
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 0x248))();
  local_28 = *(undefined4 *)(param_1 + 0x230);
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    FUN_0071c8d0(&local_40,&local_24,&local_28,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdea0);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbde98);
      if ((uVar5 & 1) == 0) {
        local_38 = (char *)((ulong)local_38 & 0xff);
      }
    }
    if (((local_40 != (long *)0x0) && ((byte)local_38 != '\0')) && (local_38._1_1_ != '\0')) {
      *(float *)((long)local_40 + 0x284) = fVar10;
    }
  }
  *(float *)(param_1 + 0x300) = fVar10;
  if (*(long *)(param_1 + 0x60) != 0) {
    local_40 = (long *)(PTR_DAT_04bb2020 + 0x10);
    local_38 = "model_env_instance_intensity";
    FUN_0073d560(fVar10,*(long *)(param_1 + 0x60),&local_40);
  }
  return;
}

