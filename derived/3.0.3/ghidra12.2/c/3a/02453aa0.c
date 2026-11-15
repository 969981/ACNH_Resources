
void FUN_02453aa0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_38;
  undefined8 local_30;
  uint local_24;
  
  local_38 = (undefined *)CONCAT44(local_38._4_4_,0x3e);
  local_24 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    local_24 = 0;
    if (uVar1 < 0x149) {
      local_24 = uVar1;
    }
  }
  if (((local_24 == 0x3e) || (uVar3 = FUN_02453e40(), (uVar3 & 1) != 0)) &&
     (*(long *)(param_1 + 0x298) != 0)) {
    FUN_0234c5b0();
  }
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar4 = &DAT_05240280;
    }
    else {
      plVar4 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar4 + 0x4e8))(plVar4,0);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (((puVar6[0x227] != 0) && (lVar5 = *(long *)(puVar6[0x227] + 0x78), lVar5 != 0)) &&
     (plVar4 = *(long **)(lVar5 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_054cce98,0);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_38 = PTR_DAT_04bb2020 + 0x10;
  local_30 = "CommonStairsIn";
  FUN_017081d0(puVar6,&local_38,0,0,0);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  FUN_039a9c80(puVar6[0x22a],7);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar6 + 0x5e84) = 1;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  lVar5 = *(long *)(param_1 + 0x68);
  local_38 = *(undefined **)(lVar5 + 0x278);
  local_30 = (char *)CONCAT44(*(undefined4 *)(lVar5 + 0x2b4),*(undefined4 *)(lVar5 + 0x280));
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  FUN_017143bc(puVar6,&local_38);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffd;
  return;
}

