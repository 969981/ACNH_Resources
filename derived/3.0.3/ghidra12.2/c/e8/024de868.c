
void FUN_024de868(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 local_34;
  undefined *local_30;
  char *pcStack_28;
  
  *(undefined1 *)(param_1 + 0x965) = 0;
  *(undefined1 *)(param_1 + 0x985) = 0;
  *(undefined2 *)(param_1 + 0x990) = 0;
  *(undefined4 *)(param_1 + 0x994) = 0;
  *(undefined1 *)(param_1 + 0x998) = 0;
  *(undefined1 *)(param_1 + 0x9b5) = 0;
  *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_1 + 0x95c);
  *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 0x97c);
  *(undefined4 *)(param_1 + 0x9a8) = *(undefined4 *)(param_1 + 0x9ac);
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
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "PlayerTransceiverUse";
  FUN_017029bc(puVar2,&local_30,6,0,0);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      plVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  local_30 = (undefined *)0x4d1;
  FUN_0277d4ac(&local_30);
  local_34 = 0;
  (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_30,&local_34);
  return;
}

