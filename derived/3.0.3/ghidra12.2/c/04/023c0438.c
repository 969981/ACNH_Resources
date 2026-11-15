
void FUN_023c0438(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "CommonDoorOutWait";
  FUN_01707d90(puVar5,&local_60,6,0,0);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  FUN_039a9c80(puVar5[0x22a],7);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar5 + 0x5e84) = 1;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  local_60 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x190e) * 0.25,
                      (float)*(int *)(param_1 + 0x190a) * 0.001);
  local_58 = (char *)CONCAT44((uint)*(ushort *)(param_1 + 0x1914) << 0x10,
                              (float)*(int *)(param_1 + 0x1910) * 0.001);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  FUN_01713f58(puVar5,&local_60);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      plVar6 = &DAT_05240280;
      if (iVar1 != 0) {
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
  if (*(char *)(param_1 + 0x1909) == '\0') {
    FUN_02b64180(*(undefined2 *)(param_1 + 0x1901),*(undefined4 *)(param_1 + 0x230));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffeff;
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  plVar6 = (long *)puVar5[9];
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  fVar8 = 0.0;
  if (((plVar6 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3758), (uVar2 & 1) != 0)) &&
     (plVar6[0x5b] != 0)) {
    fVar7 = *(float *)(plVar6[0x5b] + 0x54);
    fVar9 = 1.0;
    if (fVar7 <= 1.0) {
      fVar9 = fVar7;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar7) {
      fVar8 = fVar9;
    }
  }
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      plVar6 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x27d0) + 0xf0))(lVar3 + 0x27d0);
  fVar9 = *pfVar4;
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x27d0) + 0xf0))(lVar3 + 0x27d0);
  (**(code **)(*plVar6 + 0x4e0))(fVar9 + (1.0 - fVar8) * (1.0 - *pfVar4),plVar6);
  if (((*(int *)(param_1 + 0x178) == 0) && (*(long *)PTR_DAT_04bb27f8 != 0)) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1) != 0)) {
    *(byte *)(param_1 + 0x18fa) = *(byte *)(param_1 + 0x18fa) & 0xfe;
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    FUN_02472404(0x3f800000,param_1);
  }
  return;
}

