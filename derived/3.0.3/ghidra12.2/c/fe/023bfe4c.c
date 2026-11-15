
void FUN_023bfe4c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      plVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar6 + 0x4e8))(plVar6,1);
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb3760;
  plVar6 = (long *)puVar7[9];
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar6 != (long *)0x0) &&
      (uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3758), (uVar3 & 1) != 0)) &&
     (plVar6[0x5b] != 0)) {
    *(undefined4 *)(plVar6[0x5b] + 0x54) = 0x3f800000;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  plVar6 = (long *)puVar7[9];
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  fVar10 = 0.0;
  if (((plVar6 != (long *)0x0) &&
      (uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3758), (uVar3 & 1) != 0)) &&
     (plVar6[0x5b] != 0)) {
    fVar8 = *(float *)(plVar6[0x5b] + 0x54);
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
  }
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x27d0) + 0xf0))(lVar4 + 0x27d0);
  fVar8 = *pfVar5;
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x27d0) + 0xf0))(lVar4 + 0x27d0);
  fVar9 = *pfVar5;
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      plVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x023c000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x4e0))(fVar8 + (1.0 - fVar10) * (1.0 - fVar9),plVar6);
  return;
}

