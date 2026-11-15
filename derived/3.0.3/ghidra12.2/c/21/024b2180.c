
void FUN_024b2180(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "CommonRodCastingFail";
  FUN_017081d0(puVar4,&local_30,6,1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  lVar5 = FUN_017067d4(puVar4,uVar1,0);
  if (lVar5 != 0) {
    local_30 = puVar2 + 0x10;
    pcStack_28 = "ToolRodCastingFail";
    FUN_01751d60(lVar5,&local_30,6,0,0);
  }
  return;
}

