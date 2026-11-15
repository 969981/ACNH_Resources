
void FUN_0241a578(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x1c00) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x26;
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
  uVar3 = FUN_0073d6e0(puVar2,0);
  if ((uVar3 & 1) == 0) {
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
    pcStack_28 = "PlayerMoveTurn";
    FUN_017029bc(puVar2,&local_30,6,0,0);
  }
  plVar4 = *(long **)(param_1 + 0x68);
  FUN_0231eef4(param_1,plVar4 + 0x4f,0);
  (**(code **)(*plVar4 + 0x110))(plVar4);
  return;
}

