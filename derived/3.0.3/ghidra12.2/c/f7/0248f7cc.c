
void FUN_0248f7cc(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined1 *)(param_1 + 0x1908) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0xb34);
    *(undefined4 *)(param_1 + 0x190c) = uVar6;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x190c);
  }
  *(undefined4 *)(param_1 + 0xb34) = uVar6;
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  puVar5 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "StartFrame";
  if (((puVar3[0x227] != 0) && (lVar4 = *(long *)(puVar3[0x227] + 0x78), lVar4 != 0)) &&
     (plVar2 = *(long **)(lVar4 + 0x48), plVar2 != (long *)0x0)) {
    uVar6 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x190c));
    (**(code **)(*plVar2 + 0x30))(uVar6,plVar2,&local_40);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      puVar5 = PTR_DAT_04bb2020;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_40 = puVar5 + 0x10;
  pcStack_38 = "CommonFireworkSetOff";
  FUN_017081d0(puVar3,&local_40,6,0,0);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  *(undefined1 *)((long)puVar3 + 0x5f04) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x230);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  lVar4 = FUN_017067d4(puVar3,uVar6,0);
  if (lVar4 != 0) {
    local_40 = puVar5 + 0x10;
    pcStack_38 = "ToolFireworks_Play";
    FUN_01751d60(lVar4,&local_40,6,0,0);
  }
  return;
}

