
void FUN_016d8b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 ulong param_5)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = FUN_016d8030(param_2);
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "ChairMoveLocalDirection";
  if (((puVar4[0x227] != 0) && (lVar5 = *(long *)(puVar4[0x227] + 0x78), lVar5 != 0)) &&
     (plVar3 = *(long **)(lVar5 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_50,param_4);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      puVar6 = PTR_DAT_04bb2020;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_50 = puVar6 + 0x10;
  pcStack_48 = "HasBackrestChair";
  if (((puVar4[0x227] != 0) && (lVar5 = *(long *)(puVar4[0x227] + 0x78), lVar5 != 0)) &&
     (plVar3 = *(long **)(lVar5 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_50,uVar1 & 1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  if ((param_5 & 1) == 0) {
    pcStack_48 = "CommonChairStandupAction";
  }
  else {
    pcStack_48 = "CommonStumpStandupAction";
  }
  local_50 = puVar6 + 0x10;
  FUN_017081d0(puVar4,&local_50,6,0,0);
  FUN_016f8230(param_1,1,uVar1 & 1,0);
  return;
}

