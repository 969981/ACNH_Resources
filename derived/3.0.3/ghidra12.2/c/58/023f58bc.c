
void FUN_023f58bc(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_30;
  char *pcStack_28;
  
  *(undefined4 *)(param_1 + 0x1bec) = 0x3f000000;
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
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "ChairMoveLocalDirection";
  if (((puVar3[0x227] != 0) && (lVar4 = *(long *)(puVar3[0x227] + 0x78), lVar4 != 0)) &&
     (plVar2 = *(long **)(lVar4 + 0x48), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_30,*(undefined1 *)(param_1 + 0x190c));
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
  local_30 = puVar5 + 0x10;
  pcStack_28 = "CommonChairSitdownTurn";
  FUN_017081d0(puVar3,&local_30,6,0,0);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 6;
  FUN_016f8230(param_1,1,0,0);
  return;
}

